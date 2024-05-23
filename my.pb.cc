// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: my.proto

#include "my.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace BasicT {

inline constexpr TweeterRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : tweet_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TweeterRequest::TweeterRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TweeterRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TweeterRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TweeterRequestDefaultTypeInternal() {}
  union {
    TweeterRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TweeterRequestDefaultTypeInternal _TweeterRequest_default_instance_;

inline constexpr TweeterReply::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TweeterReply::TweeterReply(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TweeterReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TweeterReplyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TweeterReplyDefaultTypeInternal() {}
  union {
    TweeterReply _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TweeterReplyDefaultTypeInternal _TweeterReply_default_instance_;

inline constexpr LastNTweetsRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : number_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR LastNTweetsRequest::LastNTweetsRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct LastNTweetsRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LastNTweetsRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LastNTweetsRequestDefaultTypeInternal() {}
  union {
    LastNTweetsRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LastNTweetsRequestDefaultTypeInternal _LastNTweetsRequest_default_instance_;
}  // namespace BasicT
static ::_pb::Metadata file_level_metadata_my_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_my_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_my_2eproto = nullptr;
const ::uint32_t TableStruct_my_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::BasicT::TweeterRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::BasicT::TweeterRequest, _impl_.tweet_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::BasicT::TweeterReply, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::BasicT::TweeterReply, _impl_.message_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::BasicT::LastNTweetsRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::BasicT::LastNTweetsRequest, _impl_.number_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::BasicT::TweeterRequest)},
        {9, -1, -1, sizeof(::BasicT::TweeterReply)},
        {18, -1, -1, sizeof(::BasicT::LastNTweetsRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::BasicT::_TweeterRequest_default_instance_._instance,
    &::BasicT::_TweeterReply_default_instance_._instance,
    &::BasicT::_LastNTweetsRequest_default_instance_._instance,
};
const char descriptor_table_protodef_my_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\010my.proto\022\006BasicT\"\037\n\016TweeterRequest\022\r\n\005"
    "tweet\030\001 \001(\t\"\037\n\014TweeterReply\022\017\n\007message\030\001"
    " \001(\t\"$\n\022LastNTweetsRequest\022\016\n\006number\030\001 \001"
    "(\0052\212\001\n\007Tweeter\022=\n\013SendMessage\022\026.BasicT.T"
    "weeterRequest\032\024.BasicT.TweeterReply\"\000\022@\n"
    "\nGetMessage\022\032.BasicT.LastNTweetsRequest\032"
    "\024.BasicT.TweeterReply\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_my_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_my_2eproto = {
    false,
    false,
    271,
    descriptor_table_protodef_my_2eproto,
    "my.proto",
    &descriptor_table_my_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_my_2eproto::offsets,
    file_level_metadata_my_2eproto,
    file_level_enum_descriptors_my_2eproto,
    file_level_service_descriptors_my_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_my_2eproto_getter() {
  return &descriptor_table_my_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_my_2eproto(&descriptor_table_my_2eproto);
namespace BasicT {
// ===================================================================

class TweeterRequest::_Internal {
 public:
};

TweeterRequest::TweeterRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:BasicT.TweeterRequest)
}
inline PROTOBUF_NDEBUG_INLINE TweeterRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : tweet_(arena, from.tweet_),
        _cached_size_{0} {}

TweeterRequest::TweeterRequest(
    ::google::protobuf::Arena* arena,
    const TweeterRequest& from)
    : ::google::protobuf::Message(arena) {
  TweeterRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:BasicT.TweeterRequest)
}
inline PROTOBUF_NDEBUG_INLINE TweeterRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : tweet_(arena),
        _cached_size_{0} {}

inline void TweeterRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TweeterRequest::~TweeterRequest() {
  // @@protoc_insertion_point(destructor:BasicT.TweeterRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TweeterRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.tweet_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TweeterRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:BasicT.TweeterRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.tweet_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TweeterRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 35, 2> TweeterRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TweeterRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string tweet = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TweeterRequest, _impl_.tweet_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string tweet = 1;
    {PROTOBUF_FIELD_OFFSET(TweeterRequest, _impl_.tweet_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\25\5\0\0\0\0\0\0"
    "BasicT.TweeterRequest"
    "tweet"
  }},
};

::uint8_t* TweeterRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BasicT.TweeterRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string tweet = 1;
  if (!this->_internal_tweet().empty()) {
    const std::string& _s = this->_internal_tweet();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "BasicT.TweeterRequest.tweet");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BasicT.TweeterRequest)
  return target;
}

::size_t TweeterRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BasicT.TweeterRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string tweet = 1;
  if (!this->_internal_tweet().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_tweet());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TweeterRequest::_class_data_ = {
    TweeterRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TweeterRequest::GetClassData() const {
  return &_class_data_;
}

void TweeterRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TweeterRequest*>(&to_msg);
  auto& from = static_cast<const TweeterRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:BasicT.TweeterRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_tweet().empty()) {
    _this->_internal_set_tweet(from._internal_tweet());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TweeterRequest::CopyFrom(const TweeterRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BasicT.TweeterRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TweeterRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TweeterRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TweeterRequest::InternalSwap(TweeterRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.tweet_, &other->_impl_.tweet_, arena);
}

::google::protobuf::Metadata TweeterRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_my_2eproto_getter, &descriptor_table_my_2eproto_once,
      file_level_metadata_my_2eproto[0]);
}
// ===================================================================

class TweeterReply::_Internal {
 public:
};

TweeterReply::TweeterReply(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:BasicT.TweeterReply)
}
inline PROTOBUF_NDEBUG_INLINE TweeterReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : message_(arena, from.message_),
        _cached_size_{0} {}

TweeterReply::TweeterReply(
    ::google::protobuf::Arena* arena,
    const TweeterReply& from)
    : ::google::protobuf::Message(arena) {
  TweeterReply* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:BasicT.TweeterReply)
}
inline PROTOBUF_NDEBUG_INLINE TweeterReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : message_(arena),
        _cached_size_{0} {}

inline void TweeterReply::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TweeterReply::~TweeterReply() {
  // @@protoc_insertion_point(destructor:BasicT.TweeterReply)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TweeterReply::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.message_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TweeterReply::Clear() {
// @@protoc_insertion_point(message_clear_start:BasicT.TweeterReply)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TweeterReply::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 35, 2> TweeterReply::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TweeterReply_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string message = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TweeterReply, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string message = 1;
    {PROTOBUF_FIELD_OFFSET(TweeterReply, _impl_.message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\23\7\0\0\0\0\0\0"
    "BasicT.TweeterReply"
    "message"
  }},
};

::uint8_t* TweeterReply::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BasicT.TweeterReply)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    const std::string& _s = this->_internal_message();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "BasicT.TweeterReply.message");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BasicT.TweeterReply)
  return target;
}

::size_t TweeterReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BasicT.TweeterReply)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TweeterReply::_class_data_ = {
    TweeterReply::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TweeterReply::GetClassData() const {
  return &_class_data_;
}

void TweeterReply::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TweeterReply*>(&to_msg);
  auto& from = static_cast<const TweeterReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:BasicT.TweeterReply)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TweeterReply::CopyFrom(const TweeterReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BasicT.TweeterReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TweeterReply::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TweeterReply::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TweeterReply::InternalSwap(TweeterReply* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, &other->_impl_.message_, arena);
}

::google::protobuf::Metadata TweeterReply::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_my_2eproto_getter, &descriptor_table_my_2eproto_once,
      file_level_metadata_my_2eproto[1]);
}
// ===================================================================

class LastNTweetsRequest::_Internal {
 public:
};

LastNTweetsRequest::LastNTweetsRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:BasicT.LastNTweetsRequest)
}
LastNTweetsRequest::LastNTweetsRequest(
    ::google::protobuf::Arena* arena, const LastNTweetsRequest& from)
    : LastNTweetsRequest(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE LastNTweetsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void LastNTweetsRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.number_ = {};
}
LastNTweetsRequest::~LastNTweetsRequest() {
  // @@protoc_insertion_point(destructor:BasicT.LastNTweetsRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void LastNTweetsRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void LastNTweetsRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:BasicT.LastNTweetsRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.number_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* LastNTweetsRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> LastNTweetsRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_LastNTweetsRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 number = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(LastNTweetsRequest, _impl_.number_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(LastNTweetsRequest, _impl_.number_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 number = 1;
    {PROTOBUF_FIELD_OFFSET(LastNTweetsRequest, _impl_.number_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* LastNTweetsRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:BasicT.LastNTweetsRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 number = 1;
  if (this->_internal_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BasicT.LastNTweetsRequest)
  return target;
}

::size_t LastNTweetsRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BasicT.LastNTweetsRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 number = 1;
  if (this->_internal_number() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_number());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData LastNTweetsRequest::_class_data_ = {
    LastNTweetsRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* LastNTweetsRequest::GetClassData() const {
  return &_class_data_;
}

void LastNTweetsRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<LastNTweetsRequest*>(&to_msg);
  auto& from = static_cast<const LastNTweetsRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:BasicT.LastNTweetsRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_number() != 0) {
    _this->_internal_set_number(from._internal_number());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void LastNTweetsRequest::CopyFrom(const LastNTweetsRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BasicT.LastNTweetsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool LastNTweetsRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* LastNTweetsRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void LastNTweetsRequest::InternalSwap(LastNTweetsRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.number_, other->_impl_.number_);
}

::google::protobuf::Metadata LastNTweetsRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_my_2eproto_getter, &descriptor_table_my_2eproto_once,
      file_level_metadata_my_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace BasicT
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"