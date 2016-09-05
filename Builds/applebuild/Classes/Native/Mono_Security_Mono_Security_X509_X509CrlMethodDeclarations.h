#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1004;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1127;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1006;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t981;
// System.Security.Cryptography.DSA
struct DSA_t982;
// System.Security.Cryptography.RSA
struct RSA_t983;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t977;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m5346 (X509Crl_t1004 * __this, ByteU5BU5D_t515* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m5347 (X509Crl_t1004 * __this, ByteU5BU5D_t515* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1127 * X509Crl_get_Extensions_m4916 (X509Crl_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t515* X509Crl_get_Hash_m5348 (X509Crl_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m4924 (X509Crl_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t476  X509Crl_get_NextUpdate_m4922 (X509Crl_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m5349 (X509Crl_t1004 * __this, ByteU5BU5D_t515* ___array1, ByteU5BU5D_t515* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1006 * X509Crl_GetCrlEntry_m4920 (X509Crl_t1004 * __this, X509Certificate_t981 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1006 * X509Crl_GetCrlEntry_m5350 (X509Crl_t1004 * __this, ByteU5BU5D_t515* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m5351 (X509Crl_t1004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m5352 (X509Crl_t1004 * __this, DSA_t982 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m5353 (X509Crl_t1004 * __this, RSA_t983 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m4919 (X509Crl_t1004 * __this, AsymmetricAlgorithm_t977 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
