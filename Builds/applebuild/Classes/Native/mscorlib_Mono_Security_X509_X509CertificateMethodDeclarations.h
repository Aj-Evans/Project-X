#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1394;
// System.Security.Cryptography.DSA
struct DSA_t982;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t515;
// Mono.Security.ASN1
struct ASN1_t1386;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t665;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m7238 (X509Certificate_t1394 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m7239 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m7240 (X509Certificate_t1394 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t515* X509Certificate_GetUnsignedBigInteger_m7241 (X509Certificate_t1394 * __this, ByteU5BU5D_t515* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t982 * X509Certificate_get_DSA_m7242 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m7243 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t515* X509Certificate_get_KeyAlgorithmParameters_m7244 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t515* X509Certificate_get_PublicKey_m7245 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t515* X509Certificate_get_RawData_m7246 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m7247 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t476  X509Certificate_get_ValidFrom_m7248 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t476  X509Certificate_get_ValidUntil_m7249 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1386 * X509Certificate_GetIssuerName_m7250 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1386 * X509Certificate_GetSubjectName_m7251 (X509Certificate_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m7252 (X509Certificate_t1394 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t515* X509Certificate_PEM_m7253 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
