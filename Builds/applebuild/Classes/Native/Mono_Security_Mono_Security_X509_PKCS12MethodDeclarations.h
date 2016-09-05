#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12
struct PKCS12_t1122;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t936;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1124;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1190;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1175;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1186;
// Mono.Security.ASN1
struct ASN1_t992;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m5290 (PKCS12_t1122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m4883 (PKCS12_t1122 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m4884 (PKCS12_t1122 * __this, ByteU5BU5D_t515* ___data, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m5291 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m5292 (PKCS12_t1122 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m5293 (PKCS12_t1122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m5294 (PKCS12_t1122 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t936 * PKCS12_get_Keys_m4888 (PKCS12_t1122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1124 * PKCS12_get_Certificates_m4885 (PKCS12_t1122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m5295 (PKCS12_t1122 * __this, ByteU5BU5D_t515* ___expected, ByteU5BU5D_t515* ___actual, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1190 * PKCS12_GetSymmetricAlgorithm_m5296 (PKCS12_t1122 * __this, String_t* ___algorithmOid, ByteU5BU5D_t515* ___salt, int32_t ___iterationCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS12_Decrypt_m5297 (PKCS12_t1122 * __this, String_t* ___algorithmOid, ByteU5BU5D_t515* ___salt, int32_t ___iterationCount, ByteU5BU5D_t515* ___encryptedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t515* PKCS12_Decrypt_m5298 (PKCS12_t1122 * __this, EncryptedData_t1175 * ___ed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1118  PKCS12_GetExistingParameters_m5299 (PKCS12_t1122 * __this, bool* ___found, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m5300 (PKCS12_t1122 * __this, PrivateKeyInfo_t1186 * ___pki, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m5301 (PKCS12_t1122 * __this, ASN1_t992 * ___safeBag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t515* PKCS12_MAC_m5302 (PKCS12_t1122 * __this, ByteU5BU5D_t515* ___password, ByteU5BU5D_t515* ___salt, int32_t ___iterations, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m5303 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
