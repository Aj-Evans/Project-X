#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1369;
// Mono.Math.BigInteger
struct BigInteger_t1364;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6997 (ModulusRing_t1369 * __this, BigInteger_t1364 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6998 (ModulusRing_t1369 * __this, BigInteger_t1364 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * ModulusRing_Multiply_m6999 (ModulusRing_t1369 * __this, BigInteger_t1364 * ___a, BigInteger_t1364 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * ModulusRing_Difference_m7000 (ModulusRing_t1369 * __this, BigInteger_t1364 * ___a, BigInteger_t1364 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * ModulusRing_Pow_m7001 (ModulusRing_t1369 * __this, BigInteger_t1364 * ___a, BigInteger_t1364 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1364 * ModulusRing_Pow_m7002 (ModulusRing_t1369 * __this, uint32_t ___b, BigInteger_t1364 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
