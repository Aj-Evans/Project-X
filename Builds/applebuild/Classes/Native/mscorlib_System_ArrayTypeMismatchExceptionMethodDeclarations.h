#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t1777;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t665;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArrayTypeMismatchException::.ctor()
extern "C" void ArrayTypeMismatchException__ctor_m9676 (ArrayTypeMismatchException_t1777 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.String)
extern "C" void ArrayTypeMismatchException__ctor_m9677 (ArrayTypeMismatchException_t1777 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArrayTypeMismatchException__ctor_m9678 (ArrayTypeMismatchException_t1777 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
