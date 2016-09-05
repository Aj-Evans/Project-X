#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t1401;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m7314 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t515* StrongName_get_PublicKey_m7315 (StrongName_t1401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t515* StrongName_get_PublicKeyToken_m7316 (StrongName_t1401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m7317 (StrongName_t1401 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
