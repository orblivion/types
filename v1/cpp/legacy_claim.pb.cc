// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: legacy_claim.proto

#include "legacy_claim.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_certificate_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_certificate_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Certificate;
}  // namespace protobuf_certificate_2eproto
namespace protobuf_signature_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_signature_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Signature;
}  // namespace protobuf_signature_2eproto
namespace protobuf_stream_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_stream_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Stream;
}  // namespace protobuf_stream_2eproto
namespace legacy_pb {
class ClaimDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Claim>
      _instance;
} _Claim_default_instance_;
}  // namespace legacy_pb
namespace protobuf_legacy_5fclaim_2eproto {
static void InitDefaultsClaim() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::legacy_pb::_Claim_default_instance_;
    new (ptr) ::legacy_pb::Claim();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::legacy_pb::Claim::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_Claim =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsClaim}, {
      &protobuf_stream_2eproto::scc_info_Stream.base,
      &protobuf_certificate_2eproto::scc_info_Certificate.base,
      &protobuf_signature_2eproto::scc_info_Signature.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Claim.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, claimtype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, stream_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, certificate_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::legacy_pb::Claim, publishersignature_),
  3,
  4,
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::legacy_pb::Claim)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::legacy_pb::_Claim_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "legacy_claim.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022legacy_claim.proto\022\tlegacy_pb\032\014stream."
      "proto\032\021certificate.proto\032\017signature.prot"
      "o\"\331\002\n\005Claim\022)\n\007version\030\001 \002(\0162\030.legacy_pb"
      ".Claim.Version\022-\n\tclaimType\030\002 \002(\0162\032.lega"
      "cy_pb.Claim.ClaimType\022!\n\006stream\030\003 \001(\0132\021."
      "legacy_pb.Stream\022+\n\013certificate\030\004 \001(\0132\026."
      "legacy_pb.Certificate\0220\n\022publisherSignat"
      "ure\030\005 \001(\0132\024.legacy_pb.Signature\"*\n\007Versi"
      "on\022\023\n\017UNKNOWN_VERSION\020\000\022\n\n\006_0_0_1\020\001\"H\n\tC"
      "laimType\022\026\n\022UNKNOWN_CLAIM_TYPE\020\000\022\016\n\nstre"
      "amType\020\001\022\023\n\017certificateType\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 429);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "legacy_claim.proto", &protobuf_RegisterTypes);
  ::protobuf_stream_2eproto::AddDescriptors();
  ::protobuf_certificate_2eproto::AddDescriptors();
  ::protobuf_signature_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_legacy_5fclaim_2eproto
namespace legacy_pb {
const ::google::protobuf::EnumDescriptor* Claim_Version_descriptor() {
  protobuf_legacy_5fclaim_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_legacy_5fclaim_2eproto::file_level_enum_descriptors[0];
}
bool Claim_Version_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Claim_Version Claim::UNKNOWN_VERSION;
const Claim_Version Claim::_0_0_1;
const Claim_Version Claim::Version_MIN;
const Claim_Version Claim::Version_MAX;
const int Claim::Version_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* Claim_ClaimType_descriptor() {
  protobuf_legacy_5fclaim_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_legacy_5fclaim_2eproto::file_level_enum_descriptors[1];
}
bool Claim_ClaimType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Claim_ClaimType Claim::UNKNOWN_CLAIM_TYPE;
const Claim_ClaimType Claim::streamType;
const Claim_ClaimType Claim::certificateType;
const Claim_ClaimType Claim::ClaimType_MIN;
const Claim_ClaimType Claim::ClaimType_MAX;
const int Claim::ClaimType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Claim::InitAsDefaultInstance() {
  ::legacy_pb::_Claim_default_instance_._instance.get_mutable()->stream_ = const_cast< ::legacy_pb::Stream*>(
      ::legacy_pb::Stream::internal_default_instance());
  ::legacy_pb::_Claim_default_instance_._instance.get_mutable()->certificate_ = const_cast< ::legacy_pb::Certificate*>(
      ::legacy_pb::Certificate::internal_default_instance());
  ::legacy_pb::_Claim_default_instance_._instance.get_mutable()->publishersignature_ = const_cast< ::legacy_pb::Signature*>(
      ::legacy_pb::Signature::internal_default_instance());
}
void Claim::clear_stream() {
  if (stream_ != NULL) stream_->Clear();
  clear_has_stream();
}
void Claim::clear_certificate() {
  if (certificate_ != NULL) certificate_->Clear();
  clear_has_certificate();
}
void Claim::clear_publishersignature() {
  if (publishersignature_ != NULL) publishersignature_->Clear();
  clear_has_publishersignature();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Claim::kVersionFieldNumber;
const int Claim::kClaimTypeFieldNumber;
const int Claim::kStreamFieldNumber;
const int Claim::kCertificateFieldNumber;
const int Claim::kPublisherSignatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Claim::Claim()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_legacy_5fclaim_2eproto::scc_info_Claim.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:legacy_pb.Claim)
}
Claim::Claim(const Claim& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_stream()) {
    stream_ = new ::legacy_pb::Stream(*from.stream_);
  } else {
    stream_ = NULL;
  }
  if (from.has_certificate()) {
    certificate_ = new ::legacy_pb::Certificate(*from.certificate_);
  } else {
    certificate_ = NULL;
  }
  if (from.has_publishersignature()) {
    publishersignature_ = new ::legacy_pb::Signature(*from.publishersignature_);
  } else {
    publishersignature_ = NULL;
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&claimtype_) -
    reinterpret_cast<char*>(&version_)) + sizeof(claimtype_));
  // @@protoc_insertion_point(copy_constructor:legacy_pb.Claim)
}

void Claim::SharedCtor() {
  ::memset(&stream_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&claimtype_) -
      reinterpret_cast<char*>(&stream_)) + sizeof(claimtype_));
}

Claim::~Claim() {
  // @@protoc_insertion_point(destructor:legacy_pb.Claim)
  SharedDtor();
}

void Claim::SharedDtor() {
  if (this != internal_default_instance()) delete stream_;
  if (this != internal_default_instance()) delete certificate_;
  if (this != internal_default_instance()) delete publishersignature_;
}

void Claim::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Claim::descriptor() {
  ::protobuf_legacy_5fclaim_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_legacy_5fclaim_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Claim& Claim::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_legacy_5fclaim_2eproto::scc_info_Claim.base);
  return *internal_default_instance();
}


void Claim::Clear() {
// @@protoc_insertion_point(message_clear_start:legacy_pb.Claim)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(stream_ != NULL);
      stream_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(certificate_ != NULL);
      certificate_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(publishersignature_ != NULL);
      publishersignature_->Clear();
    }
  }
  if (cached_has_bits & 24u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&claimtype_) -
        reinterpret_cast<char*>(&version_)) + sizeof(claimtype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Claim::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:legacy_pb.Claim)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .legacy_pb.Claim.Version version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::legacy_pb::Claim_Version_IsValid(value)) {
            set_version(static_cast< ::legacy_pb::Claim_Version >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .legacy_pb.Claim.ClaimType claimType = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::legacy_pb::Claim_ClaimType_IsValid(value)) {
            set_claimtype(static_cast< ::legacy_pb::Claim_ClaimType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .legacy_pb.Stream stream = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_stream()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .legacy_pb.Certificate certificate = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_certificate()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .legacy_pb.Signature publisherSignature = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_publishersignature()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:legacy_pb.Claim)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:legacy_pb.Claim)
  return false;
#undef DO_
}

void Claim::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:legacy_pb.Claim)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .legacy_pb.Claim.Version version = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->version(), output);
  }

  // required .legacy_pb.Claim.ClaimType claimType = 2;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->claimtype(), output);
  }

  // optional .legacy_pb.Stream stream = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_stream(), output);
  }

  // optional .legacy_pb.Certificate certificate = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_certificate(), output);
  }

  // optional .legacy_pb.Signature publisherSignature = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_publishersignature(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:legacy_pb.Claim)
}

::google::protobuf::uint8* Claim::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:legacy_pb.Claim)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .legacy_pb.Claim.Version version = 1;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->version(), target);
  }

  // required .legacy_pb.Claim.ClaimType claimType = 2;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->claimtype(), target);
  }

  // optional .legacy_pb.Stream stream = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_stream(), deterministic, target);
  }

  // optional .legacy_pb.Certificate certificate = 4;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_certificate(), deterministic, target);
  }

  // optional .legacy_pb.Signature publisherSignature = 5;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_publishersignature(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:legacy_pb.Claim)
  return target;
}

size_t Claim::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:legacy_pb.Claim)
  size_t total_size = 0;

  if (has_version()) {
    // required .legacy_pb.Claim.Version version = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->version());
  }

  if (has_claimtype()) {
    // required .legacy_pb.Claim.ClaimType claimType = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->claimtype());
  }

  return total_size;
}
size_t Claim::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:legacy_pb.Claim)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000018) ^ 0x00000018) == 0) {  // All required fields are present.
    // required .legacy_pb.Claim.Version version = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->version());

    // required .legacy_pb.Claim.ClaimType claimType = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->claimtype());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .legacy_pb.Stream stream = 3;
    if (has_stream()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *stream_);
    }

    // optional .legacy_pb.Certificate certificate = 4;
    if (has_certificate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *certificate_);
    }

    // optional .legacy_pb.Signature publisherSignature = 5;
    if (has_publishersignature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *publishersignature_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Claim::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:legacy_pb.Claim)
  GOOGLE_DCHECK_NE(&from, this);
  const Claim* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Claim>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:legacy_pb.Claim)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:legacy_pb.Claim)
    MergeFrom(*source);
  }
}

void Claim::MergeFrom(const Claim& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:legacy_pb.Claim)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_stream()->::legacy_pb::Stream::MergeFrom(from.stream());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_certificate()->::legacy_pb::Certificate::MergeFrom(from.certificate());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_publishersignature()->::legacy_pb::Signature::MergeFrom(from.publishersignature());
    }
    if (cached_has_bits & 0x00000008u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000010u) {
      claimtype_ = from.claimtype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Claim::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:legacy_pb.Claim)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Claim::CopyFrom(const Claim& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:legacy_pb.Claim)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Claim::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000018) != 0x00000018) return false;
  if (has_stream()) {
    if (!this->stream_->IsInitialized()) return false;
  }
  if (has_certificate()) {
    if (!this->certificate_->IsInitialized()) return false;
  }
  if (has_publishersignature()) {
    if (!this->publishersignature_->IsInitialized()) return false;
  }
  return true;
}

void Claim::Swap(Claim* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Claim::InternalSwap(Claim* other) {
  using std::swap;
  swap(stream_, other->stream_);
  swap(certificate_, other->certificate_);
  swap(publishersignature_, other->publishersignature_);
  swap(version_, other->version_);
  swap(claimtype_, other->claimtype_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Claim::GetMetadata() const {
  protobuf_legacy_5fclaim_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_legacy_5fclaim_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace legacy_pb
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::legacy_pb::Claim* Arena::CreateMaybeMessage< ::legacy_pb::Claim >(Arena* arena) {
  return Arena::CreateInternal< ::legacy_pb::Claim >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)