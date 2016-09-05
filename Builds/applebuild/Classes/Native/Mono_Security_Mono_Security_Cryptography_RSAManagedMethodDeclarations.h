#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t1115;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t1161;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
extern "C" void RSAManaged__ctor_m5264 (RSAManaged_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C" void RSAManaged__ctor_m5265 (RSAManaged_t1115 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C" void RSAManaged_Finalize_m5266 (RSAManaged_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C" void RSAManaged_GenerateKeyPair_m5267 (RSAManaged_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C" int32_t RSAManaged_get_KeySize_m5268 (RSAManaged_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C" bool RSAManaged_get_PublicOnly_m4835 (RSAManaged_t1115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t515* RSAManaged_DecryptValue_m5269 (RSAManaged_t1115 * __this, ByteU5BU5D_t515* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t515* RSAManaged_EncryptValue_m5270 (RSAManaged_t1115 * __this, ByteU5BU5D_t515* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C" RSAParameters_t1116  RSAManaged_ExportParameters_m5271 (RSAManaged_t1115 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSAManaged_ImportParameters_m5272 (RSAManaged_t1115 * __this, RSAParameters_t1116  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C" void RSAManaged_Dispose_m5273 (RSAManaged_t1115 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C" String_t* RSAManaged_ToXmlString_m5274 (RSAManaged_t1115 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C" ByteU5BU5D_t515* RSAManaged_GetPaddedValue_m5275 (RSAManaged_t1115 * __this, BigInteger_t1161 * ___value, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
