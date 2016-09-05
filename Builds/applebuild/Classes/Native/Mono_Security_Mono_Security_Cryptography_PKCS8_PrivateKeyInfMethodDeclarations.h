#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1186;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.RSA
struct RSA_t983;
// System.Security.Cryptography.DSA
struct DSA_t982;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m5241 (PrivateKeyInfo_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m5242 (PrivateKeyInfo_t1186 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t515* PrivateKeyInfo_get_PrivateKey_m5243 (PrivateKeyInfo_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m5244 (PrivateKeyInfo_t1186 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t515* PrivateKeyInfo_RemoveLeadingZero_m5245 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t515* PrivateKeyInfo_Normalize_m5246 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t983 * PrivateKeyInfo_DecodeRSA_m5247 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t982 * PrivateKeyInfo_DecodeDSA_m5248 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___privateKey, DSAParameters_t1118  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
