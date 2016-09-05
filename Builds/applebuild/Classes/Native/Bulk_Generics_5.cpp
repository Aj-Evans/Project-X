#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
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
extern TypeInfo InternalEnumerator_1_t2572_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo KeyValuePair_2_t2571_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2572_0_0_0;
extern Il2CppType KeyValuePair_2_t2571_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern MethodInfo Array_get_Length_m4768_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2571  Array_InternalArray__get_Item_TisKeyValuePair_2_t2571_m22234_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2571_m22234(__this, p0, method) (( KeyValuePair_2_t2571  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2571_m22234_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13419_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2571_m22234_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13415_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13415_gshared (InternalEnumerator_1_t2572 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13416_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13416_gshared (InternalEnumerator_1_t2572 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2571  L_0 = (( KeyValuePair_2_t2571  (*) (InternalEnumerator_1_t2572 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2571  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13417_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13417_gshared (InternalEnumerator_1_t2572 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13418_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13418_gshared (InternalEnumerator_1_t2572 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2571  InternalEnumerator_1_get_Current_m13419_gshared (InternalEnumerator_1_t2572 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2571  L_8 = (( KeyValuePair_2_t2571  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3469_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::get_Values()
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2573_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t807_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2567_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2574_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2576_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5MethodDeclarations.h"
extern Il2CppType Dictionary_2_t2567_0_0_0;
extern Il2CppType Enumerator_t2574_0_0_0;
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern Il2CppType KeyCollection_t2573_0_0_0;
extern Il2CppType Transform_1_t2576_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10494_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13383_MethodInfo;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4785_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m13396_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m13431_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13390_MethodInfo;
extern MethodInfo Transform_1__ctor_m13451_MethodInfo;
extern MethodInfo Enumerator__ctor_m13434_MethodInfo;
struct Dictionary_2_t2567;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22245_gshared (Dictionary_2_t2567 * __this, Array_t * p0, int32_t p1, Transform_1_t2576 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22245(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2576 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22245_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2567;
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22244 (Dictionary_2_t2567 * __this, ObjectU5BU5D_t288* p0, int32_t p1, Transform_1_t2576 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13383_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13396_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13432_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13431_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13388_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m13390_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13451_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22245_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22244_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13434_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod KeyCollection__ctor_m13420_GenericMethod;
extern "C" void KeyCollection__ctor_m13420_gshared (KeyCollection_t2573 * __this, Dictionary_2_t2567 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2567 * L_0 = ___dictionary;
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
		Dictionary_2_t2567 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13421_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13421_gshared (KeyCollection_t2573 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13422_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13422_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13423_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13423_gshared (KeyCollection_t2573 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13424_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13424_gshared (KeyCollection_t2573 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13425_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13425_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		Enumerator_t2574  L_0 = (( Enumerator_t2574  (*) (KeyCollection_t2573 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2574  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m13426_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13426_gshared (KeyCollection_t2573 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2567 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2567 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2576 * L_11 = (Transform_1_t2576 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2576 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2576 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13427_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13427_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		Enumerator_t2574  L_0 = (( Enumerator_t2574  (*) (KeyCollection_t2573 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2574  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13428_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13428_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13429_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13429_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m13430_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13430_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13431_gshared (KeyCollection_t2573 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2567 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2576 * L_7 = (Transform_1_t2576 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2576 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2567 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t2576 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2574  KeyCollection_GetEnumerator_m13432_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		Enumerator_t2574  L_1 = {0};
		(( void (*) (Enumerator_t2574 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m13433_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m13433_gshared (KeyCollection_t2573 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
extern TypeInfo Enumerator_t2575_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
extern Il2CppType Enumerator_t2575_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13446_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13410_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13407_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13450_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13444_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13434_gshared (Enumerator_t2574 * __this, Dictionary_2_t2567 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2575  L_1 = (( Enumerator_t2575  (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13435_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13435_gshared (Enumerator_t2574 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13436_GenericMethod;
extern "C" void Enumerator_Dispose_m13436_gshared (Enumerator_t2574 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13437_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13437_gshared (Enumerator_t2574 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13438_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m13438_gshared (Enumerator_t2574 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2571 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
extern MethodInfo KeyValuePair_2__ctor_m13409_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13449_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13412_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13447_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13448_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13409_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m13439_GenericMethod;
extern "C" void Enumerator__ctor_m13439_gshared (Enumerator_t2575 * __this, Dictionary_2_t2567 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2567 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13440_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13440_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2571  L_0 = (__this->___current_3);
		KeyValuePair_2_t2571  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13441_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13441_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2571 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2571 * L_3 = &(__this->___current_3);
		int32_t L_4 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t930  L_7 = {0};
		DictionaryEntry__ctor_m4765(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13442_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13442_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13443_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13443_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13444_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2567 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t2567 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t288* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2567 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t1041* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2571  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2571 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2567 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13445_GenericMethod;
extern "C" KeyValuePair_2_t2571  Enumerator_get_Current_m13445_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2571  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13446_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2571 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m13447_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2571 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m13448_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t2567 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13449_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m13450_gshared (Enumerator_t2575 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2567 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13451_gshared (Transform_1_t2576 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13452_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m13452_gshared (Transform_1_t2576 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13452((Transform_1_t2576 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13453_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13453_gshared (Transform_1_t2576 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13454_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m13454_gshared (Transform_1_t2576 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t2577_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
extern TypeInfo Enumerator_t2578_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1041_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2579_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
extern Il2CppType Enumerator_t2578_0_0_0;
extern Il2CppType Int32U5BU5D_t1041_0_0_0;
extern Il2CppType ValueCollection_t2577_0_0_0;
extern Il2CppType Transform_1_t2579_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13466_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13391_MethodInfo;
extern MethodInfo Transform_1__ctor_m13474_MethodInfo;
extern MethodInfo Enumerator__ctor_m13469_MethodInfo;
struct Dictionary_2_t2567;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22247_gshared (Dictionary_2_t2567 * __this, Array_t * p0, int32_t p1, Transform_1_t2579 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22247(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2579 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22247_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2567;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22248 (Dictionary_2_t2567 * __this, Int32U5BU5D_t1041* p0, int32_t p1, Transform_1_t2579 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13397_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13467_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13466_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m13391_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13474_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22247_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22248_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13469_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m13455_GenericMethod;
extern "C" void ValueCollection__ctor_m13455_gshared (ValueCollection_t2577 * __this, Dictionary_2_t2567 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2567 * L_0 = ___dictionary;
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
		Dictionary_2_t2567 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13456_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13456_gshared (ValueCollection_t2577 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13457_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13457_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13458_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13458_gshared (ValueCollection_t2577 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2567 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13459_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13459_gshared (ValueCollection_t2577 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13460_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13460_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		Enumerator_t2578  L_0 = (( Enumerator_t2578  (*) (ValueCollection_t2577 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2578  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m13461_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13461_gshared (ValueCollection_t2577 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2567 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2567 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2579 * L_11 = (Transform_1_t2579 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2579 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2579 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13462_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13462_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		Enumerator_t2578  L_0 = (( Enumerator_t2578  (*) (ValueCollection_t2577 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2578  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13463_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13463_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13464_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13464_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m13465_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13465_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13466_gshared (ValueCollection_t2577 * __this, Int32U5BU5D_t1041* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2567 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2579 * L_7 = (Transform_1_t2579 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2579 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2567 *, Int32U5BU5D_t1041*, int32_t, Transform_1_t2579 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2578  ValueCollection_GetEnumerator_m13467_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		Enumerator_t2578  L_1 = {0};
		(( void (*) (Enumerator_t2578 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m13468_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m13468_gshared (ValueCollection_t2577 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13469_gshared (Enumerator_t2578 * __this, Dictionary_2_t2567 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2575  L_1 = (( Enumerator_t2575  (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13470_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13470_gshared (Enumerator_t2578 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13471_GenericMethod;
extern "C" void Enumerator_Dispose_m13471_gshared (Enumerator_t2578 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13472_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13472_gshared (Enumerator_t2578 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13473_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m13473_gshared (Enumerator_t2578 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2571 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13474_gshared (Transform_1_t2579 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13475_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m13475_gshared (Transform_1_t2579 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13475((Transform_1_t2579 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13476_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13476_gshared (Transform_1_t2579 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13477_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m13477_gshared (Transform_1_t2579 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2570_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13478_GenericMethod;
extern "C" void Transform_1__ctor_m13478_gshared (Transform_1_t2570 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13479_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m13479_gshared (Transform_1_t2570 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13479((Transform_1_t2570 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13480_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13480_gshared (Transform_1_t2570 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13481_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m13481_gshared (Transform_1_t2570 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2580_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13482_GenericMethod;
extern "C" void Transform_1__ctor_m13482_gshared (Transform_1_t2580 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13483_GenericMethod;
extern "C" KeyValuePair_2_t2571  Transform_1_Invoke_m13483_gshared (Transform_1_t2580 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13483((Transform_1_t2580 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2571  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2571  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2571  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13484_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13484_gshared (Transform_1_t2580 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13485_GenericMethod;
extern "C" KeyValuePair_2_t2571  Transform_1_EndInvoke_m13485_gshared (Transform_1_t2580 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2571 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2581_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t927_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t2581_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10497_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m13488_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13488_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m13486_GenericMethod;
extern "C" void ShimEnumerator__ctor_m13486_gshared (ShimEnumerator_t2581 * __this, Dictionary_2_t2567 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2567 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2575  L_1 = (( Enumerator_t2575  (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m13487_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m13487_gshared (ShimEnumerator_t2581 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m13488_gshared (ShimEnumerator_t2581 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2575  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m13489_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m13489_gshared (ShimEnumerator_t2581 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2571  V_0 = {0};
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2571  L_1 = (( KeyValuePair_2_t2571  (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m13490_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m13490_gshared (ShimEnumerator_t2581 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2571  V_0 = {0};
	{
		Enumerator_t2575 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2571  L_1 = (( KeyValuePair_2_t2571  (*) (Enumerator_t2575 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m13491_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m13491_gshared (ShimEnumerator_t2581 * __this, MethodInfo* method)
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
extern TypeInfo IList_1_t2585_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3472_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3473_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3468_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2582_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

extern TypeInfo ICanvasElement_t140_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2582_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21424_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21424(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
#define Array_InternalArray__get_Item_TisICanvasElement_t140_m22254(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13496_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICanvasElement_t140_m22254_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t2566_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_9.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_gen.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_9.h"
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1.h"
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t689_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1807_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo ICanvasElementU5BU5D_t2583_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2584_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t13_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t41_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2586_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t139_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2590_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_9MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_9MethodDeclarations.h"
extern Il2CppType List_1_t2566_0_0_0;
extern Il2CppType ICanvasElementU5BU5D_t2583_0_0_0;
extern Il2CppType Enumerator_t2584_0_0_0;
extern Il2CppType ICollection_1_t3472_0_0_0;
extern Il2CppType IEnumerable_1_t3473_0_0_0;
extern Il2CppType IEnumerator_1_t3468_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2586_0_0_0;
extern Il2CppType Predicate_1_t139_0_0_0;
extern Il2CppType Comparer_1_t2590_0_0_0;
extern MethodInfo List_1_get_Item_m13545_MethodInfo;
extern MethodInfo List_1_set_Item_m13546_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4952_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo List_1_Add_m13515_MethodInfo;
extern MethodInfo List_1_Contains_m13522_MethodInfo;
extern MethodInfo List_1_IndexOf_m13529_MethodInfo;
extern MethodInfo List_1_Insert_m13532_MethodInfo;
extern MethodInfo List_1_Remove_m13534_MethodInfo;
extern MethodInfo Math_Max_m5932_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25190_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25191_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25192_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25193_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3481_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1418_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13553_MethodInfo;
extern MethodInfo Array_Clear_m5923_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13627_MethodInfo;
extern MethodInfo Enumerator__ctor_m13547_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13536_MethodInfo;
extern MethodInfo Array_Reverse_m5964_MethodInfo;
extern MethodInfo Array_Copy_m4995_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m21435_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m21435(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
#define Array_Resize_TisICanvasElement_t140_m22265(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2583**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10495_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10495(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisICanvasElement_t140_m22267(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2583*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21504_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m21504(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisICanvasElement_t140_m22269(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2583*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21688_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, Comparison_1_t2398 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m21688(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, Comparison_1_t2398 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisICanvasElement_t140_m22277(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t2583*, int32_t, Comparison_1_t138 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m13545_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13546_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisICanvasElement_t140_m22265_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13531_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13528_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13515_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13522_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13529_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13532_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13534_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13516_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13542_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13543_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25190_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25191_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25192_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25193_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13533_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13517_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13518_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13553_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisICanvasElement_t140_m22267_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13526_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13527_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13627_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13547_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13530_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13536_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13633_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t140_m22269_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t140_m22277_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m4771_MethodInfo;
extern MethodInfo Object_GetType_m1420_MethodInfo;
extern MethodInfo Type_get_FullName_m3547_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m13550_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t410_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_9MethodDeclarations.h"
extern Il2CppType IList_1_t2585_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13582_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;
extern MethodInfo IList_1_get_Item_m25194_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4760_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3504_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25195_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25196_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13582_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25194_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13614_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25195_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25196_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2587_il2cpp_TypeInfo;

extern TypeInfo IList_t808_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2587_0_0_0;
extern Il2CppType ICanvasElement_t140_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25197_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13613_MethodInfo;
extern MethodInfo List_1__ctor_m13497_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13606_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13604_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13609_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13600_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25198_MethodInfo;
extern MethodInfo IList_1_Insert_m25199_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25200_MethodInfo;
extern MethodInfo IList_1_set_Item_m25201_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10774_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10775_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25197_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13617_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13618_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13615_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13613_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m13497_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13606_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13616_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13604_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13609_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13600_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25198_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25199_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25200_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25201_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2588_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2589_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2588_0_0_0;
extern Il2CppType IEquatable_1_t3963_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2222_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern Il2CppType DefaultComparer_t2589_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9638_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13624_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25202_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22266_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13624_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25202_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22266_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2592_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3963_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.ICanvasElement>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo Object_Equals_m106_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13619_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9.h"
extern TypeInfo DefaultComparer_t2591_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_9MethodDeclarations.h"
extern Il2CppType IComparable_1_t3741_0_0_0;
extern Il2CppType GenericComparer_1_t2133_0_0_0;
extern Il2CppType DefaultComparer_t2591_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13634_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25203_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13634_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25203_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3740_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3741_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.ICanvasElement>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t346_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22275_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10465_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13630_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22275_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t138_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t314_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
extern TypeInfo KeyNotFoundException_t1412_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2596_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2600_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3964_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3965_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3476_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2594_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3475_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2593_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2603_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2598_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2605_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2203_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t923_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2535_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2514_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType Dictionary_2_t314_0_0_0;
extern Il2CppType IEqualityComparer_1_t2592_0_0_0;
extern Il2CppType KeyCollection_t2596_0_0_0;
extern Il2CppType ValueCollection_t2600_0_0_0;
extern Il2CppType ICollection_1_t3964_0_0_0;
extern Il2CppType IEnumerable_1_t3965_0_0_0;
extern Il2CppType IEnumerator_1_t3476_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3475_0_0_0;
extern Il2CppType KeyValuePair_2_t2594_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3657_0_0_0;
extern Il2CppType Transform_1_t2593_0_0_0;
extern Il2CppType Transform_1_t2603_0_0_0;
extern Il2CppType Enumerator_t2598_0_0_0;
extern Il2CppType ShimEnumerator_t2605_0_0_0;
extern Il2CppType LinkU5BU5D_t2203_0_0_0;
extern Il2CppType EqualityComparer_1_t2535_0_0_0;
extern Il2CppType IEqualityComparer_1_t2514_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m13676_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m13664_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m13665_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25204_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25205_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7359_MethodInfo;
extern MethodInfo KeyCollection__ctor_m13700_MethodInfo;
extern MethodInfo ValueCollection__ctor_m13735_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25206_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25207_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25208_MethodInfo;
extern MethodInfo Dictionary_2_Add_m13674_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13680_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m13688_MethodInfo;
extern MethodInfo Transform_1__ctor_m13758_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m13669_MethodInfo;
extern MethodInfo Transform_1__ctor_m13762_MethodInfo;
extern MethodInfo Enumerator__ctor_m13719_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m13770_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13663_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13689_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7526_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25158_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4781_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4794_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4793_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4782_MethodInfo;
extern MethodInfo Type_ToString_m6824_MethodInfo;
extern MethodInfo String_Concat_m1710_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4770_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m13681_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25169_MethodInfo;
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22296 (Dictionary_2_t314 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2593 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t314;
struct Dictionary_2_t2567;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22299_gshared (Dictionary_2_t2567 * __this, Array_t * p0, int32_t p1, Transform_1_t2604 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22299(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2604 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22299_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22298(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t314 *, Array_t *, int32_t, Transform_1_t2603 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22299_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2594_TisKeyValuePair_2_t2594_m22301 (Dictionary_2_t314 * __this, KeyValuePair_2U5BU5D_t3475* p0, int32_t p1, Transform_1_t2603 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m13682_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m13683_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13676_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m13684_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m13664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m13685_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m13665_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25204_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25205_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m13673_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m13700_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m13735_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m13666_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13643_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25206_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25207_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25208_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13690_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13692_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m13674_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13680_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m13686_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m13672_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13668_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m13688_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13758_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22296_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m13669_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13762_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2594_m22298_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13719_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m13770_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13623_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m13667_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13663_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13689_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2594_TisKeyValuePair_2_t2594_m22301_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13062_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25158_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m13681_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25169_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StringU5BU5D_t433_il2cpp_TypeInfo;
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern MethodInfo Object_ToString_m108_MethodInfo;
extern MethodInfo String_Concat_m3423_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13691_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13693_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2595_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2595_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t2594  Array_InternalArray__get_Item_TisKeyValuePair_2_t2594_m22280_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2594_m22280(__this, p0, method) (( KeyValuePair_2_t2594  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2594_m22280_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13699_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2594_m22280_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13695_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13695_gshared (InternalEnumerator_1_t2595 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13696_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13696_gshared (InternalEnumerator_1_t2595 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2594  L_0 = (( KeyValuePair_2_t2594  (*) (InternalEnumerator_1_t2595 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2594  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13697_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13697_gshared (InternalEnumerator_1_t2595 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13698_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13698_gshared (InternalEnumerator_1_t2595 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2594  InternalEnumerator_1_get_Current_m13699_gshared (InternalEnumerator_1_t2595 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2594  L_8 = (( KeyValuePair_2_t2594  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3966_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3474_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12.h"
extern TypeInfo Enumerator_t2597_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2599_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
extern Il2CppType Enumerator_t2597_0_0_0;
extern Il2CppType Transform_1_t2599_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m13711_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13670_MethodInfo;
extern MethodInfo Transform_1__ctor_m13731_MethodInfo;
extern MethodInfo Enumerator__ctor_m13714_MethodInfo;
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t140_m22291(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t314 *, Array_t *, int32_t, Transform_1_t2599 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22245_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisICanvasElement_t140_TisICanvasElement_t140_m22292 (Dictionary_2_t314 * __this, ICanvasElementU5BU5D_t2583* p0, int32_t p1, Transform_1_t2599 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13712_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13711_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m13670_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13731_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t140_m22291_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisICanvasElement_t140_TisICanvasElement_t140_m22292_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13714_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13726_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13687_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13730_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13724_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13729_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13727_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13728_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13.h"
extern TypeInfo Enumerator_t2601_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2602_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_9MethodDeclarations.h"
extern Il2CppType Enumerator_t2601_0_0_0;
extern Il2CppType Transform_1_t2602_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13746_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13671_MethodInfo;
extern MethodInfo Transform_1__ctor_m13754_MethodInfo;
extern MethodInfo Enumerator__ctor_m13749_MethodInfo;
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22294(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t314 *, Array_t *, int32_t, Transform_1_t2602 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22247_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t314;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22295 (Dictionary_2_t314 * __this, Int32U5BU5D_t1041* p0, int32_t p1, Transform_1_t2602 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13677_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13747_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13746_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m13671_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13754_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22294_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22295_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13749_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2604_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13763_GenericMethod;
extern "C" void Transform_1__ctor_m13763_gshared (Transform_1_t2604 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13765_GenericMethod;
extern "C" KeyValuePair_2_t2594  Transform_1_Invoke_m13765_gshared (Transform_1_t2604 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13765((Transform_1_t2604 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2594  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2594  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2594  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13767_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13767_gshared (Transform_1_t2604 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13769_GenericMethod;
extern "C" KeyValuePair_2_t2594  Transform_1_EndInvoke_m13769_gshared (Transform_1_t2604 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2594 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m13772_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m13725_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13772_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t144_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14.h"
extern TypeInfo Font_t142_il2cpp_TypeInfo;
extern TypeInfo List_1_t302_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t2608_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2642_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2646_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3967_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3968_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3481_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2622_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3480_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2609_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2649_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2644_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2651_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2652_il2cpp_TypeInfo;
extern TypeInfo FontU5BU5D_t2606_il2cpp_TypeInfo;
extern TypeInfo List_1U5BU5D_t2607_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2654_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3969_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_13MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_14MethodDeclarations.h"
extern Il2CppType Dictionary_2_t144_0_0_0;
extern Il2CppType List_1_t302_0_0_0;
extern Il2CppType IEqualityComparer_1_t2608_0_0_0;
extern Il2CppType KeyCollection_t2642_0_0_0;
extern Il2CppType ValueCollection_t2646_0_0_0;
extern Il2CppType ICollection_1_t3967_0_0_0;
extern Il2CppType IEnumerable_1_t3968_0_0_0;
extern Il2CppType IEnumerator_1_t3481_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3480_0_0_0;
extern Il2CppType KeyValuePair_2_t2622_0_0_0;
extern Il2CppType Transform_1_t2609_0_0_0;
extern Il2CppType Transform_1_t2649_0_0_0;
extern Il2CppType Enumerator_t2644_0_0_0;
extern Il2CppType ShimEnumerator_t2651_0_0_0;
extern Il2CppType EqualityComparer_1_t2652_0_0_0;
extern Il2CppType FontU5BU5D_t2606_0_0_0;
extern Il2CppType List_1U5BU5D_t2607_0_0_0;
extern Il2CppType EqualityComparer_1_t2654_0_0_0;
extern Il2CppType IEqualityComparer_1_t3969_0_0_0;
extern Il2CppType Font_t142_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m13848_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m13825_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m13827_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25209_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25210_MethodInfo;
extern MethodInfo KeyCollection__ctor_m14137_MethodInfo;
extern MethodInfo ValueCollection__ctor_m14172_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25211_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25212_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25213_MethodInfo;
extern MethodInfo Dictionary_2_Add_m1513_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13856_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m13871_MethodInfo;
extern MethodInfo Transform_1__ctor_m14195_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m13835_MethodInfo;
extern MethodInfo Transform_1__ctor_m14199_MethodInfo;
extern MethodInfo Enumerator__ctor_m14156_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m14207_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13823_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13952_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25214_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m1511_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25215_MethodInfo;
struct Dictionary_2_t144;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22428 (Dictionary_2_t144 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2609 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t144;
struct Dictionary_2_t2611;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22431_gshared (Dictionary_2_t2611 * __this, Array_t * p0, int32_t p1, Transform_1_t2650 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22431(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2650 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22431_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22430(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t144 *, Array_t *, int32_t, Transform_1_t2649 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22431_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t144;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2622_TisKeyValuePair_2_t2622_m22433 (Dictionary_2_t144 * __this, KeyValuePair_2U5BU5D_t3480* p0, int32_t p1, Transform_1_t2649 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m13859_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m13861_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13848_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m13863_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m13825_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m13865_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m13827_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25209_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25210_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m13843_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m14137_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m14172_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m13829_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13783_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25211_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25212_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25213_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13953_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13955_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m1513_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13856_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m13867_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m13841_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13833_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m13871_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14195_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22428_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m13835_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m14199_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2622_m22430_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14156_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m14207_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m14217_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m13831_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13823_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13952_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2622_TisKeyValuePair_2_t2622_m22433_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m14225_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25214_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m1511_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25215_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t2611_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
extern TypeInfo IEqualityComparer_1_t2569_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2614_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2618_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3970_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3484_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2612_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3483_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2610_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2620_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2616_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2621_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2371_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t2611_0_0_0;
extern Il2CppType IEqualityComparer_1_t2569_0_0_0;
extern Il2CppType KeyCollection_t2614_0_0_0;
extern Il2CppType ValueCollection_t2618_0_0_0;
extern Il2CppType ICollection_1_t3970_0_0_0;
extern Il2CppType IEnumerable_1_t3971_0_0_0;
extern Il2CppType IEnumerator_1_t3484_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3483_0_0_0;
extern Il2CppType KeyValuePair_2_t2612_0_0_0;
extern Il2CppType Transform_1_t2610_0_0_0;
extern Il2CppType Transform_1_t2620_0_0_0;
extern Il2CppType Enumerator_t2616_0_0_0;
extern Il2CppType ShimEnumerator_t2621_0_0_0;
extern Il2CppType EqualityComparer_1_t2371_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m13849_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m13826_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m13828_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25186_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25167_MethodInfo;
extern MethodInfo KeyCollection__ctor_m13884_MethodInfo;
extern MethodInfo ValueCollection__ctor_m13919_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25216_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25217_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25218_MethodInfo;
extern MethodInfo Dictionary_2_Add_m13845_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13857_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m13872_MethodInfo;
extern MethodInfo Transform_1__ctor_m13938_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m13836_MethodInfo;
extern MethodInfo Transform_1__ctor_m13942_MethodInfo;
extern MethodInfo Enumerator__ctor_m13903_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m13946_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13824_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13873_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m13858_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m21436_MethodInfo;
struct Dictionary_2_t2611;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22315 (Dictionary_2_t2611 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2610 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2611;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2612_m22317_gshared (Dictionary_2_t2611 * __this, Array_t * p0, int32_t p1, Transform_1_t2620 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2612_m22317(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2620 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2612_m22317_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2611;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2612_TisKeyValuePair_2_t2612_m22318 (Dictionary_2_t2611 * __this, KeyValuePair_2U5BU5D_t3483* p0, int32_t p1, Transform_1_t2620 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m13860_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m13862_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13849_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m13864_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m13826_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m13866_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m13828_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25186_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25167_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m13844_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m13884_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m13919_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m13830_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13784_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25216_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25217_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25218_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13874_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13876_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m13845_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13857_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m13868_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m13842_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13834_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m13872_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13938_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22315_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m13836_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13942_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2612_m22317_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13903_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m13946_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11435_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m13832_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13824_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13873_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2612_TisKeyValuePair_2_t2612_m22318_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m13858_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m21436_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m13776_GenericMethod;
extern "C" void Dictionary_2__ctor_m13776_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		(( void (*) (Dictionary_2_t2611 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m13778_GenericMethod;
extern "C" void Dictionary_2__ctor_m13778_gshared (Dictionary_2_t2611 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t2611 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m13780_GenericMethod;
extern "C" void Dictionary_2__ctor_m13780_gshared (Dictionary_2_t2611 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t2611 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m13782_GenericMethod;
extern "C" void Dictionary_2__ctor_m13782_gshared (Dictionary_2_t2611 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t2611 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13784_gshared (Dictionary_2_t2611 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t2612  V_1 = {0};
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
		(( void (*) (Dictionary_2_t2611 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t2612  L_9 = (KeyValuePair_2_t2612 )InterfaceFuncInvoker0< KeyValuePair_2_t2612  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m13786_GenericMethod;
extern "C" void Dictionary_2__ctor_m13786_gshared (Dictionary_2_t2611 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13788_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13788_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2614 * L_0 = (( KeyCollection_t2614 * (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13790_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13790_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2618 * L_0 = (( ValueCollection_t2618 * (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m13792_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13792_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m13794_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13794_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m13796_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13796_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m13798_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13798_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m13800_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13800_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13802_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13802_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13804_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13804_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13806_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13806_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13808_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13808_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2_t2612  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13810_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13810_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2_t2612  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2612  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2611 *, KeyValuePair_2_t2612 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13812_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13812_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2U5BU5D_t3483* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3483* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2611 *, KeyValuePair_2U5BU5D_t3483*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13814_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13814_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2_t2612  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2612  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2611 *, KeyValuePair_2_t2612 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m13816_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13816_gshared (Dictionary_2_t2611 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m13816_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m13816_init)
	{
		DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3657_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m13816_init = true;
	}
	KeyValuePair_2U5BU5D_t3483* V_0 = {0};
	DictionaryEntryU5BU5D_t3657* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B5_1 = {0};
	Dictionary_2_t2611 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B4_1 = {0};
	Dictionary_2_t2611 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3483*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3483* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3483* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t2611 *, KeyValuePair_2U5BU5D_t3483*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t2610 * L_10 = ((Dictionary_2_t2611_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2611 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2611 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2610 * L_12 = (Transform_1_t2610 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2610 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2611_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2611 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2610 * L_13 = ((Dictionary_2_t2611_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2611 *, DictionaryEntryU5BU5D_t3657*, int32_t, Transform_1_t2610 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2620 * L_17 = (Transform_1_t2620 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2620 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2620 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13818_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13818_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616  L_0 = {0};
		(( void (*) (Enumerator_t2616 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2616  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13820_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13820_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616  L_0 = {0};
		(( void (*) (Enumerator_t2616 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2616  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13822_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13822_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2621 * L_0 = (ShimEnumerator_t2621 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2621 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13824_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13826_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
		ObjectU5BU5D_t288* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13828_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ObjectU5BU5D_t288* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		Object_t * L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_70, L_71)) = (Object_t *)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2371_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m13830_gshared (Dictionary_2_t2611 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m13830_init;
	if (!Dictionary_2_Init_m13830_init)
	{
		EqualityComparer_1_t2371_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2371_0_0_0);
		Dictionary_2_Init_m13830_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2611 * G_B4_0 = {0};
	Dictionary_2_t2611 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2611 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t2611 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2611 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2611 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2371 * L_5 = (( EqualityComparer_1_t2371 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2611 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t2611 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m13832_gshared (Dictionary_2_t2611 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m13832_init;
	if (!Dictionary_2_InitArrays_m13832_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_InitArrays_m13832_init = true;
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
		__this->___valueSlots_7 = ((ObjectU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13834_gshared (Dictionary_2_t2611 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2612  Dictionary_2_make_pair_m13836_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2612  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2612 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m13838_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m13838_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m13840_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_value_m13840_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13842_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2U5BU5D_t3483* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3483* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3483* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2620 * L_5 = (Transform_1_t2620 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2620 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2611 *, KeyValuePair_2U5BU5D_t3483*, int32_t, Transform_1_t2620 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m13844_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m13844_init;
	if (!Dictionary_2_Resize_m13844_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_Resize_m13844_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1041* V_1 = {0};
	LinkU5BU5D_t2203* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t288* V_7 = {0};
	ObjectU5BU5D_t288* V_8 = {0};
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
		V_8 = ((ObjectU5BU5D_t288*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t288* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t288* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		ObjectU5BU5D_t288* L_40 = (__this->___valueSlots_7);
		ObjectU5BU5D_t288* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		ObjectU5BU5D_t288* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t288* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13845_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ObjectU5BU5D_t288* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		Object_t * L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, L_55)) = (Object_t *)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m13847_GenericMethod;
extern "C" void Dictionary_2_Clear_m13847_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
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
		ObjectU5BU5D_t288* L_4 = (__this->___valueSlots_7);
		ObjectU5BU5D_t288* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13849_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13851_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2371_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m13851_gshared (Dictionary_2_t2611 * __this, Object_t * ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m13851_init;
	if (!Dictionary_2_ContainsValue_m13851_init)
	{
		EqualityComparer_1_t2371_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2371_0_0_0);
		Dictionary_2_ContainsValue_m13851_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2371 * L_0 = (( EqualityComparer_1_t2371 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ObjectU5BU5D_t288* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m13853_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m13853_gshared (Dictionary_2_t2611 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3483* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t3483*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3483*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3483* L_8 = V_0;
		(( void (*) (Dictionary_2_t2611 *, KeyValuePair_2U5BU5D_t3483*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t665 * L_9 = ___info;
		Int32U5BU5D_t1041* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m4781(L_9, (String_t*) &_stringLiteral1312, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3483* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4794(L_11, (String_t*) &_stringLiteral1313, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m13855_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m13855_gshared (Dictionary_2_t2611 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3483* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t3483*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t2611 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3483* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t3483* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t2612 *)(KeyValuePair_2_t2612 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3483* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t2612 *)(KeyValuePair_2_t2612 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3483* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13857_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
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
		ObjectU5BU5D_t288* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_5));
		Object_t * L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, L_50)) = (Object_t *)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13858_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
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
		Object_t ** L_20 = ___value;
		ObjectU5BU5D_t288* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
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
		Object_t ** L_28 = ___value;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2614 * Dictionary_2_get_Keys_m13860_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2614 * L_0 = (KeyCollection_t2614 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2614 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2618 * Dictionary_2_get_Values_m13862_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2618 * L_0 = (ValueCollection_t2618 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2618 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13864_gshared (Dictionary_2_t2611 * __this, Object_t * ___key, MethodInfo* method)
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
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13866_gshared (Dictionary_2_t2611 * __this, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
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
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_0));
		Object_t * L_3 = V_0;
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
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2371_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13868_gshared (Dictionary_2_t2611 * __this, KeyValuePair_2_t2612  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m13868_init;
	if (!Dictionary_2_ContainsKeyValuePair_m13868_init)
	{
		EqualityComparer_1_t2371_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2371_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m13868_init = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2371 * L_2 = (( EqualityComparer_1_t2371 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13870_GenericMethod;
extern "C" Enumerator_t2616  Dictionary_2_GetEnumerator_m13870_gshared (Dictionary_2_t2611 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616  L_0 = {0};
		(( void (*) (Enumerator_t2616 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t930  Dictionary_2_U3CCopyToU3Em__0_m13872_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		DictionaryEntry_t930  L_4 = {0};
		DictionaryEntry__ctor_m4765(&L_4, ((Object_t *)L_1), ((Object_t *)L_3), /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13875_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13877_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m13873_gshared (KeyValuePair_2_t2612 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2612 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2612 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m13874_gshared (KeyValuePair_2_t2612 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13875_gshared (KeyValuePair_2_t2612 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m13876_gshared (KeyValuePair_2_t2612 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13877_gshared (KeyValuePair_2_t2612 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m13878_GenericMethod;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m13878_gshared (KeyValuePair_2_t2612 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m13878_init;
	if (!KeyValuePair_2_ToString_m13878_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		KeyValuePair_2_ToString_m13878_init = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((Object_t *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_11;
		NullCheck((*(&V_1)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, (*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_13;
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
		StringU5BU5D_t433* L_14 = G_B6_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 4)) = (String_t*)(String_t*) &_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m3423(NULL /*static, unused*/, L_14, /*hidden argument*/&String_Concat_m3423_MethodInfo);
		return L_15;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2613_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2613_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2612  Array_InternalArray__get_Item_TisKeyValuePair_2_t2612_m22303_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2612_m22303(__this, p0, method) (( KeyValuePair_2_t2612  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2612_m22303_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13883_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2612_m22303_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13879_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13879_gshared (InternalEnumerator_1_t2613 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13880_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13880_gshared (InternalEnumerator_1_t2613 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2612  L_0 = (( KeyValuePair_2_t2612  (*) (InternalEnumerator_1_t2613 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2612  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13881_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13881_gshared (InternalEnumerator_1_t2613 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13882_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13882_gshared (InternalEnumerator_1_t2613 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2612  InternalEnumerator_1_get_Current_m13883_gshared (InternalEnumerator_1_t2613 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2612  L_8 = (( KeyValuePair_2_t2612  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3972_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3482_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
extern TypeInfo Enumerator_t2615_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2617_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9MethodDeclarations.h"
extern Il2CppType Enumerator_t2615_0_0_0;
extern Il2CppType Transform_1_t2617_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m13895_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m13838_MethodInfo;
extern MethodInfo Transform_1__ctor_m13915_MethodInfo;
extern MethodInfo Enumerator__ctor_m13898_MethodInfo;
struct Dictionary_2_t2611;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22314_gshared (Dictionary_2_t2611 * __this, Array_t * p0, int32_t p1, Transform_1_t2617 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22314(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2617 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22314_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2611;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22313 (Dictionary_2_t2611 * __this, ObjectU5BU5D_t288* p0, int32_t p1, Transform_1_t2617 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13896_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13895_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13915_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22314_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22313_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13898_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13884_gshared (KeyCollection_t2614 * __this, Dictionary_2_t2611 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2611 * L_0 = ___dictionary;
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
		Dictionary_2_t2611 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13885_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13885_gshared (KeyCollection_t2614 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13886_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13886_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13887_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13887_gshared (KeyCollection_t2614 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13888_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13888_gshared (KeyCollection_t2614 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13889_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13889_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		Enumerator_t2615  L_0 = (( Enumerator_t2615  (*) (KeyCollection_t2614 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2615  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m13890_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13890_gshared (KeyCollection_t2614 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2611 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2611 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2617 * L_11 = (Transform_1_t2617 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2617 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2617 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13891_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13891_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		Enumerator_t2615  L_0 = (( Enumerator_t2615  (*) (KeyCollection_t2614 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2615  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13892_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13892_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13893_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13893_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m13894_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13894_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13895_gshared (KeyCollection_t2614 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2611 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2617 * L_7 = (Transform_1_t2617 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2617 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2611 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t2617 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2615  KeyCollection_GetEnumerator_m13896_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		Enumerator_t2615  L_1 = {0};
		(( void (*) (Enumerator_t2615 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m13897_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m13897_gshared (KeyCollection_t2614 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13910_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13914_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13908_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13898_gshared (Enumerator_t2615 * __this, Dictionary_2_t2611 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2616  L_1 = (( Enumerator_t2616  (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13899_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13899_gshared (Enumerator_t2615 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13900_GenericMethod;
extern "C" void Enumerator_Dispose_m13900_gshared (Enumerator_t2615 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13901_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13901_gshared (Enumerator_t2615 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13902_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m13902_gshared (Enumerator_t2615 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2612 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13913_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13911_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13912_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13903_gshared (Enumerator_t2616 * __this, Dictionary_2_t2611 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2611 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13904_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13904_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2612  L_0 = (__this->___current_3);
		KeyValuePair_2_t2612  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13905_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13905_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2612 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t2612 * L_3 = &(__this->___current_3);
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_5 = L_4;
		DictionaryEntry_t930  L_6 = {0};
		DictionaryEntry__ctor_m4765(&L_6, ((Object_t *)L_2), ((Object_t *)L_5), /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13906_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13906_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13907_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13907_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13908_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2611 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t2611 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t288* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2611 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t288* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2612  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2612 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2611 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13909_GenericMethod;
extern "C" KeyValuePair_2_t2612  Enumerator_get_Current_m13909_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2612  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13910_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2612 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13911_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2612 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13912_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t2611 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13913_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13914_gshared (Enumerator_t2616 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2611 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13915_gshared (Transform_1_t2617 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13916_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m13916_gshared (Transform_1_t2617 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13916((Transform_1_t2617 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13917_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13917_gshared (Transform_1_t2617 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13918_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m13918_gshared (Transform_1_t2617 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"
extern TypeInfo Enumerator_t2619_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"
extern Il2CppType Enumerator_t2619_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13930_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m13840_MethodInfo;
extern MethodInfo Enumerator__ctor_m13933_MethodInfo;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13931_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13930_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13933_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13919_gshared (ValueCollection_t2618 * __this, Dictionary_2_t2611 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2611 * L_0 = ___dictionary;
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
		Dictionary_2_t2611 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13920_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13920_gshared (ValueCollection_t2618 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13921_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13921_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13922_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13922_gshared (ValueCollection_t2618 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2611 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13923_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13923_gshared (ValueCollection_t2618 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13924_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13924_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		Enumerator_t2619  L_0 = (( Enumerator_t2619  (*) (ValueCollection_t2618 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2619  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m13925_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13925_gshared (ValueCollection_t2618 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2611 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2611 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2617 * L_11 = (Transform_1_t2617 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2617 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, Transform_1_t2617 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13926_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13926_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		Enumerator_t2619  L_0 = (( Enumerator_t2619  (*) (ValueCollection_t2618 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2619  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13927_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13927_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13928_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13928_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m13929_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13929_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13930_gshared (ValueCollection_t2618 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2611 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2611 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2617 * L_7 = (Transform_1_t2617 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2617 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2611 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t2617 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2619  ValueCollection_GetEnumerator_m13931_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		Enumerator_t2619  L_1 = {0};
		(( void (*) (Enumerator_t2619 *, Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m13932_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m13932_gshared (ValueCollection_t2618 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13933_gshared (Enumerator_t2619 * __this, Dictionary_2_t2611 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2611 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2616  L_1 = (( Enumerator_t2616  (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13934_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13934_gshared (Enumerator_t2619 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13935_GenericMethod;
extern "C" void Enumerator_Dispose_m13935_gshared (Enumerator_t2619 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13936_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13936_gshared (Enumerator_t2619 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13937_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m13937_gshared (Enumerator_t2619 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2612 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13938_gshared (Transform_1_t2610 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13939_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m13939_gshared (Transform_1_t2610 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13939((Transform_1_t2610 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13940_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13940_gshared (Transform_1_t2610 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13941_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m13941_gshared (Transform_1_t2610 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13942_gshared (Transform_1_t2620 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13943_GenericMethod;
extern "C" KeyValuePair_2_t2612  Transform_1_Invoke_m13943_gshared (Transform_1_t2620 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13943((Transform_1_t2620 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2612  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2612  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2612  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13944_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13944_gshared (Transform_1_t2620 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13945_GenericMethod;
extern "C" KeyValuePair_2_t2612  Transform_1_EndInvoke_m13945_gshared (Transform_1_t2620 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2612 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m13948_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13948_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13946_gshared (ShimEnumerator_t2621 * __this, Dictionary_2_t2611 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2611 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2616  L_1 = (( Enumerator_t2616  (*) (Dictionary_2_t2611 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m13947_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m13947_gshared (ShimEnumerator_t2621 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m13948_gshared (ShimEnumerator_t2621 * __this, MethodInfo* method)
{
	{
		Enumerator_t2616  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2616  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m13949_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m13949_gshared (ShimEnumerator_t2621 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2612  V_0 = {0};
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2612  L_1 = (( KeyValuePair_2_t2612  (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m13950_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m13950_gshared (ShimEnumerator_t2621 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2612  V_0 = {0};
	{
		Enumerator_t2616 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2612  L_1 = (( KeyValuePair_2_t2612  (*) (Enumerator_t2616 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2612 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m13951_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m13951_gshared (ShimEnumerator_t2621 * __this, MethodInfo* method)
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



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13954_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13956_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToString()
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_10.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_12.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10.h"
// System.Comparison`1<UnityEngine.UI.Text>
#include "mscorlib_System_Comparison_1_gen_12.h"
extern TypeInfo Text_t146_il2cpp_TypeInfo;
extern TypeInfo TextU5BU5D_t2623_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2629_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3486_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3487_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3485_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2631_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2635_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2636_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_10MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_10MethodDeclarations.h"
extern Il2CppType TextU5BU5D_t2623_0_0_0;
extern Il2CppType Enumerator_t2629_0_0_0;
extern Il2CppType ICollection_1_t3486_0_0_0;
extern Il2CppType IEnumerable_1_t3487_0_0_0;
extern Il2CppType IEnumerator_1_t3485_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2631_0_0_0;
extern Il2CppType Predicate_1_t2635_0_0_0;
extern Il2CppType Comparer_1_t2636_0_0_0;
extern MethodInfo List_1_get_Item_m1516_MethodInfo;
extern MethodInfo List_1_set_Item_m14002_MethodInfo;
extern MethodInfo List_1_Add_m1518_MethodInfo;
extern MethodInfo List_1_Contains_m13981_MethodInfo;
extern MethodInfo List_1_IndexOf_m13988_MethodInfo;
extern MethodInfo List_1_Insert_m13991_MethodInfo;
extern MethodInfo List_1_Remove_m1519_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25219_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25220_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25221_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25222_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m14034_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m14109_MethodInfo;
extern MethodInfo Enumerator__ctor_m14028_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13994_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
#define Array_Resize_TisText_t146_m22375(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t2623**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_12.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisText_t146_m22377(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TextU5BU5D_t2623*, Text_t146 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisText_t146_m22379(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t2623*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisText_t146_m22387(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t2623*, int32_t, Comparison_1_t2638 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1516_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m14002_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisText_t146_m22375_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13990_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13987_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1518_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13981_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13988_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13991_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m1519_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13975_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m14000_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m14001_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25219_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25220_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25221_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25222_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13992_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13976_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13977_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m14034_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisText_t146_m22377_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13985_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13986_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m14109_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m14028_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13989_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13994_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m14115_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t146_m22379_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t146_m22387_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2624_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2624_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
#define Array_InternalArray__get_Item_TisText_t146_m22320(__this, p0, method) (( Text_t146 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14007_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisText_t146_m22320_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2630_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3973_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3974_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3975_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2625_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57MethodDeclarations.h"

extern TypeInfo ILayoutElement_t269_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2625_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
#define Array_InternalArray__get_Item_TisILayoutElement_t269_m22331(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14012_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisILayoutElement_t269_m22331_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3976_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3977_il2cpp_TypeInfo;

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3978_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3979_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2626_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58MethodDeclarations.h"

extern TypeInfo MaskableGraphic_t177_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2626_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
#define Array_InternalArray__get_Item_TisMaskableGraphic_t177_m22342(__this, p0, method) (( MaskableGraphic_t177 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14017_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMaskableGraphic_t177_m22342_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3980_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3981_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3982_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3983_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2627_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59MethodDeclarations.h"

extern TypeInfo IMaskable_t343_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2627_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
#define Array_InternalArray__get_Item_TisIMaskable_t343_m22353(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14022_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIMaskable_t343_m22353_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3984_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t311_il2cpp_TypeInfo;

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3497_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3496_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2628_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60MethodDeclarations.h"

extern TypeInfo Graphic_t156_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2628_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
#define Array_InternalArray__get_Item_TisGraphic_t156_m22364(__this, p0, method) (( Graphic_t156 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14027_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGraphic_t156_m22364_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t166_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m14031_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
