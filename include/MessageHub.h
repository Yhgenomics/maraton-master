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
* Description   : Message hub for all message session receive.
* Creator       : Ke Yang(keyang@yhgenomics.com)
* Date          : 2016/3/2
* Modifed       : When      | Who       | What
***********************************************************************************/

#ifndef MESSAGE_HUB_H_
#define MESSAGE_HUB_H_

#include "MessageHandler.h"
#include "RESTHandler.h"
#include "GeneralSession.h"
#include "MRT.h"
#include <string>
#include <map>
#include <iostream>
#include <functional>
#include <google/protobuf/message.h>

namespace Protocal
{
    // @Description : Basic Class for kinds of message handler used by MessageHub 
    //                automaticly after be add to the MessageHub.Check MessageHub
    //                for more details.
    // @Example     : namespace Protocal
    //                {
    //                    class SomeMessageHandler : public MessageHandler
    //                    {
    //                    public:
    //                        MessageGreetingHandler()
    //                        {
    //                            MessageType("SomeMessage");
    //                            Method = []( GeneralSession* session , 
    //                                         const void* pData , 
    //                                         size_t length )     
    //                            {
    //                                //TODO add your codes here
    //                                return true;
    //                            };
    //                        }
    //                    };
    //                }              
    // @Note        : Add the derived class to MessageHub to handle message automaticly.
    //                the message is in pData,it can be a protobuf message, or any
    //                other type determined by the original sender.
    class MessageHub : public MRT::Singleton<MessageHub>
    {
    public:

        // Add one handler to the Hub
        // @oneHandler : one message handler in unique pointer.
        bool AddHandler( uptr<MessageHandler> oneHandler );

        // Add one REST handler to the Hub
        // @oneHandler : one REST handler in unique pointer.
        bool AddRESTHandler( uptr<RESTHandler> oneHandler );

        // Gloable Message handlers management
        // @note    : Implement in AddAllHandler.cpp seprately.
        bool AddAllHandlers();

        // Handle one message arcoding to the handler map
        // @session : The source of the message.
        // @pData   : The content of the message.
        // @length  : The size of message.
        // @note    : Just get the messageID in this function, the translation from the pData
        //            to message should be done at certain MessageHandler.
        int Handle( GeneralSession* session , const void* pData , size_t length );

        // Handler one REST Message arcoding to the REST Handler map
        // @session : The source of the message.
        // @url     : The url of the request.
        // @content : The contentn in the request.
        int HandleREST( GeneralSession* session , const string& url , const string& content );
        
        // Build the protobuf message to buffer
        // @message : protobuf message in unique pointer
        uptr<MRT::Buffer> Build( uptr<::google::protobuf::Message> message );

        // Set the REST IP and Port
        int SetRESTReportAddress( const string& ip , const string& port );

        // Send the rest report to remote ip and port
        // @report : in json format
        // @logInfo: log to be printed after message delivered.
        //int SendRESTReport( const string& report , const string& logInfo );

        // Send the rest log to remote ip and port
        // @log    : task's log in json format 
        // @logInfo: log to be printed after message delivered.
        //int SendRESTLog(const string& log, const string&logInfo);

        // Send any content to remote dest
        // @destFullPath: should contains the protocal ,ip address, port and path
        //                such as http://123.123.123.123:80/path/path2/path3
        // @content     : any content in JSON
        // @logInfo     : log to be printed after message delivered.
        int SendRESTInfo(const string& destFullPath, const string& content);

        // Get the REST log full path
        string GetRESTLogFulPath()
        {
            return rest_report_protocal_
                + rest_report_ip_ + ":"
                + rest_report_port_
                + rest_log_path_;
        }

        // Get the REST report full path
        string GetRESTReportFullPath()
        {
            return rest_report_protocal_
                 + rest_report_ip_ + ":"
                 + rest_report_port_
                 + rest_report_path_;
        }

    protected:
        // Constructor
        MessageHub();

        // Destructor
        ~MessageHub();

        // Initialization
        void Init();

    private:

        // Handler map keep the messageID and Handler in a 1:1 relationship
        std::map<size_t , uptr<MessageHandler>> handler_map_;

        std::map<string , uptr<RESTHandler>>    rest_handler_map_;

        // Hash the name of a message
        // @messageType : message name's string
        // @note        : When sending this hash code will be packaged to the buffer 
        size_t HashName( const std::string& messageType );

        friend MRT::Singleton<MessageHub>;

        // REST Report IP address
        string                       rest_report_ip_;

        // REST Report Port
        string                       rest_report_port_;

        // REST Report Path
        string                       rest_report_path_;

        // REST Log Path
        string                       rest_log_path_;

        // REST Report Protocal
        string                       rest_report_protocal_;

        // Max retry for a REST message
        const int                    kMaxRESTRetry = 5;

    };
}
#endif // !MESSAGE_HUB_H_