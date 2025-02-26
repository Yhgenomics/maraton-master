// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRegist.proto

#ifndef PROTOBUF_MessageRegist_2eproto__INCLUDED
#define PROTOBUF_MessageRegist_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageRegist_2eproto();
void protobuf_AssignDesc_MessageRegist_2eproto();
void protobuf_ShutdownFile_MessageRegist_2eproto();

class MessageRegist;

// ===================================================================

class MessageRegist : public ::google::protobuf::Message {
 public:
  MessageRegist();
  virtual ~MessageRegist();

  MessageRegist(const MessageRegist& from);

  inline MessageRegist& operator=(const MessageRegist& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageRegist& default_instance();

  void Swap(MessageRegist* other);

  // implements Message ----------------------------------------------

  MessageRegist* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageRegist& from);
  void MergeFrom(const MessageRegist& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required int32 state = 2;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 2;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);

  // required int32 cpu = 3;
  inline bool has_cpu() const;
  inline void clear_cpu();
  static const int kCpuFieldNumber = 3;
  inline ::google::protobuf::int32 cpu() const;
  inline void set_cpu(::google::protobuf::int32 value);

  // required int32 memory = 4;
  inline bool has_memory() const;
  inline void clear_memory();
  static const int kMemoryFieldNumber = 4;
  inline ::google::protobuf::int32 memory() const;
  inline void set_memory(::google::protobuf::int32 value);

  // required int32 type = 5;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 5;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MessageRegist)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_cpu();
  inline void clear_has_cpu();
  inline void set_has_memory();
  inline void clear_has_memory();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* id_;
  ::google::protobuf::int32 state_;
  ::google::protobuf::int32 cpu_;
  ::google::protobuf::int32 memory_;
  ::google::protobuf::int32 type_;
  friend void  protobuf_AddDesc_MessageRegist_2eproto();
  friend void protobuf_AssignDesc_MessageRegist_2eproto();
  friend void protobuf_ShutdownFile_MessageRegist_2eproto();

  void InitAsDefaultInstance();
  static MessageRegist* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageRegist

// required string id = 1;
inline bool MessageRegist::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRegist::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRegist::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRegist::clear_id() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& MessageRegist::id() const {
  // @@protoc_insertion_point(field_get:MessageRegist.id)
  return *id_;
}
inline void MessageRegist::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set:MessageRegist.id)
}
inline void MessageRegist::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageRegist.id)
}
inline void MessageRegist::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageRegist.id)
}
inline ::std::string* MessageRegist::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageRegist.id)
  return id_;
}
inline ::std::string* MessageRegist::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageRegist::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessageRegist.id)
}

// required int32 state = 2;
inline bool MessageRegist::has_state() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageRegist::set_has_state() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageRegist::clear_has_state() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageRegist::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::google::protobuf::int32 MessageRegist::state() const {
  // @@protoc_insertion_point(field_get:MessageRegist.state)
  return state_;
}
inline void MessageRegist::set_state(::google::protobuf::int32 value) {
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:MessageRegist.state)
}

// required int32 cpu = 3;
inline bool MessageRegist::has_cpu() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageRegist::set_has_cpu() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageRegist::clear_has_cpu() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageRegist::clear_cpu() {
  cpu_ = 0;
  clear_has_cpu();
}
inline ::google::protobuf::int32 MessageRegist::cpu() const {
  // @@protoc_insertion_point(field_get:MessageRegist.cpu)
  return cpu_;
}
inline void MessageRegist::set_cpu(::google::protobuf::int32 value) {
  set_has_cpu();
  cpu_ = value;
  // @@protoc_insertion_point(field_set:MessageRegist.cpu)
}

// required int32 memory = 4;
inline bool MessageRegist::has_memory() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageRegist::set_has_memory() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageRegist::clear_has_memory() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageRegist::clear_memory() {
  memory_ = 0;
  clear_has_memory();
}
inline ::google::protobuf::int32 MessageRegist::memory() const {
  // @@protoc_insertion_point(field_get:MessageRegist.memory)
  return memory_;
}
inline void MessageRegist::set_memory(::google::protobuf::int32 value) {
  set_has_memory();
  memory_ = value;
  // @@protoc_insertion_point(field_set:MessageRegist.memory)
}

// required int32 type = 5;
inline bool MessageRegist::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MessageRegist::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MessageRegist::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MessageRegist::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 MessageRegist::type() const {
  // @@protoc_insertion_point(field_get:MessageRegist.type)
  return type_;
}
inline void MessageRegist::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:MessageRegist.type)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRegist_2eproto__INCLUDED
