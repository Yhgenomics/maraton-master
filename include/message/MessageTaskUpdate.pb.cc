// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageTaskUpdate.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageTaskUpdate.pb.h"

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

const ::google::protobuf::Descriptor* MessageTaskUpdate_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageTaskUpdate_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageTaskUpdate_2eproto() {
  protobuf_AddDesc_MessageTaskUpdate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageTaskUpdate.proto");
  GOOGLE_CHECK(file != NULL);
  MessageTaskUpdate_descriptor_ = file->message_type(0);
  static const int MessageTaskUpdate_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageTaskUpdate, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageTaskUpdate, output_),
  };
  MessageTaskUpdate_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageTaskUpdate_descriptor_,
      MessageTaskUpdate::default_instance_,
      MessageTaskUpdate_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageTaskUpdate, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageTaskUpdate, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageTaskUpdate));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageTaskUpdate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageTaskUpdate_descriptor_, &MessageTaskUpdate::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageTaskUpdate_2eproto() {
  delete MessageTaskUpdate::default_instance_;
  delete MessageTaskUpdate_reflection_;
}

void protobuf_AddDesc_MessageTaskUpdate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027MessageTaskUpdate.proto\"3\n\021MessageTask"
    "Update\022\016\n\006status\030\001 \002(\005\022\016\n\006output\030\002 \003(\t", 78);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageTaskUpdate.proto", &protobuf_RegisterTypes);
  MessageTaskUpdate::default_instance_ = new MessageTaskUpdate();
  MessageTaskUpdate::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageTaskUpdate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageTaskUpdate_2eproto {
  StaticDescriptorInitializer_MessageTaskUpdate_2eproto() {
    protobuf_AddDesc_MessageTaskUpdate_2eproto();
  }
} static_descriptor_initializer_MessageTaskUpdate_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageTaskUpdate::kStatusFieldNumber;
const int MessageTaskUpdate::kOutputFieldNumber;
#endif  // !_MSC_VER

MessageTaskUpdate::MessageTaskUpdate()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageTaskUpdate)
}

void MessageTaskUpdate::InitAsDefaultInstance() {
}

MessageTaskUpdate::MessageTaskUpdate(const MessageTaskUpdate& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageTaskUpdate)
}

void MessageTaskUpdate::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  status_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageTaskUpdate::~MessageTaskUpdate() {
  // @@protoc_insertion_point(destructor:MessageTaskUpdate)
  SharedDtor();
}

void MessageTaskUpdate::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MessageTaskUpdate::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageTaskUpdate::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageTaskUpdate_descriptor_;
}

const MessageTaskUpdate& MessageTaskUpdate::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageTaskUpdate_2eproto();
  return *default_instance_;
}

MessageTaskUpdate* MessageTaskUpdate::default_instance_ = NULL;

MessageTaskUpdate* MessageTaskUpdate::New() const {
  return new MessageTaskUpdate;
}

void MessageTaskUpdate::Clear() {
  status_ = 0;
  output_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageTaskUpdate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageTaskUpdate)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 status = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_output;
        break;
      }

      // repeated string output = 2;
      case 2: {
        if (tag == 18) {
         parse_output:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_output()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->output(this->output_size() - 1).data(),
            this->output(this->output_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "output");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_output;
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
  // @@protoc_insertion_point(parse_success:MessageTaskUpdate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageTaskUpdate)
  return false;
#undef DO_
}

void MessageTaskUpdate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageTaskUpdate)
  // required int32 status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // repeated string output = 2;
  for (int i = 0; i < this->output_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->output(i).data(), this->output(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "output");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->output(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageTaskUpdate)
}

::google::protobuf::uint8* MessageTaskUpdate::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageTaskUpdate)
  // required int32 status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // repeated string output = 2;
  for (int i = 0; i < this->output_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->output(i).data(), this->output(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "output");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->output(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageTaskUpdate)
  return target;
}

int MessageTaskUpdate::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }

  }
  // repeated string output = 2;
  total_size += 1 * this->output_size();
  for (int i = 0; i < this->output_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->output(i));
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

void MessageTaskUpdate::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageTaskUpdate* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageTaskUpdate*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageTaskUpdate::MergeFrom(const MessageTaskUpdate& from) {
  GOOGLE_CHECK_NE(&from, this);
  output_.MergeFrom(from.output_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageTaskUpdate::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageTaskUpdate::CopyFrom(const MessageTaskUpdate& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageTaskUpdate::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MessageTaskUpdate::Swap(MessageTaskUpdate* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    output_.Swap(&other->output_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageTaskUpdate::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageTaskUpdate_descriptor_;
  metadata.reflection = MessageTaskUpdate_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
