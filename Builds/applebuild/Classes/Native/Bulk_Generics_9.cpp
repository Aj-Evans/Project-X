#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo UnityEvent_1_t2786_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.String
#include "mscorlib_System_String.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2788_il2cpp_TypeInfo;
extern TypeInfo Byte_t335_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5MethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern Il2CppType Byte_t335_0_0_0;
extern Il2CppType InvokableCall_1_t2788_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3316_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m3321_MethodInfo;
extern MethodInfo Delegate_get_Target_m3605_MethodInfo;
extern MethodInfo Delegate_get_Method_m3604_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m3322_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3324_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m15538_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m15539_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m3323_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m15532_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15538_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m15539_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m15524_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m15524_gshared (UnityEvent_1_t2786 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m15524_init;
	if (!UnityEvent_1__ctor_m15524_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		UnityEvent_1__ctor_m15524_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m3316(__this, /*hidden argument*/&UnityEventBase__ctor_m3316_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m15526_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m15526_gshared (UnityEvent_1_t2786 * __this, UnityAction_1_t2787 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2787 * L_0 = ___call;
		BaseInvokableCall_t674 * L_1 = (( BaseInvokableCall_t674 * (*) (Object_t * /* static, unused */, UnityAction_1_t2787 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m3321(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m3321_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m15528_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m15528_gshared (UnityEvent_1_t2786 * __this, UnityAction_1_t2787 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t2787 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3605(L_0, /*hidden argument*/&Delegate_get_Target_m3605_MethodInfo);
		UnityAction_1_t2787 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m3604(L_2, /*hidden argument*/&Delegate_get_Method_m3604_MethodInfo);
		UnityEventBase_RemoveListener_m3322(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m3322_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m15529_GenericMethod;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m15529_gshared (UnityEvent_1_t2786 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m15529_init;
	if (!UnityEvent_1_FindMethod_Impl_m15529_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		UnityEvent_1_FindMethod_Impl_m15529_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t618* L_2 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m3324(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m3324_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m15530_GenericMethod;
extern "C" BaseInvokableCall_t674 * UnityEvent_1_GetDelegate_m15530_gshared (UnityEvent_1_t2786 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2788 * L_2 = (InvokableCall_1_t2788 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2788 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t674 * UnityEvent_1_GetDelegate_m15532_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2787 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t2787 * L_0 = ___action;
		InvokableCall_1_t2788 * L_1 = (InvokableCall_1_t2788 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2788 *, UnityAction_1_t2787 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m15533_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m15533_gshared (UnityEvent_1_t2786 * __this, uint8_t ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t288* L_0 = (__this->___m_InvokeArray_4);
		uint8_t L_1 = ___arg0;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t288* L_4 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m3323(__this, L_4, /*hidden argument*/&UnityEventBase_Invoke_m3323_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t2787_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m15534_GenericMethod;
extern "C" void UnityAction_1__ctor_m15534_gshared (UnityAction_1_t2787 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m15535_GenericMethod;
extern "C" void UnityAction_1_Invoke_m15535_gshared (UnityAction_1_t2787 * __this, uint8_t ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m15535((UnityAction_1_t2787 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m15536_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m15536_gshared (UnityAction_1_t2787 * __this, uint8_t ___arg0, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m15537_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m15537_gshared (UnityAction_1_t2787 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType UnityAction_1_t2787_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3295_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3606_MethodInfo;
extern MethodInfo Delegate_Combine_m1559_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3294_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3296_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m15535_MethodInfo;
struct BaseInvokableCall_t674;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisByte_t335_m22807_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisByte_t335_m22807(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisByte_t335_m22807_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisByte_t335_m22807_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15538_gshared (InvokableCall_1_t2788 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3295(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3295_MethodInfo);
		UnityAction_1_t2787 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t310 * L_6 = Delegate_CreateDelegate_m3606(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3606_MethodInfo);
		Delegate_t310 * L_7 = Delegate_Combine_m1559(NULL /*static, unused*/, L_2, ((UnityAction_1_t2787 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m1559_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2787 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15539_gshared (InvokableCall_1_t2788 * __this, UnityAction_1_t2787 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3294(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3294_MethodInfo);
		UnityAction_1_t2787 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t2787 * L_1 = ___callback;
		Delegate_t310 * L_2 = Delegate_Combine_m1559(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1559_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t2787 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m15540_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m15540_gshared (InvokableCall_1_t2788 * __this, ObjectU5BU5D_t288* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t288* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t332 * L_1 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_1, (String_t*) &_stringLiteral339, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t288* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t2787 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3296(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3296_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t2787 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t288* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(uint8_t*)((uint8_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m15541_GenericMethod;
extern "C" bool InvokableCall_1_Find_m15541_gshared (InvokableCall_1_t2788 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2787 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3605(L_0, /*hidden argument*/&Delegate_get_Target_m3605_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t2787 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m3604(L_3, /*hidden argument*/&Delegate_get_Method_m3604_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t2789_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_11MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t2790_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6MethodDeclarations.h"

extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
extern Il2CppType UnityAction_1_t2789_0_0_0;
extern MethodInfo UnityAction_1_Invoke_m15543_MethodInfo;
struct BaseInvokableCall_t674;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Boolean>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t35_m22808(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisByte_t335_m22807_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisBoolean_t35_m22808_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m15543_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t241_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.UI.Toggle
#include "UnityEngine_UI_UnityEngine_UI_Toggle.h"
#include "UnityEngine.UI_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_17.h"
// System.Predicate`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Predicate_1_gen_0.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_17.h"
// System.Comparison`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Comparison_1_gen_18.h"
extern TypeInfo Toggle_t240_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t689_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1807_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo ToggleU5BU5D_t2791_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2795_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3515_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t244_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t2806_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t13_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t41_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2797_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t242_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2801_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_17MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Predicate_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_17MethodDeclarations.h"
extern Il2CppType List_1_t241_0_0_0;
extern Il2CppType ToggleU5BU5D_t2791_0_0_0;
extern Il2CppType Enumerator_t2795_0_0_0;
extern Il2CppType ICollection_1_t3515_0_0_0;
extern Il2CppType IEnumerable_1_t244_0_0_0;
extern Il2CppType IEnumerator_1_t2806_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2797_0_0_0;
extern Il2CppType Predicate_1_t242_0_0_0;
extern Il2CppType Comparer_1_t2801_0_0_0;
extern MethodInfo List_1_get_Item_m1883_MethodInfo;
extern MethodInfo List_1_set_Item_m15592_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4952_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo List_1_Add_m1886_MethodInfo;
extern MethodInfo List_1_Contains_m1880_MethodInfo;
extern MethodInfo List_1_IndexOf_m15578_MethodInfo;
extern MethodInfo List_1_Insert_m15581_MethodInfo;
extern MethodInfo List_1_Remove_m1885_MethodInfo;
extern MethodInfo Math_Max_m5932_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25329_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25330_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25331_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25332_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3481_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1418_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15614_MethodInfo;
extern MethodInfo Array_Clear_m5923_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15688_MethodInfo;
extern MethodInfo Enumerator__ctor_m15608_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15584_MethodInfo;
extern MethodInfo Array_Reverse_m5964_MethodInfo;
extern MethodInfo Array_Copy_m4995_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m21435_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m21435(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.UI.Toggle>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.Toggle>(!!0[]&,System.Int32)
#define Array_Resize_TisToggle_t240_m22843(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2791**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_22.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10495_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10495(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.Toggle>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.Toggle>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisToggle_t240_m22845(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2791*, Toggle_t240 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21504_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m21504(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisToggle_t240_m22847(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2791*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21688_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, Comparison_1_t2398 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m21688(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, Comparison_1_t2398 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Toggle>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisToggle_t240_m22855(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ToggleU5BU5D_t2791*, int32_t, Comparison_1_t2803 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1883_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15592_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisToggle_t240_m22843_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15580_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15577_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1886_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m1880_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15578_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15581_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m1885_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15567_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15590_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15591_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25329_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25330_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25331_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25332_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15582_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15568_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15569_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15614_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisToggle_t240_m22845_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15575_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15576_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15688_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15608_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15579_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15584_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15694_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisToggle_t240_m22847_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisToggle_t240_m22855_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2792_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_87MethodDeclarations.h"

extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2792_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern MethodInfo Array_get_Length_m4768_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21424_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21424(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Toggle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Toggle>(System.Int32)
#define Array_InternalArray__get_Item_TisToggle_t240_m22810(__this, p0, method) (( Toggle_t240 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15597_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisToggle_t240_m22810_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Toggle>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4065_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IPointerClickHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4066_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IPointerClickHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4067_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2793_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_88MethodDeclarations.h"

extern TypeInfo IPointerClickHandler_t90_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2793_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.IPointerClickHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisIPointerClickHandler_t90_m22821(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15602_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIPointerClickHandler_t90_m22821_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4068_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.IPointerClickHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4069_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.ISubmitHandler>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4070_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.ISubmitHandler>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4071_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2794_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_89MethodDeclarations.h"

extern TypeInfo ISubmitHandler_t101_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2794_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.ISubmitHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisISubmitHandler_t101_m22832(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15607_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisISubmitHandler_t101_m22832_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.ISubmitHandler>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4072_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.ISubmitHandler>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1283_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m4771_MethodInfo;
extern MethodInfo Object_GetType_m1420_MethodInfo;
extern MethodInfo Type_get_FullName_m3547_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m15611_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo ICollection_t807_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t410_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_17MethodDeclarations.h"
extern Il2CppType IList_1_t2796_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15643_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;
extern MethodInfo IList_1_get_Item_m25333_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4760_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3504_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25334_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25335_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15643_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25333_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15675_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25334_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25335_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2798_il2cpp_TypeInfo;

extern TypeInfo IList_t808_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2798_0_0_0;
extern Il2CppType Toggle_t240_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25336_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15674_MethodInfo;
extern MethodInfo List_1__ctor_m1879_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m10494_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15667_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15665_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15670_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15661_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25337_MethodInfo;
extern MethodInfo IList_1_Insert_m25338_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25339_MethodInfo;
extern MethodInfo IList_1_set_Item_m25340_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10774_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10775_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25336_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15678_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15679_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15676_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15674_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m1879_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15667_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15677_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15665_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15670_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15661_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25337_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25338_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25339_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25340_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Toggle>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2799_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_22MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_22.h"
extern TypeInfo DefaultComparer_t2800_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_22MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2799_0_0_0;
extern Il2CppType IEquatable_1_t4073_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2222_0_0_0;
extern Il2CppType DefaultComparer_t2800_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9638_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15685_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25341_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22844_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15685_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25341_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22844_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Toggle>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4074_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Toggle>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4073_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.Toggle>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo Object_Equals_m106_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15680_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Toggle>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.Toggle>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.Toggle>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.Toggle>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.Toggle>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_17.h"
extern TypeInfo DefaultComparer_t2802_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_17MethodDeclarations.h"
extern Il2CppType IComparable_1_t3757_0_0_0;
extern Il2CppType GenericComparer_1_t2133_0_0_0;
extern Il2CppType DefaultComparer_t2802_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15695_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25342_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15695_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25342_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.Toggle>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.Toggle>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3757_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.Toggle>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t346_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22853_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10465_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15691_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22853_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.Toggle>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2803_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.Toggle>
#include "mscorlib_System_Comparison_1_gen_18MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.Toggle>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.Toggle>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.Toggle>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.Toggle>::EndInvoke(System.IAsyncResult)
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
#include "System_Core_System_Func_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t243_il2cpp_TypeInfo;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
#include "System_Core_System_Func_2_genMethodDeclarations.h"



// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t2804_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m15701_GenericMethod;
extern "C" void Func_2__ctor_m15701_gshared (Func_2_t2804 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Byte>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m15703_GenericMethod;
extern "C" uint8_t Func_2_Invoke_m15703_gshared (Func_2_t2804 * __this, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m15703((Func_2_t2804 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m15705_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m15705_gshared (Func_2_t2804 * __this, Object_t * ___arg1, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m15707_GenericMethod;
extern "C" uint8_t Func_2_EndInvoke_m15707_gshared (Func_2_t2804 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t334_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3EMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo IEnumerator_1_t40_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t809_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805_0_0_0;
extern Il2CppType IEnumerable_1_t809_0_0_0;
extern Il2CppType IEnumerator_1_t40_0_0_0;
extern Il2CppType Func_2_t334_0_0_0;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m15716_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m9587_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m15712_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25038_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25039_MethodInfo;
extern MethodInfo Func_2_Invoke_m15709_MethodInfo;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m15716_GenericMethod;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m15712_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25038_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25039_GenericMethod;
extern Il2CppGenericMethod Func_2_Invoke_m15709_GenericMethod;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m15712_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m15713_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m15713_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m15714_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m15714_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m15715_GenericMethod;
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m15715_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m15716_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___$PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m9587(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m9587_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * L_3 = V_0;
		Object_t* L_4 = (__this->___U3C$U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * L_5 = V_0;
		Func_2_t334 * L_6 = (__this->___U3C$U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m15717_GenericMethod;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m15717_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_2 = (__this->___source_0);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2);
		__this->___U3C$s_97U3E__0_1 = L_3;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_5 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t334 * L_7 = (__this->___predicate_3);
			Object_t * L_8 = (__this->___U3CelementU3E__1_2);
			NullCheck(L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_7, L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_10 = (__this->___U3CelementU3E__1_2);
			__this->___$current_5 = L_10;
			__this->___$PC_4 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			Object_t* L_11 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3481_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			Object_t* L_14 = (__this->___U3C$s_97U3E__0_1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			Object_t* L_15 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1418_MethodInfo, L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_00b7:
	{
		__this->___$PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m15718_GenericMethod;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m15718_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2805 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (__this->___U3C$s_97U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1418_MethodInfo, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2807_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0MethodDeclarations.h"

extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2807_0_0_0;
extern Il2CppType Func_2_t243_0_0_0;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m15723_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m15719_MethodInfo;
extern MethodInfo Func_2_Invoke_m15702_MethodInfo;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m15723_GenericMethod;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m15719_GenericMethod;
extern Il2CppGenericMethod Func_2_Invoke_m15702_GenericMethod;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::.ctor()
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerator.get_Current()
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::MoveNext()
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.UI.Toggle>::Dispose()
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t262_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_18.h"
// System.Predicate`1<UnityEngine.RectTransform>
#include "mscorlib_System_Predicate_1_gen_19.h"
// System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_18.h"
// System.Comparison`1<UnityEngine.RectTransform>
#include "mscorlib_System_Comparison_1_gen_19.h"
extern TypeInfo RectTransform_t150_il2cpp_TypeInfo;
extern TypeInfo RectTransformU5BU5D_t2808_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2810_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3517_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3518_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3516_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2812_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2816_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2817_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_18MethodDeclarations.h"
// System.Predicate`1<UnityEngine.RectTransform>
#include "mscorlib_System_Predicate_1_gen_19MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_18MethodDeclarations.h"
extern Il2CppType List_1_t262_0_0_0;
extern Il2CppType RectTransformU5BU5D_t2808_0_0_0;
extern Il2CppType Enumerator_t2810_0_0_0;
extern Il2CppType ICollection_1_t3517_0_0_0;
extern Il2CppType IEnumerable_1_t3518_0_0_0;
extern Il2CppType IEnumerator_1_t3516_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2812_0_0_0;
extern Il2CppType Predicate_1_t2816_0_0_0;
extern Il2CppType Comparer_1_t2817_0_0_0;
extern MethodInfo List_1_get_Item_m1907_MethodInfo;
extern MethodInfo List_1_set_Item_m15770_MethodInfo;
extern MethodInfo List_1_Add_m1925_MethodInfo;
extern MethodInfo List_1_Contains_m15748_MethodInfo;
extern MethodInfo List_1_IndexOf_m15755_MethodInfo;
extern MethodInfo List_1_Insert_m15758_MethodInfo;
extern MethodInfo List_1_Remove_m15760_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25343_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25344_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25345_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25346_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15782_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15857_MethodInfo;
extern MethodInfo Enumerator__ctor_m15776_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15762_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.RectTransform>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.RectTransform>(!!0[]&,System.Int32)
#define Array_Resize_TisRectTransform_t150_m22871(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2808**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_23.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.RectTransform>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.RectTransform>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisRectTransform_t150_m22873(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2808*, RectTransform_t150 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisRectTransform_t150_m22875(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2808*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.RectTransform>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisRectTransform_t150_m22883(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, RectTransformU5BU5D_t2808*, int32_t, Comparison_1_t2819 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1907_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15770_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRectTransform_t150_m22871_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15757_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15754_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1925_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15748_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15755_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15758_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m15760_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15743_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15768_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15769_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25343_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25344_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25345_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25346_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15759_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15744_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15745_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15782_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRectTransform_t150_m22873_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15752_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15753_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15857_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15776_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15756_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15762_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15863_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRectTransform_t150_m22875_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRectTransform_t150_m22883_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RectTransform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2809_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RectTransform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2809_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RectTransform>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RectTransform>(System.Int32)
#define Array_InternalArray__get_Item_TisRectTransform_t150_m22860(__this, p0, method) (( RectTransform_t150 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15775_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRectTransform_t150_m22860_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.RectTransform>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2811_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m15779_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_18MethodDeclarations.h"
extern Il2CppType IList_1_t2811_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15811_MethodInfo;
extern MethodInfo IList_1_get_Item_m25347_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25348_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25349_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15811_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25347_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15843_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25348_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25349_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2813_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t2813_0_0_0;
extern Il2CppType RectTransform_t150_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25350_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15842_MethodInfo;
extern MethodInfo List_1__ctor_m1921_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15835_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15833_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15838_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15829_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25351_MethodInfo;
extern MethodInfo IList_1_Insert_m25352_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25353_MethodInfo;
extern MethodInfo IList_1_set_Item_m25354_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25350_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15846_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15847_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15844_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15842_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m1921_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15835_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15845_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15833_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15838_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15829_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25351_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25352_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25353_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25354_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.RectTransform>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2814_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_23MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_23.h"
extern TypeInfo DefaultComparer_t2815_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_23MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2814_0_0_0;
extern Il2CppType IEquatable_1_t4075_0_0_0;
extern Il2CppType DefaultComparer_t2815_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15853_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25355_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22872_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15853_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25355_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22872_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.RectTransform>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4076_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectTransform>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectTransform>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4075_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.RectTransform>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m15848_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RectTransform>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.RectTransform>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.RectTransform>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_18.h"
extern TypeInfo DefaultComparer_t2818_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_18MethodDeclarations.h"
extern Il2CppType IComparable_1_t3759_0_0_0;
extern Il2CppType DefaultComparer_t2818_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15864_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25356_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15864_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25356_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.RectTransform>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.RectTransform>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3759_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.RectTransform>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m22881_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15860_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22881_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.RectTransform>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2819_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.RectTransform>
#include "mscorlib_System_Comparison_1_gen_19MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.RectTransform>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.RectTransform>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.RectTransform>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t397_il2cpp_TypeInfo;

// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"


// System.Boolean System.IEquatable`1<UnityEngine.UI.LayoutRebuilder>::Equals(T)
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t263_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"


// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Component>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t267_il2cpp_TypeInfo;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"


// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t2820_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m15872_GenericMethod;
extern "C" void Func_2__ctor_m15872_gshared (Func_2_t2820 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m15873_GenericMethod;
extern "C" float Func_2_Invoke_m15873_gshared (Func_2_t2820 * __this, Object_t * ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m15873((Func_2_t2820 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef float (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m15875_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m15875_gshared (Func_2_t2820 * __this, Object_t * ___arg1, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m15877_GenericMethod;
extern "C" float Func_2_EndInvoke_m15877_gshared (Func_2_t2820 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t272_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_gen_3.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4.h"
// System.Collections.Generic.List`1<UnityEngine.Canvas>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
extern TypeInfo Stack_1_t2821_il2cpp_TypeInfo;
extern TypeInfo List_1_t275_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t273_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_gen_3MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_4MethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
extern Il2CppType Stack_1_t2821_0_0_0;
extern Il2CppType List_1_t275_0_0_0;
extern Il2CppType UnityAction_1_t273_0_0_0;
extern MethodInfo Stack_1_get_Count_m15891_MethodInfo;
extern MethodInfo Stack_1__ctor_m15882_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m15903_MethodInfo;
extern MethodInfo Object_ReferenceEquals_m3381_MethodInfo;
extern MethodInfo Debug_LogError_m1309_MethodInfo;
struct Activator_t1766;
// System.Activator
#include "mscorlib_System_Activator.h"
struct Activator_t1766;
// Declaration !!0 System.Activator::CreateInstance<System.Object>()
// !!0 System.Activator::CreateInstance<System.Object>()
extern "C" Object_t * Activator_CreateInstance_TisObject_t_m21836_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Activator_CreateInstance_TisObject_t_m21836(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m21836_gshared)(__this /* static, unused */, method)
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Canvas>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Canvas>>()
#define Activator_CreateInstance_TisList_1_t275_m22902(__this /* static, unused */, method) (( List_1_t275 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m21836_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m15878_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m15881_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m15891_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m15882_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t275_m22902_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m15879_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m15889_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m15903_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m15888_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m15890_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_2.h"
extern TypeInfo ArrayTypeMismatchException_t1777_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2824_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_2MethodDeclarations.h"
extern Il2CppType Enumerator_t2824_0_0_0;
extern MethodInfo Array_CopyTo_m4957_MethodInfo;
extern MethodInfo Enumerator__ctor_m15898_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Canvas>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Canvas>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t275_m22901(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2822**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m15892_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t275_m22901_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15898_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4077_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3519_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_91.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2823_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_91MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2823_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Canvas>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Canvas>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t275_m22890(__this, p0, method) (( List_1_t275 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15897_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t275_m22890_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4078_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4079_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m15902_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::EndInvoke(System.IAsyncResult)
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectPool_1_t276_il2cpp_TypeInfo;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_gen_4.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
extern TypeInfo Stack_1_t2825_il2cpp_TypeInfo;
extern TypeInfo List_1_t266_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t277_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_gen_4MethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_5MethodDeclarations.h"
extern Il2CppType Stack_1_t2825_0_0_0;
extern Il2CppType List_1_t266_0_0_0;
extern Il2CppType UnityAction_1_t277_0_0_0;
extern MethodInfo Stack_1_get_Count_m15919_MethodInfo;
extern MethodInfo Stack_1__ctor_m15910_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m15931_MethodInfo;
struct Activator_t1766;
// Declaration !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Component>>()
// !!0 System.Activator::CreateInstance<System.Collections.Generic.List`1<UnityEngine.Component>>()
#define Activator_CreateInstance_TisList_1_t266_m22916(__this /* static, unused */, method) (( List_1_t266 * (*) (Object_t * /* static, unused */, MethodInfo*))Activator_CreateInstance_TisObject_t_m21836_gshared)(__this /* static, unused */, method)
extern Il2CppGenericMethod ObjectPool_1_get_countAll_m15906_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_get_countInactive_m15909_GenericMethod;
extern Il2CppGenericMethod Stack_1_get_Count_m15919_GenericMethod;
extern Il2CppGenericMethod Stack_1__ctor_m15910_GenericMethod;
extern Il2CppGenericMethod Activator_CreateInstance_TisList_1_t266_m22916_GenericMethod;
extern Il2CppGenericMethod ObjectPool_1_set_countAll_m15907_GenericMethod;
extern Il2CppGenericMethod Stack_1_Pop_m15917_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m15931_GenericMethod;
extern Il2CppGenericMethod Stack_1_Peek_m15916_GenericMethod;
extern Il2CppGenericMethod Stack_1_Push_m15918_GenericMethod;


// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_3.h"
extern TypeInfo Enumerator_t2828_il2cpp_TypeInfo;
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_3MethodDeclarations.h"
extern Il2CppType Enumerator_t2828_0_0_0;
extern MethodInfo Enumerator__ctor_m15926_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Component>>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Component>>(!!0[]&,System.Int32)
#define Array_Resize_TisList_1_t266_m22915(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, List_1U5BU5D_t2826**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Stack_1_GetEnumerator_m15920_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisList_1_t266_m22915_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15926_GenericMethod;


// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor()
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerable.GetEnumerator()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Peek()
// T System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Pop()
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Push(T)
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Count()
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Component>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4080_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<UnityEngine.Component>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3520_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2827_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_92MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2827_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Component>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.List`1<UnityEngine.Component>>(System.Int32)
#define Array_InternalArray__get_Item_TisList_1_t266_m22904(__this, p0, method) (( List_1_t266 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15925_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisList_1_t266_m22904_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4081_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m15930_GenericMethod;


// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Collections.Generic.Stack`1<T>)
// System.Object System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::Dispose()
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::MoveNext()
// T System.Collections.Generic.Stack`1/Enumerator<System.Collections.Generic.List`1<UnityEngine.Component>>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t440_il2cpp_TypeInfo;
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"



// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t2829_il2cpp_TypeInfo;
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"



// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Action_1__ctor_m15935_GenericMethod;
extern "C" void Action_1__ctor_m15935_gshared (Action_1_t2829 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern Il2CppGenericMethod Action_1_Invoke_m15936_GenericMethod;
extern "C" void Action_1_Invoke_m15936_gshared (Action_1_t2829 * __this, uint8_t ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_1_Invoke_m15936((Action_1_t2829 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___obj, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___obj, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Action_1_BeginInvoke_m15938_GenericMethod;
extern "C" Object_t * Action_1_BeginInvoke_m15938_gshared (Action_1_t2829 * __this, uint8_t ___obj, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Action_1_EndInvoke_m15940_GenericMethod;
extern "C" void Action_1_EndInvoke_m15940_gshared (Action_1_t2829 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t441_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4083_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_93.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2830_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_93MethodDeclarations.h"

extern TypeInfo IAchievementDescription_t691_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2830_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievementDescription>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievementDescription_t691_m22918(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15948_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievementDescription_t691_m22918_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4084_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4085_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievementDescription>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4086_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievementDescription>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t442_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4087_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_94.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2831_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_94MethodDeclarations.h"

extern TypeInfo IAchievement_t456_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2831_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IAchievement>(System.Int32)
#define Array_InternalArray__get_Item_TisIAchievement_t456_m22929(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15956_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIAchievement_t456_m22929_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IAchievement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IAchievement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4089_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IAchievement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4090_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IAchievement>::set_Item(System.Int32,T)
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_1_t443_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"



// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4091_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_95.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2832_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_95MethodDeclarations.h"

extern TypeInfo IScore_t652_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2832_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.IScore>(System.Int32)
#define Array_InternalArray__get_Item_TisIScore_t652_m22940(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15964_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIScore_t652_m22940_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SocialPlatforms.IScore>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4092_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SocialPlatforms.IScore>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4093_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.IScore>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SocialPlatforms.IScore>::set_Item(System.Int32,T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
