﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t303;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t142;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m1514(__this, ___object, ___method, method) (( void (*) (Action_1_t303 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m14229_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m3438(__this, ___obj, method) (( void (*) (Action_1_t303 *, Font_t142 *, MethodInfo*))Action_1_Invoke_m14230_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m14231(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t303 *, Font_t142 *, AsyncCallback_t189 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m14232_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m14233(__this, ___result, method) (( void (*) (Action_1_t303 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m14234_gshared)(__this, ___result, method)