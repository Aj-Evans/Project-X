﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "System_Core_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t893_il2cpp_TypeInfo;
// <Module>
#include "System_Core_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionAttribute_t892_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3394_MethodInfo;


// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern MethodInfo ExtensionAttribute__ctor_m3823_MethodInfo;
extern "C" void ExtensionAttribute__ctor_m3823 (ExtensionAttribute_t892 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		return;
	}
}
// System.Linq.Check
#include "System_Core_System_Linq_Check.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Check_t894_il2cpp_TypeInfo;
// System.Linq.Check
#include "System_Core_System_Linq_CheckMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;


// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern MethodInfo Check_SourceAndPredicate_m3824_MethodInfo;
extern "C" void Check_SourceAndPredicate_m3824 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___predicate, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral340, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___predicate;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral341, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerable_t333_il2cpp_TypeInfo;
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif