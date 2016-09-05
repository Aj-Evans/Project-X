#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ApplicationException
struct ApplicationException_t1776;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t665;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m9657 (ApplicationException_t1776 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m9658 (ApplicationException_t1776 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m9659 (ApplicationException_t1776 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
