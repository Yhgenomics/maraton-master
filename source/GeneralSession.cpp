/***********************************************************************************
This file is part of Project for MaratonMaster
For the latest info, see  https://github.com/Yhgenomics/MaratonMaster.git

Copyright 2016 Yhgenomics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
***********************************************************************************/

/***********************************************************************************
* Description   : Basic events.
* Creator       : Ke Yang(keyang@yhgenomics.com)
* Date          : 2016/2/27
* Modifed       : When      | Who       | What
***********************************************************************************/

#include <GeneralSession.h>
#include <MessageHub.h>
#include "MasterGloable.h"
#include <memory>

// Contructor
// @note    : session id should be unique
GeneralSession::GeneralSession()
{
    static size_t general_session_id = 10000;
    this->id_          = general_session_id;
    general_session_id = ( general_session_id + 1 ) % MAX_GENERAL_SESSION;
}

// Callback when session connecting
void GeneralSession::OnConnect()
{
}

// Package an porotobuf message and send out
// @message : protobuf message in unqiue pointer.
// @note    : The Message should be send 3 parts
//            1.the head
//            2.the length
//            3.the protobuff message buffer
void GeneralSession::SendOut( uptr<::google::protobuf::Message> message )
{
    uptr<MRT::Buffer> head      = make_uptr( MRT::Buffer , "YH" );
    uptr<MRT::Buffer> length    = make_uptr( MRT::Buffer , 4    );
    uptr<MRT::Buffer> body      = Protocal::MessageHub::Instance()->Build( move_ptr( message ) );

    *( ( int* )length->Data() ) = ( int )body->Size();

    this->Send( move_ptr( head   ) );
    this->Send( move_ptr( length ) );
    this->Send( move_ptr( body   ) );
}

// Send back REST response
// @response : REST response.
void GeneralSession::SendRESTResponse( uptr<MRT::HTTPResponse> response )
{
    auto head = response->BuildHeader( );
    auto body = response->BuildBody( );

    this->Send( move_ptr( head ) );
    this->Send( move_ptr( body ) );
}

// Send back REST response and close session
// @content : the json body for response
void GeneralSession::SendRESTCloseSession( const string & content )
{
    auto response = make_uptr( MRT::HTTPResponse );

    response->Status( 200 );
    response->Header( "Server" , WEB_SERVER_NAME );
    response->Header( "Connection" , "Close" );

    auto body = make_uptr( MRT::Buffer , content );

    response->Content( move_ptr( body ) );
    SendRESTResponse( move_ptr( response ) );
    Close();
}


// Callback when receiving data from net
// @data    : Buffer in unique pointer
// @note    : header, length and body is delivered separately
void GeneralSession::OnRead( uptr<MRT::Buffer> data )
{
    this->circle_buffer_.Push( move_ptr( data ) );

    while ( true )
    {
        switch ( this->parse_state_ )
        {
            case MessageParseState::kHeader:
            {
                /*auto buf = circle_buffer_.Pop( 2 );

                if ( buf == nullptr )return;

                if ( buf->Data()[ 0 ] == 'Y' &&
                     buf->Data()[ 1 ] == 'H' )
                {
                    this->parse_state_ = MessageParseState::kLength;
                }*/

                auto buf = circle_buffer_.Pop( 1 );

                if ( buf == nullptr ) return;

                if ( buf->Data()[ 0 ] != 'Y' ) break;

                buf = circle_buffer_.Pop( 1 );

                if ( buf == nullptr ) return;

                if ( buf->Data()[ 0 ] != 'H' ) break;

                this->parse_state_ = MessageParseState::kLength;

            } //end of case MessageParseState::kHeader
            break;

            case MessageParseState::kLength:
            {
                auto buf = circle_buffer_.Pop( 4 );

                if ( buf == nullptr )return;

                int len = *( ( int * )buf->Data() );

                if ( len > MAX_CIRCLE_BUFFER_SIZE )
                {
                    this->parse_state_ = MessageParseState::kHeader;
                    break;
                }

                body_length_        = len;
                this->parse_state_  = MessageParseState::kBody;

            } // end of case MessageParseState::kLength
            break;

            case MessageParseState::kBody:
            {
                auto buf = circle_buffer_.Pop( body_length_ );

                if ( buf == nullptr )return;

                auto result = Protocal::MessageHub::Instance()->Handle( this ,
                                                                        buf->Data() ,
                                                                        buf->Size() );

                if ( result < 0 )
                {
                    this->Close();
                    return;
                }

                body_length_        = 0;
                this->parse_state_  = MessageParseState::kHeader;

            } // end of case MessageParseState::kBody
            break;

            default:
                break;

        } // end of switch ( this->parse_state_ )
    } // end of while ( true )
}

// Callback when write adata to net
// @data    : Buffer in unique pointer
void GeneralSession::OnWrite( uptr<MRT::Buffer> data )
{
}

// Callback when session closing
void GeneralSession::OnClose()
{
}