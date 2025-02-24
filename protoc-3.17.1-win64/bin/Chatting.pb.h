// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Chatting.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Chatting_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Chatting_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Chatting_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Chatting_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Chatting_2eproto;
namespace Protocol {
class C_CHATTING;
struct C_CHATTINGDefaultTypeInternal;
extern C_CHATTINGDefaultTypeInternal _C_CHATTING_default_instance_;
class S_CHATTING;
struct S_CHATTINGDefaultTypeInternal;
extern S_CHATTINGDefaultTypeInternal _S_CHATTING_default_instance_;
class S_NEW_CHATTING;
struct S_NEW_CHATTINGDefaultTypeInternal;
extern S_NEW_CHATTINGDefaultTypeInternal _S_NEW_CHATTING_default_instance_;
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::Protocol::C_CHATTING* Arena::CreateMaybeMessage<::Protocol::C_CHATTING>(Arena*);
template<> ::Protocol::S_CHATTING* Arena::CreateMaybeMessage<::Protocol::S_CHATTING>(Arena*);
template<> ::Protocol::S_NEW_CHATTING* Arena::CreateMaybeMessage<::Protocol::S_NEW_CHATTING>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Protocol {

// ===================================================================

class C_CHATTING final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.C_CHATTING) */ {
 public:
  inline C_CHATTING() : C_CHATTING(nullptr) {}
  ~C_CHATTING() override;
  explicit constexpr C_CHATTING(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  C_CHATTING(const C_CHATTING& from);
  C_CHATTING(C_CHATTING&& from) noexcept
    : C_CHATTING() {
    *this = ::std::move(from);
  }

  inline C_CHATTING& operator=(const C_CHATTING& from) {
    CopyFrom(from);
    return *this;
  }
  inline C_CHATTING& operator=(C_CHATTING&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const C_CHATTING& default_instance() {
    return *internal_default_instance();
  }
  static inline const C_CHATTING* internal_default_instance() {
    return reinterpret_cast<const C_CHATTING*>(
               &_C_CHATTING_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(C_CHATTING& a, C_CHATTING& b) {
    a.Swap(&b);
  }
  inline void Swap(C_CHATTING* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C_CHATTING* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline C_CHATTING* New() const final {
    return new C_CHATTING();
  }

  C_CHATTING* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<C_CHATTING>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const C_CHATTING& from);
  void MergeFrom(const C_CHATTING& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(C_CHATTING* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.C_CHATTING";
  }
  protected:
  explicit C_CHATTING(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kTextFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string text = 2;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // @@protoc_insertion_point(class_scope:Protocol.C_CHATTING)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chatting_2eproto;
};
// -------------------------------------------------------------------

class S_CHATTING final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.S_CHATTING) */ {
 public:
  inline S_CHATTING() : S_CHATTING(nullptr) {}
  ~S_CHATTING() override;
  explicit constexpr S_CHATTING(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  S_CHATTING(const S_CHATTING& from);
  S_CHATTING(S_CHATTING&& from) noexcept
    : S_CHATTING() {
    *this = ::std::move(from);
  }

  inline S_CHATTING& operator=(const S_CHATTING& from) {
    CopyFrom(from);
    return *this;
  }
  inline S_CHATTING& operator=(S_CHATTING&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const S_CHATTING& default_instance() {
    return *internal_default_instance();
  }
  static inline const S_CHATTING* internal_default_instance() {
    return reinterpret_cast<const S_CHATTING*>(
               &_S_CHATTING_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(S_CHATTING& a, S_CHATTING& b) {
    a.Swap(&b);
  }
  inline void Swap(S_CHATTING* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(S_CHATTING* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline S_CHATTING* New() const final {
    return new S_CHATTING();
  }

  S_CHATTING* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<S_CHATTING>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const S_CHATTING& from);
  void MergeFrom(const S_CHATTING& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(S_CHATTING* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.S_CHATTING";
  }
  protected:
  explicit S_CHATTING(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSuccessFieldNumber = 1,
  };
  // bool success = 1;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.S_CHATTING)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool success_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chatting_2eproto;
};
// -------------------------------------------------------------------

class S_NEW_CHATTING final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.S_NEW_CHATTING) */ {
 public:
  inline S_NEW_CHATTING() : S_NEW_CHATTING(nullptr) {}
  ~S_NEW_CHATTING() override;
  explicit constexpr S_NEW_CHATTING(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  S_NEW_CHATTING(const S_NEW_CHATTING& from);
  S_NEW_CHATTING(S_NEW_CHATTING&& from) noexcept
    : S_NEW_CHATTING() {
    *this = ::std::move(from);
  }

  inline S_NEW_CHATTING& operator=(const S_NEW_CHATTING& from) {
    CopyFrom(from);
    return *this;
  }
  inline S_NEW_CHATTING& operator=(S_NEW_CHATTING&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const S_NEW_CHATTING& default_instance() {
    return *internal_default_instance();
  }
  static inline const S_NEW_CHATTING* internal_default_instance() {
    return reinterpret_cast<const S_NEW_CHATTING*>(
               &_S_NEW_CHATTING_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(S_NEW_CHATTING& a, S_NEW_CHATTING& b) {
    a.Swap(&b);
  }
  inline void Swap(S_NEW_CHATTING* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(S_NEW_CHATTING* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline S_NEW_CHATTING* New() const final {
    return new S_NEW_CHATTING();
  }

  S_NEW_CHATTING* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<S_NEW_CHATTING>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const S_NEW_CHATTING& from);
  void MergeFrom(const S_NEW_CHATTING& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(S_NEW_CHATTING* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.S_NEW_CHATTING";
  }
  protected:
  explicit S_NEW_CHATTING(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kTextFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string text = 2;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // @@protoc_insertion_point(class_scope:Protocol.S_NEW_CHATTING)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chatting_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// C_CHATTING

// string name = 1;
inline void C_CHATTING::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& C_CHATTING::name() const {
  // @@protoc_insertion_point(field_get:Protocol.C_CHATTING.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void C_CHATTING::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.C_CHATTING.name)
}
inline std::string* C_CHATTING::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Protocol.C_CHATTING.name)
  return _internal_mutable_name();
}
inline const std::string& C_CHATTING::_internal_name() const {
  return name_.Get();
}
inline void C_CHATTING::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* C_CHATTING::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* C_CHATTING::release_name() {
  // @@protoc_insertion_point(field_release:Protocol.C_CHATTING.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void C_CHATTING::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.C_CHATTING.name)
}

// string text = 2;
inline void C_CHATTING::clear_text() {
  text_.ClearToEmpty();
}
inline const std::string& C_CHATTING::text() const {
  // @@protoc_insertion_point(field_get:Protocol.C_CHATTING.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void C_CHATTING::set_text(ArgT0&& arg0, ArgT... args) {
 
 text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.C_CHATTING.text)
}
inline std::string* C_CHATTING::mutable_text() {
  // @@protoc_insertion_point(field_mutable:Protocol.C_CHATTING.text)
  return _internal_mutable_text();
}
inline const std::string& C_CHATTING::_internal_text() const {
  return text_.Get();
}
inline void C_CHATTING::_internal_set_text(const std::string& value) {
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* C_CHATTING::_internal_mutable_text() {
  
  return text_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* C_CHATTING::release_text() {
  // @@protoc_insertion_point(field_release:Protocol.C_CHATTING.text)
  return text_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void C_CHATTING::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.C_CHATTING.text)
}

// -------------------------------------------------------------------

// S_CHATTING

// bool success = 1;
inline void S_CHATTING::clear_success() {
  success_ = false;
}
inline bool S_CHATTING::_internal_success() const {
  return success_;
}
inline bool S_CHATTING::success() const {
  // @@protoc_insertion_point(field_get:Protocol.S_CHATTING.success)
  return _internal_success();
}
inline void S_CHATTING::_internal_set_success(bool value) {
  
  success_ = value;
}
inline void S_CHATTING::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:Protocol.S_CHATTING.success)
}

// -------------------------------------------------------------------

// S_NEW_CHATTING

// string name = 1;
inline void S_NEW_CHATTING::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& S_NEW_CHATTING::name() const {
  // @@protoc_insertion_point(field_get:Protocol.S_NEW_CHATTING.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void S_NEW_CHATTING::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.S_NEW_CHATTING.name)
}
inline std::string* S_NEW_CHATTING::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Protocol.S_NEW_CHATTING.name)
  return _internal_mutable_name();
}
inline const std::string& S_NEW_CHATTING::_internal_name() const {
  return name_.Get();
}
inline void S_NEW_CHATTING::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* S_NEW_CHATTING::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* S_NEW_CHATTING::release_name() {
  // @@protoc_insertion_point(field_release:Protocol.S_NEW_CHATTING.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void S_NEW_CHATTING::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.S_NEW_CHATTING.name)
}

// string text = 2;
inline void S_NEW_CHATTING::clear_text() {
  text_.ClearToEmpty();
}
inline const std::string& S_NEW_CHATTING::text() const {
  // @@protoc_insertion_point(field_get:Protocol.S_NEW_CHATTING.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void S_NEW_CHATTING::set_text(ArgT0&& arg0, ArgT... args) {
 
 text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.S_NEW_CHATTING.text)
}
inline std::string* S_NEW_CHATTING::mutable_text() {
  // @@protoc_insertion_point(field_mutable:Protocol.S_NEW_CHATTING.text)
  return _internal_mutable_text();
}
inline const std::string& S_NEW_CHATTING::_internal_text() const {
  return text_.Get();
}
inline void S_NEW_CHATTING::_internal_set_text(const std::string& value) {
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* S_NEW_CHATTING::_internal_mutable_text() {
  
  return text_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* S_NEW_CHATTING::release_text() {
  // @@protoc_insertion_point(field_release:Protocol.S_NEW_CHATTING.text)
  return text_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void S_NEW_CHATTING::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.S_NEW_CHATTING.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Chatting_2eproto
