#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t1373;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1166;
// System.Byte[]
struct ByteU5BU5D_t515;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t1166 * KeyBuilder_get_Rng_m7076 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t515* KeyBuilder_Key_m7077 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t515* KeyBuilder_IV_m7078 (Object_t * __this /* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
