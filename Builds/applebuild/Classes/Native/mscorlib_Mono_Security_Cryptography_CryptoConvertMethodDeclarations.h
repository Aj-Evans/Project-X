#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t1372;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.RSA
struct RSA_t983;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m7068 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m7069 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t515* CryptoConvert_GetBytesLE_m7070 (Object_t * __this /* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t515* CryptoConvert_ToCapiPrivateKeyBlob_m7071 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t983 * CryptoConvert_FromCapiPublicKeyBlob_m7072 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___blob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t983 * CryptoConvert_FromCapiPublicKeyBlob_m7073 (Object_t * __this /* static, unused */, ByteU5BU5D_t515* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t515* CryptoConvert_ToCapiPublicKeyBlob_m7074 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t515* CryptoConvert_ToCapiKeyBlob_m7075 (Object_t * __this /* static, unused */, RSA_t983 * ___rsa, bool ___includePrivateKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
