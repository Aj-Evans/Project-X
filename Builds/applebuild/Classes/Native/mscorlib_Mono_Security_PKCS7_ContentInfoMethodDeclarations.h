﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1399;
// Mono.Security.ASN1
struct ASN1_t1386;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t515;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m7303 (ContentInfo_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m7304 (ContentInfo_t1399 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m7305 (ContentInfo_t1399 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m7306 (ContentInfo_t1399 * __this, ASN1_t1386 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t1386 * ContentInfo_get_Content_m7307 (ContentInfo_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m7308 (ContentInfo_t1399 * __this, ASN1_t1386 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m7309 (ContentInfo_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;