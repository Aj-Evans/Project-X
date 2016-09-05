#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43.h"
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
extern TypeInfo InternalEnumerator_1_t2523_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_43MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
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
extern TypeInfo KeyValuePair_2_t2518_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t2523_0_0_0;
extern Il2CppType KeyValuePair_2_t2518_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern MethodInfo Array_get_Length_m4768_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2518  Array_InternalArray__get_Item_TisKeyValuePair_2_t2518_m22062_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2518_m22062(__this, p0, method) (( KeyValuePair_2_t2518  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2518_m22062_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12975_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t2518_m22062_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12971_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12971_gshared (InternalEnumerator_1_t2523 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12972_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12972_gshared (InternalEnumerator_1_t2523 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2518  L_0 = (( KeyValuePair_2_t2518  (*) (InternalEnumerator_1_t2523 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2518  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12973_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12973_gshared (InternalEnumerator_1_t2523 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12974_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12974_gshared (InternalEnumerator_1_t2523 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2518  InternalEnumerator_1_get_Current_m12975_gshared (InternalEnumerator_1_t2523 * __this, MethodInfo* method)
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
		KeyValuePair_2_t2518  L_8 = (( KeyValuePair_2_t2518  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3933_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3460_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t2514_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3934_il2cpp_TypeInfo;

// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.Link>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2524_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.Link>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_44MethodDeclarations.h"

extern TypeInfo Link_t1411_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2524_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.Link>(System.Int32)
extern "C" Link_t1411  Array_InternalArray__get_Item_TisLink_t1411_m22073_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisLink_t1411_m22073(__this, p0, method) (( Link_t1411  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisLink_t1411_m22073_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m12980_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisLink_t1411_m22073_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m12976_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m12976_gshared (InternalEnumerator_1_t2524 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12977_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12977_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	{
		Link_t1411  L_0 = (( Link_t1411  (*) (InternalEnumerator_1_t2524 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Link_t1411  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m12978_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m12978_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m12979_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m12979_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::get_Current()
extern "C" Link_t1411  InternalEnumerator_1_get_Current_m12980_gshared (InternalEnumerator_1_t2524 * __this, MethodInfo* method)
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
		Link_t1411  L_8 = (( Link_t1411  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3935_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.Link>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3936_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Link>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3937_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.Link>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.Link>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.Link>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2525_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
extern TypeInfo ICollection_t807_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2517_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2526_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1041_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2528_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1MethodDeclarations.h"
extern Il2CppType Dictionary_2_t2517_0_0_0;
extern Il2CppType Enumerator_t2526_0_0_0;
extern Il2CppType Int32U5BU5D_t1041_0_0_0;
extern Il2CppType KeyCollection_t2525_0_0_0;
extern Il2CppType Transform_1_t2528_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m10494_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m12900_MethodInfo;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4785_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m12924_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m12992_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m12914_MethodInfo;
extern MethodInfo Transform_1__ctor_m13012_MethodInfo;
extern MethodInfo Enumerator__ctor_m12995_MethodInfo;
struct Dictionary_2_t2517;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22084_gshared (Dictionary_2_t2517 * __this, Array_t * p0, int32_t p1, Transform_1_t2528 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22084(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, Transform_1_t2528 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22084_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22085 (Dictionary_2_t2517 * __this, Int32U5BU5D_t1041* p0, int32_t p1, Transform_1_t2528 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12900_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m12924_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m12993_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m12992_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12910_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m12914_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13012_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22084_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22085_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m12995_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod KeyCollection__ctor_m12981_GenericMethod;
extern "C" void KeyCollection__ctor_m12981_gshared (KeyCollection_t2525 * __this, Dictionary_2_t2517 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2517 * L_0 = ___dictionary;
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
		Dictionary_2_t2517 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m12982_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m12982_gshared (KeyCollection_t2525 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m12983_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m12983_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m12984_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m12984_gshared (KeyCollection_t2525 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m12985_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m12985_gshared (KeyCollection_t2525 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m12986_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m12986_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		Enumerator_t2526  L_0 = (( Enumerator_t2526  (*) (KeyCollection_t2525 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2526  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m12987_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m12987_gshared (KeyCollection_t2525 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2517 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2517 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2528 * L_11 = (Transform_1_t2528 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2528 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, Transform_1_t2528 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m12988_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m12988_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		Enumerator_t2526  L_0 = (( Enumerator_t2526  (*) (KeyCollection_t2525 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2526  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m12989_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m12989_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m12990_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m12990_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m12991_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m12991_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m12992_gshared (KeyCollection_t2525 * __this, Int32U5BU5D_t1041* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2517 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t1041* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2528 * L_7 = (Transform_1_t2528 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2528 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2517 *, Int32U5BU5D_t1041*, int32_t, Transform_1_t2528 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2526  KeyCollection_GetEnumerator_m12993_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		Enumerator_t2526  L_1 = {0};
		(( void (*) (Enumerator_t2526 *, Dictionary_2_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m12994_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m12994_gshared (KeyCollection_t2525 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
extern TypeInfo Enumerator_t2527_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
extern Il2CppType Enumerator_t2527_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13007_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m12946_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m12942_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13011_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m13005_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12995_gshared (Enumerator_t2526 * __this, Dictionary_2_t2517 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2527  L_1 = (( Enumerator_t2527  (*) (Dictionary_2_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m12996_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12996_gshared (Enumerator_t2526 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m12997_GenericMethod;
extern "C" void Enumerator_Dispose_m12997_gshared (Enumerator_t2526 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m12998_GenericMethod;
extern "C" bool Enumerator_MoveNext_m12998_gshared (Enumerator_t2526 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m12999_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m12999_gshared (Enumerator_t2526 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2518 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
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
extern TypeInfo ObjectDisposedException_t1283_il2cpp_TypeInfo;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo DictionaryEntry__ctor_m4765_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m12945_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13010_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m12948_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13008_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13009_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m12945_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m13000_GenericMethod;
extern "C" void Enumerator__ctor_m13000_gshared (Enumerator_t2527 * __this, Dictionary_2_t2517 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2517 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13001_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13001_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2518  L_0 = (__this->___current_3);
		KeyValuePair_2_t2518  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13002_GenericMethod;
extern "C" DictionaryEntry_t930  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13002_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2518 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t2518 * L_4 = &(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_6 = L_5;
		DictionaryEntry_t930  L_7 = {0};
		DictionaryEntry__ctor_m4765(&L_7, L_3, ((Object_t *)L_6), /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13003_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13003_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13004_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13004_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13005_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t2517 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t2517 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t1041* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2517 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t288* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2518  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2518 *, int32_t, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t2517 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13006_GenericMethod;
extern "C" KeyValuePair_2_t2518  Enumerator_get_Current_m13006_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t2518  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13007_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2518 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13008_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2518 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13009_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t2517 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13010_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13011_gshared (Enumerator_t2527 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2517 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13012_gshared (Transform_1_t2528 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13013_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m13013_gshared (Transform_1_t2528 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13013((Transform_1_t2528 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13014_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13014_gshared (Transform_1_t2528 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13015_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m13015_gshared (Transform_1_t2528 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t2529_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
extern TypeInfo Enumerator_t2530_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2531_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
extern Il2CppType Enumerator_t2530_0_0_0;
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern Il2CppType ValueCollection_t2529_0_0_0;
extern Il2CppType Transform_1_t2531_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13027_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12916_MethodInfo;
extern MethodInfo Transform_1__ctor_m13035_MethodInfo;
extern MethodInfo Enumerator__ctor_m13030_MethodInfo;
struct Dictionary_2_t2517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22087_gshared (Dictionary_2_t2517 * __this, Array_t * p0, int32_t p1, Transform_1_t2531 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22087(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, Transform_1_t2531 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22087_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22086 (Dictionary_2_t2517 * __this, ObjectU5BU5D_t288* p0, int32_t p1, Transform_1_t2531 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12926_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m13028_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13027_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m12916_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13035_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22087_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m22086_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13030_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m13016_GenericMethod;
extern "C" void ValueCollection__ctor_m13016_gshared (ValueCollection_t2529 * __this, Dictionary_2_t2517 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2517 * L_0 = ___dictionary;
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
		Dictionary_2_t2517 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13017_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13017_gshared (ValueCollection_t2529 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13018_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13018_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13019_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13019_gshared (ValueCollection_t2529 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2517 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13020_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13020_gshared (ValueCollection_t2529 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1317, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13021_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13021_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		Enumerator_t2530  L_0 = (( Enumerator_t2530  (*) (ValueCollection_t2529 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2530  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m13022_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13022_gshared (ValueCollection_t2529 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t2517 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2517 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2531 * L_11 = (Transform_1_t2531 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2531 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, Transform_1_t2531 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13023_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13023_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		Enumerator_t2530  L_0 = (( Enumerator_t2530  (*) (ValueCollection_t2529 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2530  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13024_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13024_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13025_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13025_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m13026_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13026_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m10494_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13027_gshared (ValueCollection_t2529 * __this, ObjectU5BU5D_t288* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t2517 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2517 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t288* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2531 * L_7 = (Transform_1_t2531 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2531 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t2517 *, ObjectU5BU5D_t288*, int32_t, Transform_1_t2531 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2530  ValueCollection_GetEnumerator_m13028_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		Enumerator_t2530  L_1 = {0};
		(( void (*) (Enumerator_t2530 *, Dictionary_2_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m13029_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m13029_gshared (ValueCollection_t2529 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13030_gshared (Enumerator_t2530 * __this, Dictionary_2_t2517 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t2517 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2527  L_1 = (( Enumerator_t2527  (*) (Dictionary_2_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m13031_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13031_gshared (Enumerator_t2530 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m13032_GenericMethod;
extern "C" void Enumerator_Dispose_m13032_gshared (Enumerator_t2530 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m13033_GenericMethod;
extern "C" bool Enumerator_MoveNext_m13033_gshared (Enumerator_t2530 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m13034_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m13034_gshared (Enumerator_t2530 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2518 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13035_gshared (Transform_1_t2531 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13036_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m13036_gshared (Transform_1_t2531 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13036((Transform_1_t2531 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13037_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13037_gshared (Transform_1_t2531 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13038_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m13038_gshared (Transform_1_t2531 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2516_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13039_GenericMethod;
extern "C" void Transform_1__ctor_m13039_gshared (Transform_1_t2516 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13040_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_Invoke_m13040_gshared (Transform_1_t2516 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13040((Transform_1_t2516 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t930  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13041_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13041_gshared (Transform_1_t2516 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13042_GenericMethod;
extern "C" DictionaryEntry_t930  Transform_1_EndInvoke_m13042_gshared (Transform_1_t2516 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t930 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3938_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2532_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2532_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.DictionaryEntry>(System.Int32)
extern "C" DictionaryEntry_t930  Array_InternalArray__get_Item_TisDictionaryEntry_t930_m22089_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDictionaryEntry_t930_m22089(__this, p0, method) (( DictionaryEntry_t930  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDictionaryEntry_t930_m22089_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13047_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDictionaryEntry_t930_m22089_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13043_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13043_gshared (InternalEnumerator_1_t2532 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13044_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13044_gshared (InternalEnumerator_1_t2532 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t930  L_0 = (( DictionaryEntry_t930  (*) (InternalEnumerator_1_t2532 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DictionaryEntry_t930  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13045_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13045_gshared (InternalEnumerator_1_t2532 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13046_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13046_gshared (InternalEnumerator_1_t2532 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t930  InternalEnumerator_1_get_Current_m13047_gshared (InternalEnumerator_1_t2532 * __this, MethodInfo* method)
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
		DictionaryEntry_t930  L_8 = (( DictionaryEntry_t930  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3939_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.DictionaryEntry>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3940_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3941_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.DictionaryEntry>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2533_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_2MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13048_GenericMethod;
extern "C" void Transform_1__ctor_m13048_gshared (Transform_1_t2533 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13049_GenericMethod;
extern "C" KeyValuePair_2_t2518  Transform_1_Invoke_m13049_gshared (Transform_1_t2533 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13049((Transform_1_t2533 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2518  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t2518  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13050_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13050_gshared (Transform_1_t2533 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13051_GenericMethod;
extern "C" KeyValuePair_2_t2518  Transform_1_EndInvoke_m13051_gshared (Transform_1_t2533 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2518 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2534_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumeraMethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t927_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t2534_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m10497_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m13054_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13054_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m13052_GenericMethod;
extern "C" void ShimEnumerator__ctor_m13052_gshared (ShimEnumerator_t2534 * __this, Dictionary_2_t2517 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Dictionary_2_t2517 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t2527  L_1 = (( Enumerator_t2527  (*) (Dictionary_2_t2517 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m13053_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m13053_gshared (ShimEnumerator_t2534 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t930  ShimEnumerator_get_Entry_m13054_gshared (ShimEnumerator_t2534 * __this, MethodInfo* method)
{
	{
		Enumerator_t2527  L_0 = (__this->___host_enumerator_0);
		Enumerator_t2527  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t930  L_3 = (DictionaryEntry_t930 )InterfaceFuncInvoker0< DictionaryEntry_t930  >::Invoke(&IDictionaryEnumerator_get_Entry_m10497_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m13055_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m13055_gshared (ShimEnumerator_t2534 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2518  V_0 = {0};
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2518  L_1 = (( KeyValuePair_2_t2518  (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m13056_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m13056_gshared (ShimEnumerator_t2534 * __this, MethodInfo* method)
{
	KeyValuePair_2_t2518  V_0 = {0};
	{
		Enumerator_t2527 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t2518  L_1 = (( KeyValuePair_2_t2518  (*) (Enumerator_t2527 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2518 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m13057_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m13057_gshared (ShimEnumerator_t2534 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t930  L_0 = (DictionaryEntry_t930 )VirtFuncInvoker0< DictionaryEntry_t930  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t930  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t930_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2535_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t2537_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2535_0_0_0;
extern Il2CppType IEquatable_1_t1892_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2222_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern Il2CppType DefaultComparer_t2537_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;
extern MethodInfo Activator_CreateInstance_m9638_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m13066_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25168_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25169_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13066_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25168_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25169_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m13058_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m13058_gshared (EqualityComparer_1_t2535 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Int32>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m13059_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m13059_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t2537 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t2537 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t2537 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t2535_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13060_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m13060_gshared (EqualityComparer_1_t2535 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13061_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m13061_gshared (EqualityComparer_1_t2535 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Int32>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int32>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m13062_GenericMethod;
extern "C" EqualityComparer_1_t2535 * EqualityComparer_1_get_Default_m13062_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2535 * L_0 = ((EqualityComparer_1_t2535_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2536_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

extern TypeInfo IEquatable_1_t1892_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m25170_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m25170_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13063_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m13063_gshared (GenericEqualityComparer_1_t2536 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m13064_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m13064_gshared (GenericEqualityComparer_1_t2536 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m13065_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m13065_gshared (GenericEqualityComparer_1_t2536 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_Equals_m106_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m13066_gshared (DefaultComparer_t2537 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t2535 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m13067_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m13067_gshared (DefaultComparer_t2537 * __this, int32_t ___obj, MethodInfo* method)
{
	{
		int32_t L_0 = ___obj;
		int32_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m13068_GenericMethod;
extern "C" bool DefaultComparer_Equals_m13068_gshared (DefaultComparer_t2537 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m106_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3916_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3917_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3459_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t292_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"

// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
extern TypeInfo StringU5BU5D_t433_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo PointerEventData_t55_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern MethodInfo Object_ToString_m108_MethodInfo;
extern MethodInfo String_Concat_m3423_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13070_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13071_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m1434_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m1433_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2538_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2538_0_0_0;
extern Il2CppType KeyValuePair_2_t292_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>(System.Int32)
extern "C" KeyValuePair_2_t292  Array_InternalArray__get_Item_TisKeyValuePair_2_t292_m22104_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t292_m22104(__this, p0, method) (( KeyValuePair_2_t292  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t292_m22104_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13076_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t292_m22104_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13072_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13072_gshared (InternalEnumerator_1_t2538 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13073_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13073_gshared (InternalEnumerator_1_t2538 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t292  L_0 = (( KeyValuePair_2_t292  (*) (InternalEnumerator_1_t2538 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t292  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13074_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13074_gshared (InternalEnumerator_1_t2538 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13075_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13075_gshared (InternalEnumerator_1_t2538 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Current()
extern "C" KeyValuePair_2_t292  InternalEnumerator_1_get_Current_m13076_gshared (InternalEnumerator_1_t2538 * __this, MethodInfo* method)
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
		KeyValuePair_2_t292  L_8 = (( KeyValuePair_2_t292  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3942_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t3457_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3456_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3943_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3464_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerEventData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2539_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_47MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2539_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m21424_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m21424(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerEventData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerEventData>(System.Int32)
#define Array_InternalArray__get_Item_TisPointerEventData_t55_m22115(__this, p0, method) (( PointerEventData_t55 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13081_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPointerEventData_t55_m22115_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3944_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerEventData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3945_il2cpp_TypeInfo;

// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseEventData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3946_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseEventData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3947_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseEventData>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2540_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48MethodDeclarations.h"

extern TypeInfo BaseEventData_t51_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2540_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseEventData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.BaseEventData>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseEventData_t51_m22126(__this, p0, method) (( BaseEventData_t51 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13086_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseEventData_t51_m22126_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.BaseEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3948_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.BaseEventData>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyCollection_t2541_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3.h"
extern TypeInfo Dictionary_2_t115_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2542_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2543_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
extern Il2CppType Dictionary_2_t115_0_0_0;
extern Il2CppType Enumerator_t2542_0_0_0;
extern Il2CppType KeyCollection_t2541_0_0_0;
extern Il2CppType Transform_1_t2543_0_0_0;
extern MethodInfo Dictionary_2_get_Count_m12899_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m12923_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m13098_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m12913_MethodInfo;
extern MethodInfo Transform_1__ctor_m13116_MethodInfo;
extern MethodInfo Enumerator__ctor_m13101_MethodInfo;
struct Dictionary_2_t115;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22137(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t115 *, Array_t *, int32_t, Transform_1_t2543 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22084_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t115;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22138 (Dictionary_2_t115 * __this, Int32U5BU5D_t1041* p0, int32_t p1, Transform_1_t2543 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m12899_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m12923_GenericMethod;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m13099_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m13098_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m12909_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m12913_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13116_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t33_m22137_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t33_TisInt32_t33_m22138_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13101_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
extern TypeInfo Enumerator_t291_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_MethodDeclarations.h"
extern Il2CppType Enumerator_t291_0_0_0;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m13111_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m1431_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m13115_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m1435_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo KeyValuePair_2__ctor_m13069_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m13114_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m13112_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m13113_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13069_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Int32>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t294_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
extern TypeInfo Enumerator_t290_il2cpp_TypeInfo;
extern TypeInfo PointerEventDataU5BU5D_t2513_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2544_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollecMethodDeclarations.h"
extern Il2CppType Enumerator_t290_0_0_0;
extern Il2CppType PointerEventDataU5BU5D_t2513_0_0_0;
extern Il2CppType ValueCollection_t294_0_0_0;
extern Il2CppType Transform_1_t2544_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m13131_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m12915_MethodInfo;
extern MethodInfo Transform_1__ctor_m13136_MethodInfo;
extern MethodInfo Enumerator__ctor_m13133_MethodInfo;
struct Dictionary_2_t115;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<UnityEngine.EventSystems.PointerEventData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_ICollectionCopyTo<UnityEngine.EventSystems.PointerEventData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisPointerEventData_t55_m22140(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t115 *, Array_t *, int32_t, Transform_1_t2544 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m22087_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t115;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Do_CopyTo<UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisPointerEventData_t55_TisPointerEventData_t55_m22141 (Dictionary_2_t115 * __this, PointerEventDataU5BU5D_t2513* p0, int32_t p1, Transform_1_t2544 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m12925_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m1428_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m13131_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m12915_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13136_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisPointerEventData_t55_m22140_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisPointerEventData_t55_TisPointerEventData_t55_m22141_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13133_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2515_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2545_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t2546_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m13145_GenericMethod;
extern "C" void Transform_1__ctor_m13145_gshared (Transform_1_t2546 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m13147_GenericMethod;
extern "C" KeyValuePair_2_t292  Transform_1_Invoke_m13147_gshared (Transform_1_t2546 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13147((Transform_1_t2546 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t292  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t292  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m13149_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m13149_gshared (Transform_1_t2546 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m13151_GenericMethod;
extern "C" KeyValuePair_2_t292  Transform_1_EndInvoke_m13151_gshared (Transform_1_t2546 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t292 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t2547_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"

extern Il2CppType ShimEnumerator_t2547_0_0_0;
extern MethodInfo ShimEnumerator_get_Entry_m13154_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m1432_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m13154_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3918_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2548_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
extern TypeInfo DefaultComparer_t2549_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2548_0_0_0;
extern Il2CppType IEquatable_1_t3949_0_0_0;
extern Il2CppType PointerEventData_t55_0_0_0;
extern Il2CppType DefaultComparer_t2549_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13163_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25171_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m25163_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13163_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25171_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m25163_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerEventData>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3949_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.PointerEventData>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13158_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerEventData>::Equals(T,T)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t113_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"

// UnityEngine.EventSystems.PointerInputModule/ButtonState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInputModule_B.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8.h"
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Predicate_1_gen_11.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8.h"
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Comparison_1_gen_11.h"
extern TypeInfo ButtonState_t112_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t689_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t1807_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo ButtonStateU5BU5D_t2550_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2552_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3466_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3467_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3465_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t13_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t41_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t2554_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2558_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t2559_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8MethodDeclarations.h"
// System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Predicate_1_gen_11MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_8MethodDeclarations.h"
extern Il2CppType List_1_t113_0_0_0;
extern Il2CppType ButtonStateU5BU5D_t2550_0_0_0;
extern Il2CppType Enumerator_t2552_0_0_0;
extern Il2CppType ICollection_1_t3466_0_0_0;
extern Il2CppType IEnumerable_1_t3467_0_0_0;
extern Il2CppType IEnumerator_1_t3465_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t2554_0_0_0;
extern Il2CppType Predicate_1_t2558_0_0_0;
extern Il2CppType Comparer_1_t2559_0_0_0;
extern MethodInfo List_1_get_Item_m1404_MethodInfo;
extern MethodInfo List_1_set_Item_m13211_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4952_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo List_1_Add_m1406_MethodInfo;
extern MethodInfo List_1_Contains_m13189_MethodInfo;
extern MethodInfo List_1_IndexOf_m13196_MethodInfo;
extern MethodInfo List_1_Insert_m13199_MethodInfo;
extern MethodInfo List_1_Remove_m13201_MethodInfo;
extern MethodInfo Math_Max_m5932_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25172_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m25173_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25174_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25175_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m3481_MethodInfo;
extern MethodInfo IDisposable_Dispose_m1418_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m13223_MethodInfo;
extern MethodInfo Array_Clear_m5923_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13298_MethodInfo;
extern MethodInfo Enumerator__ctor_m13217_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13203_MethodInfo;
extern MethodInfo Array_Reverse_m5964_MethodInfo;
extern MethodInfo Array_Copy_m4995_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m21435_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m21435(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[]&,System.Int32)
#define Array_Resize_TisButtonState_t112_m22167(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2550**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m21435_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m10495_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10495(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisButtonState_t112_m22169(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2550*, ButtonState_t112 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m10495_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21504_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m21504(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisButtonState_t112_m22171(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2550*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m21504_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m21688_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, int32_t p1, Comparison_1_t2398 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m21688(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, int32_t, Comparison_1_t2398 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.EventSystems.PointerInputModule/ButtonState>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisButtonState_t112_m22179(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ButtonStateU5BU5D_t2550*, int32_t, Comparison_1_t2561 *, MethodInfo*))Array_Sort_TisObject_t_m21688_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m1404_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13211_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisButtonState_t112_m22167_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m13198_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m13195_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m1406_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m13189_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m13196_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m13199_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m13201_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m13183_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m13209_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m13210_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25172_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m25173_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25174_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25175_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m13200_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m13184_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m13185_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m13223_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisButtonState_t112_m22169_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m13193_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m13194_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13298_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13217_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m13197_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13203_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m13304_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisButtonState_t112_m22171_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisButtonState_t112_m22179_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[])
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2551_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t2551_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerInputModule/ButtonState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.EventSystems.PointerInputModule/ButtonState>(System.Int32)
#define Array_InternalArray__get_Item_TisButtonState_t112_m22156(__this, p0, method) (( ButtonState_t112 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m21424_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13216_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisButtonState_t112_m22156_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2553_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m4771_MethodInfo;
extern MethodInfo Object_GetType_m1420_MethodInfo;
extern MethodInfo Type_get_FullName_m3547_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m13220_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t410_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8MethodDeclarations.h"
extern Il2CppType IList_1_t2553_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m13252_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;
extern MethodInfo IList_1_get_Item_m25176_MethodInfo;
extern MethodInfo ICollection_CopyTo_m4760_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m3504_MethodInfo;
extern MethodInfo ICollection_1_Contains_m25177_MethodInfo;
extern MethodInfo IList_1_IndexOf_m25178_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m13252_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m25176_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m13284_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m25177_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m25178_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t2555_il2cpp_TypeInfo;

extern TypeInfo IList_t808_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t2555_0_0_0;
extern Il2CppType ButtonState_t112_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m25179_MethodInfo;
extern MethodInfo Collection_1_SetItem_m13283_MethodInfo;
extern MethodInfo List_1__ctor_m1403_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m13276_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m13274_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m13279_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m13270_MethodInfo;
extern MethodInfo ICollection_1_Clear_m25180_MethodInfo;
extern MethodInfo IList_1_Insert_m25181_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m25182_MethodInfo;
extern MethodInfo IList_1_set_Item_m25183_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m10774_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m10775_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m25179_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m13287_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m13288_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m13285_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m13283_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m1403_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m13276_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m13286_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m13274_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m13279_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m13270_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m25180_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m25181_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m25182_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m25183_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t2556_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
extern TypeInfo DefaultComparer_t2557_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t2556_0_0_0;
extern Il2CppType IEquatable_1_t3950_0_0_0;
extern Il2CppType DefaultComparer_t2557_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13294_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m25184_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m22168_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13294_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m25184_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m22168_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3951_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3950_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m13289_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8.h"
extern TypeInfo DefaultComparer_t2560_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_8MethodDeclarations.h"
extern Il2CppType IComparable_1_t3739_0_0_0;
extern Il2CppType GenericComparer_1_t2133_0_0_0;
extern Il2CppType DefaultComparer_t2560_0_0_0;
extern MethodInfo DefaultComparer__ctor_m13305_MethodInfo;
extern MethodInfo Comparer_1_Compare_m25185_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m13305_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m25185_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3738_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3739_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t346_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m22177_MethodInfo;
extern MethodInfo IComparable_CompareTo_m10465_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m13301_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m22177_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t2561_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
#include "mscorlib_System_Comparison_1_gen_11MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3952_il2cpp_TypeInfo;

// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_50.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2562_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_50MethodDeclarations.h"

extern TypeInfo RaycastHit2D_t298_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2562_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" RaycastHit2D_t298  Array_InternalArray__get_Item_TisRaycastHit2D_t298_m22208_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit2D_t298_m22208(__this, p0, method) (( RaycastHit2D_t298  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit2D_t298_m22208_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13315_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastHit2D_t298_m22208_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13311_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13311_gshared (InternalEnumerator_1_t2562 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13312_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13312_gshared (InternalEnumerator_1_t2562 * __this, MethodInfo* method)
{
	{
		RaycastHit2D_t298  L_0 = (( RaycastHit2D_t298  (*) (InternalEnumerator_1_t2562 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit2D_t298  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13313_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13313_gshared (InternalEnumerator_1_t2562 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13314_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13314_gshared (InternalEnumerator_1_t2562 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t298  InternalEnumerator_1_get_Current_m13315_gshared (InternalEnumerator_1_t2562 * __this, MethodInfo* method)
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
		RaycastHit2D_t298  L_8 = (( RaycastHit2D_t298  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3953_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3954_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3955_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t2563_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6MethodDeclarations.h"



// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t122_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"


// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m1478_GenericMethod;
extern "C" void Comparison_1__ctor_m1478_gshared (Comparison_1_t122 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m13316_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m13316_gshared (Comparison_1_t122 * __this, RaycastHit_t20  ___x, RaycastHit_t20  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m13316((Comparison_1_t122 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t20  ___x, RaycastHit_t20  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t20  ___x, RaycastHit_t20  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m13317_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m13317_gshared (Comparison_1_t122 * __this, RaycastHit_t20  ___x, RaycastHit_t20  ___y, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&RaycastHit_t20_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&RaycastHit_t20_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m13318_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m13318_gshared (Comparison_1_t122 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3956_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2564_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51MethodDeclarations.h"

extern TypeInfo RaycastHit_t20_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t2564_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t20  Array_InternalArray__get_Item_TisRaycastHit_t20_m22219_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t20_m22219(__this, p0, method) (( RaycastHit_t20  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t20_m22219_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m13323_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRaycastHit_t20_m22219_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m13319_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m13319_gshared (InternalEnumerator_1_t2564 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13320_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13320_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
{
	{
		RaycastHit_t20  L_0 = (( RaycastHit_t20  (*) (InternalEnumerator_1_t2564 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t20  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m13321_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m13321_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m13322_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m13322_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t20  InternalEnumerator_1_get_Current_m13323_gshared (InternalEnumerator_1_t2564 * __this, MethodInfo* method)
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
		RaycastHit_t20  L_8 = (( RaycastHit_t20  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t3957_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3958_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3959_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_1_t125_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_0MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo InvokableCall_1_t2565_il2cpp_TypeInfo;
extern TypeInfo Color_t127_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"
extern Il2CppType Color_t127_0_0_0;
extern Il2CppType InvokableCall_1_t2565_0_0_0;
extern MethodInfo UnityEventBase__ctor_m3316_MethodInfo;
extern MethodInfo UnityEventBase_AddCall_m3321_MethodInfo;
extern MethodInfo Delegate_get_Target_m3605_MethodInfo;
extern MethodInfo Delegate_get_Method_m3604_MethodInfo;
extern MethodInfo UnityEventBase_RemoveListener_m3322_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m3324_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13329_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m13330_MethodInfo;
extern MethodInfo UnityEventBase_Invoke_m3323_MethodInfo;
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m13325_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13329_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1__ctor_m13330_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern Il2CppGenericMethod UnityEvent_1__ctor_m1483_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m1483_gshared (UnityEvent_1_t125 * __this, MethodInfo* method)
{
	static bool UnityEvent_1__ctor_m1483_init;
	if (!UnityEvent_1__ctor_m1483_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		UnityEvent_1__ctor_m1483_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 1));
		UnityEventBase__ctor_m3316(__this, /*hidden argument*/&UnityEventBase__ctor_m3316_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_AddListener_m1486_GenericMethod;
extern "C" void UnityEvent_1_AddListener_m1486_gshared (UnityEvent_1_t125 * __this, UnityAction_1_t128 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t128 * L_0 = ___call;
		BaseInvokableCall_t674 * L_1 = (( BaseInvokableCall_t674 * (*) (Object_t * /* static, unused */, UnityAction_1_t128 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UnityEventBase_AddCall_m3321(__this, L_1, /*hidden argument*/&UnityEventBase_AddCall_m3321_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern Il2CppGenericMethod UnityEvent_1_RemoveListener_m13324_GenericMethod;
extern "C" void UnityEvent_1_RemoveListener_m13324_gshared (UnityEvent_1_t125 * __this, UnityAction_1_t128 * ___call, MethodInfo* method)
{
	{
		UnityAction_1_t128 * L_0 = ___call;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3605(L_0, /*hidden argument*/&Delegate_get_Target_m3605_MethodInfo);
		UnityAction_1_t128 * L_2 = ___call;
		NullCheck(L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m3604(L_2, /*hidden argument*/&Delegate_get_Method_m3604_MethodInfo);
		UnityEventBase_RemoveListener_m3322(__this, L_1, L_3, /*hidden argument*/&UnityEventBase_RemoveListener_m3322_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_1_FindMethod_Impl_m2031_GenericMethod;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2031_gshared (UnityEvent_1_t125 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_1_FindMethod_Impl_m2031_init;
	if (!UnityEvent_1_FindMethod_Impl_m2031_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		UnityEvent_1_FindMethod_Impl_m2031_init = true;
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
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_1_GetDelegate_m2032_GenericMethod;
extern "C" BaseInvokableCall_t674 * UnityEvent_1_GetDelegate_m2032_gshared (UnityEvent_1_t125 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t2565 * L_2 = (InvokableCall_1_t2565 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2565 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t674 * UnityEvent_1_GetDelegate_m13325_gshared (Object_t * __this /* static, unused */, UnityAction_1_t128 * ___action, MethodInfo* method)
{
	{
		UnityAction_1_t128 * L_0 = ___action;
		InvokableCall_1_t2565 * L_1 = (InvokableCall_1_t2565 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t2565 *, UnityAction_1_t128 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityEvent_1_Invoke_m1485_GenericMethod;
extern "C" void UnityEvent_1_Invoke_m1485_gshared (UnityEvent_1_t125 * __this, Color_t127  ___arg0, MethodInfo* method)
{
	{
		ObjectU5BU5D_t288* L_0 = (__this->___m_InvokeArray_4);
		Color_t127  L_1 = ___arg0;
		Color_t127  L_2 = L_1;
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
extern TypeInfo UnityAction_1_t128_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_0MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m1557_GenericMethod;
extern "C" void UnityAction_1__ctor_m1557_gshared (UnityAction_1_t128 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern Il2CppGenericMethod UnityAction_1_Invoke_m13326_GenericMethod;
extern "C" void UnityAction_1_Invoke_m13326_gshared (UnityAction_1_t128 * __this, Color_t127  ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m13326((UnityAction_1_t128 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t127  ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, Color_t127  ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m13327_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m13327_gshared (UnityAction_1_t128 * __this, Color_t127  ___arg0, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Color_t127_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m13328_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m13328_gshared (UnityAction_1_t128 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
extern Il2CppType UnityAction_1_t128_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m3295_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3606_MethodInfo;
extern MethodInfo Delegate_Combine_m1559_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m3294_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m3296_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m13326_MethodInfo;
struct BaseInvokableCall_t674;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t127_m22232_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t127_m22232(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t127_m22232_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisColor_t127_m22232_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13329_gshared (InvokableCall_1_t2565 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m3295(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m3295_MethodInfo);
		UnityAction_1_t128 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t310 * L_6 = Delegate_CreateDelegate_m3606(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m3606_MethodInfo);
		Delegate_t310 * L_7 = Delegate_Combine_m1559(NULL /*static, unused*/, L_2, ((UnityAction_1_t128 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m1559_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t128 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13330_gshared (InvokableCall_1_t2565 * __this, UnityAction_1_t128 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m3294(__this, /*hidden argument*/&BaseInvokableCall__ctor_m3294_MethodInfo);
		UnityAction_1_t128 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t128 * L_1 = ___callback;
		Delegate_t310 * L_2 = Delegate_Combine_m1559(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m1559_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t128 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern Il2CppGenericMethod InvokableCall_1_Invoke_m13331_GenericMethod;
extern "C" void InvokableCall_1_Invoke_m13331_gshared (InvokableCall_1_t2565 * __this, ObjectU5BU5D_t288* ___args, MethodInfo* method)
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
		UnityAction_1_t128 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m3296(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m3296_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t128 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t288* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< Color_t127  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(Color_t127 *)((Color_t127 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m13332_GenericMethod;
extern "C" bool InvokableCall_1_Find_m13332_gshared (InvokableCall_1_t2565 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t128 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3605(L_0, /*hidden argument*/&Delegate_get_Target_m3605_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t128 * L_3 = (__this->___Delegate_0);
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
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t137_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_genMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_gen.h"
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1.h"
extern TypeInfo List_1_t2566_il2cpp_TypeInfo;
extern TypeInfo ICanvasElement_t140_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t314_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3468_il2cpp_TypeInfo;
extern TypeInfo NotImplementedException_t1113_il2cpp_TypeInfo;
extern TypeInfo ICanvasElementU5BU5D_t2583_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t139_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
extern Il2CppType List_1_t2566_0_0_0;
extern Il2CppType Dictionary_2_t314_0_0_0;
extern Il2CppType IndexedSet_1_t137_0_0_0;
extern Il2CppType Predicate_1_t139_0_0_0;
extern MethodInfo List_1_get_Count_m13544_MethodInfo;
extern MethodInfo List_1_get_Item_m13545_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13680_MethodInfo;
extern MethodInfo List_1_set_Item_m13546_MethodInfo;
extern MethodInfo Dictionary_2_Add_m13674_MethodInfo;
extern MethodInfo List_1__ctor_m13497_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m13639_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m13338_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m13676_MethodInfo;
extern MethodInfo List_1_Add_m13515_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m13681_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m13352_MethodInfo;
extern MethodInfo NotImplementedException__ctor_m10181_MethodInfo;
extern MethodInfo List_1_Clear_m13521_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m13675_MethodInfo;
extern MethodInfo List_1_CopyTo_m13524_MethodInfo;
extern MethodInfo List_1_RemoveAt_m13536_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m13665_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m13627_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m1503_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m13544_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m13545_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13680_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m13546_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m13674_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m13497_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13639_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m13338_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13676_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m13515_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m13681_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m13352_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m13521_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m13675_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m13524_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m13536_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m13665_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m13627_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m1503_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m13539_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IndexedSet_1_t2568_il2cpp_TypeInfo;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
extern TypeInfo List_1_t285_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t2567_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t40_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2379_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
extern Il2CppType List_1_t285_0_0_0;
extern Il2CppType Dictionary_2_t2567_0_0_0;
extern Il2CppType IndexedSet_1_t2568_0_0_0;
extern Il2CppType Predicate_1_t2379_0_0_0;
extern MethodInfo List_1_get_Count_m3677_MethodInfo;
extern MethodInfo List_1_get_Item_m3699_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m13400_MethodInfo;
extern MethodInfo List_1_set_Item_m3700_MethodInfo;
extern MethodInfo Dictionary_2_Add_m13394_MethodInfo;
extern MethodInfo List_1__ctor_m3469_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m13359_MethodInfo;
extern MethodInfo IndexedSet_1_GetEnumerator_m13339_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m13396_MethodInfo;
extern MethodInfo List_1_Add_m3490_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m13401_MethodInfo;
extern MethodInfo IndexedSet_1_RemoveAt_m13353_MethodInfo;
extern MethodInfo List_1_Clear_m3686_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m13395_MethodInfo;
extern MethodInfo List_1_CopyTo_m3694_MethodInfo;
extern MethodInfo List_1_RemoveAt_m3691_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m13385_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m11470_MethodInfo;
extern MethodInfo IndexedSet_1_Remove_m13337_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m3677_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m3699_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m13400_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m3700_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m13394_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m3469_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13359_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_GetEnumerator_m13339_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m13396_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m3490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m13401_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_RemoveAt_m13353_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m3686_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m13395_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m3694_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m3691_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m13385_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m11470_GenericMethod;
extern Il2CppGenericMethod IndexedSet_1_Remove_m13337_GenericMethod;
extern Il2CppGenericMethod List_1_Sort_m11344_GenericMethod;


// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern Il2CppGenericMethod IndexedSet_1__ctor_m13333_GenericMethod;
extern TypeInfo* List_1_t285_il2cpp_TypeInfo_var;
extern "C" void IndexedSet_1__ctor_m13333_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	static bool IndexedSet_1__ctor_m13333_init;
	if (!IndexedSet_1__ctor_m13333_init)
	{
		List_1_t285_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t285_0_0_0);
		IndexedSet_1__ctor_m13333_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t285_il2cpp_TypeInfo_var);
		List_1_t285 * L_0 = (List_1_t285 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t285 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t2567 * L_1 = (Dictionary_2_t2567 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13335_GenericMethod;
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13335_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern Il2CppGenericMethod IndexedSet_1_Add_m13336_GenericMethod;
extern "C" void IndexedSet_1_Add_m13336_gshared (IndexedSet_1_t2568 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t285 * L_3 = (__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_3, L_4);
		Dictionary_2_t2567 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t285 * L_7 = (__this->___m_List_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_7);
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_5, L_6, ((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13337_gshared (IndexedSet_1_t2568 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2567 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13339_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	{
		NotImplementedException_t1113 * L_0 = (NotImplementedException_t1113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotImplementedException_t1113_il2cpp_TypeInfo));
		NotImplementedException__ctor_m10181(L_0, /*hidden argument*/&NotImplementedException__ctor_m10181_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern Il2CppGenericMethod IndexedSet_1_Clear_m13340_GenericMethod;
extern "C" void IndexedSet_1_Clear_m13340_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_0);
		Dictionary_2_t2567 * L_1 = (__this->___m_Dictionary_1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern Il2CppGenericMethod IndexedSet_1_Contains_m13342_GenericMethod;
extern "C" bool IndexedSet_1_Contains_m13342_gshared (IndexedSet_1_t2568 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t2567 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod IndexedSet_1_CopyTo_m13344_GenericMethod;
extern "C" void IndexedSet_1_CopyTo_m13344_gshared (IndexedSet_1_t2568 * __this, ObjectU5BU5D_t288* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		ObjectU5BU5D_t288* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck(L_0);
		VirtActionInvoker2< ObjectU5BU5D_t288*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), L_0, L_1, L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern Il2CppGenericMethod IndexedSet_1_get_Count_m13345_GenericMethod;
extern "C" int32_t IndexedSet_1_get_Count_m13345_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern Il2CppGenericMethod IndexedSet_1_get_IsReadOnly_m13347_GenericMethod;
extern "C" bool IndexedSet_1_get_IsReadOnly_m13347_gshared (IndexedSet_1_t2568 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod IndexedSet_1_IndexOf_m13349_GenericMethod;
extern "C" int32_t IndexedSet_1_IndexOf_m13349_gshared (IndexedSet_1_t2568 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		Dictionary_2_t2567 * L_0 = (__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1, (&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_Insert_m13351_GenericMethod;
extern "C" void IndexedSet_1_Insert_m13351_gshared (IndexedSet_1_t2568 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral70, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13353_gshared (IndexedSet_1_t2568 * __this, int32_t ___index, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2567 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		int32_t L_5 = ___index;
		List_1_t285 * L_6 = (__this->___m_List_0);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t285 * L_8 = (__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_8, L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t285 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		V_1 = ((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t285 * L_12 = (__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_12, L_13);
		V_2 = L_14;
		List_1_t285 * L_15 = (__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_15, L_16, L_17);
		Dictionary_2_t2567 * L_18 = (__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_18, L_19, L_20);
		List_1_t285 * L_21 = (__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_21, L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod IndexedSet_1_get_Item_m13354_GenericMethod;
extern "C" Object_t * IndexedSet_1_get_Item_m13354_gshared (IndexedSet_1_t2568 * __this, int32_t ___index, MethodInfo* method)
{
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod IndexedSet_1_set_Item_m13356_GenericMethod;
extern "C" void IndexedSet_1_set_Item_m13356_gshared (IndexedSet_1_t2568 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_0 = L_2;
		Dictionary_2_t2567 * L_3 = (__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), L_3, L_4);
		List_1_t285 * L_5 = (__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), L_5, L_6, L_7);
		Dictionary_2_t2567 * L_8 = (__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck(L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_8, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod IndexedSet_1_RemoveAll_m13357_GenericMethod;
extern "C" void IndexedSet_1_RemoveAll_m13357_gshared (IndexedSet_1_t2568 * __this, Predicate_1_t2379 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_0, L_1);
		V_1 = L_2;
		Predicate_1_t2379 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_3, L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), __this, L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t285 * L_9 = (__this->___m_List_0);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod IndexedSet_1_Sort_m13358_GenericMethod;
extern "C" void IndexedSet_1_Sort_m13358_gshared (IndexedSet_1_t2568 * __this, Comparison_1_t2398 * ___sortLayoutFunction, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t285 * L_0 = (__this->___m_List_0);
		Comparison_1_t2398 * L_1 = ___sortLayoutFunction;
		NullCheck(L_0);
		(( void (*) (List_1_t285 *, Comparison_1_t2398 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = 0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t285 * L_2 = (__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), L_2, L_3);
		V_1 = L_4;
		Dictionary_2_t2567 * L_5 = (__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), L_5, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t285 * L_10 = (__this->___m_List_0);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
extern TypeInfo IEqualityComparer_1_t2569_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t1412_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t2573_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t2577_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t3960_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t3961_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t3471_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t2571_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t3470_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2570_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t2580_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2575_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t2581_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t2371_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2203_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t923_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_6MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType IEqualityComparer_1_t2569_0_0_0;
extern Il2CppType KeyCollection_t2573_0_0_0;
extern Il2CppType ValueCollection_t2577_0_0_0;
extern Il2CppType ICollection_1_t3960_0_0_0;
extern Il2CppType IEnumerable_1_t3961_0_0_0;
extern Il2CppType IEnumerator_1_t3471_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t3470_0_0_0;
extern Il2CppType KeyValuePair_2_t2571_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t3657_0_0_0;
extern Il2CppType Transform_1_t2570_0_0_0;
extern Il2CppType Transform_1_t2580_0_0_0;
extern Il2CppType Enumerator_t2575_0_0_0;
extern Il2CppType ShimEnumerator_t2581_0_0_0;
extern Il2CppType EqualityComparer_1_t2371_0_0_0;
extern Il2CppType LinkU5BU5D_t2203_0_0_0;
extern Il2CppType IEqualityComparer_1_t2514_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m13384_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m25186_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25167_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m7359_MethodInfo;
extern MethodInfo KeyCollection__ctor_m13420_MethodInfo;
extern MethodInfo ValueCollection__ctor_m13455_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m25187_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m25188_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m25189_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m13408_MethodInfo;
extern MethodInfo Transform_1__ctor_m13478_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m13389_MethodInfo;
extern MethodInfo Transform_1__ctor_m13482_MethodInfo;
extern MethodInfo Enumerator__ctor_m13439_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m13486_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m13383_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m13409_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m7526_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m25158_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4781_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4794_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4793_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4782_MethodInfo;
extern MethodInfo Type_ToString_m6824_MethodInfo;
extern MethodInfo String_Concat_m1710_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4770_MethodInfo;
struct Dictionary_2_t2567;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22249 (Dictionary_2_t2567 * __this, DictionaryEntryU5BU5D_t3657* p0, int32_t p1, Transform_1_t2570 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t2567;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2571_m22251_gshared (Dictionary_2_t2567 * __this, Array_t * p0, int32_t p1, Transform_1_t2580 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2571_m22251(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2580 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2571_m22251_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2567;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2571_TisKeyValuePair_2_t2571_m22252 (Dictionary_2_t2567 * __this, KeyValuePair_2U5BU5D_t3470* p0, int32_t p1, Transform_1_t2580 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m13402_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m13403_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m13404_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m13384_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m13405_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m25186_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25167_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m13393_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m13420_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m13455_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m13386_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m13363_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m25187_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m25188_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m25189_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m13410_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m13412_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m13406_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m13392_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m13388_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m13408_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13478_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t930_TisDictionaryEntry_t930_m22249_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m13389_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m13482_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2571_m22251_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m13439_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m13486_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m11435_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m13387_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m13383_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m13409_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2571_TisKeyValuePair_2_t2571_m22252_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m25158_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13359_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		(( void (*) (Dictionary_2_t2567 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m13360_GenericMethod;
extern "C" void Dictionary_2__ctor_m13360_gshared (Dictionary_2_t2567 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t2567 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m13361_GenericMethod;
extern "C" void Dictionary_2__ctor_m13361_gshared (Dictionary_2_t2567 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t2567 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m13362_GenericMethod;
extern "C" void Dictionary_2__ctor_m13362_gshared (Dictionary_2_t2567 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t2567 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13363_gshared (Dictionary_2_t2567 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t2571  V_1 = {0};
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
		(( void (*) (Dictionary_2_t2567 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t2571  L_9 = (KeyValuePair_2_t2571 )InterfaceFuncInvoker0< KeyValuePair_2_t2571  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m13364_GenericMethod;
extern "C" void Dictionary_2__ctor_m13364_gshared (Dictionary_2_t2567 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13365_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13365_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2573 * L_0 = (( KeyCollection_t2573 * (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13366_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13366_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2577 * L_0 = (( ValueCollection_t2577 * (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m13367_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13367_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2567 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m13368_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13368_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2567 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2567 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m13369_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13369_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2567 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		int32_t L_3 = (( int32_t (*) (Dictionary_2_t2567 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m13370_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13370_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m13371_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13371_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13372_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13372_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13373_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13373_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13374_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13374_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13375_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13375_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2_t2571  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13376_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13376_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2_t2571  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2571  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2567 *, KeyValuePair_2_t2571 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13377_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13377_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2U5BU5D_t3470* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3470* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2567 *, KeyValuePair_2U5BU5D_t3470*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13378_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13378_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2_t2571  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t2571  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t2567 *, KeyValuePair_2_t2571 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m13379_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13379_gshared (Dictionary_2_t2567 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m13379_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m13379_init)
	{
		DictionaryEntryU5BU5D_t3657_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t3657_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m13379_init = true;
	}
	KeyValuePair_2U5BU5D_t3470* V_0 = {0};
	DictionaryEntryU5BU5D_t3657* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B5_1 = {0};
	Dictionary_2_t2567 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3657* G_B4_1 = {0};
	Dictionary_2_t2567 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t3470*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t3470* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3470* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t2567 *, KeyValuePair_2U5BU5D_t3470*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t2570 * L_10 = ((Dictionary_2_t2567_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2567 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2567 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2570 * L_12 = (Transform_1_t2570 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2570 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2567_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2567 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t2570 * L_13 = ((Dictionary_2_t2567_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t2567 *, DictionaryEntryU5BU5D_t3657*, int32_t, Transform_1_t2570 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2580 * L_17 = (Transform_1_t2580 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2580 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, Transform_1_t2580 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13380_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13380_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575  L_0 = {0};
		(( void (*) (Enumerator_t2575 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2575  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13381_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13381_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575  L_0 = {0};
		(( void (*) (Enumerator_t2575 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2575  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13382_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13382_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t2581 * L_0 = (ShimEnumerator_t2581 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2581 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13383_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13384_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
		Int32U5BU5D_t1041* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13385_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		Int32U5BU5D_t1041* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		int32_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_70, L_71)) = (int32_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t2371_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m13386_gshared (Dictionary_2_t2567 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m13386_init;
	if (!Dictionary_2_Init_m13386_init)
	{
		EqualityComparer_1_t2371_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2371_0_0_0);
		Dictionary_2_Init_m13386_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2567 * G_B4_0 = {0};
	Dictionary_2_t2567 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2567 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t2567 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2567 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2567 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t2371 * L_5 = (( EqualityComparer_1_t2371 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2567 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t2567 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m13387_gshared (Dictionary_2_t2567 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m13387_init;
	if (!Dictionary_2_InitArrays_m13387_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_InitArrays_m13387_init = true;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13388_gshared (Dictionary_2_t2567 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2571  Dictionary_2_make_pair_m13389_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ___value;
		KeyValuePair_2_t2571  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2571 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m13390_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m13390_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m13391_GenericMethod;
extern "C" int32_t Dictionary_2_pick_value_m13391_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13392_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2U5BU5D_t3470* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t3470* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t2567 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t3470* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2580 * L_5 = (Transform_1_t2580 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2580 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t2567 *, KeyValuePair_2U5BU5D_t3470*, int32_t, Transform_1_t2580 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern TypeInfo* Int32U5BU5D_t1041_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2203_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m13393_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m13393_init;
	if (!Dictionary_2_Resize_m13393_init)
	{
		Int32U5BU5D_t1041_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t1041_0_0_0);
		LinkU5BU5D_t2203_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2203_0_0_0);
		Dictionary_2_Resize_m13393_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1041* V_1 = {0};
	LinkU5BU5D_t2203* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t288* V_7 = {0};
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
		V_8 = ((Int32U5BU5D_t1041*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t288* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t288* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		Int32U5BU5D_t1041* L_40 = (__this->___valueSlots_7);
		Int32U5BU5D_t1041* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		ObjectU5BU5D_t288* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		Int32U5BU5D_t1041* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13394_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		Int32U5BU5D_t1041* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		int32_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13395_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13396_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m13397_GenericMethod;
extern TypeInfo* EqualityComparer_1_t2535_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m13397_gshared (Dictionary_2_t2567 * __this, int32_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m13397_init;
	if (!Dictionary_2_ContainsValue_m13397_init)
	{
		EqualityComparer_1_t2535_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2535_0_0_0);
		Dictionary_2_ContainsValue_m13397_init = true;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m13398_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m13398_gshared (Dictionary_2_t2567 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t3470* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t3470*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t3470*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t3470* L_8 = V_0;
		(( void (*) (Dictionary_2_t2567 *, KeyValuePair_2U5BU5D_t3470*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t665 * L_9 = ___info;
		Int32U5BU5D_t1041* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m4781(L_9, (String_t*) &_stringLiteral1312, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t3470* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m4794(L_11, (String_t*) &_stringLiteral1313, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m13399_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m13399_gshared (Dictionary_2_t2567 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t3470* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t3470*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t2567 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t3470* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t3470* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t2571 *)(KeyValuePair_2_t2571 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t3470* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t2571 *)(KeyValuePair_2_t2571 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t3470* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13400_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
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
		Int32U5BU5D_t1041* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_5));
		int32_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13401_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
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
		int32_t* L_20 = ___value;
		Int32U5BU5D_t1041* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
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
		int32_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), (&V_2));
		int32_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2573 * Dictionary_2_get_Keys_m13402_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		KeyCollection_t2573 * L_0 = (KeyCollection_t2573 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2573 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2577 * Dictionary_2_get_Values_m13403_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		ValueCollection_t2577 * L_0 = (ValueCollection_t2577 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2577 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13404_gshared (Dictionary_2_t2567 * __this, Object_t * ___key, MethodInfo* method)
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
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13405_gshared (Dictionary_2_t2567 * __this, Object_t * ___value, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t2535_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13406_gshared (Dictionary_2_t2567 * __this, KeyValuePair_2_t2571  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m13406_init;
	if (!Dictionary_2_ContainsKeyValuePair_m13406_init)
	{
		EqualityComparer_1_t2535_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t2535_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m13406_init = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m13407_GenericMethod;
extern "C" Enumerator_t2575  Dictionary_2_GetEnumerator_m13407_gshared (Dictionary_2_t2567 * __this, MethodInfo* method)
{
	{
		Enumerator_t2575  L_0 = {0};
		(( void (*) (Enumerator_t2575 *, Dictionary_2_t2567 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t930  Dictionary_2_U3CCopyToU3Em__0_m13408_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		int32_t L_2 = ___value;
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t930  L_5 = {0};
		DictionaryEntry__ctor_m4765(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m4765_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m13411_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m13413_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m13409_gshared (KeyValuePair_2_t2571 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2571 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2571 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m13410_gshared (KeyValuePair_2_t2571 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13411_gshared (KeyValuePair_2_t2571 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" int32_t KeyValuePair_2_get_Value_m13412_gshared (KeyValuePair_2_t2571 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13413_gshared (KeyValuePair_2_t2571 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m13414_GenericMethod;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m13414_gshared (KeyValuePair_2_t2571 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m13414_init;
	if (!KeyValuePair_2_ToString_m13414_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		KeyValuePair_2_ToString_m13414_init = true;
	}
	Object_t * V_0 = {0};
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		int32_t L_9 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_10 = L_9;
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
		int32_t L_12 = (( int32_t (*) (KeyValuePair_2_t2571 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
