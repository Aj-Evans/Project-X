#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1379;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.RSA
struct RSA_t983;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1166;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1183;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m7138 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m7139 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___array1, ByteU5BU5D_t515* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t515* PKCS1_I2OSP_m7140 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_OS2IP_m7141 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_RSAEP_m7142 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, ByteU5BU5D_t515* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_RSASP1_m7143 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, ByteU5BU5D_t515* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_RSAVP1_m7144 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, ByteU5BU5D_t515* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_Encrypt_v15_m7145 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, RandomNumberGenerator_t1166 * ___rng, ByteU5BU5D_t515* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS1_Sign_v15_m7146 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, HashAlgorithm_t1183 * ___hash, ByteU5BU5D_t515* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m7147 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, HashAlgorithm_t1183 * ___hash, ByteU5BU5D_t515* ___hashValue, ByteU5BU5D_t515* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m7148 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, HashAlgorithm_t1183 * ___hash, ByteU5BU5D_t515* ___hashValue, ByteU5BU5D_t515* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t515* PKCS1_Encode_v15_m7149 (Object_t * __this /* static, unused */, HashAlgorithm_t1183 * ___hash, ByteU5BU5D_t515* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
