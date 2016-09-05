#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_25.h"
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
extern TypeInfo Predicate_1_t2972_il2cpp_TypeInfo;
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_25MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m17482_GenericMethod;
extern "C" void Predicate_1__ctor_m17482_gshared (Predicate_1_t2972 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern Il2CppGenericMethod Predicate_1_Invoke_m17483_GenericMethod;
extern "C" bool Predicate_1_Invoke_m17483_gshared (Predicate_1_t2972 * __this, UICharInfo_t321  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m17483((Predicate_1_t2972 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t321  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, UICharInfo_t321  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m17484_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m17484_gshared (Predicate_1_t2972 * __this, UICharInfo_t321  ___obj, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UICharInfo_t321_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m17485_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m17485_gshared (Predicate_1_t2972 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t2973_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_24MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_24.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2974_il2cpp_TypeInfo;
extern TypeInfo UICharInfo_t321_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_24MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t2973_0_0_0;
extern Il2CppType IComparable_1_t3769_0_0_0;
extern Il2CppType UICharInfo_t321_0_0_0;
extern Il2CppType GenericComparer_1_t2133_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern Il2CppType DefaultComparer_t2974_0_0_0;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9638_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m17490_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25463_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17490_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25463_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m17486_GenericMethod;
extern "C" void Comparer_1__ctor_m17486_gshared (Comparer_1_t2973 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m17487_GenericMethod;
extern "C" void Comparer_1__cctor_m17487_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2974 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2974 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2974 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2973_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m17488_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17488_gshared (Comparer_1_t2973 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UICharInfo_t321 , UICharInfo_t321  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UICharInfo_t321 *)((UICharInfo_t321 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UICharInfo_t321 *)((UICharInfo_t321 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m9662(L_8, /*hidden argument*/&ArgumentException__ctor_m9662_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m17489_GenericMethod;
extern "C" Comparer_1_t2973 * Comparer_1_get_Default_m17489_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2973 * L_0 = ((Comparer_1_t2973_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3768_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3769_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UICharInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_t346_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m23413_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10465_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23413_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17490_gshared (DefaultComparer_t2974 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2973 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m17491_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m17491_gshared (DefaultComparer_t2974 * __this, UICharInfo_t321  ___x, UICharInfo_t321  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		UICharInfo_t321  L_0 = ___x;
		UICharInfo_t321  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UICharInfo_t321  L_3 = ___y;
		UICharInfo_t321  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UICharInfo_t321  L_6 = ___y;
		UICharInfo_t321  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UICharInfo_t321  L_9 = ___x;
		UICharInfo_t321  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UICharInfo_t321  L_12 = ___x;
		UICharInfo_t321  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UICharInfo_t321  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t321  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		UICharInfo_t321  L_17 = ___x;
		UICharInfo_t321  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		UICharInfo_t321  L_20 = ___x;
		UICharInfo_t321  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UICharInfo_t321  L_23 = ___y;
		UICharInfo_t321  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10465_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t332 * L_27 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_27, (String_t*) &_stringLiteral1305, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2975_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_25MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m17492_GenericMethod;
extern "C" void Comparison_1__ctor_m17492_gshared (Comparison_1_t2975 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m17493_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m17493_gshared (Comparison_1_t2975 * __this, UICharInfo_t321  ___x, UICharInfo_t321  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m17493((Comparison_1_t2975 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t321  ___x, UICharInfo_t321  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, UICharInfo_t321  ___x, UICharInfo_t321  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m17494_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m17494_gshared (Comparison_1_t2975 * __this, UICharInfo_t321  ___x, UICharInfo_t321  ___y, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UICharInfo_t321_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&UICharInfo_t321_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m17495_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m17495_gshared (Comparison_1_t2975 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t568_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_24MethodDeclarations.h"

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "UnityEngine_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_25.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_26.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_25.h"
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_26.h"
extern TypeInfo UILineInfo_t319_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t689_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1807_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo UILineInfoU5BU5D_t570_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2976_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t322_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3554_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3553_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t13_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t41_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2977_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2981_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2982_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_25MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_26MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_25MethodDeclarations.h"
extern Il2CppType List_1_t568_0_0_0;
extern Il2CppType UILineInfoU5BU5D_t570_0_0_0;
extern Il2CppType Enumerator_t2976_0_0_0;
extern Il2CppType ICollection_1_t322_0_0_0;
extern Il2CppType IEnumerable_1_t3554_0_0_0;
extern Il2CppType IEnumerator_1_t3553_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2977_0_0_0;
extern Il2CppType Predicate_1_t2981_0_0_0;
extern Il2CppType Comparer_1_t2982_0_0_0;
extern MethodInfo List_1_get_Item_m17543_MethodInfo;
extern MethodInfo List_1_set_Item_m17544_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4952_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo List_1_Add_m17513_MethodInfo;
extern MethodInfo List_1_Contains_m17520_MethodInfo;
extern MethodInfo List_1_IndexOf_m17527_MethodInfo;
extern MethodInfo List_1_Insert_m17530_MethodInfo;
extern MethodInfo List_1_Remove_m17532_MethodInfo;
extern MethodInfo Math_Max_m5932_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m1719_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25464_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25465_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25466_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3481_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1418_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m17551_MethodInfo;
extern MethodInfo Array_Clear_m5923_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m17626_MethodInfo;
extern MethodInfo Enumerator__ctor_m17545_MethodInfo;
extern MethodInfo List_1_RemoveAt_m17534_MethodInfo;
extern MethodInfo Array_Reverse_m5964_MethodInfo;
extern MethodInfo Array_Copy_m4995_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t319_m23418_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t570** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisUILineInfo_t319_m23418(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570**, int32_t, MethodInfo*))Array_Resize_TisUILineInfo_t319_m23418_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_33.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUILineInfo_t319_m23420_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t570* p0, UILineInfo_t319  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisUILineInfo_t319_m23420(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, UILineInfo_t319 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisUILineInfo_t319_m23420_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t319_m23422_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t570* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisUILineInfo_t319_m23422(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisUILineInfo_t319_m23422_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t319_m23430_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t570* p0, int32_t p1, Comparison_1_t2984 * p2, MethodInfo* method);
#define Array_Sort_TisUILineInfo_t319_m23430(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, int32_t, Comparison_1_t2984 *, MethodInfo*))Array_Sort_TisUILineInfo_t319_m23430_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m17543_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m17544_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisUILineInfo_t319_m23418_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m17529_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m17526_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m17513_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m17520_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m17527_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m17530_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m17532_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m17514_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m17540_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m17541_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m1719_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25464_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25465_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25466_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m17531_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m17515_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m17516_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m17551_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisUILineInfo_t319_m23420_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m17524_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m17525_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m17626_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17545_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m17528_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m17534_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m17632_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUILineInfo_t319_m23422_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUILineInfo_t319_m23430_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m17496_GenericMethod;
extern "C" void List_1__ctor_m17496_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfoU5BU5D_t570* L_0 = ((List_1_t568_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m3441_GenericMethod;
extern "C" void List_1__ctor_m3441_gshared (List_1_t568 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_1 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_1, (String_t*) &_stringLiteral1307, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((UILineInfoU5BU5D_t570*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m17497_GenericMethod;
extern "C" void List_1__cctor_m17497_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t568_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UILineInfoU5BU5D_t570*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17498_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17498_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		Enumerator_t2976  L_0 = (( Enumerator_t2976  (*) (List_1_t568 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2976  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m17499_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17499_gshared (List_1_t568 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m17500_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17500_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		Enumerator_t2976  L_0 = (( Enumerator_t2976  (*) (List_1_t568 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2976  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m17501_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m17501_gshared (List_1_t568 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t332 * L_2 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_2, (String_t*) &_stringLiteral1319, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m17502_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m17502_gshared (List_1_t568 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m17503_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17503_gshared (List_1_t568 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m17504_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m17504_gshared (List_1_t568 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), __this, L_1, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t332 * L_3 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_3, (String_t*) &_stringLiteral1319, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m17505_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m17505_gshared (List_1_t568 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17506_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17506_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m17507_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17507_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m17508_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17508_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m17509_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17509_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m17510_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17510_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m17511_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17511_gshared (List_1_t568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t319  L_1 = (UILineInfo_t319 )VirtFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, L_0);
		UILineInfo_t319  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m17512_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m17512_gshared (List_1_t568 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t689_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t1807_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t332 * L_2 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_2, (String_t*) &_stringLiteral545, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m17513_gshared (List_1_t568 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		UILineInfoU5BU5D_t570* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0017:
	{
		UILineInfoU5BU5D_t570* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UILineInfo_t319  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_2, L_5)) = (UILineInfo_t319 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17514_gshared (List_1_t568 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UILineInfoU5BU5D_t570* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t568 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m5932(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m5932_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m5932(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m5932_MethodInfo);
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17515_gshared (List_1_t568 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t* L_4 = ___collection;
		UILineInfoU5BU5D_t570* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t570*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17516_gshared (List_1_t568 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	UILineInfo_t319  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			UILineInfo_t319  L_3 = (UILineInfo_t319 )InterfaceFuncInvoker0< UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_2);
			V_0 = L_3;
			UILineInfo_t319  L_4 = V_0;
			VirtActionInvoker1< UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3481_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1418_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m17517_GenericMethod;
extern "C" void List_1_AddRange_m17517_gshared (List_1_t568 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t568 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t568 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t568 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m17518_GenericMethod;
extern "C" ReadOnlyCollection_1_t2977 * List_1_AsReadOnly_m17518_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2977 * L_0 = (ReadOnlyCollection_1_t2977 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t2977 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern Il2CppGenericMethod List_1_Clear_m17519_GenericMethod;
extern "C" void List_1_Clear_m17519_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		UILineInfoU5BU5D_t570* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m17520_gshared (List_1_t568 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		UILineInfo_t319  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, UILineInfo_t319 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[])
extern Il2CppGenericMethod List_1_CopyTo_m17521_GenericMethod;
extern "C" void List_1_CopyTo_m17521_gshared (List_1_t568 * __this, UILineInfoU5BU5D_t570* ___array, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		UILineInfoU5BU5D_t570* L_1 = ___array;
		int32_t L_2 = (__this->____size_2);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, 0, L_2, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m17522_GenericMethod;
extern "C" void List_1_CopyTo_m17522_gshared (List_1_t568 * __this, UILineInfoU5BU5D_t570* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		UILineInfoU5BU5D_t570* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m17523_GenericMethod;
extern TypeInfo* List_1_t568_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t319  List_1_Find_m17523_gshared (List_1_t568 * __this, Predicate_1_t2981 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m17523_init;
	if (!List_1_Find_m17523_init)
	{
		List_1_t568_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t568_0_0_0);
		List_1_Find_m17523_init = true;
	}
	int32_t V_0 = 0;
	UILineInfo_t319  V_1 = {0};
	UILineInfo_t319  G_B3_0 = {0};
	{
		Predicate_1_t2981 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t568_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2981 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t2981 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t568 *, int32_t, int32_t, Predicate_1_t2981 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		UILineInfoU5BU5D_t570* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&UILineInfo_t319_il2cpp_TypeInfo), (&V_1));
		UILineInfo_t319  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17524_gshared (Object_t * __this /* static, unused */, Predicate_1_t2981 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t2981 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1177, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17525_gshared (List_1_t568 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2981 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t2981 * L_3 = ___match;
		UILineInfoU5BU5D_t570* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2976  List_1_GetEnumerator_m17526_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		Enumerator_t2976  L_0 = {0};
		(( void (*) (Enumerator_t2976 *, List_1_t568 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17527_gshared (List_1_t568 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		UILineInfo_t319  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, UILineInfo_t319 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17528_gshared (List_1_t568 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UILineInfoU5BU5D_t570* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		UILineInfoU5BU5D_t570* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m6742_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UILineInfoU5BU5D_t570* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17529_gshared (List_1_t568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t715 * L_3 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_3, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17530_gshared (List_1_t568 * __this, int32_t ___index, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (__this->____size_2);
		UILineInfoU5BU5D_t570* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t568 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UILineInfoU5BU5D_t570* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t319  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t319 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17531_gshared (List_1_t568 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1320, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m17532_gshared (List_1_t568 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t319  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m17533_GenericMethod;
extern TypeInfo* List_1_t568_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m17533_gshared (List_1_t568 * __this, Predicate_1_t2981 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m17533_init;
	if (!List_1_RemoveAll_m17533_init)
	{
		List_1_t568_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t568_0_0_0);
		List_1_RemoveAll_m17533_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2981 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t568_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2981 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t2981 * L_1 = ___match;
		UILineInfoU5BU5D_t570* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t2981 * L_13 = ___match;
		UILineInfoU5BU5D_t570* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		UILineInfoU5BU5D_t570* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		UILineInfoU5BU5D_t570* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_18, L_20)) = (UILineInfo_t319 )(*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UILineInfoU5BU5D_t570* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17534_gshared (List_1_t568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t715 * L_3 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_3, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t568 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UILineInfoU5BU5D_t570* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m17535_GenericMethod;
extern "C" void List_1_Reverse_m17535_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m5964(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m5964_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern Il2CppGenericMethod List_1_Sort_m17536_GenericMethod;
extern TypeInfo* Comparer_1_t2982_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m17536_gshared (List_1_t568 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m17536_init;
	if (!List_1_Sort_m17536_init)
	{
		Comparer_1_t2982_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t2982_0_0_0);
		List_1_Sort_m17536_init = true;
	}
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2982_il2cpp_TypeInfo_var);
		Comparer_1_t2982 * L_2 = (( Comparer_1_t2982 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m17537_GenericMethod;
extern "C" void List_1_Sort_m17537_gshared (List_1_t568 * __this, Comparison_1_t2984 * ___comparison, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t2984 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570*, int32_t, Comparison_1_t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m17538_GenericMethod;
extern "C" UILineInfoU5BU5D_t570* List_1_ToArray_m17538_gshared (List_1_t568 * __this, MethodInfo* method)
{
	UILineInfoU5BU5D_t570* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((UILineInfoU5BU5D_t570*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		UILineInfoU5BU5D_t570* L_1 = (__this->____items_1);
		UILineInfoU5BU5D_t570* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m4995(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m4995_MethodInfo);
		UILineInfoU5BU5D_t570* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m17539_GenericMethod;
extern "C" void List_1_TrimExcess_m17539_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17540_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t570* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17541_gshared (List_1_t568 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_2 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4952(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4952_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UILineInfoU5BU5D_t570** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t570**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m17542_GenericMethod;
extern "C" int32_t List_1_get_Count_m17542_gshared (List_1_t568 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t319  List_1_get_Item_m17543_gshared (List_1_t568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_2 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_2, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UILineInfoU5BU5D_t570* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17544_gshared (List_1_t568 * __this, int32_t ___index, UILineInfo_t319  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t568 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_3 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_3, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UILineInfoU5BU5D_t570* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t319  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t319 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1283_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m4771_MethodInfo;
extern MethodInfo Object_GetType_m1420_MethodInfo;
extern MethodInfo Type_get_FullName_m3547_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m17548_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m17545_gshared (Enumerator_t2976 * __this, List_1_t568 * ___l, MethodInfo* method)
{
	{
		List_1_t568 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t568 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17546_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17546_gshared (Enumerator_t2976 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2976 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4771(L_1, /*hidden argument*/&InvalidOperationException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UILineInfo_t319  L_2 = (__this->___current_3);
		UILineInfo_t319  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m17547_GenericMethod;
extern "C" void Enumerator_Dispose_m17547_gshared (Enumerator_t2976 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t568 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::VerifyState()
extern "C" void Enumerator_VerifyState_m17548_gshared (Enumerator_t2976 * __this, MethodInfo* method)
{
	{
		List_1_t568 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t2976  L_1 = (*(Enumerator_t2976 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m1420(L_2, /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3547_MethodInfo, L_3);
		ObjectDisposedException_t1283 * L_5 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t568 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1107 * L_9 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_9, (String_t*) &_stringLiteral1321, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m17549_GenericMethod;
extern "C" bool Enumerator_MoveNext_m17549_gshared (Enumerator_t2976 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2976 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->___next_1);
		List_1_t568 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t568 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		UILineInfoU5BU5D_t570* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UILineInfo_t319 *)(UILineInfo_t319 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17550_GenericMethod;
extern "C" UILineInfo_t319  Enumerator_get_Current_m17550_gshared (Enumerator_t2976 * __this, MethodInfo* method)
{
	{
		UILineInfo_t319  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo IList_1_t318_il2cpp_TypeInfo;
extern TypeInfo ICollection_t807_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t410_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_25MethodDeclarations.h"
extern Il2CppType IList_1_t318_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m17580_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;
extern MethodInfo IList_1_get_Item_m1693_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4760_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3504_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25467_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25468_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m17580_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m1693_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m17612_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25467_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25468_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m17551_gshared (ReadOnlyCollection_1_t2977 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1322, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17552_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17552_gshared (ReadOnlyCollection_1_t2977 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m17553_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m17553_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m17554_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m17554_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17555_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17555_gshared (ReadOnlyCollection_1_t2977 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17556_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17556_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m17557_GenericMethod;
extern "C" UILineInfo_t319  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m17557_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t319  L_1 = (UILineInfo_t319 )VirtFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m17558_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m17558_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, UILineInfo_t319  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17559_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17559_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m17560_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m17560_gshared (ReadOnlyCollection_1_t2977 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t807_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4760_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t807_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m17561_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m17561_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m3504_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m17562_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m17562_gshared (ReadOnlyCollection_1_t2977 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m17563_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m17563_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m17564_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m17564_gshared (ReadOnlyCollection_1_t2977 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m17565_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m17565_gshared (ReadOnlyCollection_1_t2977 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m17566_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m17566_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m17567_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m17567_gshared (ReadOnlyCollection_1_t2977 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m17568_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m17568_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m17569_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m17569_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m17570_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m17570_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m17571_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m17571_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m17572_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m17572_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m17573_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m17573_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t319  L_2 = (UILineInfo_t319 )InterfaceFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		UILineInfo_t319  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m17574_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m17574_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m17575_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m17575_gshared (ReadOnlyCollection_1_t2977 * __this, UILineInfo_t319  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t319  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m17576_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m17576_gshared (ReadOnlyCollection_1_t2977 * __this, UILineInfoU5BU5D_t570* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfoU5BU5D_t570* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t570*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m17577_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m17577_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m17578_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m17578_gshared (ReadOnlyCollection_1_t2977 * __this, UILineInfo_t319  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t319  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m17579_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m17579_gshared (ReadOnlyCollection_1_t2977 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t319  ReadOnlyCollection_1_get_Item_m17580_gshared (ReadOnlyCollection_1_t2977 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t319  L_2 = (UILineInfo_t319 )InterfaceFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2978_il2cpp_TypeInfo;

extern TypeInfo IList_t808_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2978_0_0_0;
extern Il2CppType UILineInfo_t319_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25469_MethodInfo;
extern MethodInfo Collection_1_SetItem_m17611_MethodInfo;
extern MethodInfo List_1__ctor_m17496_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m10494_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m17604_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m17602_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m17607_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m17598_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25470_MethodInfo;
extern MethodInfo IList_1_Insert_m25471_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25472_MethodInfo;
extern MethodInfo IList_1_set_Item_m25473_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10774_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10775_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25469_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m17615_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m17616_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m17613_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m17611_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m17604_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m17614_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m17602_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m17607_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m17598_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25470_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25471_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25472_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25473_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m17581_GenericMethod;
extern TypeInfo* List_1_t568_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m17581_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m17581_init;
	if (!Collection_1__ctor_m17581_init)
	{
		List_1_t568_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t568_0_0_0);
		Collection_1__ctor_m17581_init = true;
	}
	List_1_t568 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t568_il2cpp_TypeInfo_var);
		List_1_t568 * L_0 = (List_1_t568 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t568 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t568 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t568 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17582_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17582_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m17583_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m17583_gshared (Collection_1_t2978 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t807_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m4760_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t807_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m17584_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m17584_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m17585_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m17585_gshared (Collection_1_t2978 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UILineInfo_t319  L_4 = (( UILineInfo_t319  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m17586_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m17586_gshared (Collection_1_t2978 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m17587_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m17587_gshared (Collection_1_t2978 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m17588_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m17588_gshared (Collection_1_t2978 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t319  L_2 = (( UILineInfo_t319  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m17589_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m17589_gshared (Collection_1_t2978 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		UILineInfo_t319  L_2 = (( UILineInfo_t319  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m17590_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m17590_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m17591_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m17591_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m17592_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m17592_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m17593_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m17593_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m17594_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m17594_gshared (Collection_1_t2978 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t319  L_2 = (UILineInfo_t319 )InterfaceFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		UILineInfo_t319  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m17595_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m17595_gshared (Collection_1_t2978 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t319  L_2 = (( UILineInfo_t319  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m17596_GenericMethod;
extern "C" void Collection_1_Add_m17596_gshared (Collection_1_t2978 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		UILineInfo_t319  L_3 = ___item;
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m17597_GenericMethod;
extern "C" void Collection_1_Clear_m17597_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ClearItems()
extern "C" void Collection_1_ClearItems_m17598_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m17599_GenericMethod;
extern "C" bool Collection_1_Contains_m17599_gshared (Collection_1_t2978 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t319  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m17600_GenericMethod;
extern "C" void Collection_1_CopyTo_m17600_gshared (Collection_1_t2978 * __this, UILineInfoU5BU5D_t570* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfoU5BU5D_t570* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t570*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m17601_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m17601_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m17602_gshared (Collection_1_t2978 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t319  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m17603_GenericMethod;
extern "C" void Collection_1_Insert_m17603_gshared (Collection_1_t2978 * __this, int32_t ___index, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t319  L_1 = ___item;
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m17604_gshared (Collection_1_t2978 * __this, int32_t ___index, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t319  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m17605_GenericMethod;
extern "C" bool Collection_1_Remove_m17605_gshared (Collection_1_t2978 * __this, UILineInfo_t319  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t319  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m17606_GenericMethod;
extern "C" void Collection_1_RemoveAt_m17606_gshared (Collection_1_t2978 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m17607_gshared (Collection_1_t2978 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m17608_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m17608_gshared (Collection_1_t2978 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m17609_GenericMethod;
extern "C" UILineInfo_t319  Collection_1_get_Item_m17609_gshared (Collection_1_t2978 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t319  L_2 = (UILineInfo_t319 )InterfaceFuncInvoker1< UILineInfo_t319 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m17610_GenericMethod;
extern "C" void Collection_1_set_Item_m17610_gshared (Collection_1_t2978 * __this, int32_t ___index, UILineInfo_t319  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t319  L_1 = ___value;
		VirtActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m17611_gshared (Collection_1_t2978 * __this, int32_t ___index, UILineInfo_t319  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t319  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m17612_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6793_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ConvertItem(System.Object)
extern "C" UILineInfo_t319  Collection_1_ConvertItem_m17613_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t332 * L_3 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_3, (String_t*) &_stringLiteral1319, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m17614_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t27 * L_2 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_2, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m17615_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t807_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m10774_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m17616_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t808_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m10775_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2979_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_33MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33.h"
extern TypeInfo DefaultComparer_t2980_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_33MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2979_0_0_0;
extern Il2CppType IEquatable_1_t4204_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2222_0_0_0;
extern Il2CppType DefaultComparer_t2980_0_0_0;
extern MethodInfo DefaultComparer__ctor_m17622_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25474_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23419_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17622_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25474_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23419_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m17617_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m17617_gshared (EqualityComparer_1_t2979 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m17618_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m17618_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2980 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2980 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2980 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2979_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17619_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17619_gshared (EqualityComparer_1_t2979 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17620_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17620_gshared (EqualityComparer_1_t2979 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, UILineInfo_t319 , UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17621_GenericMethod;
extern "C" EqualityComparer_1_t2979 * EqualityComparer_1_get_Default_m17621_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2979 * L_0 = ((EqualityComparer_1_t2979_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4205_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4204_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UILineInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo Object_Equals_m106_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17622_gshared (DefaultComparer_t2980 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2979 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m17623_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m17623_gshared (DefaultComparer_t2980 * __this, UILineInfo_t319  ___obj, MethodInfo* method)
{
	{
		UILineInfo_t319  L_0 = ___obj;
		UILineInfo_t319  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m107_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m17624_GenericMethod;
extern "C" bool DefaultComparer_Equals_m17624_gshared (DefaultComparer_t2980 * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, MethodInfo* method)
{
	{
		UILineInfo_t319  L_0 = ___x;
		UILineInfo_t319  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UILineInfo_t319  L_3 = ___y;
		UILineInfo_t319  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UILineInfo_t319  L_6 = ___y;
		UILineInfo_t319  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m106_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m17625_GenericMethod;
extern "C" void Predicate_1__ctor_m17625_gshared (Predicate_1_t2981 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17626_gshared (Predicate_1_t2981 * __this, UILineInfo_t319  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m17626((Predicate_1_t2981 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t319  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, UILineInfo_t319  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m17627_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m17627_gshared (Predicate_1_t2981 * __this, UILineInfo_t319  ___obj, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t319_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m17628_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m17628_gshared (Predicate_1_t2981 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25.h"
extern TypeInfo DefaultComparer_t2983_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_25MethodDeclarations.h"
extern Il2CppType IComparable_1_t3771_0_0_0;
extern Il2CppType DefaultComparer_t2983_0_0_0;
extern MethodInfo DefaultComparer__ctor_m17633_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25475_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17633_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25475_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m17629_GenericMethod;
extern "C" void Comparer_1__ctor_m17629_gshared (Comparer_1_t2982 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m17630_GenericMethod;
extern "C" void Comparer_1__cctor_m17630_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2983 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2983 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2983 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t2982_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m17631_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m17631_gshared (Comparer_1_t2982 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t319 , UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UILineInfo_t319 *)((UILineInfo_t319 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m9662(L_8, /*hidden argument*/&ArgumentException__ctor_m9662_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" Comparer_1_t2982 * Comparer_1_get_Default_m17632_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2982 * L_0 = ((Comparer_1_t2982_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3770_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3771_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m23428_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m23428_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17633_gshared (DefaultComparer_t2983 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t2982 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m17634_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m17634_gshared (DefaultComparer_t2983 * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		UILineInfo_t319  L_0 = ___x;
		UILineInfo_t319  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UILineInfo_t319  L_3 = ___y;
		UILineInfo_t319  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UILineInfo_t319  L_6 = ___y;
		UILineInfo_t319  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UILineInfo_t319  L_9 = ___x;
		UILineInfo_t319  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UILineInfo_t319  L_12 = ___x;
		UILineInfo_t319  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UILineInfo_t319  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t319  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		UILineInfo_t319  L_17 = ___x;
		UILineInfo_t319  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		UILineInfo_t319  L_20 = ___x;
		UILineInfo_t319  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UILineInfo_t319  L_23 = ___y;
		UILineInfo_t319  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m10465_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t332 * L_27 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_27, (String_t*) &_stringLiteral1305, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2984_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_26MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m17635_GenericMethod;
extern "C" void Comparison_1__ctor_m17635_gshared (Comparison_1_t2984 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m17636_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m17636_gshared (Comparison_1_t2984 * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m17636((Comparison_1_t2984 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m17637_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m17637_gshared (Comparison_1_t2984 * __this, UILineInfo_t319  ___x, UILineInfo_t319  ___y, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t319_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&UILineInfo_t319_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m17638_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m17638_gshared (Comparison_1_t2984 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t574_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t814_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t813_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t611_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t610_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0MethodDeclarations.h"

extern TypeInfo StringU5BU5D_t433_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern MethodInfo Object_ToString_m108_MethodInfo;
extern MethodInfo String_Concat_m3423_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17640_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17641_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m3485_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m3486_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2985_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_126MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2985_0_0_0;
extern Il2CppType KeyValuePair_2_t610_0_0_0;
extern MethodInfo Array_get_Length_m4768_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t610  Array_InternalArray__get_Item_TisKeyValuePair_2_t610_m23433_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t610_m23433(__this, p0, method) (( KeyValuePair_2_t610  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t610_m23433_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17647_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t610_m23433_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17643_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17643_gshared (InternalEnumerator_1_t2985 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17644_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17644_gshared (InternalEnumerator_1_t2985 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t610  L_0 = (( KeyValuePair_2_t610  (*) (InternalEnumerator_1_t2985 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t610  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17645_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17645_gshared (InternalEnumerator_1_t2985 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17646_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17646_gshared (InternalEnumerator_1_t2985 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4768(L_1, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t610  InternalEnumerator_1_get_Current_m17647_gshared (InternalEnumerator_1_t2985 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1107 * L_3 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4768(L_5, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t610  L_8 = (( KeyValuePair_2_t610  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4206_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t577_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_7MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_27.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34.h"
extern TypeInfo Int64_t717_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2347_il2cpp_TypeInfo;
extern TypeInfo Link_t1411_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1412_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3008_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3012_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4207_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4208_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3558_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3006_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3557_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t930_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2986_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3015_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3010_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3017_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2892_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1041_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2203_il2cpp_TypeInfo;
extern TypeInfo Int64U5BU5D_t1314_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t923_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3003_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t4209_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_27MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_34MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t577_0_0_0;
extern Il2CppType IEqualityComparer_1_t2347_0_0_0;
extern Il2CppType KeyCollection_t3008_0_0_0;
extern Il2CppType ValueCollection_t3012_0_0_0;
extern Il2CppType ICollection_1_t4207_0_0_0;
extern Il2CppType IEnumerable_1_t4208_0_0_0;
extern Il2CppType IEnumerator_1_t3558_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3557_0_0_0;
extern Il2CppType KeyValuePair_2_t3006_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3657_0_0_0;
extern Il2CppType Transform_1_t2986_0_0_0;
extern Il2CppType Transform_1_t3015_0_0_0;
extern Il2CppType Enumerator_t3010_0_0_0;
extern Il2CppType ShimEnumerator_t3017_0_0_0;
extern Il2CppType EqualityComparer_1_t2892_0_0_0;
extern Il2CppType Int32U5BU5D_t1041_0_0_0;
extern Il2CppType LinkU5BU5D_t2203_0_0_0;
extern Il2CppType Int64U5BU5D_t1314_0_0_0;
extern Il2CppType EqualityComparer_1_t3003_0_0_0;
extern Il2CppType IEqualityComparer_1_t4209_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int64_t717_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m17721_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m17697_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m17699_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25391_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25392_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7359_MethodInfo;
extern MethodInfo KeyCollection__ctor_m17867_MethodInfo;
extern MethodInfo ValueCollection__ctor_m17902_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25476_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25477_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25478_MethodInfo;
extern MethodInfo Dictionary_2_Add_m17717_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m17729_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m17745_MethodInfo;
extern MethodInfo Transform_1__ctor_m17925_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m17707_MethodInfo;
extern MethodInfo Transform_1__ctor_m17929_MethodInfo;
extern MethodInfo Enumerator__ctor_m17886_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m17937_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m3449_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m17856_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7526_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25479_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4781_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4794_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4793_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4782_MethodInfo;
extern MethodInfo Type_ToString_m6824_MethodInfo;
extern MethodInfo String_Concat_m1710_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4770_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m17731_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25480_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m4765_MethodInfo;
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m23513 (Dictionary_2_t577 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2986 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t577;
struct Dictionary_2_t2988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23516_gshared (Dictionary_2_t2988 * __this, Array_t * p0, int32_t p1, Transform_1_t3016 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23516(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t3016 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23516_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23515(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t577 *, Array_t *, int32_t, Transform_1_t3015 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23516_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3006_TisKeyValuePair_2_t3006_m23518 (Dictionary_2_t577 * __this, KeyValuePair_2U5BU5D_t3557* p0, int32_t p1, Transform_1_t3015 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m17733_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m17735_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m17721_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m17737_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m17697_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m17739_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m17699_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25391_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25392_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m17715_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m17867_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m17902_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m17701_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m17656_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25476_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25477_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25478_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m17857_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m17859_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m17717_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m17729_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m17741_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m17713_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m17705_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m17745_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17925_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m23513_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m17707_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17929_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3006_m23515_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17886_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m17937_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16583_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m17703_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m3449_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m17856_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3006_TisKeyValuePair_2_t3006_m23518_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m17849_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25479_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m17731_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25480_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t2988_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
extern TypeInfo IEqualityComparer_1_t2569_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2994_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2998_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4210_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4211_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3561_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2989_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3560_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2987_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3001_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2996_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3002_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2371_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_24MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_24MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t2988_0_0_0;
extern Il2CppType IEqualityComparer_1_t2569_0_0_0;
extern Il2CppType KeyCollection_t2994_0_0_0;
extern Il2CppType ValueCollection_t2998_0_0_0;
extern Il2CppType ICollection_1_t4210_0_0_0;
extern Il2CppType IEnumerable_1_t4211_0_0_0;
extern Il2CppType IEnumerator_1_t3561_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3560_0_0_0;
extern Il2CppType KeyValuePair_2_t2989_0_0_0;
extern Il2CppType Transform_1_t2987_0_0_0;
extern Il2CppType Transform_1_t3001_0_0_0;
extern Il2CppType Enumerator_t2996_0_0_0;
extern Il2CppType ShimEnumerator_t3002_0_0_0;
extern Il2CppType EqualityComparer_1_t2371_0_0_0;
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m17722_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m17698_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m17700_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25186_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25167_MethodInfo;
extern MethodInfo KeyCollection__ctor_m17773_MethodInfo;
extern MethodInfo ValueCollection__ctor_m17808_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25481_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25482_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25483_MethodInfo;
extern MethodInfo Dictionary_2_Add_m17718_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m17730_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m17746_MethodInfo;
extern MethodInfo Transform_1__ctor_m17831_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m17708_MethodInfo;
extern MethodInfo Transform_1__ctor_m17835_MethodInfo;
extern MethodInfo Enumerator__ctor_m17792_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m17839_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m17696_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m17747_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m17732_MethodInfo;
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m23492 (Dictionary_2_t2988 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2987 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2989_m23494_gshared (Dictionary_2_t2988 * __this, Array_t * p0, int32_t p1, Transform_1_t3001 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2989_m23494(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t3001 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2989_m23494_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2989_TisKeyValuePair_2_t2989_m23495 (Dictionary_2_t2988 * __this, KeyValuePair_2U5BU5D_t3560* p0, int32_t p1, Transform_1_t3001 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m17734_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m17736_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m17722_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m17738_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m17698_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m17740_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m17700_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25186_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25167_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m17716_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m17773_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m17808_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m17702_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m17657_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25481_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25482_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25483_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m17748_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m17750_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m17718_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m17730_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m17742_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m17714_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m17706_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m17746_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17831_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m23492_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m17708_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17835_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2989_m23494_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17792_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m17839_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11435_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m17704_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m17696_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m17747_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2989_TisKeyValuePair_2_t2989_m23495_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m17732_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m17649_GenericMethod;
extern "C" void Dictionary_2__ctor_m17649_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		(( void (*) (Dictionary_2_t2988 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m17651_GenericMethod;
extern "C" void Dictionary_2__ctor_m17651_gshared (Dictionary_2_t2988 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t2988 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m17653_GenericMethod;
extern "C" void Dictionary_2__ctor_m17653_gshared (Dictionary_2_t2988 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t2988 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m17655_GenericMethod;
extern "C" void Dictionary_2__ctor_m17655_gshared (Dictionary_2_t2988 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t2988 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17657_gshared (Dictionary_2_t2988 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t2989  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		(( void (*) (Dictionary_2_t2988 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck(L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6);
		V_2 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck(L_8);
			KeyValuePair_2_t2989  L_9 = (KeyValuePair_2_t2989 )InterfaceFuncInvoker0< KeyValuePair_2_t2989  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int64_t L_11 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m3481_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m1418_MethodInfo, L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m17659_GenericMethod;
extern "C" void Dictionary_2__ctor_m17659_gshared (Dictionary_2_t2988 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17661_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17661_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2994 * L_0 = (( KeyCollection_t2994 * (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17663_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17663_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2998 * L_0 = (( ValueCollection_t2998 * (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m17665_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17665_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2988 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int64_t L_5 = (int64_t)VirtFuncInvoker1< int64_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m17667_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17667_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2988 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2988 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m17669_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17669_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2988 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int64_t L_3 = (( int64_t (*) (Dictionary_2_t2988 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m17671_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17671_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m17673_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17673_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17675_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17675_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17677_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17677_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17679_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17679_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17681_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17681_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2_t2989  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17683_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17683_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2_t2989  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2989  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2988 *, KeyValuePair_2_t2989 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17685_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17685_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2U5BU5D_t3560* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3560* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2988 *, KeyValuePair_2U5BU5D_t3560*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17687_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17687_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2_t2989  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2989  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2988 *, KeyValuePair_2_t2989 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m17689_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17689_gshared (Dictionary_2_t2988 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m17689_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m17689_init)
	{
		DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3657_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m17689_init = true;
	}
	KeyValuePair_2U5BU5D_t3560* V_0 = {0};
	DictionaryEntryU5BU5D_t3657* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B5_1 = {0};
	Dictionary_2_t2988 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B4_1 = {0};
	Dictionary_2_t2988 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3560*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3560* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3560* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t2988 *, KeyValuePair_2U5BU5D_t3560*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t3657*)IsInst(L_6, DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3657* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t3657* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2987 * L_10 = ((Dictionary_2_t2988_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2988 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2988 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2987 * L_12 = (Transform_1_t2987 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2987 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2988_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2988 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2987 * L_13 = ((Dictionary_2_t2988_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2988 *, DictionaryEntryU5BU5D_t3657*, int32_t, Transform_1_t2987 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3001 * L_17 = (Transform_1_t3001 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3001 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t3001 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17691_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17691_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996  L_0 = {0};
		(( void (*) (Enumerator_t2996 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2996  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17693_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17693_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996  L_0 = {0};
		(( void (*) (Enumerator_t2996 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2996  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17695_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17695_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3002 * L_0 = (ShimEnumerator_t3002 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3002 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17696_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m17698_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		Int64U5BU5D_t1314* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int64_t*)(int64_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2203* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1412 * L_27 = (KeyNotFoundException_t1412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1412_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7359(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m7359_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17700_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2203* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2203* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_32 = V_0;
		Int32U5BU5D_t1041* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2203* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2203* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t1041* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t1041* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2203* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t288* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2203* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2203* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2203* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t1041* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t1041* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		Int64U5BU5D_t1314* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int64_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_70, L_71)) = (int64_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2371_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m17702_gshared (Dictionary_2_t2988 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m17702_init;
	if (!Dictionary_2_Init_m17702_init)
	{
		EqualityComparer_1_t2371_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2371_0_0_0);
		Dictionary_2_Init_m17702_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2988 * G_B4_0 = {0};
	Dictionary_2_t2988 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2988 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_1 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_1, (String_t*) &_stringLiteral1307, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2988 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2988 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2988 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2371 * L_5 = (( EqualityComparer_1_t2371 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2988 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t2988 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m17704_gshared (Dictionary_2_t2988 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m17704_init;
	if (!Dictionary_2_InitArrays_m17704_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_InitArrays_m17704_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1041*)SZArrayNew(Int32U5BU5D_t1041_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2203*)SZArrayNew(LinkU5BU5D_t2203_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int64U5BU5D_t1314*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t1041* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t1041* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17706_gshared (Dictionary_2_t2988 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral252, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_3 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_3, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4768(L_5, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t332 * L_7 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_7, (String_t*) &_stringLiteral1308, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m4768(L_8, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t332 * L_12 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_12, (String_t*) &_stringLiteral1309, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2989  Dictionary_2_make_pair_m17708_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int64_t L_1 = ___value;
		KeyValuePair_2_t2989  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2989 *, Object_t *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m17710_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m17710_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m17712_GenericMethod;
extern "C" int64_t Dictionary_2_pick_value_m17712_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17714_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2U5BU5D_t3560* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3560* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3560* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3001 * L_5 = (Transform_1_t3001 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3001 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2988 *, KeyValuePair_2U5BU5D_t3560*, int32_t, Transform_1_t3001 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m17716_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m17716_init;
	if (!Dictionary_2_Resize_m17716_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_Resize_m17716_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1041* V_1 = {0};
	LinkU5BU5D_t2203* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t288* V_7 = {0};
	Int64U5BU5D_t1314* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t1041* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t923_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m7526(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m7526_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t1041*)SZArrayNew(Int32U5BU5D_t1041_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2203*)SZArrayNew(LinkU5BU5D_t2203_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t1041* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2203* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2203* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t1041* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t1041* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2203* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t1041* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1041* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2203* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((Int64U5BU5D_t1314*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t288* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t288* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		Int64U5BU5D_t1314* L_40 = (__this->___valueSlots_7);
		Int64U5BU5D_t1314* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		ObjectU5BU5D_t288* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int64U5BU5D_t1314* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17718_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2203* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t332 * L_21 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_21, (String_t*) &_stringLiteral1311, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2203* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_30 = V_0;
		Int32U5BU5D_t1041* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2203* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2203* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2203* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t1041* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t1041* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t288* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		Int64U5BU5D_t1314* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int64_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m17720_GenericMethod;
extern "C" void Dictionary_2_Clear_m17720_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1041* L_0 = (__this->___table_4);
		Int32U5BU5D_t1041* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		ObjectU5BU5D_t288* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t288* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		Int64U5BU5D_t1314* L_4 = (__this->___valueSlots_7);
		Int64U5BU5D_t1314* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		LinkU5BU5D_t2203* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2203* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17722_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2203* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m17724_GenericMethod;
extern TypeInfo* EqualityComparer_1_t3003_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m17724_gshared (Dictionary_2_t2988 * __this, int64_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m17724_init;
	if (!Dictionary_2_ContainsValue_m17724_init)
	{
		EqualityComparer_1_t3003_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3003_0_0_0);
		Dictionary_2_ContainsValue_m17724_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3003_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3003 * L_0 = (( EqualityComparer_1_t3003 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t1041* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		Int64U5BU5D_t1314* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int64_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(int64_t*)(int64_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2203* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t1041* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m17726_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m17726_gshared (Dictionary_2_t2988 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3560* V_0 = {0};
	{
		SerializationInfo_t665 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral352, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t665 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4781(L_2, (String_t*) &_stringLiteral354, L_3, /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4794(L_4, (String_t*) &_stringLiteral356, L_5, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t3560*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3560*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3560* L_8 = V_0;
		(( void (*) (Dictionary_2_t2988 *, KeyValuePair_2U5BU5D_t3560*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t665 * L_9 = ___info;
		Int32U5BU5D_t1041* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m4781(L_9, (String_t*) &_stringLiteral1312, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3560* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4794(L_11, (String_t*) &_stringLiteral1313, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m17728_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m17728_gshared (Dictionary_2_t2988 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3560* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t665 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t665 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m4793(L_1, (String_t*) &_stringLiteral354, /*hidden argument*/&SerializationInfo_GetInt32_m4793_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t665 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m4782(L_3, (String_t*) &_stringLiteral356, L_4, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)));
		SerializationInfo_t665 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m4793(L_6, (String_t*) &_stringLiteral1312, /*hidden argument*/&SerializationInfo_GetInt32_m4793_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t665 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m4782(L_8, (String_t*) &_stringLiteral1313, L_9, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t3560*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t2988 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3560* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t3560* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t2989 *)(KeyValuePair_2_t2989 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3560* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int64_t L_19 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t2989 *)(KeyValuePair_2_t2989 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3560* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t665 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17730_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int64_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2203* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2203* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t1041* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2203* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2203* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2203* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2203* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2203* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t288* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		Int64U5BU5D_t1314* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), (&V_5));
		int64_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_49, L_50)) = (int64_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17732_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t288* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		int64_t* L_20 = ___value;
		Int64U5BU5D_t1314* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2203* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int64_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), (&V_2));
		int64_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2994 * Dictionary_2_get_Keys_m17734_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2994 * L_0 = (KeyCollection_t2994 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2994 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2998 * Dictionary_2_get_Values_m17736_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2998 * L_0 = (ValueCollection_t2998 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2998 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17738_gshared (Dictionary_2_t2988 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m1710(NULL /*static, unused*/, (String_t*) &_stringLiteral1314, L_4, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		ArgumentException_t332 * L_6 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_6, L_5, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m17740_gshared (Dictionary_2_t2988 * __this, Object_t * ___value, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6793_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), (&V_0));
		int64_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m1710(NULL /*static, unused*/, (String_t*) &_stringLiteral1314, L_6, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_8, L_7, (String_t*) &_stringLiteral545, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(int64_t*)((int64_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3003_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17742_gshared (Dictionary_2_t2988 * __this, KeyValuePair_2_t2989  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m17742_init;
	if (!Dictionary_2_ContainsKeyValuePair_m17742_init)
	{
		EqualityComparer_1_t3003_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3003_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m17742_init = true;
	}
	int64_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3003_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3003 * L_2 = (( EqualityComparer_1_t3003 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int64_t L_3 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m17744_GenericMethod;
extern "C" Enumerator_t2996  Dictionary_2_GetEnumerator_m17744_gshared (Dictionary_2_t2988 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996  L_0 = {0};
		(( void (*) (Enumerator_t2996 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t930  Dictionary_2_U3CCopyToU3Em__0_m17746_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int64_t L_2 = ___value;
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t930  L_5 = {0};
		DictionaryEntry__ctor_m4765(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17749_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17751_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m17747_gshared (KeyValuePair_2_t2989 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2989 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2989 *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m17748_gshared (KeyValuePair_2_t2989 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m17749_gshared (KeyValuePair_2_t2989 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C" int64_t KeyValuePair_2_get_Value_m17750_gshared (KeyValuePair_2_t2989 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m17751_gshared (KeyValuePair_2_t2989 * __this, int64_t ___value, MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m17752_GenericMethod;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m17752_gshared (KeyValuePair_2_t2989 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m17752_init;
	if (!KeyValuePair_2_ToString_m17752_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		KeyValuePair_2_ToString_m17752_init = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t433* G_B2_1 = {0};
	StringU5BU5D_t433* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t433* G_B1_1 = {0};
	StringU5BU5D_t433* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t433* G_B3_2 = {0};
	StringU5BU5D_t433* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t433* G_B5_1 = {0};
	StringU5BU5D_t433* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t433* G_B4_1 = {0};
	StringU5BU5D_t433* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t433* G_B6_2 = {0};
	StringU5BU5D_t433* G_B6_3 = {0};
	{
		StringU5BU5D_t433* L_0 = ((StringU5BU5D_t433*)SZArrayNew(StringU5BU5D_t433_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral266);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral266;
		StringU5BU5D_t433* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t433* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral329);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral329;
		StringU5BU5D_t433* L_8 = L_7;
		int64_t L_9 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		int64_t L_12 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t433* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m3423(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m3423_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2990_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_127MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2990_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t2989  Array_InternalArray__get_Item_TisKeyValuePair_2_t2989_m23444_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2989_m23444(__this, p0, method) (( KeyValuePair_2_t2989  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2989_m23444_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17757_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2989_m23444_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17753_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17753_gshared (InternalEnumerator_1_t2990 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17754_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17754_gshared (InternalEnumerator_1_t2990 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2989  L_0 = (( KeyValuePair_2_t2989  (*) (InternalEnumerator_1_t2990 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2989  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17755_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17755_gshared (InternalEnumerator_1_t2990 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17756_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17756_gshared (InternalEnumerator_1_t2990 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4768(L_1, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2989  InternalEnumerator_1_get_Current_m17757_gshared (InternalEnumerator_1_t2990 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1107 * L_3 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4768(L_5, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t2989  L_8 = (( KeyValuePair_2_t2989  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4212_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3559_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3555_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4213_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3562_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2991_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_128MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2991_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
extern "C" int64_t Array_InternalArray__get_Item_TisInt64_t717_m23455_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt64_t717_m23455(__this, p0, method) (( int64_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt64_t717_m23455_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17762_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt64_t717_m23455_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17758_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17758_gshared (InternalEnumerator_1_t2991 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17759_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17759_gshared (InternalEnumerator_1_t2991 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (InternalEnumerator_1_t2991 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17760_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17760_gshared (InternalEnumerator_1_t2991 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17761_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17761_gshared (InternalEnumerator_1_t2991 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4768(L_1, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m17762_gshared (InternalEnumerator_1_t2991 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1107 * L_3 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4768(L_5, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int64_t L_8 = (( int64_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4214_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4215_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4216_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4217_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1898_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2992_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_129MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2992_0_0_0;
extern Il2CppType IComparable_1_t1898_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21424_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21424(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1898_m23466(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17767_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1898_m23466_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4218_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4219_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4220_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4221_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1899_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2993_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_130MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2993_0_0_0;
extern Il2CppType IEquatable_1_t1899_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1899_m23477(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17772_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1899_m23477_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4222_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
extern TypeInfo Enumerator_t2995_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2997_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25MethodDeclarations.h"
extern Il2CppType Enumerator_t2995_0_0_0;
extern Il2CppType Transform_1_t2997_0_0_0;
extern MethodInfo NotSupportedException__ctor_m4785_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m17784_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m17710_MethodInfo;
extern MethodInfo Transform_1__ctor_m17804_MethodInfo;
extern MethodInfo Enumerator__ctor_m17787_MethodInfo;
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23488_gshared (Dictionary_2_t2988 * __this, Array_t * p0, int32_t p1, Transform_1_t2997 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23488(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t2997 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23488_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23487 (Dictionary_2_t2988 * __this, ObjectU5BU5D_t288* p0, int32_t p1, Transform_1_t2997 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m17785_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m17784_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17804_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23488_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m23487_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17787_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m17773_gshared (KeyCollection_t2994 * __this, Dictionary_2_t2988 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2988 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2988 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17774_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17774_gshared (KeyCollection_t2994 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17775_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17775_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17776_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17776_gshared (KeyCollection_t2994 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17777_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17777_gshared (KeyCollection_t2994 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17778_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17778_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		Enumerator_t2995  L_0 = (( Enumerator_t2995  (*) (KeyCollection_t2994 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2995  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m17779_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m17779_gshared (KeyCollection_t2994 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t288* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t288*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t288* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t288* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t288*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2988 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2988 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2997 * L_11 = (Transform_1_t2997 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2997 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t2997 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17780_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17780_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		Enumerator_t2995  L_0 = (( Enumerator_t2995  (*) (KeyCollection_t2994 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2995  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17781_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17781_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17782_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17782_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m17783_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m17783_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m17784_gshared (KeyCollection_t2994 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2988 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2997 * L_7 = (Transform_1_t2997 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2997 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2988 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t2997 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2995  KeyCollection_GetEnumerator_m17785_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		Enumerator_t2995  L_1 = {0};
		(( void (*) (Enumerator_t2995 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m17786_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m17786_gshared (KeyCollection_t2994 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m17799_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m17803_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m17797_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17787_gshared (Enumerator_t2995 * __this, Dictionary_2_t2988 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2996  L_1 = (( Enumerator_t2996  (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17788_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17788_gshared (Enumerator_t2995 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m17789_GenericMethod;
extern "C" void Enumerator_Dispose_m17789_gshared (Enumerator_t2995 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m17790_GenericMethod;
extern "C" bool Enumerator_MoveNext_m17790_gshared (Enumerator_t2995 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17791_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m17791_gshared (Enumerator_t2995 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2989 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m17802_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m17800_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m17801_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17792_gshared (Enumerator_t2996 * __this, Dictionary_2_t2988 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2988 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17793_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17793_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2989  L_0 = (__this->___current_3);
		KeyValuePair_2_t2989  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17794_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17794_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2989 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2989 * L_3 = &(__this->___current_3);
		int64_t L_4 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t930  L_7 = {0};
		DictionaryEntry__ctor_m4765(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17795_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17795_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17796_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17796_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17797_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t2988 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2203* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t2988 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t288* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2988 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int64U5BU5D_t1314* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2989  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2989 *, Object_t *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(int64_t*)(int64_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2988 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17798_GenericMethod;
extern "C" KeyValuePair_2_t2989  Enumerator_get_Current_m17798_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2989  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17799_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2989 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m17800_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2989 * L_0 = &(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m17801_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t2988 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1107 * L_5 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_5, (String_t*) &_stringLiteral1315, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17802_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1316, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m17803_gshared (Enumerator_t2996 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2988 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17804_gshared (Transform_1_t2997 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17805_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m17805_gshared (Transform_1_t2997 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17805((Transform_1_t2997 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17806_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17806_gshared (Transform_1_t2997 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17807_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m17807_gshared (Transform_1_t2997 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
extern TypeInfo Enumerator_t2999_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3000_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"
extern Il2CppType Enumerator_t2999_0_0_0;
extern Il2CppType Transform_1_t3000_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m17819_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m17712_MethodInfo;
extern MethodInfo Transform_1__ctor_m17827_MethodInfo;
extern MethodInfo Enumerator__ctor_m17822_MethodInfo;
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23490_gshared (Dictionary_2_t2988 * __this, Array_t * p0, int32_t p1, Transform_1_t3000 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23490(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t3000 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23490_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2988;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t717_TisInt64_t717_m23491 (Dictionary_2_t2988 * __this, Int64U5BU5D_t1314* p0, int32_t p1, Transform_1_t3000 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m17820_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m17819_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17827_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt64_t717_TisInt64_t717_m23491_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17822_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17808_gshared (ValueCollection_t2998 * __this, Dictionary_2_t2988 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2988 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1306, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t2988 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17809_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17809_gshared (ValueCollection_t2998 * __this, int64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17810_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17810_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17811_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17811_gshared (ValueCollection_t2998 * __this, int64_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2988 *, int64_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17812_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17812_gshared (ValueCollection_t2998 * __this, int64_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17813_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17813_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		Enumerator_t2999  L_0 = (( Enumerator_t2999  (*) (ValueCollection_t2998 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2999  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m17814_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m17814_gshared (ValueCollection_t2998 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int64U5BU5D_t1314* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int64U5BU5D_t1314*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t1314* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t1314* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int64U5BU5D_t1314*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t2988 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2988 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3000 * L_11 = (Transform_1_t3000 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3000 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, Transform_1_t3000 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17815_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17815_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		Enumerator_t2999  L_0 = (( Enumerator_t2999  (*) (ValueCollection_t2998 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2999  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17816_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17816_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17817_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17817_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m17818_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m17818_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m17819_gshared (ValueCollection_t2998 * __this, Int64U5BU5D_t1314* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		Int64U5BU5D_t1314* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2988 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2988 * L_3 = (__this->___dictionary_0);
		Int64U5BU5D_t1314* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3000 * L_7 = (Transform_1_t3000 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3000 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2988 *, Int64U5BU5D_t1314*, int32_t, Transform_1_t3000 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2999  ValueCollection_GetEnumerator_m17820_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		Enumerator_t2999  L_1 = {0};
		(( void (*) (Enumerator_t2999 *, Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m17821_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m17821_gshared (ValueCollection_t2998 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17822_gshared (Enumerator_t2999 * __this, Dictionary_2_t2988 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2988 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2996  L_1 = (( Enumerator_t2996  (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m17823_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17823_gshared (Enumerator_t2999 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m17824_GenericMethod;
extern "C" void Enumerator_Dispose_m17824_gshared (Enumerator_t2999 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m17825_GenericMethod;
extern "C" bool Enumerator_MoveNext_m17825_gshared (Enumerator_t2999 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m17826_GenericMethod;
extern "C" int64_t Enumerator_get_Current_m17826_gshared (Enumerator_t2999 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2989 * L_1 = &(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17827_gshared (Transform_1_t3000 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17828_GenericMethod;
extern "C" int64_t Transform_1_Invoke_m17828_gshared (Transform_1_t3000 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17828((Transform_1_t3000 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17829_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17829_gshared (Transform_1_t3000 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17830_GenericMethod;
extern "C" int64_t Transform_1_EndInvoke_m17830_gshared (Transform_1_t3000 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17831_gshared (Transform_1_t2987 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17832_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m17832_gshared (Transform_1_t2987 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17832((Transform_1_t2987 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17833_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17833_gshared (Transform_1_t2987 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17834_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m17834_gshared (Transform_1_t2987 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17835_gshared (Transform_1_t3001 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17836_GenericMethod;
extern "C" KeyValuePair_2_t2989  Transform_1_Invoke_m17836_gshared (Transform_1_t3001 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17836((Transform_1_t3001 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2989  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2989  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2989  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17837_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17837_gshared (Transform_1_t3001 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17838_GenericMethod;
extern "C" KeyValuePair_2_t2989  Transform_1_EndInvoke_m17838_gshared (Transform_1_t3001 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2989 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t927_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10497_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m17841_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m17841_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17839_gshared (ShimEnumerator_t3002 * __this, Dictionary_2_t2988 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2988 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2996  L_1 = (( Enumerator_t2996  (*) (Dictionary_2_t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m17840_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m17840_gshared (ShimEnumerator_t3002 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m17841_gshared (ShimEnumerator_t3002 * __this, MethodInfo* method)
{
	{
		Enumerator_t2996  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2996  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m17842_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m17842_gshared (ShimEnumerator_t3002 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2989  V_0 = {0};
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2989  L_1 = (( KeyValuePair_2_t2989  (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m17843_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m17843_gshared (ShimEnumerator_t3002 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2989  V_0 = {0};
	{
		Enumerator_t2996 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2989  L_1 = (( KeyValuePair_2_t2989  (*) (Enumerator_t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t2989 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m17844_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m17844_gshared (ShimEnumerator_t3002 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t930  L_0 = (DictionaryEntry_t930 )VirtFuncInvoker0< DictionaryEntry_t930  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t930  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t930_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34.h"
extern TypeInfo DefaultComparer_t3005_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_34MethodDeclarations.h"
extern Il2CppType DefaultComparer_t3005_0_0_0;
extern MethodInfo DefaultComparer__ctor_m17853_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25484_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m17853_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25484_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m17845_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m17845_gshared (EqualityComparer_1_t3003 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int64>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m17846_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m17846_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3005 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3005 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3005 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3003_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17847_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m17847_gshared (EqualityComparer_1_t3003 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17848_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m17848_gshared (EqualityComparer_1_t3003 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int64_t, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int64_t*)((int64_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int64>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int64>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int64>::get_Default()
extern "C" EqualityComparer_1_t3003 * EqualityComparer_1_get_Default_m17849_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3003 * L_0 = ((EqualityComparer_1_t3003_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3004_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

extern MethodInfo IEquatable_1_Equals_m25485_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m25485_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m17850_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m17850_gshared (GenericEqualityComparer_1_t3004 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3003 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m17851_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17851_gshared (GenericEqualityComparer_1_t3004 * __this, int64_t ___obj, MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m107_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int64>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m17852_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m17852_gshared (GenericEqualityComparer_1_t3004 * __this, int64_t ___x, int64_t ___y, MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m17853_gshared (DefaultComparer_t3005 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3003 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m17854_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m17854_gshared (DefaultComparer_t3005 * __this, int64_t ___obj, MethodInfo* method)
{
	{
		int64_t L_0 = ___obj;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m107_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m17855_GenericMethod;
extern "C" bool DefaultComparer_Equals_m17855_gshared (DefaultComparer_t3005 * __this, int64_t ___x, int64_t ___y, MethodInfo* method)
{
	{
		int64_t L_0 = ___x;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_3 = ___y;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int64_t L_6 = ___y;
		int64_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m106_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m17858_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m17860_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3007_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_131MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3007_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>(System.Int32)
extern "C" KeyValuePair_2_t3006  Array_InternalArray__get_Item_TisKeyValuePair_2_t3006_m23497_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3006_m23497(__this, p0, method) (( KeyValuePair_2_t3006  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3006_m23497_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17866_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3006_m23497_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m17862_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m17862_gshared (InternalEnumerator_1_t3007 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17863_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17863_gshared (InternalEnumerator_1_t3007 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3006  L_0 = (( KeyValuePair_2_t3006  (*) (InternalEnumerator_1_t3007 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3006  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m17864_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m17864_gshared (InternalEnumerator_1_t3007 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m17865_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m17865_gshared (InternalEnumerator_1_t3007 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4768(L_1, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t3006  InternalEnumerator_1_get_Current_m17866_gshared (InternalEnumerator_1_t3007 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1180, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1107 * L_3 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_3, (String_t*) &_stringLiteral1181, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4768(L_5, /*hidden argument*/&Array_get_Length_m4768_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		KeyValuePair_2_t3006  L_8 = (( KeyValuePair_2_t3006  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4223_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3556_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Int64>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58.h"
extern TypeInfo Enumerator_t3009_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3011_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_27MethodDeclarations.h"
extern Il2CppType Enumerator_t3009_0_0_0;
extern Il2CppType Transform_1_t3011_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m17878_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m17709_MethodInfo;
extern MethodInfo Transform_1__ctor_m17898_MethodInfo;
extern MethodInfo Enumerator__ctor_m17881_MethodInfo;
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m23508(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t577 *, Array_t *, int32_t, Transform_1_t3011 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m23488_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m23509 (Dictionary_2_t577 * __this, StringU5BU5D_t433* p0, int32_t p1, Transform_1_t3011 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m17879_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m17878_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m17709_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17898_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m23508_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m23509_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17881_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m17893_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m17743_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m17897_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m17891_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m17896_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m17894_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m17895_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.String>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59.h"
extern TypeInfo Enumerator_t3013_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3014_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_27MethodDeclarations.h"
extern Il2CppType Enumerator_t3013_0_0_0;
extern Il2CppType Transform_1_t3014_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m17913_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m17711_MethodInfo;
extern MethodInfo Transform_1__ctor_m17921_MethodInfo;
extern MethodInfo Enumerator__ctor_m17916_MethodInfo;
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23511(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t577 *, Array_t *, int32_t, Transform_1_t3014 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23490_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t577;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t717_TisInt64_t717_m23512 (Dictionary_2_t577 * __this, Int64U5BU5D_t1314* p0, int32_t p1, Transform_1_t3014 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m17723_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m17914_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m17913_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m17711_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m17921_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt64_t717_m23511_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt64_t717_TisInt64_t717_m23512_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m17916_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Int64>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3016_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m17930_GenericMethod;
extern "C" void Transform_1__ctor_m17930_gshared (Transform_1_t3016 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m17932_GenericMethod;
extern "C" KeyValuePair_2_t3006  Transform_1_Invoke_m17932_gshared (Transform_1_t3016 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m17932((Transform_1_t3016 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3006  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3006  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3006  (*FunctionPointerType) (Object_t * __this, int64_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m17934_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m17934_gshared (Transform_1_t3016 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t717_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m17936_GenericMethod;
extern "C" KeyValuePair_2_t3006  Transform_1_EndInvoke_m17936_gshared (Transform_1_t3016 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3006 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m17939_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m17892_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m17939_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Int64>::get_Current()
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t586_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_25MethodDeclarations.h"

// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_27.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26.h"
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Comparison_1_gen_27.h"
extern TypeInfo MatchDirectConnectInfo_t585_il2cpp_TypeInfo;
extern TypeInfo MatchDirectConnectInfoU5BU5D_t3018_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3021_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3564_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3565_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3563_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3023_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3027_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3028_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_26MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Predicate_1_gen_27MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_26MethodDeclarations.h"
extern Il2CppType List_1_t586_0_0_0;
extern Il2CppType MatchDirectConnectInfoU5BU5D_t3018_0_0_0;
extern Il2CppType Enumerator_t3021_0_0_0;
extern Il2CppType ICollection_1_t3564_0_0_0;
extern Il2CppType IEnumerable_1_t3565_0_0_0;
extern Il2CppType IEnumerator_1_t3563_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3023_0_0_0;
extern Il2CppType Predicate_1_t3027_0_0_0;
extern Il2CppType Comparer_1_t3028_0_0_0;
extern MethodInfo List_1_get_Item_m17990_MethodInfo;
extern MethodInfo List_1_set_Item_m17991_MethodInfo;
extern MethodInfo List_1_Add_m17961_MethodInfo;
extern MethodInfo List_1_Contains_m17968_MethodInfo;
extern MethodInfo List_1_IndexOf_m17975_MethodInfo;
extern MethodInfo List_1_Insert_m17978_MethodInfo;
extern MethodInfo List_1_Remove_m17980_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25486_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25487_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25488_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25489_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18008_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18083_MethodInfo;
extern MethodInfo Enumerator__ctor_m18002_MethodInfo;
extern MethodInfo List_1_RemoveAt_m17982_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m21435_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m21435(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[]&,System.Int32)
#define Array_Resize_TisMatchDirectConnectInfo_t585_m23542(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3018**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35.h"
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10495_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10495(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisMatchDirectConnectInfo_t585_m23544(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3018*, MatchDirectConnectInfo_t585 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21504_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m21504(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t585_m23546(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3018*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21688_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, Comparison_1_t2398 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m21688(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, Comparison_1_t2398 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Networking.Match.MatchDirectConnectInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisMatchDirectConnectInfo_t585_m23554(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, MatchDirectConnectInfoU5BU5D_t3018*, int32_t, Comparison_1_t3030 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m17990_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m17991_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisMatchDirectConnectInfo_t585_m23542_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m17977_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m17974_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m17961_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m17968_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m17975_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m17978_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m17980_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m17962_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m17988_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m17989_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25486_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25487_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25488_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25489_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m17979_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m17963_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m17964_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18008_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisMatchDirectConnectInfo_t585_m23544_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m17972_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m17973_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18083_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18002_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m17976_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m17982_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18089_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t585_m23546_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisMatchDirectConnectInfo_t585_m23554_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3019_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_132MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3019_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t585_m23520(__this, p0, method) (( MatchDirectConnectInfo_t585 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m17996_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMatchDirectConnectInfo_t585_m23520_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3022_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4224_il2cpp_TypeInfo;

// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.ResponseBase>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4225_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.ResponseBase>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4226_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3020_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_133MethodDeclarations.h"

extern TypeInfo ResponseBase_t573_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3020_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Networking.Match.ResponseBase>(System.Int32)
#define Array_InternalArray__get_Item_TisResponseBase_t573_m23531(__this, p0, method) (( ResponseBase_t573 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18001_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisResponseBase_t573_m23531_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Networking.Match.ResponseBase>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4227_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Networking.Match.ResponseBase>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m18005_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26MethodDeclarations.h"
extern Il2CppType IList_1_t3022_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18037_MethodInfo;
extern MethodInfo IList_1_get_Item_m25490_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25491_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25492_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18037_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25490_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18069_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25491_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25492_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3024_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3024_0_0_0;
extern Il2CppType MatchDirectConnectInfo_t585_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25493_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18068_MethodInfo;
extern MethodInfo List_1__ctor_m17943_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18061_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18059_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18064_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18055_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25494_MethodInfo;
extern MethodInfo IList_1_Insert_m25495_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25496_MethodInfo;
extern MethodInfo IList_1_set_Item_m25497_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25493_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18072_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18073_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18070_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18068_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m17943_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18061_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18071_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18059_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18064_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18055_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25494_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25495_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25496_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25497_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3025_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_35MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35.h"
extern TypeInfo DefaultComparer_t3026_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_35MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3025_0_0_0;
extern Il2CppType IEquatable_1_t4228_0_0_0;
extern Il2CppType DefaultComparer_t3026_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18079_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25498_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m23543_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18079_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25498_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m23543_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Default()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
