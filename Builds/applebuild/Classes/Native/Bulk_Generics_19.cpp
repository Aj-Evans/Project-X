﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IEnumerable_1_t4381_il2cpp_TypeInfo;


// System.Array
#include "mscorlib_System_Array.h"

// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3626_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t3293_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo StringU5BU5D_t433_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Byte_t335_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern MethodInfo Object_ToString_m108_MethodInfo;
extern MethodInfo String_Concat_m3423_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m20534_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m20536_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20533_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m20535_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern Il2CppGenericMethod KeyValuePair_2__ctor_m20532_GenericMethod;
extern "C" void KeyValuePair_2__ctor_m20532_gshared (KeyValuePair_2_t3293 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3293 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3293 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m20533_gshared (KeyValuePair_2_t3293 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m20534_gshared (KeyValuePair_2_t3293 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m20535_gshared (KeyValuePair_2_t3293 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m20536_gshared (KeyValuePair_2_t3293 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m20537_GenericMethod;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m20537_gshared (KeyValuePair_2_t3293 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m20537_init;
	if (!KeyValuePair_2_ToString_m20537_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		KeyValuePair_2_ToString_m20537_init = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = 0x0;
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
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
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3294_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_177MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3294_0_0_0;
extern Il2CppType KeyValuePair_2_t3293_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern MethodInfo Array_get_Length_m4768_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t3293  Array_InternalArray__get_Item_TisKeyValuePair_2_t3293_m24210_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3293_m24210(__this, p0, method) (( KeyValuePair_2_t3293  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3293_m24210_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20542_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3293_m24210_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20538_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20538_gshared (InternalEnumerator_1_t3294 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20539_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20539_gshared (InternalEnumerator_1_t3294 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3293  L_0 = (( KeyValuePair_2_t3293  (*) (InternalEnumerator_1_t3294 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3293  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20540_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20540_gshared (InternalEnumerator_1_t3294 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20541_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20541_gshared (InternalEnumerator_1_t3294 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t3293  InternalEnumerator_1_get_Current_m20542_gshared (InternalEnumerator_1_t3294 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3293  L_8 = (( KeyValuePair_2_t3293  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4382_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3624_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Values()
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t3295_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t807_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t3292_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3296_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3298_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48MethodDeclarations.h"
extern Il2CppType Dictionary_2_t3292_0_0_0;
extern Il2CppType Enumerator_t3296_0_0_0;
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern Il2CppType KeyCollection_t3295_0_0_0;
extern Il2CppType Transform_1_t3298_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10494_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m20482_MethodInfo;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4785_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m20507_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m20554_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20496_MethodInfo;
extern MethodInfo Transform_1__ctor_m20574_MethodInfo;
extern MethodInfo Enumerator__ctor_m20557_MethodInfo;
struct Dictionary_2_t3292;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24221_gshared (Dictionary_2_t3292 * __this, Array_t * p0, int32_t p1, Transform_1_t3298 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24221(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, Transform_1_t3298 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24221_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3292;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m24220 (Dictionary_2_t3292 * __this, ObjectU5BU5D_t288* p0, int32_t p1, Transform_1_t3298 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m20482_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m20507_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20555_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20554_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20492_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m20496_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20574_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24221_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m24220_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20557_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod KeyCollection__ctor_m20543_GenericMethod;
extern "C" void KeyCollection__ctor_m20543_gshared (KeyCollection_t3295 * __this, Dictionary_2_t3292 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t3292 * L_0 = ___dictionary;
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
		Dictionary_2_t3292 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20544_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20544_gshared (KeyCollection_t3295 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20545_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20545_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20546_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20546_gshared (KeyCollection_t3295 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20547_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20547_gshared (KeyCollection_t3295 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20548_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20548_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		Enumerator_t3296  L_0 = (( Enumerator_t3296  (*) (KeyCollection_t3295 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3296  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m20549_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m20549_gshared (KeyCollection_t3295 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t3292 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3292 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3298 * L_11 = (Transform_1_t3298 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3298 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, Transform_1_t3298 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20550_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20550_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		Enumerator_t3296  L_0 = (( Enumerator_t3296  (*) (KeyCollection_t3295 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3296  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20551_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20551_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20552_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20552_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m20553_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m20553_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m20554_gshared (KeyCollection_t3295 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3292 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3298 * L_7 = (Transform_1_t3298 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3298 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3292 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t3298 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3296  KeyCollection_GetEnumerator_m20555_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		Enumerator_t3296  L_1 = {0};
		(( void (*) (Enumerator_t3296 *, Dictionary_2_t3292 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m20556_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m20556_gshared (KeyCollection_t3295 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
extern TypeInfo Enumerator_t3297_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23MethodDeclarations.h"
extern Il2CppType Enumerator_t3297_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20569_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m20529_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20573_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20567_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20557_gshared (Enumerator_t3296 * __this, Dictionary_2_t3292 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3297  L_1 = (( Enumerator_t3297  (*) (Dictionary_2_t3292 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20558_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20558_gshared (Enumerator_t3296 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20559_GenericMethod;
extern "C" void Enumerator_Dispose_m20559_gshared (Enumerator_t3296 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20560_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20560_gshared (Enumerator_t3296 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20561_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m20561_gshared (Enumerator_t3296 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3293 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo DictionaryEntry_t930_il2cpp_TypeInfo;
extern TypeInfo Link_t1411_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1283_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m4765_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m20532_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20572_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20570_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20571_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m20562_GenericMethod;
extern "C" void Enumerator__ctor_m20562_gshared (Enumerator_t3297 * __this, Dictionary_2_t3292 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3292 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20563_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20563_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3293  L_0 = (__this->___current_3);
		KeyValuePair_2_t3293  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20564_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20564_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3293 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3293 * L_3 = &(__this->___current_3);
		uint8_t L_4 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t930  L_7 = {0};
		DictionaryEntry__ctor_m4765(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20565_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20565_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20566_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20566_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20567_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3292 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t3292 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t288* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3292 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t515* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3293  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3293 *, Object_t *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3292 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20568_GenericMethod;
extern "C" KeyValuePair_2_t3293  Enumerator_get_Current_m20568_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3293  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20569_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3293 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m20570_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3293 * L_0 = &(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m20571_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t3292 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20572_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m20573_gshared (Enumerator_t3297 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3292 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20574_gshared (Transform_1_t3298 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20575_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m20575_gshared (Transform_1_t3298 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20575((Transform_1_t3298 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20576_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20576_gshared (Transform_1_t3298 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20577_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m20577_gshared (Transform_1_t3298 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3299_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_112.h"
extern TypeInfo Enumerator_t3300_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t515_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3301_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_112MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48MethodDeclarations.h"
extern Il2CppType Enumerator_t3300_0_0_0;
extern Il2CppType ByteU5BU5D_t515_0_0_0;
extern Il2CppType ValueCollection_t3299_0_0_0;
extern Il2CppType Transform_1_t3301_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20589_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20498_MethodInfo;
extern MethodInfo Transform_1__ctor_m20597_MethodInfo;
extern MethodInfo Enumerator__ctor_m20592_MethodInfo;
struct Dictionary_2_t3292;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t335_m24223_gshared (Dictionary_2_t3292 * __this, Array_t * p0, int32_t p1, Transform_1_t3301 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t335_m24223(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, Transform_1_t3301 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t335_m24223_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3292;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t335_TisByte_t335_m24224 (Dictionary_2_t3292 * __this, ByteU5BU5D_t515* p0, int32_t p1, Transform_1_t3301 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20509_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20590_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20589_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m20498_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20597_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisByte_t335_m24223_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisByte_t335_TisByte_t335_m24224_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20592_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m20578_GenericMethod;
extern "C" void ValueCollection__ctor_m20578_gshared (ValueCollection_t3299 * __this, Dictionary_2_t3292 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t3292 * L_0 = ___dictionary;
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
		Dictionary_2_t3292 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20579_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20579_gshared (ValueCollection_t3299 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20580_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20580_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20581_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20581_gshared (ValueCollection_t3299 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3292 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20582_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20582_gshared (ValueCollection_t3299 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20583_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20583_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		Enumerator_t3300  L_0 = (( Enumerator_t3300  (*) (ValueCollection_t3299 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3300  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m20584_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m20584_gshared (ValueCollection_t3299 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ByteU5BU5D_t515* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ByteU5BU5D_t515*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t515* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t515* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ByteU5BU5D_t515*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3292 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3292 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3301 * L_11 = (Transform_1_t3301 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3301 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, Transform_1_t3301 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20585_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20585_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		Enumerator_t3300  L_0 = (( Enumerator_t3300  (*) (ValueCollection_t3299 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3300  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20586_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20586_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20587_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20587_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m20588_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m20588_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m20589_gshared (ValueCollection_t3299 * __this, ByteU5BU5D_t515* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		ByteU5BU5D_t515* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3292 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3292 * L_3 = (__this->___dictionary_0);
		ByteU5BU5D_t515* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3301 * L_7 = (Transform_1_t3301 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3301 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3292 *, ByteU5BU5D_t515*, int32_t, Transform_1_t3301 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3300  ValueCollection_GetEnumerator_m20590_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		Enumerator_t3300  L_1 = {0};
		(( void (*) (Enumerator_t3300 *, Dictionary_2_t3292 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m20591_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m20591_gshared (ValueCollection_t3299 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20592_gshared (Enumerator_t3300 * __this, Dictionary_2_t3292 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3292 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3297  L_1 = (( Enumerator_t3297  (*) (Dictionary_2_t3292 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20593_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20593_gshared (Enumerator_t3300 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20594_GenericMethod;
extern "C" void Enumerator_Dispose_m20594_gshared (Enumerator_t3300 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20595_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20595_gshared (Enumerator_t3300 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20596_GenericMethod;
extern "C" uint8_t Enumerator_get_Current_m20596_gshared (Enumerator_t3300 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3293 * L_1 = &(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20597_gshared (Transform_1_t3301 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20598_GenericMethod;
extern "C" uint8_t Transform_1_Invoke_m20598_gshared (Transform_1_t3301 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20598((Transform_1_t3301 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20599_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20599_gshared (Transform_1_t3301 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20600_GenericMethod;
extern "C" uint8_t Transform_1_EndInvoke_m20600_gshared (Transform_1_t3301 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3291_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_113MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20601_GenericMethod;
extern "C" void Transform_1__ctor_m20601_gshared (Transform_1_t3291 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20602_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m20602_gshared (Transform_1_t3291 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20602((Transform_1_t3291 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20603_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20603_gshared (Transform_1_t3291 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20604_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m20604_gshared (Transform_1_t3291 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3302_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_114MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20605_GenericMethod;
extern "C" void Transform_1__ctor_m20605_gshared (Transform_1_t3302 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20606_GenericMethod;
extern "C" KeyValuePair_2_t3293  Transform_1_Invoke_m20606_gshared (Transform_1_t3302 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20606((Transform_1_t3302 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3293  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3293  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3293  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20607_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20607_gshared (Transform_1_t3302 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20608_GenericMethod;
extern "C" KeyValuePair_2_t3293  Transform_1_EndInvoke_m20608_gshared (Transform_1_t3302 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3293 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3303_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_23MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t927_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t3303_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10497_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m20611_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20611_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m20609_GenericMethod;
extern "C" void ShimEnumerator__ctor_m20609_gshared (ShimEnumerator_t3303 * __this, Dictionary_2_t3292 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t3292 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3297  L_1 = (( Enumerator_t3297  (*) (Dictionary_2_t3292 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m20610_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m20610_gshared (ShimEnumerator_t3303 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m20611_gshared (ShimEnumerator_t3303 * __this, MethodInfo* method)
{
	{
		Enumerator_t3297  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3297  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m20612_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m20612_gshared (ShimEnumerator_t3303 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3293  V_0 = {0};
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3293  L_1 = (( KeyValuePair_2_t3293  (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m20613_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m20613_gshared (ShimEnumerator_t3303 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3293  V_0 = {0};
	{
		Enumerator_t3297 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3293  L_1 = (( KeyValuePair_2_t3293  (*) (Enumerator_t3297 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t3293 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m20614_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m20614_gshared (ShimEnumerator_t3303 * __this, MethodInfo* method)
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
extern TypeInfo ICollection_1_t4377_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4378_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3622_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t3304_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25MethodDeclarations.h"

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m20617_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m20619_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20616_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m20618_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_178.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3305_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_178MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3305_0_0_0;
extern Il2CppType KeyValuePair_2_t3304_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
extern "C" KeyValuePair_2_t3304  Array_InternalArray__get_Item_TisKeyValuePair_2_t3304_m24230_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3304_m24230(__this, p0, method) (( KeyValuePair_2_t3304  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3304_m24230_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20625_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3304_m24230_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20621_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20621_gshared (InternalEnumerator_1_t3305 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20622_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20622_gshared (InternalEnumerator_1_t3305 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3304  L_0 = (( KeyValuePair_2_t3304  (*) (InternalEnumerator_1_t3305 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3304  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20623_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20623_gshared (InternalEnumerator_1_t3305 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20624_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20624_gshared (InternalEnumerator_1_t3305 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t3304  InternalEnumerator_1_get_Current_m20625_gshared (InternalEnumerator_1_t3305 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3304  L_8 = (( KeyValuePair_2_t3304  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4383_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3620_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3619_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Boolean>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4384_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3628_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current()
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3306_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_179MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3306_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t335_m23202_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t335_m23202(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t335_m23202_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
#define Array_InternalArray__get_Item_TisBoolean_t35_m24241(__this, p0, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t335_m23202_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20630_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBoolean_t35_m24241_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4385_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Boolean>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Boolean>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4386_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4387_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4388_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t1942_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Boolean>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_180.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3307_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_180MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3307_0_0_0;
extern Il2CppType IComparable_1_t1942_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21424_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21424(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1942_m24252(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20635_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t1942_m24252_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4389_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4390_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4391_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4392_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t1943_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Boolean>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_181.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3308_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_181MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3308_0_0_0;
extern Il2CppType IEquatable_1_t1943_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1943_m24263(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20640_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t1943_m24263_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4393_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Boolean>>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t3309_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_115.h"
extern TypeInfo Dictionary_2_t971_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3310_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3312_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_115MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50MethodDeclarations.h"
extern Il2CppType Dictionary_2_t971_0_0_0;
extern Il2CppType Enumerator_t3310_0_0_0;
extern Il2CppType KeyCollection_t3309_0_0_0;
extern Il2CppType Transform_1_t3312_0_0_0;
extern MethodInfo Dictionary_2_get_Count_m20481_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m20506_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m20652_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20495_MethodInfo;
extern MethodInfo Transform_1__ctor_m20672_MethodInfo;
extern MethodInfo Enumerator__ctor_m20655_MethodInfo;
struct Dictionary_2_t971;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.String>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24274(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t971 *, Array_t *, int32_t, Transform_1_t3312 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m24221_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t971;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.String,System.String>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24275 (Dictionary_2_t971 * __this, StringU5BU5D_t433* p0, int32_t p1, Transform_1_t3312 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m20481_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m20506_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20653_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20652_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20491_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m20495_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20672_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisString_t_m24274_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisString_t_TisString_t_m24275_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20655_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
extern TypeInfo Enumerator_t3311_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24MethodDeclarations.h"
extern Il2CppType Enumerator_t3311_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20667_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m20528_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20671_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20665_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo KeyValuePair_2__ctor_m20615_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20670_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20668_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20669_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m20615_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3313_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116.h"
extern TypeInfo Enumerator_t3314_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t972_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3315_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_50MethodDeclarations.h"
extern Il2CppType Enumerator_t3314_0_0_0;
extern Il2CppType BooleanU5BU5D_t972_0_0_0;
extern Il2CppType ValueCollection_t3313_0_0_0;
extern Il2CppType Transform_1_t3315_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20687_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20497_MethodInfo;
extern MethodInfo Transform_1__ctor_m20695_MethodInfo;
extern MethodInfo Enumerator__ctor_m20690_MethodInfo;
struct Dictionary_2_t971;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Boolean>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t35_m24277(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t971 *, Array_t *, int32_t, Transform_1_t3315 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t335_m24223_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t971;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Boolean,System.Boolean>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisBoolean_t35_TisBoolean_t35_m24278 (Dictionary_2_t971 * __this, BooleanU5BU5D_t972* p0, int32_t p1, Transform_1_t3315 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20508_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20688_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20687_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m20497_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20695_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisBoolean_t35_m24277_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisBoolean_t35_TisBoolean_t35_m24278_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20690_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3290_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_117MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3316_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_118MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3317_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_119MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m20704_GenericMethod;
extern "C" void Transform_1__ctor_m20704_gshared (Transform_1_t3317 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20706_GenericMethod;
extern "C" KeyValuePair_2_t3304  Transform_1_Invoke_m20706_gshared (Transform_1_t3317 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20706((Transform_1_t3317 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3304  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3304  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3304  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20708_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20708_gshared (Transform_1_t3317 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t335_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20710_GenericMethod;
extern "C" KeyValuePair_2_t3304  Transform_1_EndInvoke_m20710_gshared (Transform_1_t3317 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3304 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3318_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_24MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t3318_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m20713_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m20666_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20713_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t4379_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3319_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_50MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_50.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3321_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_50MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3319_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2222_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern Il2CppType DefaultComparer_t3321_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9638_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m20725_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25628_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25623_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20725_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25628_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25623_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Boolean>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Boolean>::get_Default()
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3320_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__9MethodDeclarations.h"

extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m25629_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m20717_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m25629_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Boolean>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m106_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4394_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_182.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3322_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_182MethodDeclarations.h"

extern TypeInfo X509Certificate_t948_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3322_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
#define Array_InternalArray__get_Item_TisX509Certificate_t948_m24286(__this, p0, method) (( X509Certificate_t948 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20732_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisX509Certificate_t948_m24286_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4395_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4396_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4397_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4398_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.IDeserializationCallback>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4399_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.IDeserializationCallback>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4400_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_183.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3323_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_183MethodDeclarations.h"

extern TypeInfo IDeserializationCallback_t1145_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3323_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.IDeserializationCallback>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.IDeserializationCallback>(System.Int32)
#define Array_InternalArray__get_Item_TisIDeserializationCallback_t1145_m24297(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20737_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIDeserializationCallback_t1145_m24297_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.IDeserializationCallback>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4401_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.IDeserializationCallback>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4402_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_184.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3324_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_184MethodDeclarations.h"

extern TypeInfo X509ChainStatus_t1001_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3324_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
extern "C" X509ChainStatus_t1001  Array_InternalArray__get_Item_TisX509ChainStatus_t1001_m24308_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisX509ChainStatus_t1001_m24308(__this, p0, method) (( X509ChainStatus_t1001  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisX509ChainStatus_t1001_m24308_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20742_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisX509ChainStatus_t1001_m24308_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20738_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20738_gshared (InternalEnumerator_1_t3324 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20739_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20739_gshared (InternalEnumerator_1_t3324 * __this, MethodInfo* method)
{
	{
		X509ChainStatus_t1001  L_0 = (( X509ChainStatus_t1001  (*) (InternalEnumerator_1_t3324 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		X509ChainStatus_t1001  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20740_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20740_gshared (InternalEnumerator_1_t3324 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20741_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20741_gshared (InternalEnumerator_1_t3324 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
extern "C" X509ChainStatus_t1001  InternalEnumerator_1_get_Current_m20742_gshared (InternalEnumerator_1_t3324 * __this, MethodInfo* method)
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
		X509ChainStatus_t1001  L_8 = (( X509ChainStatus_t1001  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4403_il2cpp_TypeInfo;

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4404_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4405_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4406_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_185.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3325_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_185MethodDeclarations.h"

extern TypeInfo Capture_t1030_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3325_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
#define Array_InternalArray__get_Item_TisCapture_t1030_m24319(__this, p0, method) (( Capture_t1030 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20747_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisCapture_t1030_m24319_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4407_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4408_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4409_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4410_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_186.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3326_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_186MethodDeclarations.h"

extern TypeInfo Group_t1033_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3326_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
#define Array_InternalArray__get_Item_TisGroup_t1033_m24330(__this, p0, method) (( Group_t1033 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20752_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGroup_t1033_m24330_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4411_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4412_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4413_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t1042_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_51.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_51.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_121.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_25.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
extern TypeInfo IEqualityComparer_1_t2514_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1412_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3330_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3334_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4414_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4415_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3631_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3328_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t13_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t41_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3630_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3327_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3336_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3332_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3337_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2535_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1041_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2203_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t923_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_51MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_51MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_121MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_25MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1042_0_0_0;
extern Il2CppType IEqualityComparer_1_t2514_0_0_0;
extern Il2CppType KeyCollection_t3330_0_0_0;
extern Il2CppType ValueCollection_t3334_0_0_0;
extern Il2CppType ICollection_1_t4414_0_0_0;
extern Il2CppType IEnumerable_1_t4415_0_0_0;
extern Il2CppType IEnumerator_1_t3631_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3630_0_0_0;
extern Il2CppType KeyValuePair_2_t3328_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3657_0_0_0;
extern Il2CppType Transform_1_t3327_0_0_0;
extern Il2CppType Transform_1_t3336_0_0_0;
extern Il2CppType Enumerator_t3332_0_0_0;
extern Il2CppType ShimEnumerator_t3337_0_0_0;
extern Il2CppType EqualityComparer_1_t2535_0_0_0;
extern Il2CppType Int32U5BU5D_t1041_0_0_0;
extern Il2CppType LinkU5BU5D_t2203_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m20790_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m20778_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m20779_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25157_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25158_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7359_MethodInfo;
extern MethodInfo KeyCollection__ctor_m20814_MethodInfo;
extern MethodInfo ValueCollection__ctor_m20849_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25630_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25631_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25632_MethodInfo;
extern MethodInfo Dictionary_2_Add_m20788_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3481_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1418_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m20794_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m20802_MethodInfo;
extern MethodInfo Transform_1__ctor_m20868_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m20783_MethodInfo;
extern MethodInfo Transform_1__ctor_m20872_MethodInfo;
extern MethodInfo Enumerator__ctor_m20833_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m20876_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m20777_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m20803_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7526_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo Array_Clear_m5923_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4781_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4794_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4793_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4782_MethodInfo;
extern MethodInfo Type_ToString_m6824_MethodInfo;
extern MethodInfo String_Concat_m1710_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4770_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m20795_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25169_MethodInfo;
struct Dictionary_2_t1042;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m24354 (Dictionary_2_t1042 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t3327 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t1042;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3328_m24356_gshared (Dictionary_2_t1042 * __this, Array_t * p0, int32_t p1, Transform_1_t3336 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3328_m24356(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, Transform_1_t3336 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3328_m24356_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1042;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3328_TisKeyValuePair_2_t3328_m24357 (Dictionary_2_t1042 * __this, KeyValuePair_2U5BU5D_t3630* p0, int32_t p1, Transform_1_t3336 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m20796_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m20797_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m20790_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m20798_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m20778_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m20799_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m20779_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25157_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25158_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m20787_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m20814_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m20849_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m20780_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m20757_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25630_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25631_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25632_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m20804_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m20806_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m20788_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m20794_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m20800_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m20786_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m20782_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m20802_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20868_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m24354_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m20783_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20872_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3328_m24356_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20833_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m20876_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13062_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m20781_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m20777_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m20803_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3328_TisKeyValuePair_2_t3328_m24357_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m20795_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25169_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m20753_GenericMethod;
extern "C" void Dictionary_2__ctor_m20753_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		(( void (*) (Dictionary_2_t1042 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m20754_GenericMethod;
extern "C" void Dictionary_2__ctor_m20754_gshared (Dictionary_2_t1042 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t1042 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m20755_GenericMethod;
extern "C" void Dictionary_2__ctor_m20755_gshared (Dictionary_2_t1042 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t1042 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m20756_GenericMethod;
extern "C" void Dictionary_2__ctor_m20756_gshared (Dictionary_2_t1042 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t1042 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20757_gshared (Dictionary_2_t1042 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3328  V_1 = {0};
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
		(( void (*) (Dictionary_2_t1042 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t3328  L_9 = (KeyValuePair_2_t3328 )InterfaceFuncInvoker0< KeyValuePair_2_t3328  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m20758_GenericMethod;
extern "C" void Dictionary_2__ctor_m20758_gshared (Dictionary_2_t1042 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20759_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20759_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3330 * L_0 = (( KeyCollection_t3330 * (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20760_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20760_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3334 * L_0 = (( ValueCollection_t3334 * (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m20761_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20761_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t1042 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m20762_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20762_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t1042 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1042 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m20763_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20763_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t1042 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t1042 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m20764_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20764_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m20765_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20765_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, MethodInfo* method)
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
		VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20766_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20766_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20767_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20767_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20768_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20768_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20769_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20769_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2_t3328  ___keyValuePair, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20770_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20770_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2_t3328  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3328  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t1042 *, KeyValuePair_2_t3328 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20771_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20771_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2U5BU5D_t3630* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3630* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t1042 *, KeyValuePair_2U5BU5D_t3630*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20772_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20772_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2_t3328  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3328  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t1042 *, KeyValuePair_2_t3328 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m20773_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20773_gshared (Dictionary_2_t1042 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m20773_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m20773_init)
	{
		DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3657_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m20773_init = true;
	}
	KeyValuePair_2U5BU5D_t3630* V_0 = {0};
	DictionaryEntryU5BU5D_t3657* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B5_1 = {0};
	Dictionary_2_t1042 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B4_1 = {0};
	Dictionary_2_t1042 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3630*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3630* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3630* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t1042 *, KeyValuePair_2U5BU5D_t3630*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t3327 * L_10 = ((Dictionary_2_t1042_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t1042 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t1042 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3327 * L_12 = (Transform_1_t3327 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3327 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t1042_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t1042 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3327 * L_13 = ((Dictionary_2_t1042_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t1042 *, DictionaryEntryU5BU5D_t3657*, int32_t, Transform_1_t3327 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3336 * L_17 = (Transform_1_t3336 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3336 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, Transform_1_t3336 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20774_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20774_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332  L_0 = {0};
		(( void (*) (Enumerator_t3332 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3332  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20775_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20775_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332  L_0 = {0};
		(( void (*) (Enumerator_t3332 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3332  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20776_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20776_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3337 * L_0 = (ShimEnumerator_t3337 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3337 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20777_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20778_gshared (Dictionary_2_t1042 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
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
		Int32U5BU5D_t1041* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t1041* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t2203* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t1412 * L_28 = (KeyNotFoundException_t1412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t1412_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m7359(L_28, /*hidden argument*/&KeyNotFoundException__ctor_m7359_MethodInfo);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20779_gshared (Dictionary_2_t1042 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2203* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		Int32U5BU5D_t1041* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2203* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (__this->___count_10);
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_33 = V_0;
		Int32U5BU5D_t1041* L_34 = (__this->___table_4);
		NullCheck(L_34);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (__this->___emptySlot_9);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (__this->___touchedSlots_8);
		int32_t L_38 = L_37;
		V_4 = L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2203* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
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
		LinkU5BU5D_t2203* L_51 = (__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int32U5BU5D_t1041* L_54 = (__this->___keySlots_6);
		int32_t L_55 = V_2;
		int32_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2203* L_58 = (__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t2203* L_60 = (__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t2203* L_63 = (__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t1041* L_65 = (__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t1041* L_68 = (__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		Int32U5BU5D_t1041* L_71 = (__this->___valueSlots_7);
		int32_t L_72 = V_2;
		int32_t L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72)) = (int32_t)L_73;
		int32_t L_74 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2535_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m20780_gshared (Dictionary_2_t1042 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m20780_init;
	if (!Dictionary_2_Init_m20780_init)
	{
		EqualityComparer_1_t2535_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2535_0_0_0);
		Dictionary_2_Init_m20780_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t1042 * G_B4_0 = {0};
	Dictionary_2_t1042 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t1042 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t1042 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t1042 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t1042 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2535_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2535 * L_5 = (( EqualityComparer_1_t2535 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t1042 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t1042 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m20781_gshared (Dictionary_2_t1042 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m20781_init;
	if (!Dictionary_2_InitArrays_m20781_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_InitArrays_m20781_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t1041*)SZArrayNew(Int32U5BU5D_t1041_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2203*)SZArrayNew(LinkU5BU5D_t2203_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int32U5BU5D_t1041*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((Int32U5BU5D_t1041*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20782_gshared (Dictionary_2_t1042 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3328  Dictionary_2_make_pair_m20783_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t3328  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3328 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m20784_GenericMethod;
extern "C" int32_t Dictionary_2_pick_key_m20784_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m20785_GenericMethod;
extern "C" int32_t Dictionary_2_pick_value_m20785_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20786_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2U5BU5D_t3630* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3630* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3630* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3336 * L_5 = (Transform_1_t3336 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3336 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t1042 *, KeyValuePair_2U5BU5D_t3630*, int32_t, Transform_1_t3336 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m20787_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m20787_init;
	if (!Dictionary_2_Resize_m20787_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_Resize_m20787_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1041* V_1 = {0};
	LinkU5BU5D_t2203* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t1041* V_7 = {0};
	Int32U5BU5D_t1041* V_8 = {0};
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
		Int32U5BU5D_t1041* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
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
		V_7 = ((Int32U5BU5D_t1041*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((Int32U5BU5D_t1041*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		Int32U5BU5D_t1041* L_37 = (__this->___keySlots_6);
		Int32U5BU5D_t1041* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		Int32U5BU5D_t1041* L_40 = (__this->___valueSlots_7);
		Int32U5BU5D_t1041* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		Int32U5BU5D_t1041* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t1041* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20788_gshared (Dictionary_2_t1042 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2203* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		Int32U5BU5D_t1041* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int32_t L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t332 * L_22 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_22, (String_t*) &_stringLiteral1311, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t2203* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (__this->___count_10);
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_31 = V_0;
		Int32U5BU5D_t1041* L_32 = (__this->___table_4);
		NullCheck(L_32);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (__this->___emptySlot_9);
		V_2 = L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (__this->___touchedSlots_8);
		int32_t L_36 = L_35;
		V_3 = L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2203* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t2203* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t2203* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t1041* L_46 = (__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t1041* L_49 = (__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int32U5BU5D_t1041* L_52 = (__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		Int32U5BU5D_t1041* L_55 = (__this->___valueSlots_7);
		int32_t L_56 = V_2;
		int32_t L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56)) = (int32_t)L_57;
		int32_t L_58 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m20789_GenericMethod;
extern "C" void Dictionary_2_Clear_m20789_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t1041* L_0 = (__this->___table_4);
		Int32U5BU5D_t1041* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		Int32U5BU5D_t1041* L_2 = (__this->___keySlots_6);
		Int32U5BU5D_t1041* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m5923(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m5923_MethodInfo);
		Int32U5BU5D_t1041* L_4 = (__this->___valueSlots_7);
		Int32U5BU5D_t1041* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20790_gshared (Dictionary_2_t1042 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		Int32U5BU5D_t1041* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2203* L_21 = (__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m20791_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2535_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m20791_gshared (Dictionary_2_t1042 * __this, int32_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m20791_init;
	if (!Dictionary_2_ContainsValue_m20791_init)
	{
		EqualityComparer_1_t2535_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2535_0_0_0);
		Dictionary_2_ContainsValue_m20791_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2535_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2535 * L_0 = (( EqualityComparer_1_t2535 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		Int32U5BU5D_t1041* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m20792_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m20792_gshared (Dictionary_2_t1042 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3630* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t3630*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3630*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3630* L_8 = V_0;
		(( void (*) (Dictionary_2_t1042 *, KeyValuePair_2U5BU5D_t3630*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t665 * L_9 = ___info;
		Int32U5BU5D_t1041* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m4781(L_9, (String_t*) &_stringLiteral1312, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3630* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4794(L_11, (String_t*) &_stringLiteral1313, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m20793_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m20793_gshared (Dictionary_2_t1042 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3630* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t3630*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t1042 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3630* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t3630* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t3328 *)(KeyValuePair_2_t3328 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3630* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t3328 *)(KeyValuePair_2_t3328 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3630* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20794_gshared (Dictionary_2_t1042 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t1041* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
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
		LinkU5BU5D_t2203* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		Int32U5BU5D_t1041* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2203* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t1041* L_31 = (__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t2203* L_33 = (__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2203* L_36 = (__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t2203* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t2203* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (__this->___emptySlot_9);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t2203* L_45 = (__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int32U5BU5D_t1041* L_47 = (__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_4));
		int32_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		Int32U5BU5D_t1041* L_50 = (__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_5));
		int32_t L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		int32_t L_53 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20795_gshared (Dictionary_2_t1042 * __this, int32_t ___key, int32_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral342, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t1041* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t1041* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2203* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		Int32U5BU5D_t1041* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = ___value;
		Int32U5BU5D_t1041* L_22 = (__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2203* L_25 = (__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (((Link_t1411 *)(Link_t1411 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_29 = ___value;
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_2));
		int32_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3330 * Dictionary_2_get_Keys_m20796_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3330 * L_0 = (KeyCollection_t3330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t3330 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3334 * Dictionary_2_get_Values_m20797_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3334 * L_0 = (ValueCollection_t3334 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t3334 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20798_gshared (Dictionary_2_t1042 * __this, Object_t * ___key, MethodInfo* method)
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
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m20799_gshared (Dictionary_2_t1042 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
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
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_0));
		int32_t L_3 = V_0;
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
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2535_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20800_gshared (Dictionary_2_t1042 * __this, KeyValuePair_2_t3328  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m20800_init;
	if (!Dictionary_2_ContainsKeyValuePair_m20800_init)
	{
		EqualityComparer_1_t2535_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2535_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m20800_init = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2535_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2535 * L_2 = (( EqualityComparer_1_t2535 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m20801_GenericMethod;
extern "C" Enumerator_t3332  Dictionary_2_GetEnumerator_m20801_gshared (Dictionary_2_t1042 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332  L_0 = {0};
		(( void (*) (Enumerator_t3332 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t930  Dictionary_2_U3CCopyToU3Em__0_m20802_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = ___value;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t930  L_6 = {0};
		DictionaryEntry__ctor_m4765(&L_6, L_2, L_5, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m20805_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m20807_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m20803_gshared (KeyValuePair_2_t3328 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3328 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3328 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m20804_gshared (KeyValuePair_2_t3328 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m20805_gshared (KeyValuePair_2_t3328 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m20806_gshared (KeyValuePair_2_t3328 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m20807_gshared (KeyValuePair_2_t3328 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m20808_GenericMethod;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m20808_gshared (KeyValuePair_2_t3328 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m20808_init;
	if (!KeyValuePair_2_ToString_m20808_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		KeyValuePair_2_ToString_m20808_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_5;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_7;
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
		StringU5BU5D_t433* L_8 = G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral329);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral329;
		StringU5BU5D_t433* L_9 = L_8;
		int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_13;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_15;
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
		StringU5BU5D_t433* L_16 = G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_17 = String_Concat_m3423(NULL /*static, unused*/, L_16, /*hidden argument*/&String_Concat_m3423_MethodInfo);
		return L_17;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_187.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3329_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_187MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3329_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t3328  Array_InternalArray__get_Item_TisKeyValuePair_2_t3328_m24341_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3328_m24341(__this, p0, method) (( KeyValuePair_2_t3328  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3328_m24341_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m20813_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3328_m24341_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m20809_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m20809_gshared (InternalEnumerator_1_t3329 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20810_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20810_gshared (InternalEnumerator_1_t3329 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3328  L_0 = (( KeyValuePair_2_t3328  (*) (InternalEnumerator_1_t3329 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3328  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m20811_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m20811_gshared (InternalEnumerator_1_t3329 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m20812_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m20812_gshared (InternalEnumerator_1_t3329 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t3328  InternalEnumerator_1_get_Current_m20813_gshared (InternalEnumerator_1_t3329 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3328  L_8 = (( KeyValuePair_2_t3328  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4416_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3629_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_120.h"
extern TypeInfo Enumerator_t3331_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3333_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_120MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_52MethodDeclarations.h"
extern Il2CppType Enumerator_t3331_0_0_0;
extern Il2CppType Transform_1_t3333_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m20825_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m20784_MethodInfo;
extern MethodInfo Transform_1__ctor_m20845_MethodInfo;
extern MethodInfo Enumerator__ctor_m20828_MethodInfo;
struct Dictionary_2_t1042;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m24352_gshared (Dictionary_2_t1042 * __this, Array_t * p0, int32_t p1, Transform_1_t3333 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m24352(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, Transform_1_t3333 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m24352_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1042;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m24353 (Dictionary_2_t1042 * __this, Int32U5BU5D_t1041* p0, int32_t p1, Transform_1_t3333 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m20826_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m20825_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m20845_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m24352_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m24353_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20828_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m20814_gshared (KeyCollection_t3330 * __this, Dictionary_2_t1042 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t1042 * L_0 = ___dictionary;
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
		Dictionary_2_t1042 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20815_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m20815_gshared (KeyCollection_t3330 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20816_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m20816_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20817_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m20817_gshared (KeyCollection_t3330 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20818_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m20818_gshared (KeyCollection_t3330 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20819_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m20819_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		Enumerator_t3331  L_0 = (( Enumerator_t3331  (*) (KeyCollection_t3330 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3331  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m20820_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m20820_gshared (KeyCollection_t3330 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int32U5BU5D_t1041* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int32U5BU5D_t1041*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t1041* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t1041* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int32U5BU5D_t1041*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t1042 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1042 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3333 * L_11 = (Transform_1_t3333 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3333 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, Transform_1_t3333 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20821_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m20821_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		Enumerator_t3331  L_0 = (( Enumerator_t3331  (*) (KeyCollection_t3330 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3331  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20822_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m20822_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20823_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m20823_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m20824_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m20824_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m20825_gshared (KeyCollection_t3330 * __this, Int32U5BU5D_t1041* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1042 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3333 * L_7 = (Transform_1_t3333 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3333 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t1042 *, Int32U5BU5D_t1041*, int32_t, Transform_1_t3333 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3331  KeyCollection_GetEnumerator_m20826_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		Enumerator_t3331  L_1 = {0};
		(( void (*) (Enumerator_t3331 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m20827_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m20827_gshared (KeyCollection_t3330 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m20840_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m20844_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m20838_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20828_gshared (Enumerator_t3331 * __this, Dictionary_2_t1042 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3332  L_1 = (( Enumerator_t3332  (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20829_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20829_gshared (Enumerator_t3331 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20830_GenericMethod;
extern "C" void Enumerator_Dispose_m20830_gshared (Enumerator_t3331 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20831_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20831_gshared (Enumerator_t3331 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20832_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m20832_gshared (Enumerator_t3331 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3328 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m20843_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m20841_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m20842_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20833_gshared (Enumerator_t3332 * __this, Dictionary_2_t1042 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t1042 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20834_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20834_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3328  L_0 = (__this->___current_3);
		KeyValuePair_2_t3328  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20835_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20835_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3328 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t3328 * L_4 = &(__this->___current_3);
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		DictionaryEntry_t930  L_8 = {0};
		DictionaryEntry__ctor_m4765(&L_8, L_3, L_7, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20836_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20836_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20837_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20837_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20838_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t1042 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t1042 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t1041* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t1042 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t1041* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3328  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3328 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t1042 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20839_GenericMethod;
extern "C" KeyValuePair_2_t3328  Enumerator_get_Current_m20839_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3328  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m20840_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3328 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20841_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3328 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m20842_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t1042 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20843_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m20844_gshared (Enumerator_t3332 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t1042 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20845_gshared (Transform_1_t3333 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20846_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m20846_gshared (Transform_1_t3333 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20846((Transform_1_t3333 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20847_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20847_gshared (Transform_1_t3333 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20848_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m20848_gshared (Transform_1_t3333 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52.h"
extern TypeInfo Enumerator_t3335_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52MethodDeclarations.h"
extern Il2CppType Enumerator_t3335_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m20860_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m20785_MethodInfo;
extern MethodInfo Enumerator__ctor_m20863_MethodInfo;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m20861_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m20860_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m20863_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m20849_gshared (ValueCollection_t3334 * __this, Dictionary_2_t1042 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t1042 * L_0 = ___dictionary;
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
		Dictionary_2_t1042 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20850_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20850_gshared (ValueCollection_t3334 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20851_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20851_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20852_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20852_gshared (ValueCollection_t3334 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t1042 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20853_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20853_gshared (ValueCollection_t3334 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20854_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20854_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		Enumerator_t3335  L_0 = (( Enumerator_t3335  (*) (ValueCollection_t3334 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3335  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m20855_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m20855_gshared (ValueCollection_t3334 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int32U5BU5D_t1041* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int32U5BU5D_t1041*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t1041* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t1041* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int32U5BU5D_t1041*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t1042 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1042 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3333 * L_11 = (Transform_1_t3333 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3333 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, Transform_1_t3333 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20856_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20856_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		Enumerator_t3335  L_0 = (( Enumerator_t3335  (*) (ValueCollection_t3334 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3335  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20857_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20857_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20858_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20858_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m20859_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m20859_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m20860_gshared (ValueCollection_t3334 * __this, Int32U5BU5D_t1041* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t1042 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t1042 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3333 * L_7 = (Transform_1_t3333 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3333 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t1042 *, Int32U5BU5D_t1041*, int32_t, Transform_1_t3333 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3335  ValueCollection_GetEnumerator_m20861_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		Enumerator_t3335  L_1 = {0};
		(( void (*) (Enumerator_t3335 *, Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m20862_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m20862_gshared (ValueCollection_t3334 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20863_gshared (Enumerator_t3335 * __this, Dictionary_2_t1042 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t1042 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3332  L_1 = (( Enumerator_t3332  (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m20864_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20864_gshared (Enumerator_t3335 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m20865_GenericMethod;
extern "C" void Enumerator_Dispose_m20865_gshared (Enumerator_t3335 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m20866_GenericMethod;
extern "C" bool Enumerator_MoveNext_m20866_gshared (Enumerator_t3335 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m20867_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m20867_gshared (Enumerator_t3335 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3328 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20868_gshared (Transform_1_t3327 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20869_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m20869_gshared (Transform_1_t3327 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20869((Transform_1_t3327 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20870_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20870_gshared (Transform_1_t3327 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20871_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m20871_gshared (Transform_1_t3327 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20872_gshared (Transform_1_t3336 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m20873_GenericMethod;
extern "C" KeyValuePair_2_t3328  Transform_1_Invoke_m20873_gshared (Transform_1_t3336 * __this, int32_t ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m20873((Transform_1_t3336 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3328  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t3328  (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m20874_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m20874_gshared (Transform_1_t3336 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m20875_GenericMethod;
extern "C" KeyValuePair_2_t3328  Transform_1_EndInvoke_m20875_gshared (Transform_1_t3336 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3328 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m20878_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m20878_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20876_gshared (ShimEnumerator_t3337 * __this, Dictionary_2_t1042 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t1042 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3332  L_1 = (( Enumerator_t3332  (*) (Dictionary_2_t1042 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m20877_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m20877_gshared (ShimEnumerator_t3337 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m20878_gshared (ShimEnumerator_t3337 * __this, MethodInfo* method)
{
	{
		Enumerator_t3332  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3332  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m20879_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m20879_gshared (ShimEnumerator_t3337 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3328  V_0 = {0};
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3328  L_1 = (( KeyValuePair_2_t3328  (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m20880_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m20880_gshared (ShimEnumerator_t3337 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3328  V_0 = {0};
	{
		Enumerator_t3332 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3328  L_1 = (( KeyValuePair_2_t3328  (*) (Enumerator_t3332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3328 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m20881_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m20881_gshared (ShimEnumerator_t3337 * __this, MethodInfo* method)
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
extern TypeInfo IComparer_1_t2335_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3338_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_31MethodDeclarations.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_31.h"
extern TypeInfo DefaultComparer_t3339_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_31MethodDeclarations.h"
extern Il2CppType Comparer_1_t3338_0_0_0;
extern Il2CppType IComparable_1_t1891_0_0_0;
extern Il2CppType GenericComparer_1_t2133_0_0_0;
extern Il2CppType DefaultComparer_t3339_0_0_0;
extern MethodInfo DefaultComparer__ctor_m20886_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25633_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m20886_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25633_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m20882_GenericMethod;
extern "C" void Comparer_1__ctor_m20882_gshared (Comparer_1_t3338 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m20883_GenericMethod;
extern "C" void Comparer_1__cctor_m20883_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3339 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3339 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3339 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t3338_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m20884_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m20884_gshared (Comparer_1_t3338 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m9662(L_8, /*hidden argument*/&ArgumentException__ctor_m9662_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m20885_GenericMethod;
extern "C" Comparer_1_t3338 * Comparer_1_get_Default_m20885_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t3338 * L_0 = ((Comparer_1_t3338_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_1_t1891_il2cpp_TypeInfo;
extern TypeInfo IComparable_t346_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m25634_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10465_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m25634_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m20886_gshared (DefaultComparer_t3339 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3338 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m20887_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m20887_gshared (DefaultComparer_t3339 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
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
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
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
		int32_t L_9 = ___x;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = ___x;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = ___x;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t346_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = ___x;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = ___y;
		int32_t L_24 = L_23;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
