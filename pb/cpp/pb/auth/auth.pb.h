// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb/auth/auth.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pb_2fauth_2fauth_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pb_2fauth_2fauth_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pb_2fauth_2fauth_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_pb_2fauth_2fauth_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pb_2fauth_2fauth_2eproto;
namespace auth {
class Cert;
class CertDefaultTypeInternal;
extern CertDefaultTypeInternal _Cert_default_instance_;
class CertStatus;
class CertStatusDefaultTypeInternal;
extern CertStatusDefaultTypeInternal _CertStatus_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
}  // namespace auth
PROTOBUF_NAMESPACE_OPEN
template<> ::auth::Cert* Arena::CreateMaybeMessage<::auth::Cert>(Arena*);
template<> ::auth::CertStatus* Arena::CreateMaybeMessage<::auth::CertStatus>(Arena*);
template<> ::auth::Request* Arena::CreateMaybeMessage<::auth::Request>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace auth {

enum CertStatus_Status : int {
  CertStatus_Status_VALID = 0,
  CertStatus_Status_EXPIRED = 1,
  CertStatus_Status_CertStatus_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CertStatus_Status_CertStatus_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CertStatus_Status_IsValid(int value);
constexpr CertStatus_Status CertStatus_Status_Status_MIN = CertStatus_Status_VALID;
constexpr CertStatus_Status CertStatus_Status_Status_MAX = CertStatus_Status_EXPIRED;
constexpr int CertStatus_Status_Status_ARRAYSIZE = CertStatus_Status_Status_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CertStatus_Status_descriptor();
template<typename T>
inline const std::string& CertStatus_Status_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CertStatus_Status>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CertStatus_Status_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CertStatus_Status_descriptor(), enum_t_value);
}
inline bool CertStatus_Status_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CertStatus_Status* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CertStatus_Status>(
    CertStatus_Status_descriptor(), name, value);
}
// ===================================================================

class Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:auth.Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  virtual ~Request();

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request& default_instance();

  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "auth.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pb_2fauth_2fauth_2eproto);
    return ::descriptor_table_pb_2fauth_2fauth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequestedUsernameFieldNumber = 1,
  };
  // string requestedUsername = 1;
  void clear_requestedusername();
  const std::string& requestedusername() const;
  void set_requestedusername(const std::string& value);
  void set_requestedusername(std::string&& value);
  void set_requestedusername(const char* value);
  void set_requestedusername(const char* value, size_t size);
  std::string* mutable_requestedusername();
  std::string* release_requestedusername();
  void set_allocated_requestedusername(std::string* requestedusername);
  private:
  const std::string& _internal_requestedusername() const;
  void _internal_set_requestedusername(const std::string& value);
  std::string* _internal_mutable_requestedusername();
  public:

  // @@protoc_insertion_point(class_scope:auth.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr requestedusername_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pb_2fauth_2fauth_2eproto;
};
// -------------------------------------------------------------------

class Cert PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:auth.Cert) */ {
 public:
  inline Cert() : Cert(nullptr) {}
  virtual ~Cert();

  Cert(const Cert& from);
  Cert(Cert&& from) noexcept
    : Cert() {
    *this = ::std::move(from);
  }

  inline Cert& operator=(const Cert& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cert& operator=(Cert&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Cert& default_instance();

  static inline const Cert* internal_default_instance() {
    return reinterpret_cast<const Cert*>(
               &_Cert_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Cert& a, Cert& b) {
    a.Swap(&b);
  }
  inline void Swap(Cert* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Cert* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cert* New() const final {
    return CreateMaybeMessage<Cert>(nullptr);
  }

  Cert* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cert>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Cert& from);
  void MergeFrom(const Cert& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cert* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "auth.Cert";
  }
  protected:
  explicit Cert(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pb_2fauth_2fauth_2eproto);
    return ::descriptor_table_pb_2fauth_2fauth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJwtFieldNumber = 1,
    kUsernameFieldNumber = 2,
    kExpirationFieldNumber = 3,
  };
  // string jwt = 1;
  void clear_jwt();
  const std::string& jwt() const;
  void set_jwt(const std::string& value);
  void set_jwt(std::string&& value);
  void set_jwt(const char* value);
  void set_jwt(const char* value, size_t size);
  std::string* mutable_jwt();
  std::string* release_jwt();
  void set_allocated_jwt(std::string* jwt);
  private:
  const std::string& _internal_jwt() const;
  void _internal_set_jwt(const std::string& value);
  std::string* _internal_mutable_jwt();
  public:

  // string username = 2;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // .google.protobuf.Timestamp expiration = 3;
  bool has_expiration() const;
  private:
  bool _internal_has_expiration() const;
  public:
  void clear_expiration();
  const PROTOBUF_NAMESPACE_ID::Timestamp& expiration() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_expiration();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_expiration();
  void set_allocated_expiration(PROTOBUF_NAMESPACE_ID::Timestamp* expiration);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_expiration() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_expiration();
  public:
  void unsafe_arena_set_allocated_expiration(
      PROTOBUF_NAMESPACE_ID::Timestamp* expiration);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_expiration();

  // @@protoc_insertion_point(class_scope:auth.Cert)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr jwt_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  PROTOBUF_NAMESPACE_ID::Timestamp* expiration_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pb_2fauth_2fauth_2eproto;
};
// -------------------------------------------------------------------

class CertStatus PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:auth.CertStatus) */ {
 public:
  inline CertStatus() : CertStatus(nullptr) {}
  virtual ~CertStatus();

  CertStatus(const CertStatus& from);
  CertStatus(CertStatus&& from) noexcept
    : CertStatus() {
    *this = ::std::move(from);
  }

  inline CertStatus& operator=(const CertStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline CertStatus& operator=(CertStatus&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CertStatus& default_instance();

  static inline const CertStatus* internal_default_instance() {
    return reinterpret_cast<const CertStatus*>(
               &_CertStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(CertStatus& a, CertStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(CertStatus* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CertStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CertStatus* New() const final {
    return CreateMaybeMessage<CertStatus>(nullptr);
  }

  CertStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CertStatus>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CertStatus& from);
  void MergeFrom(const CertStatus& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CertStatus* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "auth.CertStatus";
  }
  protected:
  explicit CertStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pb_2fauth_2fauth_2eproto);
    return ::descriptor_table_pb_2fauth_2fauth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CertStatus_Status Status;
  static constexpr Status VALID =
    CertStatus_Status_VALID;
  static constexpr Status EXPIRED =
    CertStatus_Status_EXPIRED;
  static inline bool Status_IsValid(int value) {
    return CertStatus_Status_IsValid(value);
  }
  static constexpr Status Status_MIN =
    CertStatus_Status_Status_MIN;
  static constexpr Status Status_MAX =
    CertStatus_Status_Status_MAX;
  static constexpr int Status_ARRAYSIZE =
    CertStatus_Status_Status_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Status_descriptor() {
    return CertStatus_Status_descriptor();
  }
  template<typename T>
  static inline const std::string& Status_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Status>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Status_Name.");
    return CertStatus_Status_Name(enum_t_value);
  }
  static inline bool Status_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Status* value) {
    return CertStatus_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStatusFieldNumber = 1,
  };
  // .auth.CertStatus.Status status = 1;
  void clear_status();
  ::auth::CertStatus_Status status() const;
  void set_status(::auth::CertStatus_Status value);
  private:
  ::auth::CertStatus_Status _internal_status() const;
  void _internal_set_status(::auth::CertStatus_Status value);
  public:

  // @@protoc_insertion_point(class_scope:auth.CertStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int status_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_pb_2fauth_2fauth_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// string requestedUsername = 1;
inline void Request::clear_requestedusername() {
  requestedusername_.ClearToEmpty();
}
inline const std::string& Request::requestedusername() const {
  // @@protoc_insertion_point(field_get:auth.Request.requestedUsername)
  return _internal_requestedusername();
}
inline void Request::set_requestedusername(const std::string& value) {
  _internal_set_requestedusername(value);
  // @@protoc_insertion_point(field_set:auth.Request.requestedUsername)
}
inline std::string* Request::mutable_requestedusername() {
  // @@protoc_insertion_point(field_mutable:auth.Request.requestedUsername)
  return _internal_mutable_requestedusername();
}
inline const std::string& Request::_internal_requestedusername() const {
  return requestedusername_.Get();
}
inline void Request::_internal_set_requestedusername(const std::string& value) {
  
  requestedusername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Request::set_requestedusername(std::string&& value) {
  
  requestedusername_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:auth.Request.requestedUsername)
}
inline void Request::set_requestedusername(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  requestedusername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:auth.Request.requestedUsername)
}
inline void Request::set_requestedusername(const char* value,
    size_t size) {
  
  requestedusername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:auth.Request.requestedUsername)
}
inline std::string* Request::_internal_mutable_requestedusername() {
  
  return requestedusername_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Request::release_requestedusername() {
  // @@protoc_insertion_point(field_release:auth.Request.requestedUsername)
  return requestedusername_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Request::set_allocated_requestedusername(std::string* requestedusername) {
  if (requestedusername != nullptr) {
    
  } else {
    
  }
  requestedusername_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), requestedusername,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:auth.Request.requestedUsername)
}

// -------------------------------------------------------------------

// Cert

// string jwt = 1;
inline void Cert::clear_jwt() {
  jwt_.ClearToEmpty();
}
inline const std::string& Cert::jwt() const {
  // @@protoc_insertion_point(field_get:auth.Cert.jwt)
  return _internal_jwt();
}
inline void Cert::set_jwt(const std::string& value) {
  _internal_set_jwt(value);
  // @@protoc_insertion_point(field_set:auth.Cert.jwt)
}
inline std::string* Cert::mutable_jwt() {
  // @@protoc_insertion_point(field_mutable:auth.Cert.jwt)
  return _internal_mutable_jwt();
}
inline const std::string& Cert::_internal_jwt() const {
  return jwt_.Get();
}
inline void Cert::_internal_set_jwt(const std::string& value) {
  
  jwt_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Cert::set_jwt(std::string&& value) {
  
  jwt_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:auth.Cert.jwt)
}
inline void Cert::set_jwt(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  jwt_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:auth.Cert.jwt)
}
inline void Cert::set_jwt(const char* value,
    size_t size) {
  
  jwt_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:auth.Cert.jwt)
}
inline std::string* Cert::_internal_mutable_jwt() {
  
  return jwt_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Cert::release_jwt() {
  // @@protoc_insertion_point(field_release:auth.Cert.jwt)
  return jwt_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Cert::set_allocated_jwt(std::string* jwt) {
  if (jwt != nullptr) {
    
  } else {
    
  }
  jwt_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), jwt,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:auth.Cert.jwt)
}

// string username = 2;
inline void Cert::clear_username() {
  username_.ClearToEmpty();
}
inline const std::string& Cert::username() const {
  // @@protoc_insertion_point(field_get:auth.Cert.username)
  return _internal_username();
}
inline void Cert::set_username(const std::string& value) {
  _internal_set_username(value);
  // @@protoc_insertion_point(field_set:auth.Cert.username)
}
inline std::string* Cert::mutable_username() {
  // @@protoc_insertion_point(field_mutable:auth.Cert.username)
  return _internal_mutable_username();
}
inline const std::string& Cert::_internal_username() const {
  return username_.Get();
}
inline void Cert::_internal_set_username(const std::string& value) {
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Cert::set_username(std::string&& value) {
  
  username_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:auth.Cert.username)
}
inline void Cert::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:auth.Cert.username)
}
inline void Cert::set_username(const char* value,
    size_t size) {
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:auth.Cert.username)
}
inline std::string* Cert::_internal_mutable_username() {
  
  return username_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Cert::release_username() {
  // @@protoc_insertion_point(field_release:auth.Cert.username)
  return username_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Cert::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:auth.Cert.username)
}

// .google.protobuf.Timestamp expiration = 3;
inline bool Cert::_internal_has_expiration() const {
  return this != internal_default_instance() && expiration_ != nullptr;
}
inline bool Cert::has_expiration() const {
  return _internal_has_expiration();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Cert::_internal_expiration() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = expiration_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Cert::expiration() const {
  // @@protoc_insertion_point(field_get:auth.Cert.expiration)
  return _internal_expiration();
}
inline void Cert::unsafe_arena_set_allocated_expiration(
    PROTOBUF_NAMESPACE_ID::Timestamp* expiration) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_);
  }
  expiration_ = expiration;
  if (expiration) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:auth.Cert.expiration)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Cert::release_expiration() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = expiration_;
  expiration_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Cert::unsafe_arena_release_expiration() {
  // @@protoc_insertion_point(field_release:auth.Cert.expiration)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = expiration_;
  expiration_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Cert::_internal_mutable_expiration() {
  
  if (expiration_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    expiration_ = p;
  }
  return expiration_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Cert::mutable_expiration() {
  // @@protoc_insertion_point(field_mutable:auth.Cert.expiration)
  return _internal_mutable_expiration();
}
inline void Cert::set_allocated_expiration(PROTOBUF_NAMESPACE_ID::Timestamp* expiration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_);
  }
  if (expiration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration)->GetArena();
    if (message_arena != submessage_arena) {
      expiration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, expiration, submessage_arena);
    }
    
  } else {
    
  }
  expiration_ = expiration;
  // @@protoc_insertion_point(field_set_allocated:auth.Cert.expiration)
}

// -------------------------------------------------------------------

// CertStatus

// .auth.CertStatus.Status status = 1;
inline void CertStatus::clear_status() {
  status_ = 0;
}
inline ::auth::CertStatus_Status CertStatus::_internal_status() const {
  return static_cast< ::auth::CertStatus_Status >(status_);
}
inline ::auth::CertStatus_Status CertStatus::status() const {
  // @@protoc_insertion_point(field_get:auth.CertStatus.status)
  return _internal_status();
}
inline void CertStatus::_internal_set_status(::auth::CertStatus_Status value) {
  
  status_ = value;
}
inline void CertStatus::set_status(::auth::CertStatus_Status value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:auth.CertStatus.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace auth

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::auth::CertStatus_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::auth::CertStatus_Status>() {
  return ::auth::CertStatus_Status_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pb_2fauth_2fauth_2eproto