﻿// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
	class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Message_2eproto {
	static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
	static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
	static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto;
class RequestMsg;
class RequestMsgDefaultTypeInternal;
extern RequestMsgDefaultTypeInternal _RequestMsg_default_instance_;
class RespondMsg;
class RespondMsgDefaultTypeInternal;
extern RespondMsgDefaultTypeInternal _RespondMsg_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::RequestMsg* Arena::CreateMaybeMessage<::RequestMsg>(Arena*);
template<> ::RespondMsg* Arena::CreateMaybeMessage<::RespondMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class RequestMsg :
	public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RequestMsg) */ {
public:
	RequestMsg();
	virtual ~RequestMsg();

	RequestMsg(const RequestMsg& from);
	RequestMsg(RequestMsg&& from) noexcept
		: RequestMsg() {
		*this = ::std::move(from);
	}

	inline RequestMsg& operator=(const RequestMsg& from) {
		CopyFrom(from);
		return *this;
	}
	inline RequestMsg& operator=(RequestMsg&& from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		}
		else {
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
	static const RequestMsg& default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const RequestMsg* internal_default_instance() {
		return reinterpret_cast<const RequestMsg*>(
			&_RequestMsg_default_instance_);
	}
	static constexpr int kIndexInFileMessages =
		0;

	void Swap(RequestMsg* other);
	friend void swap(RequestMsg& a, RequestMsg& b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline RequestMsg* New() const final {
		return CreateMaybeMessage<RequestMsg>(nullptr);
	}

	RequestMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
		return CreateMaybeMessage<RequestMsg>(arena);
	}
	void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
	void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
	void CopyFrom(const RequestMsg& from);
	void MergeFrom(const RequestMsg& from);
	PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
	bool IsInitialized() const final;

	size_t ByteSizeLong() const final;
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
	const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
#else
	bool MergePartialFromCodedStream(
		::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
	void SerializeWithCachedSizes(
		::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
	::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
		::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
	int GetCachedSize() const final { return _cached_size_.Get(); }

private:
	inline void SharedCtor();
	inline void SharedDtor();
	void SetCachedSize(int size) const final;
	void InternalSwap(RequestMsg* other);
	friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
	static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
		return "RequestMsg";
	}
private:
	inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
		return nullptr;
	}
	inline void* MaybeArenaPtr() const {
		return nullptr;
	}
public:

	::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
private:
	static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
		::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Message_2eproto);
		return ::descriptor_table_Message_2eproto.file_level_metadata[kIndexInFileMessages];
	}

public:

	// nested types ----------------------------------------------------

	// accessors -------------------------------------------------------

	// bytes clientId = 2;
	void clear_clientid();
	static const int kClientIdFieldNumber = 2;
	const std::string& clientid() const;
	void set_clientid(const std::string& value);
	void set_clientid(std::string&& value);
	void set_clientid(const char* value);
	void set_clientid(const void* value, size_t size);
	std::string* mutable_clientid();
	std::string* release_clientid();
	void set_allocated_clientid(std::string* clientid);

	// bytes serverId = 3;
	void clear_serverid();
	static const int kServerIdFieldNumber = 3;
	const std::string& serverid() const;
	void set_serverid(const std::string& value);
	void set_serverid(std::string&& value);
	void set_serverid(const char* value);
	void set_serverid(const void* value, size_t size);
	std::string* mutable_serverid();
	std::string* release_serverid();
	void set_allocated_serverid(std::string* serverid);

	// bytes sign = 4;
	void clear_sign();
	static const int kSignFieldNumber = 4;
	const std::string& sign() const;
	void set_sign(const std::string& value);
	void set_sign(std::string&& value);
	void set_sign(const char* value);
	void set_sign(const void* value, size_t size);
	std::string* mutable_sign();
	std::string* release_sign();
	void set_allocated_sign(std::string* sign);

	// bytes data = 5;
	void clear_data();
	static const int kDataFieldNumber = 5;
	const std::string& data() const;
	void set_data(const std::string& value);
	void set_data(std::string&& value);
	void set_data(const char* value);
	void set_data(const void* value, size_t size);
	std::string* mutable_data();
	std::string* release_data();
	void set_allocated_data(std::string* data);

	// int32 cmdType = 1;
	void clear_cmdtype();
	static const int kCmdTypeFieldNumber = 1;
	::PROTOBUF_NAMESPACE_ID::int32 cmdtype() const;
	void set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value);

	// @@protoc_insertion_point(class_scope:RequestMsg)
private:
	class HasBitSetters;

	::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientid_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serverid_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sign_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
	::PROTOBUF_NAMESPACE_ID::int32 cmdtype_;
	mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
	friend struct ::TableStruct_Message_2eproto;
};
// -------------------------------------------------------------------

class RespondMsg :
	public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RespondMsg) */ {
public:
	RespondMsg();
	virtual ~RespondMsg();

	RespondMsg(const RespondMsg& from);
	RespondMsg(RespondMsg&& from) noexcept
		: RespondMsg() {
		*this = ::std::move(from);
	}

	inline RespondMsg& operator=(const RespondMsg& from) {
		CopyFrom(from);
		return *this;
	}
	inline RespondMsg& operator=(RespondMsg&& from) noexcept {
		if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
			if (this != &from) InternalSwap(&from);
		}
		else {
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
	static const RespondMsg& default_instance();

	static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
	static inline const RespondMsg* internal_default_instance() {
		return reinterpret_cast<const RespondMsg*>(
			&_RespondMsg_default_instance_);
	}
	static constexpr int kIndexInFileMessages =
		1;

	void Swap(RespondMsg* other);
	friend void swap(RespondMsg& a, RespondMsg& b) {
		a.Swap(&b);
	}

	// implements Message ----------------------------------------------

	inline RespondMsg* New() const final {
		return CreateMaybeMessage<RespondMsg>(nullptr);
	}

	RespondMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
		return CreateMaybeMessage<RespondMsg>(arena);
	}
	void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
	void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
	void CopyFrom(const RespondMsg& from);
	void MergeFrom(const RespondMsg& from);
	PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
	bool IsInitialized() const final;

	size_t ByteSizeLong() const final;
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
	const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
#else
	bool MergePartialFromCodedStream(
		::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
	void SerializeWithCachedSizes(
		::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
	::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
		::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
	int GetCachedSize() const final { return _cached_size_.Get(); }

private:
	inline void SharedCtor();
	inline void SharedDtor();
	void SetCachedSize(int size) const final;
	void InternalSwap(RespondMsg* other);
	friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
	static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
		return "RespondMsg";
	}
private:
	inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
		return nullptr;
	}
	inline void* MaybeArenaPtr() const {
		return nullptr;
	}
public:

	::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
private:
	static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
		::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Message_2eproto);
		return ::descriptor_table_Message_2eproto.file_level_metadata[kIndexInFileMessages];
	}

public:

	// nested types ----------------------------------------------------

	// accessors -------------------------------------------------------

	// bytes clientId = 3;
	void clear_clientid();
	static const int kClientIdFieldNumber = 3;
	const std::string& clientid() const;
	void set_clientid(const std::string& value);
	void set_clientid(std::string&& value);
	void set_clientid(const char* value);
	void set_clientid(const void* value, size_t size);
	std::string* mutable_clientid();
	std::string* release_clientid();
	void set_allocated_clientid(std::string* clientid);

	// bytes serverId = 4;
	void clear_serverid();
	static const int kServerIdFieldNumber = 4;
	const std::string& serverid() const;
	void set_serverid(const std::string& value);
	void set_serverid(std::string&& value);
	void set_serverid(const char* value);
	void set_serverid(const void* value, size_t size);
	std::string* mutable_serverid();
	std::string* release_serverid();
	void set_allocated_serverid(std::string* serverid);

	// bytes data = 5;
	void clear_data();
	static const int kDataFieldNumber = 5;
	const std::string& data() const;
	void set_data(const std::string& value);
	void set_data(std::string&& value);
	void set_data(const char* value);
	void set_data(const void* value, size_t size);
	std::string* mutable_data();
	std::string* release_data();
	void set_allocated_data(std::string* data);

	// bool status = 1;
	void clear_status();
	static const int kStatusFieldNumber = 1;
	bool status() const;
	void set_status(bool value);

	// int32 seckeyid = 2;
	void clear_seckeyid();
	static const int kSeckeyidFieldNumber = 2;
	::PROTOBUF_NAMESPACE_ID::int32 seckeyid() const;
	void set_seckeyid(::PROTOBUF_NAMESPACE_ID::int32 value);

	// @@protoc_insertion_point(class_scope:RespondMsg)
private:
	class HasBitSetters;

	::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientid_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serverid_;
	::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
	bool status_;
	::PROTOBUF_NAMESPACE_ID::int32 seckeyid_;
	mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
	friend struct ::TableStruct_Message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RequestMsg

// int32 cmdType = 1;
inline void RequestMsg::clear_cmdtype() {
	cmdtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RequestMsg::cmdtype() const {
	// @@protoc_insertion_point(field_get:RequestMsg.cmdType)
	return cmdtype_;
}
inline void RequestMsg::set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value) {

	cmdtype_ = value;
	// @@protoc_insertion_point(field_set:RequestMsg.cmdType)
}

// bytes clientId = 2;
inline void RequestMsg::clear_clientid() {
	clientid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RequestMsg::clientid() const {
	// @@protoc_insertion_point(field_get:RequestMsg.clientId)
	return clientid_.GetNoArena();
}
inline void RequestMsg::set_clientid(const std::string& value) {

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RequestMsg.clientId)
}
inline void RequestMsg::set_clientid(std::string&& value) {

	clientid_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RequestMsg.clientId)
}
inline void RequestMsg::set_clientid(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RequestMsg.clientId)
}
inline void RequestMsg::set_clientid(const void* value, size_t size) {

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RequestMsg.clientId)
}
inline std::string* RequestMsg::mutable_clientid() {

	// @@protoc_insertion_point(field_mutable:RequestMsg.clientId)
	return clientid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RequestMsg::release_clientid() {
	// @@protoc_insertion_point(field_release:RequestMsg.clientId)

	return clientid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMsg::set_allocated_clientid(std::string* clientid) {
	if (clientid != nullptr) {

	}
	else {

	}
	clientid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientid);
	// @@protoc_insertion_point(field_set_allocated:RequestMsg.clientId)
}

// bytes serverId = 3;
inline void RequestMsg::clear_serverid() {
	serverid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RequestMsg::serverid() const {
	// @@protoc_insertion_point(field_get:RequestMsg.serverId)
	return serverid_.GetNoArena();
}
inline void RequestMsg::set_serverid(const std::string& value) {

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RequestMsg.serverId)
}
inline void RequestMsg::set_serverid(std::string&& value) {

	serverid_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RequestMsg.serverId)
}
inline void RequestMsg::set_serverid(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RequestMsg.serverId)
}
inline void RequestMsg::set_serverid(const void* value, size_t size) {

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RequestMsg.serverId)
}
inline std::string* RequestMsg::mutable_serverid() {

	// @@protoc_insertion_point(field_mutable:RequestMsg.serverId)
	return serverid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RequestMsg::release_serverid() {
	// @@protoc_insertion_point(field_release:RequestMsg.serverId)

	return serverid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMsg::set_allocated_serverid(std::string* serverid) {
	if (serverid != nullptr) {

	}
	else {

	}
	serverid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serverid);
	// @@protoc_insertion_point(field_set_allocated:RequestMsg.serverId)
}

// bytes sign = 4;
inline void RequestMsg::clear_sign() {
	sign_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RequestMsg::sign() const {
	// @@protoc_insertion_point(field_get:RequestMsg.sign)
	return sign_.GetNoArena();
}
inline void RequestMsg::set_sign(const std::string& value) {

	sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RequestMsg.sign)
}
inline void RequestMsg::set_sign(std::string&& value) {

	sign_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RequestMsg.sign)
}
inline void RequestMsg::set_sign(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RequestMsg.sign)
}
inline void RequestMsg::set_sign(const void* value, size_t size) {

	sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RequestMsg.sign)
}
inline std::string* RequestMsg::mutable_sign() {

	// @@protoc_insertion_point(field_mutable:RequestMsg.sign)
	return sign_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RequestMsg::release_sign() {
	// @@protoc_insertion_point(field_release:RequestMsg.sign)

	return sign_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMsg::set_allocated_sign(std::string* sign) {
	if (sign != nullptr) {

	}
	else {

	}
	sign_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sign);
	// @@protoc_insertion_point(field_set_allocated:RequestMsg.sign)
}

// bytes data = 5;
inline void RequestMsg::clear_data() {
	data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RequestMsg::data() const {
	// @@protoc_insertion_point(field_get:RequestMsg.data)
	return data_.GetNoArena();
}
inline void RequestMsg::set_data(const std::string& value) {

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RequestMsg.data)
}
inline void RequestMsg::set_data(std::string&& value) {

	data_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RequestMsg.data)
}
inline void RequestMsg::set_data(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RequestMsg.data)
}
inline void RequestMsg::set_data(const void* value, size_t size) {

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RequestMsg.data)
}
inline std::string* RequestMsg::mutable_data() {

	// @@protoc_insertion_point(field_mutable:RequestMsg.data)
	return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RequestMsg::release_data() {
	// @@protoc_insertion_point(field_release:RequestMsg.data)

	return data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMsg::set_allocated_data(std::string* data) {
	if (data != nullptr) {

	}
	else {

	}
	data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
	// @@protoc_insertion_point(field_set_allocated:RequestMsg.data)
}

// -------------------------------------------------------------------

// RespondMsg

// bool status = 1;
inline void RespondMsg::clear_status() {
	status_ = false;
}
inline bool RespondMsg::status() const {
	// @@protoc_insertion_point(field_get:RespondMsg.status)
	return status_;
}
inline void RespondMsg::set_status(bool value) {

	status_ = value;
	// @@protoc_insertion_point(field_set:RespondMsg.status)
}

// int32 seckeyid = 2;
inline void RespondMsg::clear_seckeyid() {
	seckeyid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RespondMsg::seckeyid() const {
	// @@protoc_insertion_point(field_get:RespondMsg.seckeyid)
	return seckeyid_;
}
inline void RespondMsg::set_seckeyid(::PROTOBUF_NAMESPACE_ID::int32 value) {

	seckeyid_ = value;
	// @@protoc_insertion_point(field_set:RespondMsg.seckeyid)
}

// bytes clientId = 3;
inline void RespondMsg::clear_clientid() {
	clientid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RespondMsg::clientid() const {
	// @@protoc_insertion_point(field_get:RespondMsg.clientId)
	return clientid_.GetNoArena();
}
inline void RespondMsg::set_clientid(const std::string& value) {

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RespondMsg.clientId)
}
inline void RespondMsg::set_clientid(std::string&& value) {

	clientid_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RespondMsg.clientId)
}
inline void RespondMsg::set_clientid(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RespondMsg.clientId)
}
inline void RespondMsg::set_clientid(const void* value, size_t size) {

	clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RespondMsg.clientId)
}
inline std::string* RespondMsg::mutable_clientid() {

	// @@protoc_insertion_point(field_mutable:RespondMsg.clientId)
	return clientid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RespondMsg::release_clientid() {
	// @@protoc_insertion_point(field_release:RespondMsg.clientId)

	return clientid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RespondMsg::set_allocated_clientid(std::string* clientid) {
	if (clientid != nullptr) {

	}
	else {

	}
	clientid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientid);
	// @@protoc_insertion_point(field_set_allocated:RespondMsg.clientId)
}

// bytes serverId = 4;
inline void RespondMsg::clear_serverid() {
	serverid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RespondMsg::serverid() const {
	// @@protoc_insertion_point(field_get:RespondMsg.serverId)
	return serverid_.GetNoArena();
}
inline void RespondMsg::set_serverid(const std::string& value) {

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RespondMsg.serverId)
}
inline void RespondMsg::set_serverid(std::string&& value) {

	serverid_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RespondMsg.serverId)
}
inline void RespondMsg::set_serverid(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RespondMsg.serverId)
}
inline void RespondMsg::set_serverid(const void* value, size_t size) {

	serverid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RespondMsg.serverId)
}
inline std::string* RespondMsg::mutable_serverid() {

	// @@protoc_insertion_point(field_mutable:RespondMsg.serverId)
	return serverid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RespondMsg::release_serverid() {
	// @@protoc_insertion_point(field_release:RespondMsg.serverId)

	return serverid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RespondMsg::set_allocated_serverid(std::string* serverid) {
	if (serverid != nullptr) {

	}
	else {

	}
	serverid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serverid);
	// @@protoc_insertion_point(field_set_allocated:RespondMsg.serverId)
}

// bytes data = 5;
inline void RespondMsg::clear_data() {
	data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RespondMsg::data() const {
	// @@protoc_insertion_point(field_get:RespondMsg.data)
	return data_.GetNoArena();
}
inline void RespondMsg::set_data(const std::string& value) {

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
	// @@protoc_insertion_point(field_set:RespondMsg.data)
}
inline void RespondMsg::set_data(std::string&& value) {

	data_.SetNoArena(
		&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
	// @@protoc_insertion_point(field_set_rvalue:RespondMsg.data)
}
inline void RespondMsg::set_data(const char* value) {
	GOOGLE_DCHECK(value != nullptr);

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
	// @@protoc_insertion_point(field_set_char:RespondMsg.data)
}
inline void RespondMsg::set_data(const void* value, size_t size) {

	data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
		::std::string(reinterpret_cast<const char*>(value), size));
	// @@protoc_insertion_point(field_set_pointer:RespondMsg.data)
}
inline std::string* RespondMsg::mutable_data() {

	// @@protoc_insertion_point(field_mutable:RespondMsg.data)
	return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RespondMsg::release_data() {
	// @@protoc_insertion_point(field_release:RespondMsg.data)

	return data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RespondMsg::set_allocated_data(std::string* data) {
	if (data != nullptr) {

	}
	else {

	}
	data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
	// @@protoc_insertion_point(field_set_allocated:RespondMsg.data)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Message_2eproto
