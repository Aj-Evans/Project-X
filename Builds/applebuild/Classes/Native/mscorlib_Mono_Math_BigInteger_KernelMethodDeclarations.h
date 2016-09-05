﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1370;
// Mono.Math.BigInteger
struct BigInteger_t1364;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1371;
// System.UInt32[]
struct UInt32U5BU5D_t1165;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * Kernel_AddSameSign_m7003 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * Kernel_Subtract_m7004 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___big, BigInteger_t1364 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m7005 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___big, BigInteger_t1364 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m7006 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m7007 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m7008 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m7009 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1371* Kernel_DwordDivMod_m7010 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1371* Kernel_multiByteDivide_m7011 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1364 * Kernel_LeftShift_m7012 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1364 * Kernel_RightShift_m7013 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1364 * Kernel_MultiplyByDword_m7014 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m7015 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1165* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1165* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1165* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m7016 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1165* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1165* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1165* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m7017 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * Kernel_modInverse_m7018 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, BigInteger_t1364 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
