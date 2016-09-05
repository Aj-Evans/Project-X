#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t1364;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1166;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C" void BigInteger__ctor_m7019 (BigInteger_t1364 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C" void BigInteger__ctor_m7020 (BigInteger_t1364 * __this, BigInteger_t1364 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C" void BigInteger__ctor_m7021 (BigInteger_t1364 * __this, BigInteger_t1364 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m7022 (BigInteger_t1364 * __this, ByteU5BU5D_t515* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C" void BigInteger__ctor_m7023 (BigInteger_t1364 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m7024 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C" RandomNumberGenerator_t1166 * BigInteger_get_Rng_m7025 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C" BigInteger_t1364 * BigInteger_GenerateRandom_m7026 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t1166 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t1364 * BigInteger_GenerateRandom_m7027 (Object_t * __this /* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C" void BigInteger_Randomize_m7028 (BigInteger_t1364 * __this, RandomNumberGenerator_t1166 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C" void BigInteger_Randomize_m7029 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C" int32_t BigInteger_BitCount_m7030 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C" bool BigInteger_TestBit_m7031 (BigInteger_t1364 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C" bool BigInteger_TestBit_m7032 (BigInteger_t1364 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C" void BigInteger_SetBit_m7033 (BigInteger_t1364 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C" void BigInteger_SetBit_m7034 (BigInteger_t1364 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C" int32_t BigInteger_LowestSetBit_m7035 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t515* BigInteger_GetBytes_m7036 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C" String_t* BigInteger_ToString_m7037 (BigInteger_t1364 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C" String_t* BigInteger_ToString_m7038 (BigInteger_t1364 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C" void BigInteger_Normalize_m7039 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C" void BigInteger_Clear_m7040 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m7041 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m7042 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m7043 (BigInteger_t1364 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_ModInverse_m7044 (BigInteger_t1364 * __this, BigInteger_t1364 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_ModPow_m7045 (BigInteger_t1364 * __this, BigInteger_t1364 * ___exp, BigInteger_t1364 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C" bool BigInteger_IsProbablePrime_m7046 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C" BigInteger_t1364 * BigInteger_GeneratePseudoPrime_m7047 (Object_t * __this /* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C" void BigInteger_Incr2_m7048 (BigInteger_t1364 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C" BigInteger_t1364 * BigInteger_op_Implicit_m7049 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t1364 * BigInteger_op_Implicit_m7050 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_op_Addition_m7051 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_op_Subtraction_m7052 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t BigInteger_op_Modulus_m7053 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_op_Modulus_m7054 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_op_Division_m7055 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * BigInteger_op_Multiply_m7056 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1364 * BigInteger_op_Multiply_m7057 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1364 * BigInteger_op_LeftShift_m7058 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1364 * BigInteger_op_RightShift_m7059 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Equality_m7060 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C" bool BigInteger_op_Inequality_m7061 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Equality_m7062 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_Inequality_m7063 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m7064 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThan_m7065 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m7066 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" bool BigInteger_op_LessThanOrEqual_m7067 (Object_t * __this /* static, unused */, BigInteger_t1364 * ___bi1, BigInteger_t1364 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
