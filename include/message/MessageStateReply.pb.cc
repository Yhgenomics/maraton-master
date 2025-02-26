// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageStateReply.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageStateReply.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MessageStateReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageStateReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageStateReply_2eproto() {
  protobuf_AddDesc_MessageStateReply_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageStateReply.proto");
  GOOGLE_CHECK(file != NULL);
  MessageStateReply_descriptor_ = file->message_type(0);
  static const int MessageStateReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageStateReply, code_),
  };
  MessageStateReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageStateReply_descriptor_,
      MessageStateReply::default_instance_,
      MessageStateReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageStateReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageStateReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageStateReply));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageStateReply_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageStateReply_descriptor_, &MessageStateReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageStateReply_2eproto() {
  delete MessageStateReply::default_instance_;
  delete MessageStateReply_reflection_;
}

void protobuf_AddDesc_MessageStateReply_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027MessageStateReply.proto\"!\n\021MessageStat"
    "eReply\022\014\n\004code\030\001 \002(\005", 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageStateReply.proto", &protobuf_RegisterTypes);
  MessageStateReply::default_instance_ = new MessageStateReply();
  MessageStateReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageStateReply_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageStateReply_2eproto {
  StaticDescriptorInitializer_MessageStateReply_2eproto() {
    protobuf_AddDesc_MessageStateReply_2eproto();
  }
} static_descriptor_initializer_MessageStateReply_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageStateReply::kCodeFieldNumber;
#endif  // !_MSC_VER

MessageStateReply::MessageStateReply()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageStateReply)
}

void MessageStateReply::InitAsDefaultInstance() {
}

MessageStateReply::MessageStateReply(const MessageStateReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageStateReply)
}

void MessageStateReply::SharedCtor() {
  _cached_size_ = 0;
  code_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageStateReply::~MessageStateReply() {
  // @@protoc_insertion_point(destructor:MessageStateReply)
  SharedDtor();
}

void MessageStateReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MessageStateReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageStateReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageStateReply_descriptor_;
}

const MessageStateReply& MessageStateReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageStateReply_2eproto();
  return *default_instance_;
}

MessageStateReply* MessageStateReply::default_instance_ = NULL;

MessageStateReply* MessageStateReply::New() const {
  return new MessageStateReply;
}

void MessageStateReply::Clear() {
  code_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageStateReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageStateReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 code = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
          set_has_code();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageStateReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageStateReply)
  return false;
#undef DO_
}

void MessageStateReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageStateReply)
  // required int32 code = 1;
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageStateReply)
}

::google::protobuf::uint8* MessageStateReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageStateReply)
  // required int32 code = 1;
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageStateReply)
  return target;
}

int MessageStateReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 code = 1;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->code());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageStateReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageStateReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageStateReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageStateReply::MergeFrom(const MessageStateReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_code()) {
      set_code(from.code());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageStateReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageStateReply::CopyFrom(const MessageStateReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageStateReply::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MessageStateReply::Swap(MessageStateReply* other) {
  if (other != this) {
    std::swap(code_, other->code_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageStateReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageStateReply_descriptor_;
  metadata.reflection = MessageStateReply_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
