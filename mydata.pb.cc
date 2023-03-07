// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mydata.proto

#include "mydata.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR SensorData::SensorData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.channeldata_)*/{}
  , /*decltype(_impl_.isdroppedpacket_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SensorDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SensorDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SensorDataDefaultTypeInternal() {}
  union {
    SensorData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SensorDataDefaultTypeInternal _SensorData_default_instance_;
PROTOBUF_CONSTEXPR ChannelData::ChannelData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ChannelDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChannelDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChannelDataDefaultTypeInternal() {}
  union {
    ChannelData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChannelDataDefaultTypeInternal _ChannelData_default_instance_;
PROTOBUF_CONSTEXPR FrameData::FrameData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sensordata_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FrameDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FrameDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FrameDataDefaultTypeInternal() {}
  union {
    FrameData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FrameDataDefaultTypeInternal _FrameData_default_instance_;
PROTOBUF_CONSTEXPR CollectionData::CollectionData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CollectionDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CollectionDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CollectionDataDefaultTypeInternal() {}
  union {
    CollectionData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CollectionDataDefaultTypeInternal _CollectionData_default_instance_;
static ::_pb::Metadata file_level_metadata_mydata_2eproto[4];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_mydata_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_mydata_2eproto = nullptr;

const uint32_t TableStruct_mydata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SensorData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SensorData, _impl_.channeldata_),
  PROTOBUF_FIELD_OFFSET(::SensorData, _impl_.isdroppedpacket_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ChannelData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ChannelData, _impl_.data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FrameData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::FrameData, _impl_.sensordata_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CollectionData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::CollectionData, _impl_.data_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::SensorData)},
  { 8, -1, -1, sizeof(::ChannelData)},
  { 15, -1, -1, sizeof(::FrameData)},
  { 22, -1, -1, sizeof(::CollectionData)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_SensorData_default_instance_._instance,
  &::_ChannelData_default_instance_._instance,
  &::_FrameData_default_instance_._instance,
  &::_CollectionData_default_instance_._instance,
};

const char descriptor_table_protodef_mydata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014mydata.proto\"H\n\nSensorData\022!\n\013channelD"
  "ata\030\001 \003(\0132\014.ChannelData\022\027\n\017isDroppedPack"
  "et\030\002 \001(\010\"\033\n\013ChannelData\022\014\n\004data\030\001 \003(\002\",\n"
  "\tFrameData\022\037\n\nsensorData\030\001 \003(\0132\013.SensorD"
  "ata\"*\n\016CollectionData\022\030\n\004data\030\001 \003(\0132\n.Fr"
  "ameDatab\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_mydata_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_mydata_2eproto = {
    false, false, 215, descriptor_table_protodef_mydata_2eproto,
    "mydata.proto",
    &descriptor_table_mydata_2eproto_once, nullptr, 0, 4,
    schemas, file_default_instances, TableStruct_mydata_2eproto::offsets,
    file_level_metadata_mydata_2eproto, file_level_enum_descriptors_mydata_2eproto,
    file_level_service_descriptors_mydata_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_mydata_2eproto_getter() {
  return &descriptor_table_mydata_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_mydata_2eproto(&descriptor_table_mydata_2eproto);

// ===================================================================

class SensorData::_Internal {
 public:
};

SensorData::SensorData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SensorData)
}
SensorData::SensorData(const SensorData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SensorData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.channeldata_){from._impl_.channeldata_}
    , decltype(_impl_.isdroppedpacket_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.isdroppedpacket_ = from._impl_.isdroppedpacket_;
  // @@protoc_insertion_point(copy_constructor:SensorData)
}

inline void SensorData::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.channeldata_){arena}
    , decltype(_impl_.isdroppedpacket_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SensorData::~SensorData() {
  // @@protoc_insertion_point(destructor:SensorData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SensorData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.channeldata_.~RepeatedPtrField();
}

void SensorData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SensorData::Clear() {
// @@protoc_insertion_point(message_clear_start:SensorData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.channeldata_.Clear();
  _impl_.isdroppedpacket_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SensorData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .ChannelData channelData = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_channeldata(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // bool isDroppedPacket = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.isdroppedpacket_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SensorData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SensorData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ChannelData channelData = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_channeldata_size()); i < n; i++) {
    const auto& repfield = this->_internal_channeldata(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // bool isDroppedPacket = 2;
  if (this->_internal_isdroppedpacket() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_isdroppedpacket(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SensorData)
  return target;
}

size_t SensorData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SensorData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ChannelData channelData = 1;
  total_size += 1UL * this->_internal_channeldata_size();
  for (const auto& msg : this->_impl_.channeldata_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // bool isDroppedPacket = 2;
  if (this->_internal_isdroppedpacket() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SensorData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SensorData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SensorData::GetClassData() const { return &_class_data_; }


void SensorData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SensorData*>(&to_msg);
  auto& from = static_cast<const SensorData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SensorData)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.channeldata_.MergeFrom(from._impl_.channeldata_);
  if (from._internal_isdroppedpacket() != 0) {
    _this->_internal_set_isdroppedpacket(from._internal_isdroppedpacket());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SensorData::CopyFrom(const SensorData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SensorData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorData::IsInitialized() const {
  return true;
}

void SensorData::InternalSwap(SensorData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.channeldata_.InternalSwap(&other->_impl_.channeldata_);
  swap(_impl_.isdroppedpacket_, other->_impl_.isdroppedpacket_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SensorData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_mydata_2eproto_getter, &descriptor_table_mydata_2eproto_once,
      file_level_metadata_mydata_2eproto[0]);
}

// ===================================================================

class ChannelData::_Internal {
 public:
};

ChannelData::ChannelData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:ChannelData)
}
ChannelData::ChannelData(const ChannelData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChannelData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){from._impl_.data_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:ChannelData)
}

inline void ChannelData::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ChannelData::~ChannelData() {
  // @@protoc_insertion_point(destructor:ChannelData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChannelData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.~RepeatedField();
}

void ChannelData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChannelData::Clear() {
// @@protoc_insertion_point(message_clear_start:ChannelData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChannelData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated float data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_data(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 13) {
          _internal_add_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ChannelData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ChannelData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float data = 1;
  if (this->_internal_data_size() > 0) {
    target = stream->WriteFixedPacked(1, _internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ChannelData)
  return target;
}

size_t ChannelData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ChannelData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float data = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_data_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChannelData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChannelData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChannelData::GetClassData() const { return &_class_data_; }


void ChannelData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChannelData*>(&to_msg);
  auto& from = static_cast<const ChannelData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:ChannelData)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.data_.MergeFrom(from._impl_.data_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChannelData::CopyFrom(const ChannelData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ChannelData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChannelData::IsInitialized() const {
  return true;
}

void ChannelData::InternalSwap(ChannelData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.data_.InternalSwap(&other->_impl_.data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ChannelData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_mydata_2eproto_getter, &descriptor_table_mydata_2eproto_once,
      file_level_metadata_mydata_2eproto[1]);
}

// ===================================================================

class FrameData::_Internal {
 public:
};

FrameData::FrameData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:FrameData)
}
FrameData::FrameData(const FrameData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FrameData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sensordata_){from._impl_.sensordata_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:FrameData)
}

inline void FrameData::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sensordata_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FrameData::~FrameData() {
  // @@protoc_insertion_point(destructor:FrameData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FrameData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sensordata_.~RepeatedPtrField();
}

void FrameData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FrameData::Clear() {
// @@protoc_insertion_point(message_clear_start:FrameData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sensordata_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FrameData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .SensorData sensorData = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sensordata(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FrameData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FrameData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .SensorData sensorData = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_sensordata_size()); i < n; i++) {
    const auto& repfield = this->_internal_sensordata(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FrameData)
  return target;
}

size_t FrameData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FrameData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .SensorData sensorData = 1;
  total_size += 1UL * this->_internal_sensordata_size();
  for (const auto& msg : this->_impl_.sensordata_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FrameData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FrameData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FrameData::GetClassData() const { return &_class_data_; }


void FrameData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FrameData*>(&to_msg);
  auto& from = static_cast<const FrameData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:FrameData)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sensordata_.MergeFrom(from._impl_.sensordata_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FrameData::CopyFrom(const FrameData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FrameData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FrameData::IsInitialized() const {
  return true;
}

void FrameData::InternalSwap(FrameData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sensordata_.InternalSwap(&other->_impl_.sensordata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FrameData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_mydata_2eproto_getter, &descriptor_table_mydata_2eproto_once,
      file_level_metadata_mydata_2eproto[2]);
}

// ===================================================================

class CollectionData::_Internal {
 public:
};

CollectionData::CollectionData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:CollectionData)
}
CollectionData::CollectionData(const CollectionData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CollectionData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){from._impl_.data_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CollectionData)
}

inline void CollectionData::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

CollectionData::~CollectionData() {
  // @@protoc_insertion_point(destructor:CollectionData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CollectionData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.~RepeatedPtrField();
}

void CollectionData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CollectionData::Clear() {
// @@protoc_insertion_point(message_clear_start:CollectionData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CollectionData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .FrameData data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* CollectionData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CollectionData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .FrameData data = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_data_size()); i < n; i++) {
    const auto& repfield = this->_internal_data(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CollectionData)
  return target;
}

size_t CollectionData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CollectionData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .FrameData data = 1;
  total_size += 1UL * this->_internal_data_size();
  for (const auto& msg : this->_impl_.data_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CollectionData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CollectionData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CollectionData::GetClassData() const { return &_class_data_; }


void CollectionData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CollectionData*>(&to_msg);
  auto& from = static_cast<const CollectionData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:CollectionData)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.data_.MergeFrom(from._impl_.data_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CollectionData::CopyFrom(const CollectionData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CollectionData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CollectionData::IsInitialized() const {
  return true;
}

void CollectionData::InternalSwap(CollectionData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.data_.InternalSwap(&other->_impl_.data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CollectionData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_mydata_2eproto_getter, &descriptor_table_mydata_2eproto_once,
      file_level_metadata_mydata_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SensorData*
Arena::CreateMaybeMessage< ::SensorData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SensorData >(arena);
}
template<> PROTOBUF_NOINLINE ::ChannelData*
Arena::CreateMaybeMessage< ::ChannelData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ChannelData >(arena);
}
template<> PROTOBUF_NOINLINE ::FrameData*
Arena::CreateMaybeMessage< ::FrameData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FrameData >(arena);
}
template<> PROTOBUF_NOINLINE ::CollectionData*
Arena::CreateMaybeMessage< ::CollectionData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CollectionData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>