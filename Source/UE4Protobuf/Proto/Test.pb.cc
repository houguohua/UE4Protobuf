// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class SearchRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SearchRequest> {
} _SearchRequest_default_instance_;

namespace protobuf_Test_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, query_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, page_number_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, result_per_page_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(SearchRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SearchRequest_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Test.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _SearchRequest_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SearchRequest_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\nTest.proto\"L\n\rSearchRequest\022\r\n\005query\030\001"
      " \001(\t\022\023\n\013page_number\030\002 \001(\005\022\027\n\017result_per_"
      "page\030\003 \001(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 98);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Test.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_Test_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SearchRequest::kQueryFieldNumber;
const int SearchRequest::kPageNumberFieldNumber;
const int SearchRequest::kResultPerPageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SearchRequest::SearchRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Test_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SearchRequest)
}
SearchRequest::SearchRequest(const SearchRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.query().size() > 0) {
    query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_);
  }
  ::memcpy(&page_number_, &from.page_number_,
    reinterpret_cast<char*>(&result_per_page_) -
    reinterpret_cast<char*>(&page_number_) + sizeof(result_per_page_));
  // @@protoc_insertion_point(copy_constructor:SearchRequest)
}

void SearchRequest::SharedCtor() {
  query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&page_number_, 0, reinterpret_cast<char*>(&result_per_page_) -
    reinterpret_cast<char*>(&page_number_) + sizeof(result_per_page_));
  _cached_size_ = 0;
}

SearchRequest::~SearchRequest() {
  // @@protoc_insertion_point(destructor:SearchRequest)
  SharedDtor();
}

void SearchRequest::SharedDtor() {
  query_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SearchRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchRequest::descriptor() {
  protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Test_2eproto::file_level_metadata[0].descriptor;
}

const SearchRequest& SearchRequest::default_instance() {
  protobuf_Test_2eproto::InitDefaults();
  return *internal_default_instance();
}

SearchRequest* SearchRequest::New(::google::protobuf::Arena* arena) const {
  SearchRequest* n = new SearchRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SearchRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:SearchRequest)
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&page_number_, 0, reinterpret_cast<char*>(&result_per_page_) -
    reinterpret_cast<char*>(&page_number_) + sizeof(result_per_page_));
}

bool SearchRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SearchRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string query = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_query()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->query().data(), this->query().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "SearchRequest.query"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 page_number = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &page_number_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 result_per_page = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_per_page_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SearchRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SearchRequest)
  return false;
#undef DO_
}

void SearchRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SearchRequest)
  // string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SearchRequest.query");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query(), output);
  }

  // int32 page_number = 2;
  if (this->page_number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->page_number(), output);
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->result_per_page(), output);
  }

  // @@protoc_insertion_point(serialize_end:SearchRequest)
}

::google::protobuf::uint8* SearchRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SearchRequest)
  // string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SearchRequest.query");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query(), target);
  }

  // int32 page_number = 2;
  if (this->page_number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->page_number(), target);
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->result_per_page(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:SearchRequest)
  return target;
}

size_t SearchRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SearchRequest)
  size_t total_size = 0;

  // string query = 1;
  if (this->query().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->query());
  }

  // int32 page_number = 2;
  if (this->page_number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->page_number());
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result_per_page());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SearchRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const SearchRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SearchRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SearchRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SearchRequest)
    MergeFrom(*source);
  }
}

void SearchRequest::MergeFrom(const SearchRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SearchRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.query().size() > 0) {

    query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_);
  }
  if (from.page_number() != 0) {
    set_page_number(from.page_number());
  }
  if (from.result_per_page() != 0) {
    set_result_per_page(from.result_per_page());
  }
}

void SearchRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchRequest::CopyFrom(const SearchRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchRequest::IsInitialized() const {
  return true;
}

void SearchRequest::Swap(SearchRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SearchRequest::InternalSwap(SearchRequest* other) {
  query_.Swap(&other->query_);
  std::swap(page_number_, other->page_number_);
  std::swap(result_per_page_, other->result_per_page_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SearchRequest::GetMetadata() const {
  protobuf_Test_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Test_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SearchRequest

// string query = 1;
void SearchRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& SearchRequest::query() const {
  // @@protoc_insertion_point(field_get:SearchRequest.query)
  return query_.GetNoArena();
}
void SearchRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SearchRequest.query)
}
#if LANG_CXX11
void SearchRequest::set_query(::std::string&& value) {
  
  query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SearchRequest.query)
}
#endif
void SearchRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SearchRequest.query)
}
void SearchRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SearchRequest.query)
}
::std::string* SearchRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:SearchRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SearchRequest::release_query() {
  // @@protoc_insertion_point(field_release:SearchRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SearchRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:SearchRequest.query)
}

// int32 page_number = 2;
void SearchRequest::clear_page_number() {
  page_number_ = 0;
}
::google::protobuf::int32 SearchRequest::page_number() const {
  // @@protoc_insertion_point(field_get:SearchRequest.page_number)
  return page_number_;
}
void SearchRequest::set_page_number(::google::protobuf::int32 value) {
  
  page_number_ = value;
  // @@protoc_insertion_point(field_set:SearchRequest.page_number)
}

// int32 result_per_page = 3;
void SearchRequest::clear_result_per_page() {
  result_per_page_ = 0;
}
::google::protobuf::int32 SearchRequest::result_per_page() const {
  // @@protoc_insertion_point(field_get:SearchRequest.result_per_page)
  return result_per_page_;
}
void SearchRequest::set_result_per_page(::google::protobuf::int32 value) {
  
  result_per_page_ = value;
  // @@protoc_insertion_point(field_set:SearchRequest.result_per_page)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)