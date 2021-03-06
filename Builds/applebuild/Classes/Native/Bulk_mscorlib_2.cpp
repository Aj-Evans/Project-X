﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
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
extern TypeInfo MonoFileType_t1472_il2cpp_TypeInfo;
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileTypeMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIO.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoIO_t1473_il2cpp_TypeInfo;
// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIOMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.String
#include "mscorlib_System_String.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageException.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongException.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
extern TypeInfo UnauthorizedAccessException_t1838_il2cpp_TypeInfo;
extern TypeInfo IOException_t1300_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo IsolatedStorageException_t1453_il2cpp_TypeInfo;
extern TypeInfo PathTooLongException_t1475_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t288_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo MonoIOError_t1474_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageExceptionMethodDeclarations.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongExceptionMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t288_0_0_0;
extern MethodInfo IntPtr_op_Explicit_m6610_MethodInfo;
extern MethodInfo UnauthorizedAccessException__ctor_m10386_MethodInfo;
extern MethodInfo IOException__ctor_m7870_MethodInfo;
extern MethodInfo MonoIO_GetException_m7882_MethodInfo;
extern MethodInfo String_Format_m1502_MethodInfo;
extern MethodInfo IsolatedStorageException__ctor_m7760_MethodInfo;
extern MethodInfo PathTooLongException__ctor_m7921_MethodInfo;
extern MethodInfo String_Format_m1881_MethodInfo;
extern MethodInfo String_Format_m6406_MethodInfo;
extern MethodInfo MonoIO_GetFileAttributes_m7887_MethodInfo;


// System.Void System.IO.MonoIO::.cctor()
extern MethodInfo MonoIO__cctor_m7880_MethodInfo;
extern "C" void MonoIO__cctor_m7880 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((MonoIO_t1473_StaticFields*)InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0 = (-1);
		IntPtr_t L_0 = IntPtr_op_Explicit_m6610(NULL /*static, unused*/, (((int64_t)(-1))), /*hidden argument*/&IntPtr_op_Explicit_m6610_MethodInfo);
		((MonoIO_t1473_StaticFields*)InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1 = L_0;
		return;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern MethodInfo MonoIO_GetException_m7881_MethodInfo;
extern "C" Exception_t293 * MonoIO_GetException_m7881 (Object_t * __this /* static, unused */, int32_t ___error, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)80))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002c;
	}

IL_000d:
	{
		UnauthorizedAccessException_t1838 * L_3 = (UnauthorizedAccessException_t1838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1838_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10386(L_3, (String_t*) &_stringLiteral1592, /*hidden argument*/&UnauthorizedAccessException__ctor_m10386_MethodInfo);
		return L_3;
	}

IL_0018:
	{
		V_0 = (String_t*) &_stringLiteral1593;
		String_t* L_4 = V_0;
		int32_t L_5 = ___error;
		IOException_t1300 * L_6 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		int32_t L_8 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo));
		Exception_t293 * L_9 = MonoIO_GetException_m7882(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&MonoIO_GetException_m7882_MethodInfo);
		return L_9;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" Exception_t293 * MonoIO_GetException_m7882 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, MethodInfo* method)
{
	static bool MonoIO_GetException_m7882_init;
	if (!MonoIO_GetException_m7882_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		MonoIO_GetException_m7882_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 0)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 2)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 3)
		{
			goto IL_0180;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 4)
		{
			goto IL_019a;
		}
	}

IL_003b:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_0100;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0214;
		}
	}

IL_0050:
	{
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_01fa;
		}
	}

IL_0065:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)87))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)145))))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)206))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0228;
	}

IL_009b:
	{
		String_t* L_10 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1594, L_10, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_11;
		String_t* L_12 = V_0;
		IsolatedStorageException_t1453 * L_13 = (IsolatedStorageException_t1453 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1453_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7760(L_13, L_12, /*hidden argument*/&IsolatedStorageException__ctor_m7760_MethodInfo);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = ___error;
		IOException_t1300 * L_15 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_15, (String_t*) &_stringLiteral1595, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_15;
	}

IL_00c0:
	{
		String_t* L_16 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_17 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1596, L_16, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_17;
		String_t* L_18 = V_0;
		IsolatedStorageException_t1453 * L_19 = (IsolatedStorageException_t1453 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1453_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m7760(L_19, L_18, /*hidden argument*/&IsolatedStorageException__ctor_m7760_MethodInfo);
		return L_19;
	}

IL_00d3:
	{
		String_t* L_20 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1597, L_20, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_21;
		String_t* L_22 = V_0;
		UnauthorizedAccessException_t1838 * L_23 = (UnauthorizedAccessException_t1838 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t1838_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m10386(L_23, L_22, /*hidden argument*/&UnauthorizedAccessException__ctor_m10386_MethodInfo);
		return L_23;
	}

IL_00e6:
	{
		String_t* L_24 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1598, L_24, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_25;
		String_t* L_26 = V_0;
		int32_t L_27 = ___error;
		IOException_t1300 * L_28 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_28;
	}

IL_0100:
	{
		String_t* L_29 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_30 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1599, L_29, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_30;
		String_t* L_31 = V_0;
		int32_t L_32 = ___error;
		IOException_t1300 * L_33 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_33;
	}

IL_011a:
	{
		String_t* L_34 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_35 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1600, L_34, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_35;
		String_t* L_36 = V_0;
		int32_t L_37 = ___error;
		IOException_t1300 * L_38 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_38;
	}

IL_0134:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_40 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1601, L_39, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_40;
		String_t* L_41 = V_0;
		PathTooLongException_t1475 * L_42 = (PathTooLongException_t1475 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PathTooLongException_t1475_il2cpp_TypeInfo));
		PathTooLongException__ctor_m7921(L_42, L_41, /*hidden argument*/&PathTooLongException__ctor_m7921_MethodInfo);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_43 = String_Format_m1881(NULL /*static, unused*/, (String_t*) &_stringLiteral1602, ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_Format_m1881_MethodInfo);
		V_0 = L_43;
		String_t* L_44 = V_0;
		int32_t L_45 = ___error;
		IOException_t1300 * L_46 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_46;
	}

IL_0166:
	{
		String_t* L_47 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1603, L_47, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_48;
		String_t* L_49 = V_0;
		int32_t L_50 = ___error;
		IOException_t1300 * L_51 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_51;
	}

IL_0180:
	{
		String_t* L_52 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_53 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1604, L_52, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_53;
		String_t* L_54 = V_0;
		int32_t L_55 = ___error;
		IOException_t1300 * L_56 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_56;
	}

IL_019a:
	{
		String_t* L_57 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_58 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1605, L_57, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_58;
		String_t* L_59 = V_0;
		int32_t L_60 = ___error;
		IOException_t1300 * L_61 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_61;
	}

IL_01b4:
	{
		String_t* L_62 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_63 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1606, L_62, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_63;
		String_t* L_64 = V_0;
		int32_t L_65 = ___error;
		IOException_t1300 * L_66 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_66;
	}

IL_01ce:
	{
		String_t* L_67 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_68 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1607, L_67, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_68;
		String_t* L_69 = V_0;
		int32_t L_70 = ___error;
		IOException_t1300 * L_71 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = ___error;
		IOException_t1300 * L_73 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_73, (String_t*) &_stringLiteral1608, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_73;
	}

IL_01fa:
	{
		String_t* L_74 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_75 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1609, L_74, /*hidden argument*/&String_Format_m1502_MethodInfo);
		V_0 = L_75;
		String_t* L_76 = V_0;
		int32_t L_77 = ___error;
		IOException_t1300 * L_78 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_78;
	}

IL_0214:
	{
		V_0 = (String_t*) &_stringLiteral1610;
		String_t* L_79 = V_0;
		int32_t L_80 = ___error;
		IOException_t1300 * L_81 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = ___error;
		int32_t L_83 = L_82;
		Object_t * L_84 = Box(InitializedTypeInfo(&MonoIOError_t1474_il2cpp_TypeInfo), &L_83);
		String_t* L_85 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_86 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1611, L_84, L_85, /*hidden argument*/&String_Format_m6406_MethodInfo);
		V_0 = L_86;
		String_t* L_87 = V_0;
		int32_t L_88 = ___error;
		IOException_t1300 * L_89 = (IOException_t1300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1300_il2cpp_TypeInfo));
		IOException__ctor_m7870(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), /*hidden argument*/&IOException__ctor_m7870_MethodInfo);
		return L_89;
	}
}
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_CreateDirectory_m7883_MethodInfo;
extern "C" bool MonoIO_CreateDirectory_m7883 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_CreateDirectory_m7883_ftn) (String_t*, int32_t*);
	static MonoIO_CreateDirectory_m7883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_CreateDirectory_m7883_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileSystemEntries_m7884_MethodInfo;
extern "C" StringU5BU5D_t433* MonoIO_GetFileSystemEntries_m7884 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, MethodInfo* method)
{
	typedef StringU5BU5D_t433* (*MonoIO_GetFileSystemEntries_m7884_ftn) (String_t*, String_t*, int32_t, int32_t, int32_t*);
	static MonoIO_GetFileSystemEntries_m7884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileSystemEntries_m7884_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___path_with_pattern, ___attrs, ___mask, ___error);
}
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetCurrentDirectory_m7885_MethodInfo;
extern "C" String_t* MonoIO_GetCurrentDirectory_m7885 (Object_t * __this /* static, unused */, int32_t* ___error, MethodInfo* method)
{
	typedef String_t* (*MonoIO_GetCurrentDirectory_m7885_ftn) (int32_t*);
	static MonoIO_GetCurrentDirectory_m7885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetCurrentDirectory_m7885_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___error);
}
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_DeleteFile_m7886_MethodInfo;
extern "C" bool MonoIO_DeleteFile_m7886 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_DeleteFile_m7886_ftn) (String_t*, int32_t*);
	static MonoIO_DeleteFile_m7886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_DeleteFile_m7886_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m7887 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileAttributes_m7887_ftn) (String_t*, int32_t*);
	static MonoIO_GetFileAttributes_m7887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileAttributes_m7887_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileType_m7888_MethodInfo;
extern "C" int32_t MonoIO_GetFileType_m7888 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileType_m7888_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetFileType_m7888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileType_m7888_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_ExistsFile_m7889_MethodInfo;
extern "C" bool MonoIO_ExistsFile_m7889 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo));
		int32_t L_2 = MonoIO_GetFileAttributes_m7887(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoIO_GetFileAttributes_m7887_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((MonoIO_t1473_StaticFields*)InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_ExistsDirectory_m7890_MethodInfo;
extern "C" bool MonoIO_ExistsDirectory_m7890 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo));
		int32_t L_2 = MonoIO_GetFileAttributes_m7887(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoIO_GetFileAttributes_m7887_MethodInfo);
		V_0 = L_2;
		int32_t* L_3 = ___error;
		if ((!(((uint32_t)(*((int32_t*)L_3))) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_4 = ___error;
		*((int32_t*)(L_4)) = (int32_t)3;
	}

IL_0010:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo));
		int32_t L_6 = ((MonoIO_t1473_StaticFields*)InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileStat_m7891_MethodInfo;
extern "C" bool MonoIO_GetFileStat_m7891 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t1471 * ___stat, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_GetFileStat_m7891_ftn) (String_t*, MonoIOStat_t1471 *, int32_t*);
	static MonoIO_GetFileStat_m7891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileStat_m7891_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___stat, ___error);
}
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Open_m7892_MethodInfo;
extern "C" IntPtr_t MonoIO_Open_m7892 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_Open_m7892_ftn) (String_t*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static MonoIO_Open_m7892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Open_m7892_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___filename, ___mode, ___access, ___share, ___options, ___error);
}
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Close_m7893_MethodInfo;
extern "C" bool MonoIO_Close_m7893 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_Close_m7893_ftn) (IntPtr_t, int32_t*);
	static MonoIO_Close_m7893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Close_m7893_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Read_m7894_MethodInfo;
extern "C" int32_t MonoIO_Read_m7894 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t515* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Read_m7894_ftn) (IntPtr_t, ByteU5BU5D_t515*, int32_t, int32_t, int32_t*);
	static MonoIO_Read_m7894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Read_m7894_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___dest, ___dest_offset, ___count, ___error);
}
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Write_m7895_MethodInfo;
extern "C" int32_t MonoIO_Write_m7895 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t515* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Write_m7895_ftn) (IntPtr_t, ByteU5BU5D_t515*, int32_t, int32_t, int32_t*);
	static MonoIO_Write_m7895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Write_m7895_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___src, ___src_offset, ___count, ___error);
}
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Seek_m7896_MethodInfo;
extern "C" int64_t MonoIO_Seek_m7896 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_Seek_m7896_ftn) (IntPtr_t, int64_t, int32_t, int32_t*);
	static MonoIO_Seek_m7896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Seek_m7896_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___offset, ___origin, ___error);
}
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetLength_m7897_MethodInfo;
extern "C" int64_t MonoIO_GetLength_m7897 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_GetLength_m7897_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetLength_m7897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetLength_m7897_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern MethodInfo MonoIO_SetLength_m7898_MethodInfo;
extern "C" bool MonoIO_SetLength_m7898 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_SetLength_m7898_ftn) (IntPtr_t, int64_t, int32_t*);
	static MonoIO_SetLength_m7898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_SetLength_m7898_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___length, ___error);
}
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern MethodInfo MonoIO_get_ConsoleOutput_m7899_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m7899 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleOutput_m7899_ftn) ();
	static MonoIO_get_ConsoleOutput_m7899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleOutput_m7899_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern MethodInfo MonoIO_get_ConsoleInput_m7900_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m7900 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleInput_m7900_ftn) ();
	static MonoIO_get_ConsoleInput_m7900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleInput_m7900_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern MethodInfo MonoIO_get_ConsoleError_m7901_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleError_m7901 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleError_m7901_ftn) ();
	static MonoIO_get_ConsoleError_m7901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleError_m7901_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern MethodInfo MonoIO_get_VolumeSeparatorChar_m7902_MethodInfo;
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m7902 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_VolumeSeparatorChar_m7902_ftn) ();
	static MonoIO_get_VolumeSeparatorChar_m7902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_VolumeSeparatorChar_m7902_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern MethodInfo MonoIO_get_DirectorySeparatorChar_m7903_MethodInfo;
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m7903 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_DirectorySeparatorChar_m7903_ftn) ();
	static MonoIO_get_DirectorySeparatorChar_m7903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_DirectorySeparatorChar_m7903_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern MethodInfo MonoIO_get_AltDirectorySeparatorChar_m7904_MethodInfo;
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m7904 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_AltDirectorySeparatorChar_m7904_ftn) ();
	static MonoIO_get_AltDirectorySeparatorChar_m7904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_AltDirectorySeparatorChar_m7904_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_PathSeparator()
extern MethodInfo MonoIO_get_PathSeparator_m7905_MethodInfo;
extern "C" uint16_t MonoIO_get_PathSeparator_m7905 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_PathSeparator_m7905_ftn) ();
	static MonoIO_get_PathSeparator_m7905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_PathSeparator_m7905_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOErrorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoIOStat_t1471_il2cpp_TypeInfo;
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStatMethodDeclarations.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1471_marshal(const MonoIOStat_t1471& unmarshaled, MonoIOStat_t1471_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___Attributes_1 = unmarshaled.___Attributes_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___CreationTime_3 = unmarshaled.___CreationTime_3;
	marshaled.___LastAccessTime_4 = unmarshaled.___LastAccessTime_4;
	marshaled.___LastWriteTime_5 = unmarshaled.___LastWriteTime_5;
}
void MonoIOStat_t1471_marshal_back(const MonoIOStat_t1471_marshaled& marshaled, MonoIOStat_t1471& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___Attributes_1 = marshaled.___Attributes_1;
	unmarshaled.___Length_2 = marshaled.___Length_2;
	unmarshaled.___CreationTime_3 = marshaled.___CreationTime_3;
	unmarshaled.___LastAccessTime_4 = marshaled.___LastAccessTime_4;
	unmarshaled.___LastWriteTime_5 = marshaled.___LastWriteTime_5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1471_marshal_cleanup(MonoIOStat_t1471_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Path_t1133_il2cpp_TypeInfo;
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$72.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo Char_t190_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t197_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t711_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t332_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1862_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t714_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType CharU5BU5D_t197_0_0_0;
extern MethodInfo Path_GetInvalidPathChars_m7916_MethodInfo;
extern MethodInfo Char_ToString_m1712_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m3479_MethodInfo;
extern MethodInfo String_get_Length_m1669_MethodInfo;
extern MethodInfo String_IndexOfAny_m5035_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1882_MethodInfo;
extern MethodInfo Path_IsPathRooted_m7915_MethodInfo;
extern MethodInfo String_get_Chars_m1685_MethodInfo;
extern MethodInfo String_Concat_m1649_MethodInfo;
extern MethodInfo String_Concat_m1710_MethodInfo;
extern MethodInfo String__ctor_m3496_MethodInfo;
extern MethodInfo String_op_Equality_m58_MethodInfo;
extern MethodInfo Path_GetPathRoot_m7914_MethodInfo;
extern MethodInfo String_Trim_m3400_MethodInfo;
extern MethodInfo String_LastIndexOfAny_m6395_MethodInfo;
extern MethodInfo String_Substring_m1686_MethodInfo;
extern MethodInfo String_Concat_m1322_MethodInfo;
extern MethodInfo Path_CleanPath_m7907_MethodInfo;
extern MethodInfo String_Substring_m1714_MethodInfo;
extern MethodInfo Path_InsecureGetFullPath_m7912_MethodInfo;
extern MethodInfo Char_IsLetter_m1749_MethodInfo;
extern MethodInfo Directory_GetCurrentDirectory_m7788_MethodInfo;
extern MethodInfo Path_Combine_m5980_MethodInfo;
extern MethodInfo Locale_GetText_m6869_MethodInfo;
extern MethodInfo Environment_get_IsRunningOnWindows_m10046_MethodInfo;
extern MethodInfo Path_WindowsDriveAdjustment_m7911_MethodInfo;
extern MethodInfo Path_IsDsc_m7913_MethodInfo;
extern MethodInfo String_IndexOf_m3399_MethodInfo;
extern MethodInfo String_Replace_m3588_MethodInfo;
extern MethodInfo Path_CanonicalizePath_m7919_MethodInfo;
extern MethodInfo String_IndexOf_m3411_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m4816_MethodInfo;
extern MethodInfo Path_GetServerAndShare_m7917_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m3492_MethodInfo;
extern MethodInfo String_Compare_m4823_MethodInfo;
extern MethodInfo Char_Equals_m6344_MethodInfo;
extern MethodInfo String_Split_m3584_MethodInfo;
extern MethodInfo String_TrimEnd_m4859_MethodInfo;
extern MethodInfo String_Join_m6411_MethodInfo;
extern MethodInfo Path_SameRoot_m7918_MethodInfo;
extern MethodInfo String_EndsWith_m3585_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1862____$$fieldU2D30_20_FieldInfo;


// System.Void System.IO.Path::.cctor()
extern MethodInfo Path__cctor_m7906_MethodInfo;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" void Path__cctor_m7906 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path__cctor_m7906_init;
	if (!Path__cctor_m7906_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		Path__cctor_m7906_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1473_il2cpp_TypeInfo));
		uint16_t L_0 = MonoIO_get_VolumeSeparatorChar_m7902(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_VolumeSeparatorChar_m7902_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5 = L_0;
		uint16_t L_1 = MonoIO_get_DirectorySeparatorChar_m7903(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_DirectorySeparatorChar_m7903_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2 = L_1;
		uint16_t L_2 = MonoIO_get_AltDirectorySeparatorChar_m7904(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_AltDirectorySeparatorChar_m7904_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1 = L_2;
		uint16_t L_3 = MonoIO_get_PathSeparator_m7905(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_PathSeparator_m7905_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___PathSeparator_3 = L_3;
		CharU5BU5D_t197* L_4 = Path_GetInvalidPathChars_m7916(NULL /*static, unused*/, /*hidden argument*/&Path_GetInvalidPathChars_m7916_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0 = L_4;
		String_t* L_5 = Char_ToString_m1712((&((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&Char_ToString_m1712_MethodInfo);
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4 = L_5;
		CharU5BU5D_t197* L_6 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 3));
		uint16_t L_7 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		CharU5BU5D_t197* L_8 = L_6;
		uint16_t L_9 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		CharU5BU5D_t197* L_10 = L_8;
		uint16_t L_11 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6 = L_10;
		uint16_t L_12 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_13 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" String_t* Path_Combine_m5980 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		String_t* L_0 = ___path1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1612, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral1613, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		String_t* L_4 = ___path1;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1669(L_4, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ___path2;
		return L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___path2;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1669(L_7, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_9 = ___path1;
		return L_9;
	}

IL_0030:
	{
		String_t* L_10 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_11 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_10);
		int32_t L_12 = String_IndexOfAny_m5035(L_10, L_11, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t332 * L_13 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_13, (String_t*) &_stringLiteral1573, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		String_t* L_14 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_15 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_14);
		int32_t L_16 = String_IndexOfAny_m5035(L_14, L_15, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t332 * L_17 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_17, (String_t*) &_stringLiteral1573, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		String_t* L_18 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_19 = Path_IsPathRooted_m7915(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsPathRooted_m7915_MethodInfo);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_20 = ___path2;
		return L_20;
	}

IL_006c:
	{
		String_t* L_21 = ___path1;
		String_t* L_22 = ___path1;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1669(L_22, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_21);
		uint16_t L_24 = String_get_Chars_m1685(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_26 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_28 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_30 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_31 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_32 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_33 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m1649(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		return L_34;
	}

IL_00a0:
	{
		String_t* L_35 = ___path1;
		String_t* L_36 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m1710(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		return L_37;
	}
}
// System.String System.IO.Path::CleanPath(System.String)
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CleanPath_m7907 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method)
{
	static bool Path_CleanPath_m7907_init;
	if (!Path_CleanPath_m7907_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		Path_CleanPath_m7907_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	CharU5BU5D_t197* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1669(L_0, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		String_t* L_2 = ___s;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m1685(L_2, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_3 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		uint16_t L_5 = V_3;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___s;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m1685(L_6, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		V_2 = 2;
	}

IL_0029:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_10 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_12 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		String_t* L_13 = ___s;
		return L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_4 = L_14;
		goto IL_0097;
	}

IL_0044:
	{
		String_t* L_15 = ___s;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m1685(L_15, L_16, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_19 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_21 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0091;
	}

IL_0062:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22+(int32_t)1))) == ((uint32_t)L_23))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0091;
	}

IL_006f:
	{
		String_t* L_25 = ___s;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		uint16_t L_27 = String_get_Chars_m1685(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_29 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_31 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0091;
		}
	}

IL_008d:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_37 = ___s;
		return L_37;
	}

IL_00a1:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		V_6 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		CharU5BU5D_t197* L_41 = V_6;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		CharU5BU5D_t197* L_42 = V_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_42, 1)) = (uint16_t)((int32_t)92);
	}

IL_00ba:
	{
		int32_t L_43 = V_2;
		V_7 = L_43;
		int32_t L_44 = V_2;
		V_8 = L_44;
		goto IL_013d;
	}

IL_00c5:
	{
		String_t* L_45 = ___s;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m1685(L_45, L_46, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_49 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_51 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		CharU5BU5D_t197* L_52 = V_6;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		V_8 = ((int32_t)((int32_t)L_54+(int32_t)1));
		uint16_t L_55 = V_9;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_54);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_52, L_54)) = (uint16_t)L_55;
		goto IL_0137;
	}

IL_00ef:
	{
		int32_t L_56 = V_8;
		CharU5BU5D_t197* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		CharU5BU5D_t197* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_61 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_60);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		String_t* L_62 = ___s;
		int32_t L_63 = V_7;
		NullCheck(L_62);
		uint16_t L_64 = String_get_Chars_m1685(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_66 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_68 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_67) == ((int32_t)L_68)))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0137;
	}

IL_012a:
	{
		int32_t L_69 = V_7;
		V_7 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0130:
	{
		int32_t L_70 = V_7;
		int32_t L_71 = V_0;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)L_71-(int32_t)1)))))
		{
			goto IL_010a;
		}
	}

IL_0137:
	{
		int32_t L_72 = V_7;
		V_7 = ((int32_t)((int32_t)L_72+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_73 = V_7;
		int32_t L_74 = V_0;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_75 = V_8;
		CharU5BU5D_t197* L_76 = V_6;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((Array_t *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		CharU5BU5D_t197* L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_78 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_78 = String_CreateString_m3515(L_78, L_77, /*hidden argument*/&String__ctor_m3496_MethodInfo);
		return L_78;
	}
}
// System.String System.IO.Path::GetDirectoryName(System.String)
extern MethodInfo Path_GetDirectoryName_m7908_MethodInfo;
extern "C" String_t* Path_GetDirectoryName_m7908 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m58(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t332 * L_3 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_3, (String_t*) &_stringLiteral1614, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		String_t* L_4 = ___path;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_6 = Path_GetPathRoot_m7914(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_GetPathRoot_m7914_MethodInfo);
		String_t* L_7 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m58(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_8)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (String_t*)NULL;
	}

IL_002b:
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m3400(L_9, /*hidden argument*/&String_Trim_m3400_MethodInfo);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m1669(L_10, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_t332 * L_12 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_12, (String_t*) &_stringLiteral1615, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		String_t* L_13 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_14 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOfAny_m5035(L_13, L_14, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t332 * L_16 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_16, (String_t*) &_stringLiteral1515, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		String_t* L_17 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_18 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_17);
		int32_t L_19 = String_LastIndexOfAny_m6395(L_17, L_18, /*hidden argument*/&String_LastIndexOfAny_m6395_MethodInfo);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = ___path;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		String_t* L_25 = String_Substring_m1686(L_23, 0, L_24, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		V_1 = L_25;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m1669(L_26, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_29 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m1685(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_33 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_35 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m1322(NULL /*static, unused*/, L_34, L_37, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		return L_38;
	}

IL_00b1:
	{
		String_t* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_40 = Path_CleanPath_m7907(NULL /*static, unused*/, L_39, /*hidden argument*/&Path_CleanPath_m7907_MethodInfo);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_41;
	}
}
// System.String System.IO.Path::GetFileName(System.String)
extern MethodInfo Path_GetFileName_m7909_MethodInfo;
extern "C" String_t* Path_GetFileName_m7909 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1669(L_1, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		return L_3;
	}

IL_000d:
	{
		String_t* L_4 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_5 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_4);
		int32_t L_6 = String_IndexOfAny_m5035(L_4, L_5, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t332 * L_7 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_7, (String_t*) &_stringLiteral1573, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_9 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_8);
		int32_t L_10 = String_LastIndexOfAny_m6395(L_8, L_9, /*hidden argument*/&String_LastIndexOfAny_m6395_MethodInfo);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12 = ___path;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m1714(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), /*hidden argument*/&String_Substring_m1714_MethodInfo);
		return L_14;
	}

IL_0040:
	{
		String_t* L_15 = ___path;
		return L_15;
	}
}
// System.String System.IO.Path::GetFullPath(System.String)
extern MethodInfo Path_GetFullPath_m7910_MethodInfo;
extern "C" String_t* Path_GetFullPath_m7910 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_1 = Path_InsecureGetFullPath_m7912(NULL /*static, unused*/, L_0, /*hidden argument*/&Path_InsecureGetFullPath_m7912_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C" String_t* Path_WindowsDriveAdjustment_m7911 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1669(L_0, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m1685(L_3, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m1685(L_5, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo));
		bool L_7 = Char_IsLetter_m1749(NULL /*static, unused*/, L_6, /*hidden argument*/&Char_IsLetter_m1749_MethodInfo);
		if (L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		String_t* L_8 = ___path;
		return L_8;
	}

IL_0026:
	{
		String_t* L_9 = Directory_GetCurrentDirectory_m7788(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7788_MethodInfo);
		V_0 = L_9;
		String_t* L_10 = ___path;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m1669(L_10, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_12 = V_0;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m1685(L_12, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		String_t* L_14 = ___path;
		NullCheck(L_14);
		uint16_t L_15 = String_get_Chars_m1685(L_14, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_16 = V_0;
		___path = L_16;
		goto IL_005d;
	}

IL_004c:
	{
		String_t* L_17 = ___path;
		uint16_t L_18 = ((int32_t)92);
		Object_t * L_19 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m1322(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		___path = L_20;
	}

IL_005d:
	{
		goto IL_00cb;
	}

IL_005f:
	{
		String_t* L_21 = ___path;
		NullCheck(L_21);
		uint16_t L_22 = String_get_Chars_m1685(L_21, 2, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_23 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_24 = ___path;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m1685(L_24, 2, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_26 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_27 = V_0;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m1685(L_27, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m1685(L_29, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_31 = V_0;
		String_t* L_32 = ___path;
		String_t* L_33 = ___path;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m1669(L_33, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_32);
		String_t* L_35 = String_Substring_m1686(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_36 = Path_Combine_m5980(NULL /*static, unused*/, L_31, L_35, /*hidden argument*/&Path_Combine_m5980_MethodInfo);
		___path = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		String_t* L_37 = ___path;
		NullCheck(L_37);
		String_t* L_38 = String_Substring_m1686(L_37, 0, 2, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_39 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_40 = ___path;
		String_t* L_41 = ___path;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m1669(L_41, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_40);
		String_t* L_43 = String_Substring_m1686(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m1649(NULL /*static, unused*/, L_38, L_39, L_43, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		___path = L_44;
	}

IL_00cb:
	{
		String_t* L_45 = ___path;
		return L_45;
	}
}
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C" String_t* Path_InsecureGetFullPath_m7912 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1507, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		String_t* L_3 = String_Trim_m3400(L_2, /*hidden argument*/&String_Trim_m3400_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1669(L_3, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_5 = Locale_GetText_m6869(NULL /*static, unused*/, (String_t*) &_stringLiteral1616, /*hidden argument*/&Locale_GetText_m6869_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = V_0;
		ArgumentException_t332 * L_7 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_7, L_6, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_9 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_10 = Path_WindowsDriveAdjustment_m7911(NULL /*static, unused*/, L_9, /*hidden argument*/&Path_WindowsDriveAdjustment_m7911_MethodInfo);
		___path = L_10;
	}

IL_003e:
	{
		String_t* L_11 = ___path;
		String_t* L_12 = ___path;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1669(L_12, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_11);
		uint16_t L_14 = String_get_Chars_m1685(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_1 = L_14;
		String_t* L_15 = ___path;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m1669(L_15, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_17 = ___path;
		NullCheck(L_17);
		uint16_t L_18 = String_get_Chars_m1685(L_17, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_19 = Path_IsDsc_m7913(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m1685(L_20, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_22 = Path_IsDsc_m7913(NULL /*static, unused*/, L_21, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m1669(L_23, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_25 = ___path;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1685(L_26, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		NullCheck(L_25);
		int32_t L_28 = String_IndexOf_m3399(L_25, L_27, 2, /*hidden argument*/&String_IndexOf_m3399_MethodInfo);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		ArgumentException_t332 * L_29 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_29, (String_t*) &_stringLiteral1617, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		String_t* L_30 = ___path;
		NullCheck(L_30);
		uint16_t L_31 = String_get_Chars_m1685(L_30, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_32 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_34 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_35 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_33);
		String_t* L_36 = String_Replace_m3588(L_33, L_34, L_35, /*hidden argument*/&String_Replace_m3588_MethodInfo);
		___path = L_36;
	}

IL_00bc:
	{
		String_t* L_37 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_38 = Path_CanonicalizePath_m7919(NULL /*static, unused*/, L_37, /*hidden argument*/&Path_CanonicalizePath_m7919_MethodInfo);
		___path = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_40 = Path_IsPathRooted_m7915(NULL /*static, unused*/, L_39, /*hidden argument*/&Path_IsPathRooted_m7915_MethodInfo);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_41 = Directory_GetCurrentDirectory_m7788(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7788_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_42 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_43 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m1649(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		___path = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_45 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_46 = ___path;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m1669(L_46, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_48 = ___path;
		NullCheck(L_48);
		uint16_t L_49 = String_get_Chars_m1685(L_48, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_50 = Path_IsDsc_m7913(NULL /*static, unused*/, L_49, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_51 = ___path;
		NullCheck(L_51);
		uint16_t L_52 = String_get_Chars_m1685(L_51, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_53 = Path_IsDsc_m7913(NULL /*static, unused*/, L_52, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_54 = Directory_GetCurrentDirectory_m7788(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7788_MethodInfo);
		V_2 = L_54;
		String_t* L_55 = V_2;
		NullCheck(L_55);
		uint16_t L_56 = String_get_Chars_m1685(L_55, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_57 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_58 = V_2;
		NullCheck(L_58);
		String_t* L_59 = String_Substring_m1686(L_58, 0, 2, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		String_t* L_60 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = String_Concat_m1710(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		___path = L_61;
		goto IL_0162;
	}

IL_0142:
	{
		String_t* L_62 = V_2;
		String_t* L_63 = V_2;
		String_t* L_64 = V_2;
		NullCheck(L_64);
		int32_t L_65 = String_IndexOf_m3411(L_64, (String_t*) &_stringLiteral269, /*hidden argument*/&String_IndexOf_m3411_MethodInfo);
		NullCheck(L_63);
		int32_t L_66 = String_IndexOf_m3399(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), /*hidden argument*/&String_IndexOf_m3399_MethodInfo);
		NullCheck(L_62);
		String_t* L_67 = String_Substring_m1686(L_62, 0, L_66, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		___path = L_67;
	}

IL_0162:
	{
		String_t* L_68 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_69 = Path_CanonicalizePath_m7919(NULL /*static, unused*/, L_68, /*hidden argument*/&Path_CanonicalizePath_m7919_MethodInfo);
		___path = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_71 = Path_IsDsc_m7913(NULL /*static, unused*/, L_70, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_72 = ___path;
		String_t* L_73 = ___path;
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_m1669(L_73, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_72);
		uint16_t L_75 = String_get_Chars_m1685(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_76 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_77 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_78 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_79 = L_78;
		Object_t * L_80 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_79);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = String_Concat_m1322(NULL /*static, unused*/, L_77, L_80, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		___path = L_81;
	}

IL_019d:
	{
		String_t* L_82 = ___path;
		return L_82;
	}
}
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C" bool Path_IsDsc_m7913 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_1 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_3 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C" String_t* Path_GetPathRoot_m7914 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* G_B10_0 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		String_t* L_2 = String_Trim_m3400(L_1, /*hidden argument*/&String_Trim_m3400_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1669(L_2, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t332 * L_4 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_4, (String_t*) &_stringLiteral1618, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_6 = Path_IsPathRooted_m7915(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_IsPathRooted_m7915_MethodInfo);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_7;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_8 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		uint16_t L_10 = String_get_Chars_m1685(L_9, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_11 = Path_IsDsc_m7913(NULL /*static, unused*/, L_10, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_12 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		G_B10_0 = L_12;
		goto IL_004e;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B10_0 = L_13;
	}

IL_004e:
	{
		return G_B10_0;
	}

IL_004f:
	{
		V_0 = 2;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1669(L_14, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m1685(L_16, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_18 = Path_IsDsc_m7913(NULL /*static, unused*/, L_17, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_19 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		return L_19;
	}

IL_006e:
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1669(L_20, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_21) >= ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_22;
	}

IL_007d:
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		uint16_t L_24 = String_get_Chars_m1685(L_23, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_25 = Path_IsDsc_m7913(NULL /*static, unused*/, L_24, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1685(L_26, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_28 = Path_IsDsc_m7913(NULL /*static, unused*/, L_27, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_28)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00a5;
	}

IL_00a1:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_30 = V_0;
		String_t* L_31 = ___path;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1669(L_31, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		uint16_t L_35 = String_get_Chars_m1685(L_33, L_34, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_36 = Path_IsDsc_m7913(NULL /*static, unused*/, L_35, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		String_t* L_38 = ___path;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m1669(L_38, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_37) >= ((int32_t)L_39)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40+(int32_t)1));
		goto IL_00cf;
	}

IL_00cb:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_42 = V_0;
		String_t* L_43 = ___path;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m1669(L_43, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_45 = ___path;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m1685(L_45, L_46, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_48 = Path_IsDsc_m7913(NULL /*static, unused*/, L_47, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_49 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_50 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_51 = ___path;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m1686(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		uint16_t L_54 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_55 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_53);
		String_t* L_56 = String_Replace_m3588(L_53, L_54, L_55, /*hidden argument*/&String_Replace_m3588_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_57 = String_Concat_m1649(NULL /*static, unused*/, L_49, L_50, L_56, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		return L_57;
	}

IL_010f:
	{
		String_t* L_58 = ___path;
		NullCheck(L_58);
		uint16_t L_59 = String_get_Chars_m1685(L_58, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_60 = Path_IsDsc_m7913(NULL /*static, unused*/, L_59, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_61 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		return L_61;
	}

IL_0123:
	{
		String_t* L_62 = ___path;
		NullCheck(L_62);
		uint16_t L_63 = String_get_Chars_m1685(L_62, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_64 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		String_t* L_65 = ___path;
		NullCheck(L_65);
		int32_t L_66 = String_get_Length_m1669(L_65, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_67 = ___path;
		NullCheck(L_67);
		uint16_t L_68 = String_get_Chars_m1685(L_67, 2, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_69 = Path_IsDsc_m7913(NULL /*static, unused*/, L_68, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_69)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_014c:
	{
		goto IL_015b;
	}

IL_014e:
	{
		String_t* L_71 = Directory_GetCurrentDirectory_m7788(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7788_MethodInfo);
		NullCheck(L_71);
		String_t* L_72 = String_Substring_m1686(L_71, 0, 2, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		return L_72;
	}

IL_015b:
	{
		String_t* L_73 = ___path;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		String_t* L_75 = String_Substring_m1686(L_73, 0, L_74, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		return L_75;
	}
}
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C" bool Path_IsPathRooted_m7915 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1669(L_1, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_3 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_4 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m5035(L_3, L_4, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t332 * L_6 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_6, (String_t*) &_stringLiteral1573, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		String_t* L_7 = ___path;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m1685(L_7, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_10 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_12 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_13 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1669(L_14, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m1685(L_16, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_18 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		G_B11_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		G_B13_0 = G_B11_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B13_0 = 1;
	}

IL_0062:
	{
		return G_B13_0;
	}
}
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" CharU5BU5D_t197* Path_GetInvalidPathChars_m7916 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path_GetInvalidPathChars_m7916_init;
	if (!Path_GetInvalidPathChars_m7916_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		Path_GetInvalidPathChars_m7916_init = true;
	}
	{
		bool L_0 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t197* L_1 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, ((int32_t)36)));
		RuntimeHelpers_InitializeArray_m4816(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1862____$$fieldU2D30_20_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m4816_MethodInfo);
		return L_1;
	}

IL_001a:
	{
		return ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 1));
	}
}
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C" String_t* Path_GetServerAndShare_m7917 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1669(L_2, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ___path;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1685(L_4, L_5, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_7 = Path_IsDsc_m7913(NULL /*static, unused*/, L_6, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		String_t* L_9 = ___path;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m1669(L_9, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_13 = V_0;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1669(L_14, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_16 = ___path;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m1685(L_16, L_17, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_19 = Path_IsDsc_m7913(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		String_t* L_20 = ___path;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m1686(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_23 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_24 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_22);
		String_t* L_25 = String_Replace_m3588(L_22, L_23, L_24, /*hidden argument*/&String_Replace_m3588_MethodInfo);
		return L_25;
	}
}
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C" bool Path_SameRoot_m7918 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		String_t* L_0 = ___root;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1669(L_0, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1669(L_2, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		String_t* L_4 = ___root;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m1685(L_4, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_6 = Path_IsDsc_m7913(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_7 = ___root;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m1685(L_7, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_9 = Path_IsDsc_m7913(NULL /*static, unused*/, L_8, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_10 = ___path;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m1685(L_10, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_12 = Path_IsDsc_m7913(NULL /*static, unused*/, L_11, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = ___path;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m1685(L_13, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_15 = Path_IsDsc_m7913(NULL /*static, unused*/, L_14, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (L_15)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return 0;
	}

IL_004e:
	{
		String_t* L_16 = ___root;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_17 = Path_GetServerAndShare_m7917(NULL /*static, unused*/, L_16, /*hidden argument*/&Path_GetServerAndShare_m7917_MethodInfo);
		V_0 = L_17;
		String_t* L_18 = ___path;
		String_t* L_19 = Path_GetServerAndShare_m7917(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_GetServerAndShare_m7917_MethodInfo);
		V_1 = L_19;
		String_t* L_20 = V_0;
		String_t* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t714_il2cpp_TypeInfo));
		CultureInfo_t714 * L_22 = CultureInfo_get_InvariantCulture_m3492(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3492_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_23 = String_Compare_m4823(NULL /*static, unused*/, L_20, L_21, 1, L_22, /*hidden argument*/&String_Compare_m4823_MethodInfo);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		String_t* L_24 = ___root;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m1685(L_24, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		V_2 = L_25;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m1685(L_26, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		bool L_28 = Char_Equals_m6344((&V_2), L_27, /*hidden argument*/&Char_Equals_m6344_MethodInfo);
		if (L_28)
		{
			goto IL_0087;
		}
	}
	{
		return 0;
	}

IL_0087:
	{
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m1685(L_29, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_31 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		String_t* L_32 = ___root;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m1669(L_32, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_34 = ___path;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m1669(L_34, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_36 = ___root;
		NullCheck(L_36);
		uint16_t L_37 = String_get_Chars_m1685(L_36, 2, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_38 = Path_IsDsc_m7913(NULL /*static, unused*/, L_37, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_39 = ___path;
		NullCheck(L_39);
		uint16_t L_40 = String_get_Chars_m1685(L_39, 2, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_41 = Path_IsDsc_m7913(NULL /*static, unused*/, L_40, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		G_B18_0 = ((int32_t)(L_41));
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B18_0 = 0;
	}

IL_00c6:
	{
		return G_B18_0;
	}

IL_00c7:
	{
		return 1;
	}
}
// System.String System.IO.Path::CanonicalizePath(System.String)
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CanonicalizePath_m7919 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	static bool Path_CanonicalizePath_m7919_init;
	if (!Path_CanonicalizePath_m7919_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		Path_CanonicalizePath_m7919_init = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t433* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___path;
		return L_1;
	}

IL_0005:
	{
		bool L_2 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		String_t* L_4 = String_Trim_m3400(L_3, /*hidden argument*/&String_Trim_m3400_MethodInfo);
		___path = L_4;
	}

IL_0016:
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1669(L_5, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_7 = ___path;
		return L_7;
	}

IL_0020:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_9 = Path_GetPathRoot_m7914(NULL /*static, unused*/, L_8, /*hidden argument*/&Path_GetPathRoot_m7914_MethodInfo);
		V_0 = L_9;
		String_t* L_10 = ___path;
		CharU5BU5D_t197* L_11 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 2));
		uint16_t L_12 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		CharU5BU5D_t197* L_13 = L_11;
		uint16_t L_14 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		NullCheck(L_10);
		StringU5BU5D_t433* L_15 = String_Split_m3584(L_10, L_13, /*hidden argument*/&String_Split_m3584_MethodInfo);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m1669(L_17, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m1685(L_19, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_21 = Path_IsDsc_m7913(NULL /*static, unused*/, L_20, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_22 = V_0;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1685(L_22, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_24 = Path_IsDsc_m7913(NULL /*static, unused*/, L_23, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_3 = G_B11_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_007a;
		}
	}
	{
		G_B14_0 = 3;
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 0;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e9;
	}

IL_0082:
	{
		bool L_26 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t433* L_27 = V_1;
		int32_t L_28 = V_5;
		StringU5BU5D_t433* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)));
		String_t* L_32 = String_TrimEnd_m4859((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)), ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_TrimEnd_m4859_MethodInfo);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		ArrayElementTypeCheck (L_27, L_32);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, L_28)) = (String_t*)L_32;
	}

IL_009c:
	{
		StringU5BU5D_t433* L_33 = V_1;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_36 = String_op_Equality_m58(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35)), (String_t*) &_stringLiteral55, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (L_36)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t433* L_38 = V_1;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)));
		int32_t L_41 = String_get_Length_m1669((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)), /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_41)
		{
			goto IL_00bd;
		}
	}

IL_00bb:
	{
		goto IL_00e3;
	}

IL_00bd:
	{
		StringU5BU5D_t433* L_42 = V_1;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m58(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_42, L_44)), (String_t*) &_stringLiteral672, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_45)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48-(int32_t)1));
	}

IL_00d6:
	{
		goto IL_00e3;
	}

IL_00d8:
	{
		StringU5BU5D_t433* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
		StringU5BU5D_t433* L_52 = V_1;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		int32_t L_54 = L_53;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_51);
		ArrayElementTypeCheck (L_49, (*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54)));
		*((String_t**)(String_t**)SZArrayLdElema(L_49, L_51)) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54));
	}

IL_00e3:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_00e9:
	{
		int32_t L_56 = V_5;
		StringU5BU5D_t433* L_57 = V_1;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_58 = V_2;
		if (!L_58)
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		StringU5BU5D_t433* L_60 = V_1;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		int32_t L_61 = 0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_62 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_63 = String_op_Equality_m58(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_60, L_61)), L_62, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_63)
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		String_t* L_64 = V_0;
		return L_64;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_65 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		StringU5BU5D_t433* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_68 = String_Join_m6411(NULL /*static, unused*/, L_65, L_66, 0, L_67, /*hidden argument*/&String_Join_m6411_MethodInfo);
		V_6 = L_68;
		bool L_69 = Environment_get_IsRunningOnWindows_m10046(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m10046_MethodInfo);
		if (!L_69)
		{
			goto IL_022a;
		}
	}
	{
		bool L_70 = V_3;
		if (!L_70)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_71 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_73 = String_Concat_m1710(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		V_6 = L_73;
	}

IL_0132:
	{
		String_t* L_74 = V_0;
		String_t* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_76 = Path_SameRoot_m7918(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/&Path_SameRoot_m7918_MethodInfo);
		if (L_76)
		{
			goto IL_0146;
		}
	}
	{
		String_t* L_77 = V_0;
		String_t* L_78 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_79 = String_Concat_m1710(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		V_6 = L_79;
	}

IL_0146:
	{
		bool L_80 = V_3;
		if (!L_80)
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_81 = V_6;
		return L_81;
	}

IL_014c:
	{
		String_t* L_82 = ___path;
		NullCheck(L_82);
		uint16_t L_83 = String_get_Chars_m1685(L_82, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_84 = Path_IsDsc_m7913(NULL /*static, unused*/, L_83, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_85 = V_0;
		String_t* L_86 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_87 = Path_SameRoot_m7918(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/&Path_SameRoot_m7918_MethodInfo);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_88 = V_6;
		NullCheck(L_88);
		int32_t L_89 = String_get_Length_m1669(L_88, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		String_t* L_91 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		NullCheck(L_90);
		bool L_92 = String_EndsWith_m3585(L_90, L_91, /*hidden argument*/&String_EndsWith_m3585_MethodInfo);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_94 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_95 = L_94;
		Object_t * L_96 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_95);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m1322(NULL /*static, unused*/, L_93, L_96, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		V_6 = L_97;
	}

IL_018e:
	{
		String_t* L_98 = V_6;
		return L_98;
	}

IL_0191:
	{
		String_t* L_99 = Directory_GetCurrentDirectory_m7788(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m7788_MethodInfo);
		V_7 = L_99;
		String_t* L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = String_get_Length_m1669(L_100, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_102 = V_7;
		NullCheck(L_102);
		uint16_t L_103 = String_get_Chars_m1685(L_102, 1, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_104 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_105 = V_6;
		NullCheck(L_105);
		int32_t L_106 = String_get_Length_m1669(L_105, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_107 = V_6;
		NullCheck(L_107);
		uint16_t L_108 = String_get_Chars_m1685(L_107, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_109 = Path_IsDsc_m7913(NULL /*static, unused*/, L_108, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		String_t* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		Object_t * L_112 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_111);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_113 = String_Concat_m1322(NULL /*static, unused*/, L_110, L_112, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		V_6 = L_113;
	}

IL_01d9:
	{
		String_t* L_114 = V_7;
		NullCheck(L_114);
		String_t* L_115 = String_Substring_m1686(L_114, 0, 2, /*hidden argument*/&String_Substring_m1686_MethodInfo);
		String_t* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_117 = String_Concat_m1710(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		return L_117;
	}

IL_01ea:
	{
		String_t* L_118 = V_7;
		String_t* L_119 = V_7;
		NullCheck(L_119);
		int32_t L_120 = String_get_Length_m1669(L_119, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_118);
		uint16_t L_121 = String_get_Chars_m1685(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_122 = Path_IsDsc_m7913(NULL /*static, unused*/, L_121, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_123 = V_6;
		NullCheck(L_123);
		uint16_t L_124 = String_get_Chars_m1685(L_123, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		bool L_125 = Path_IsDsc_m7913(NULL /*static, unused*/, L_124, /*hidden argument*/&Path_IsDsc_m7913_MethodInfo);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_126 = V_7;
		String_t* L_127 = V_6;
		NullCheck(L_127);
		String_t* L_128 = String_Substring_m1714(L_127, 1, /*hidden argument*/&String_Substring_m1714_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_129 = String_Concat_m1710(NULL /*static, unused*/, L_126, L_128, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		return L_129;
	}

IL_0220:
	{
		String_t* L_130 = V_7;
		String_t* L_131 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_132 = String_Concat_m1710(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		return L_132;
	}

IL_022a:
	{
		String_t* L_133 = V_6;
		return L_133;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo IOException__ctor_m7868_MethodInfo;
extern MethodInfo IOException__ctor_m7869_MethodInfo;


// System.Void System.IO.PathTooLongException::.ctor()
extern MethodInfo PathTooLongException__ctor_m7920_MethodInfo;
extern "C" void PathTooLongException__ctor_m7920 (PathTooLongException_t1475 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6869(NULL /*static, unused*/, (String_t*) &_stringLiteral1619, /*hidden argument*/&Locale_GetText_m6869_MethodInfo);
		IOException__ctor_m7868(__this, L_0, /*hidden argument*/&IOException__ctor_m7868_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m7921 (PathTooLongException_t1475 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		IOException__ctor_m7868(__this, L_0, /*hidden argument*/&IOException__ctor_m7868_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo PathTooLongException__ctor_m7922_MethodInfo;
extern "C" void PathTooLongException__ctor_m7922 (PathTooLongException_t1475 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		StreamingContext_t666  L_1 = ___context;
		IOException__ctor_m7869(__this, L_0, L_1, /*hidden argument*/&IOException__ctor_m7869_MethodInfo);
		return;
	}
}
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPattern.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SearchPattern_t1476_il2cpp_TypeInfo;
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPatternMethodDeclarations.h"



// System.Void System.IO.SearchPattern::.cctor()
extern MethodInfo SearchPattern__cctor_m7923_MethodInfo;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" void SearchPattern__cctor_m7923 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SearchPattern__cctor_m7923_init;
	if (!SearchPattern__cctor_m7923_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		SearchPattern__cctor_m7923_init = true;
	}
	{
		CharU5BU5D_t197* L_0 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		CharU5BU5D_t197* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((SearchPattern_t1476_StaticFields*)InitializedTypeInfo(&SearchPattern_t1476_il2cpp_TypeInfo)->static_fields)->___WildcardChars_0 = L_1;
		CharU5BU5D_t197* L_2 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		uint16_t L_3 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		CharU5BU5D_t197* L_4 = L_2;
		uint16_t L_5 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((SearchPattern_t1476_StaticFields*)InitializedTypeInfo(&SearchPattern_t1476_il2cpp_TypeInfo)->static_fields)->___InvalidChars_1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SeekOrigin_t1301_il2cpp_TypeInfo;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOriginMethodDeclarations.h"



// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Stream_t1223_il2cpp_TypeInfo;
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"

// System.IO.NullStream
#include "mscorlib_System_IO_NullStream.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResult.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo NullStream_t1477_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t515_il2cpp_TypeInfo;
extern TypeInfo Byte_t335_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
extern TypeInfo StreamAsyncResult_t1478_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t189_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t188_il2cpp_TypeInfo;
extern TypeInfo Exception_t293_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1107_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IO.NullStream
#include "mscorlib_System_IO_NullStreamMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResultMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t515_0_0_0;
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo NullStream__ctor_m7925_MethodInfo;
extern MethodInfo Stream_Close_m5977_MethodInfo;
extern MethodInfo Stream_Dispose_m6057_MethodInfo;
extern MethodInfo Stream_Read_m6027_MethodInfo;
extern MethodInfo Stream_Write_m6011_MethodInfo;
extern MethodInfo Stream_get_CanRead_m6037_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4785_MethodInfo;
extern MethodInfo StreamAsyncResult__ctor_m7939_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m7941_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m6861_MethodInfo;
extern MethodInfo Stream_get_CanWrite_m6038_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m7940_MethodInfo;
extern MethodInfo AsyncCallback_BeginInvoke_m6014_MethodInfo;
extern MethodInfo StreamAsyncResult_get_NBytes_m7946_MethodInfo;
extern MethodInfo ArgumentException__ctor_m4770_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Done_m7947_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4764_MethodInfo;
extern MethodInfo StreamAsyncResult_set_Done_m7948_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Exception_m7945_MethodInfo;


// System.Void System.IO.Stream::.ctor()
extern MethodInfo Stream__ctor_m6040_MethodInfo;
extern "C" void Stream__ctor_m6040 (Stream_t1223 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.IO.Stream::.cctor()
extern MethodInfo Stream__cctor_m7924_MethodInfo;
extern "C" void Stream__cctor_m7924 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStream_t1477 * L_0 = (NullStream_t1477 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStream_t1477_il2cpp_TypeInfo));
		NullStream__ctor_m7925(L_0, /*hidden argument*/&NullStream__ctor_m7925_MethodInfo);
		((Stream_t1223_StaticFields*)InitializedTypeInfo(&Stream_t1223_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
extern MethodInfo Stream_Dispose_m6085_MethodInfo;
extern "C" void Stream_Dispose_m6085 (Stream_t1223 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&Stream_Close_m5977_MethodInfo, __this);
		return;
	}
}
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m6057 (Stream_t1223 * __this, bool ___disposing, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m5977 (Stream_t1223 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&Stream_Dispose_m6057_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
extern MethodInfo Stream_ReadByte_m6025_MethodInfo;
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" int32_t Stream_ReadByte_m6025 (Stream_t1223 * __this, MethodInfo* method)
{
	static bool Stream_ReadByte_m6025_init;
	if (!Stream_ReadByte_m6025_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		Stream_ReadByte_m6025_init = true;
	}
	ByteU5BU5D_t515* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t515* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Read_m6027_MethodInfo, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t515* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern MethodInfo Stream_WriteByte_m6003_MethodInfo;
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" void Stream_WriteByte_m6003 (Stream_t1223 * __this, uint8_t ___value, MethodInfo* method)
{
	static bool Stream_WriteByte_m6003_init;
	if (!Stream_WriteByte_m6003_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		Stream_WriteByte_m6003_init = true;
	}
	ByteU5BU5D_t515* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t515* L_0 = V_0;
		uint8_t L_1 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		ByteU5BU5D_t515* L_2 = V_0;
		VirtActionInvoker3< ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Write_m6011_MethodInfo, __this, L_2, 0, 1);
		return;
	}
}
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo Stream_BeginRead_m6017_MethodInfo;
extern "C" Object_t * Stream_BeginRead_m6017 (Stream_t1223 * __this, ByteU5BU5D_t515* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * V_2 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m6037_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t27 * L_1 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_1, (String_t*) &_stringLiteral1556, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1478 * L_3 = (StreamAsyncResult_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1478_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m7939(L_3, L_2, /*hidden argument*/&StreamAsyncResult__ctor_m7939_MethodInfo);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t515* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Read_m6027_MethodInfo, __this, L_4, L_5, L_6);
		V_1 = L_7;
		StreamAsyncResult_t1478 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m7941(L_8, (Exception_t293 *)NULL, L_9, /*hidden argument*/&StreamAsyncResult_SetComplete_m7941_MethodInfo);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t293 *)__exception_local);
		StreamAsyncResult_t1478 * L_10 = V_0;
		Exception_t293 * L_11 = V_2;
		NullCheck(L_10);
		StreamAsyncResult_SetComplete_m7941(L_10, L_11, 0, /*hidden argument*/&StreamAsyncResult_SetComplete_m7941_MethodInfo);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		AsyncCallback_t189 * L_12 = ___callback;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t189 * L_13 = ___callback;
		StreamAsyncResult_t1478 * L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m6861_MethodInfo, L_13, L_14);
	}

IL_0046:
	{
		StreamAsyncResult_t1478 * L_15 = V_0;
		return L_15;
	}
}
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo Stream_BeginWrite_m6028_MethodInfo;
extern "C" Object_t * Stream_BeginWrite_m6028 (Stream_t1223 * __this, ByteU5BU5D_t515* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	Exception_t293 * V_1 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m6038_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t27 * L_1 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_1, (String_t*) &_stringLiteral1562, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1478 * L_3 = (StreamAsyncResult_t1478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1478_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m7939(L_3, L_2, /*hidden argument*/&StreamAsyncResult__ctor_m7939_MethodInfo);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t515* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		VirtActionInvoker3< ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Write_m6011_MethodInfo, __this, L_4, L_5, L_6);
		StreamAsyncResult_t1478 * L_7 = V_0;
		NullCheck(L_7);
		StreamAsyncResult_SetComplete_m7940(L_7, (Exception_t293 *)NULL, /*hidden argument*/&StreamAsyncResult_SetComplete_m7940_MethodInfo);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t293 *)__exception_local);
		StreamAsyncResult_t1478 * L_8 = V_0;
		Exception_t293 * L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m7940(L_8, L_9, /*hidden argument*/&StreamAsyncResult_SetComplete_m7940_MethodInfo);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		AsyncCallback_t189 * L_10 = ___callback;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t189 * L_11 = ___callback;
		StreamAsyncResult_t1478 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t189 *, Object_t * >::Invoke(&AsyncCallback_BeginInvoke_m6014_MethodInfo, L_11, L_12, (AsyncCallback_t189 *)NULL, NULL);
	}

IL_0046:
	{
		StreamAsyncResult_t1478 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern MethodInfo Stream_EndRead_m6019_MethodInfo;
extern "C" int32_t Stream_EndRead_m6019 (Stream_t1223 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1560, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1478 *)IsInst(L_2, InitializedTypeInfo(&StreamAsyncResult_t1478_il2cpp_TypeInfo)));
		StreamAsyncResult_t1478 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1478 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m7946(L_4, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7946_MethodInfo);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t332 * L_6 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_6, (String_t*) &_stringLiteral1561, (String_t*) &_stringLiteral1560, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1478 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m7947(L_7, /*hidden argument*/&StreamAsyncResult_get_Done_m7947_MethodInfo);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t1107 * L_9 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_9, (String_t*) &_stringLiteral1620, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1478 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m7948(L_10, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m7948_MethodInfo);
		StreamAsyncResult_t1478 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t293 * L_12 = StreamAsyncResult_get_Exception_m7945(L_11, /*hidden argument*/&StreamAsyncResult_get_Exception_m7945_MethodInfo);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1478 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t293 * L_14 = StreamAsyncResult_get_Exception_m7945(L_13, /*hidden argument*/&StreamAsyncResult_get_Exception_m7945_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		StreamAsyncResult_t1478 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = StreamAsyncResult_get_NBytes_m7946(L_15, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7946_MethodInfo);
		return L_16;
	}
}
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern MethodInfo Stream_EndWrite_m6029_MethodInfo;
extern "C" void Stream_EndWrite_m6029 (Stream_t1223 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1560, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1478 *)IsInst(L_2, InitializedTypeInfo(&StreamAsyncResult_t1478_il2cpp_TypeInfo)));
		StreamAsyncResult_t1478 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1478 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m7946(L_4, /*hidden argument*/&StreamAsyncResult_get_NBytes_m7946_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t332 * L_6 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_6, (String_t*) &_stringLiteral1561, (String_t*) &_stringLiteral1560, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1478 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m7947(L_7, /*hidden argument*/&StreamAsyncResult_get_Done_m7947_MethodInfo);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t1107 * L_9 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_9, (String_t*) &_stringLiteral1621, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1478 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m7948(L_10, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m7948_MethodInfo);
		StreamAsyncResult_t1478 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t293 * L_12 = StreamAsyncResult_get_Exception_m7945(L_11, /*hidden argument*/&StreamAsyncResult_get_Exception_m7945_MethodInfo);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1478 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t293 * L_14 = StreamAsyncResult_get_Exception_m7945(L_13, /*hidden argument*/&StreamAsyncResult_get_Exception_m7945_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.NullStream::.ctor()
extern "C" void NullStream__ctor_m7925 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		Stream__ctor_m6040(__this, /*hidden argument*/&Stream__ctor_m6040_MethodInfo);
		return;
	}
}
// System.Boolean System.IO.NullStream::get_CanRead()
extern MethodInfo NullStream_get_CanRead_m7926_MethodInfo;
extern "C" bool NullStream_get_CanRead_m7926 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanSeek()
extern MethodInfo NullStream_get_CanSeek_m7927_MethodInfo;
extern "C" bool NullStream_get_CanSeek_m7927 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanWrite()
extern MethodInfo NullStream_get_CanWrite_m7928_MethodInfo;
extern "C" bool NullStream_get_CanWrite_m7928 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int64 System.IO.NullStream::get_Length()
extern MethodInfo NullStream_get_Length_m7929_MethodInfo;
extern "C" int64_t NullStream_get_Length_m7929 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Int64 System.IO.NullStream::get_Position()
extern MethodInfo NullStream_get_Position_m7930_MethodInfo;
extern "C" int64_t NullStream_get_Position_m7930 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern MethodInfo NullStream_set_Position_m7931_MethodInfo;
extern "C" void NullStream_set_Position_m7931 (NullStream_t1477 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Flush()
extern MethodInfo NullStream_Flush_m7932_MethodInfo;
extern "C" void NullStream_Flush_m7932 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Read_m7933_MethodInfo;
extern "C" int32_t NullStream_Read_m7933 (NullStream_t1477 * __this, ByteU5BU5D_t515* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 System.IO.NullStream::ReadByte()
extern MethodInfo NullStream_ReadByte_m7934_MethodInfo;
extern "C" int32_t NullStream_ReadByte_m7934 (NullStream_t1477 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern MethodInfo NullStream_Seek_m7935_MethodInfo;
extern "C" int64_t NullStream_Seek_m7935 (NullStream_t1477 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern MethodInfo NullStream_SetLength_m7936_MethodInfo;
extern "C" void NullStream_SetLength_m7936 (NullStream_t1477 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Write_m7937_MethodInfo;
extern "C" void NullStream_Write_m7937 (NullStream_t1477 * __this, ByteU5BU5D_t515* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern MethodInfo NullStream_WriteByte_m7938_MethodInfo;
extern "C" void NullStream_WriteByte_m7938 (NullStream_t1477 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
extern TypeInfo ManualResetEvent_t1238_il2cpp_TypeInfo;
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
extern MethodInfo Monitor_Enter_m4797_MethodInfo;
extern MethodInfo ManualResetEvent__ctor_m6012_MethodInfo;
extern MethodInfo Monitor_Exit_m4798_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m6013_MethodInfo;


// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m7939 (StreamAsyncResult_t1478 * __this, Object_t * ___state, MethodInfo* method)
{
	{
		__this->___nbytes_4 = (-1);
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Object_t * L_0 = ___state;
		__this->___state_0 = L_0;
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m7940 (StreamAsyncResult_t1478 * __this, Exception_t293 * ___e, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Exception_t293 * L_0 = ___e;
		__this->___exc_3 = L_0;
		__this->___completed_1 = 1;
		V_0 = __this;
		StreamAsyncResult_t1478 * L_1 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1238 * L_2 = (__this->___wh_5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			ManualResetEvent_t1238 * L_3 = (__this->___wh_5);
			NullCheck(L_3);
			EventWaitHandle_Set_m6013(L_3, /*hidden argument*/&EventWaitHandle_Set_m6013_MethodInfo);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1478 * L_4 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m7941 (StreamAsyncResult_t1478 * __this, Exception_t293 * ___e, int32_t ___nbytes, MethodInfo* method)
{
	{
		int32_t L_0 = ___nbytes;
		__this->___nbytes_4 = L_0;
		Exception_t293 * L_1 = ___e;
		StreamAsyncResult_SetComplete_m7940(__this, L_1, /*hidden argument*/&StreamAsyncResult_SetComplete_m7940_MethodInfo);
		return;
	}
}
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern MethodInfo StreamAsyncResult_get_AsyncState_m7942_MethodInfo;
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m7942 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern MethodInfo StreamAsyncResult_get_AsyncWaitHandle_m7943_MethodInfo;
extern "C" WaitHandle_t1240 * StreamAsyncResult_get_AsyncWaitHandle_m7943 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	StreamAsyncResult_t1478 * V_0 = {0};
	WaitHandle_t1240 * V_1 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		StreamAsyncResult_t1478 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1238 * L_1 = (__this->___wh_5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_1);
			ManualResetEvent_t1238 * L_3 = (ManualResetEvent_t1238 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1238_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m6012(L_3, L_2, /*hidden argument*/&ManualResetEvent__ctor_m6012_MethodInfo);
			__this->___wh_5 = L_3;
		}

IL_0021:
		{
			ManualResetEvent_t1238 * L_4 = (__this->___wh_5);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1478 * L_5 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_0033:
	{
		WaitHandle_t1240 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern MethodInfo StreamAsyncResult_get_IsCompleted_m7944_MethodInfo;
extern "C" bool StreamAsyncResult_get_IsCompleted_m7944 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_1);
		return L_0;
	}
}
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t293 * StreamAsyncResult_get_Exception_m7945 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = (__this->___exc_3);
		return L_0;
	}
}
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m7946 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nbytes_4);
		return L_0;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m7947 (StreamAsyncResult_t1478 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___done_2);
		return L_0;
	}
}
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m7948 (StreamAsyncResult_t1478 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___done_2 = L_0;
		return;
	}
}
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullStreamReader_t1479_il2cpp_TypeInfo;
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReaderMethodDeclarations.h"

// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
extern MethodInfo StreamReader__ctor_m7955_MethodInfo;


// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern MethodInfo NullStreamReader__ctor_m7949_MethodInfo;
extern "C" void NullStreamReader__ctor_m7949 (NullStreamReader_t1479 * __this, MethodInfo* method)
{
	{
		StreamReader__ctor_m7955(__this, /*hidden argument*/&StreamReader__ctor_m7955_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern MethodInfo NullStreamReader_Peek_m7950_MethodInfo;
extern "C" int32_t NullStreamReader_Peek_m7950 (NullStreamReader_t1479 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern MethodInfo NullStreamReader_Read_m7951_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m7951 (NullStreamReader_t1479 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullStreamReader_Read_m7952_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m7952 (NullStreamReader_t1479 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern MethodInfo NullStreamReader_ReadLine_m7953_MethodInfo;
extern "C" String_t* NullStreamReader_ReadLine_m7953 (NullStreamReader_t1479 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern MethodInfo NullStreamReader_ReadToEnd_m7954_MethodInfo;
extern "C" String_t* NullStreamReader_ReadToEnd_m7954 (NullStreamReader_t1479 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StreamReader_t1462_il2cpp_TypeInfo;

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
extern TypeInfo Encoding_t514_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t715_il2cpp_TypeInfo;
extern TypeInfo Decoder_t1454_il2cpp_TypeInfo;
extern TypeInfo TextReader_t1408_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1283_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t284_il2cpp_TypeInfo;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo TextReader__ctor_m7996_MethodInfo;
extern MethodInfo StreamReader__ctor_m7957_MethodInfo;
extern MethodInfo StreamReader_Initialize_m7961_MethodInfo;
extern MethodInfo Encoding_get_UTF8Unmarked_m9445_MethodInfo;
extern MethodInfo StreamReader__ctor_m7959_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m3495_MethodInfo;
extern MethodInfo File_OpenRead_m5974_MethodInfo;
extern MethodInfo Encoding_GetDecoder_m9437_MethodInfo;
extern MethodInfo Encoding_GetPreamble_m9441_MethodInfo;
extern MethodInfo Encoding_GetMaxCharCount_m10504_MethodInfo;
extern MethodInfo TextReader_Dispose_m7999_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUnicode_m5947_MethodInfo;
extern MethodInfo Encoding_get_Unicode_m9447_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUTF32_m9449_MethodInfo;
extern MethodInfo Encoding_get_UTF32_m9448_MethodInfo;
extern MethodInfo StreamReader_DoChecks_m7963_MethodInfo;
extern MethodInfo Decoder_GetChars_m10503_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10284_MethodInfo;
extern MethodInfo StreamReader_ReadBuffer_m7964_MethodInfo;
extern MethodInfo Math_Min_m10085_MethodInfo;
extern MethodInfo Array_Copy_m6742_MethodInfo;
extern MethodInfo StreamReader_FindNextEOL_m7968_MethodInfo;
extern MethodInfo String__ctor_m3491_MethodInfo;
extern MethodInfo StringBuilder_get_Length_m4938_MethodInfo;
extern MethodInfo StringBuilder_ToString_m9475_MethodInfo;
extern MethodInfo StringBuilder__ctor_m1321_MethodInfo;
extern MethodInfo StringBuilder_set_Length_m5044_MethodInfo;
extern MethodInfo StringBuilder_Append_m9480_MethodInfo;
extern MethodInfo StringBuilder_get_Capacity_m9471_MethodInfo;
extern MethodInfo StreamReader_Read_m7967_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1325_MethodInfo;


// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m7955 (StreamReader_t1462 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamReader__ctor_m7956_MethodInfo;
extern "C" void StreamReader__ctor_m7956 (StreamReader_t1462 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1223 * L_0 = ___stream;
		Encoding_t514 * L_1 = ___encoding;
		StreamReader__ctor_m7957(__this, L_0, L_1, 1, ((int32_t)1024), /*hidden argument*/&StreamReader__ctor_m7957_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m7957 (StreamReader_t1462 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		Stream_t1223 * L_0 = ___stream;
		Encoding_t514 * L_1 = ___encoding;
		bool L_2 = ___detectEncodingFromByteOrderMarks;
		int32_t L_3 = ___bufferSize;
		StreamReader_Initialize_m7961(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&StreamReader_Initialize_m7961_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String)
extern MethodInfo StreamReader__ctor_m7958_MethodInfo;
extern "C" void StreamReader__ctor_m7958 (StreamReader_t1462 * __this, String_t* ___path, MethodInfo* method)
{
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_1 = Encoding_get_UTF8Unmarked_m9445(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9445_MethodInfo);
		StreamReader__ctor_m7959(__this, L_0, L_1, 1, ((int32_t)4096), /*hidden argument*/&StreamReader__ctor_m7959_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m7959 (StreamReader_t1462 * __this, String_t* ___path, Encoding_t514 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	Stream_t1223 * V_0 = {0};
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1507, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_3 = ___path;
		bool L_4 = String_op_Equality_m58(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t332 * L_5 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_5, (String_t*) &_stringLiteral1622, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		String_t* L_6 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo));
		CharU5BU5D_t197* L_7 = ((Path_t1133_StaticFields*)InitializedTypeInfo(&Path_t1133_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m5035(L_6, L_7, /*hidden argument*/&String_IndexOfAny_m5035_MethodInfo);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t332 * L_9 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_9, (String_t*) &_stringLiteral1623, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		Encoding_t514 * L_10 = ___encoding;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentNullException_t711 * L_11 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_11, (String_t*) &_stringLiteral1624, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0053:
	{
		int32_t L_12 = ___bufferSize;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_13 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_13, (String_t*) &_stringLiteral1541, (String_t*) &_stringLiteral1625, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		String_t* L_14 = ___path;
		FileStream_t1291 * L_15 = File_OpenRead_m5974(NULL /*static, unused*/, L_14, /*hidden argument*/&File_OpenRead_m5974_MethodInfo);
		V_0 = L_15;
		Stream_t1223 * L_16 = V_0;
		Encoding_t514 * L_17 = ___encoding;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		int32_t L_19 = ___bufferSize;
		StreamReader_Initialize_m7961(__this, L_16, L_17, L_18, L_19, /*hidden argument*/&StreamReader_Initialize_m7961_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.cctor()
extern MethodInfo StreamReader__cctor_m7960_MethodInfo;
extern "C" void StreamReader__cctor_m7960 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStreamReader_t1479 * L_0 = (NullStreamReader_t1479 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStreamReader_t1479_il2cpp_TypeInfo));
		NullStreamReader__ctor_m7949(L_0, /*hidden argument*/&NullStreamReader__ctor_m7949_MethodInfo);
		((StreamReader_t1462_StaticFields*)InitializedTypeInfo(&StreamReader_t1462_il2cpp_TypeInfo)->static_fields)->___Null_12 = L_0;
		return;
	}
}
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" void StreamReader_Initialize_m7961 (StreamReader_t1462 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamReader_Initialize_m7961_init;
	if (!StreamReader_Initialize_m7961_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		StreamReader_Initialize_m7961_init = true;
	}
	ByteU5BU5D_t515* V_0 = {0};
	StreamReader_t1462 * G_B12_0 = {0};
	StreamReader_t1462 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	StreamReader_t1462 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	StreamReader_t1462 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	StreamReader_t1462 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	StreamReader_t1462 * G_B16_2 = {0};
	{
		Stream_t1223 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1626, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Encoding_t514 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral1624, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Stream_t1223 * L_4 = ___stream;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m6037_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t332 * L_6 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_6, (String_t*) &_stringLiteral1627, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int32_t L_7 = ___bufferSize;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_8 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_8, (String_t*) &_stringLiteral1541, (String_t*) &_stringLiteral1625, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		int32_t L_9 = ___bufferSize;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		___bufferSize = ((int32_t)128);
	}

IL_0056:
	{
		Stream_t1223 * L_10 = ___stream;
		__this->___base_stream_9 = L_10;
		int32_t L_11 = ___bufferSize;
		__this->___input_buffer_1 = ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, L_11));
		int32_t L_12 = ___bufferSize;
		__this->___buffer_size_5 = L_12;
		Encoding_t514 * L_13 = ___encoding;
		__this->___encoding_7 = L_13;
		Encoding_t514 * L_14 = ___encoding;
		NullCheck(L_14);
		Decoder_t1454 * L_15 = (Decoder_t1454 *)VirtFuncInvoker0< Decoder_t1454 * >::Invoke(&Encoding_GetDecoder_m9437_MethodInfo, L_14);
		__this->___decoder_8 = L_15;
		Encoding_t514 * L_16 = ___encoding;
		NullCheck(L_16);
		ByteU5BU5D_t515* L_17 = (ByteU5BU5D_t515*)VirtFuncInvoker0< ByteU5BU5D_t515* >::Invoke(&Encoding_GetPreamble_m9441_MethodInfo, L_16);
		V_0 = L_17;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		G_B11_0 = __this;
		if (!L_18)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 1;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		NullCheck(G_B13_1);
		G_B13_1->___do_checks_6 = G_B13_0;
		int32_t L_19 = (__this->___do_checks_6);
		ByteU5BU5D_t515* L_20 = V_0;
		NullCheck(L_20);
		G_B14_0 = L_19;
		G_B14_1 = __this;
		if ((((int32_t)(((Array_t *)L_20)->max_length))))
		{
			G_B15_0 = L_19;
			G_B15_1 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00a9:
	{
		NullCheck(G_B16_2);
		G_B16_2->___do_checks_6 = ((int32_t)((int32_t)G_B16_1+(int32_t)G_B16_0));
		Encoding_t514 * L_21 = ___encoding;
		int32_t L_22 = ___bufferSize;
		NullCheck(L_21);
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10504_MethodInfo, L_21, L_22);
		__this->___decoded_buffer_2 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->___decoded_count_3 = 0;
		__this->___pos_4 = 0;
		return;
	}
}
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern MethodInfo StreamReader_Dispose_m7962_MethodInfo;
extern "C" void StreamReader_Dispose_m7962 (StreamReader_t1462 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1223 * L_1 = (__this->___base_stream_9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1223 * L_2 = (__this->___base_stream_9);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&Stream_Close_m5977_MethodInfo, L_2);
	}

IL_0016:
	{
		__this->___input_buffer_1 = (ByteU5BU5D_t515*)NULL;
		__this->___decoded_buffer_2 = (CharU5BU5D_t197*)NULL;
		__this->___encoding_7 = (Encoding_t514 *)NULL;
		__this->___decoder_8 = (Decoder_t1454 *)NULL;
		__this->___base_stream_9 = (Stream_t1223 *)NULL;
		bool L_3 = ___disposing;
		TextReader_Dispose_m7999(__this, L_3, /*hidden argument*/&TextReader_Dispose_m7999_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m7963 (StreamReader_t1462 * __this, int32_t ___count, MethodInfo* method)
{
	ByteU5BU5D_t515* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t514 * L_1 = (__this->___encoding_7);
		NullCheck(L_1);
		ByteU5BU5D_t515* L_2 = (ByteU5BU5D_t515*)VirtFuncInvoker0< ByteU5BU5D_t515* >::Invoke(&Encoding_GetPreamble_m9441_MethodInfo, L_1);
		V_0 = L_2;
		ByteU5BU5D_t515* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = ___count;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		ByteU5BU5D_t515* L_6 = (__this->___input_buffer_1);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t515* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11)))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}

IL_003a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_17 = V_2;
		return L_17;
	}

IL_0040:
	{
		int32_t L_18 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_19 = ___count;
		if ((((int32_t)L_19) >= ((int32_t)2)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		ByteU5BU5D_t515* L_20 = (__this->___input_buffer_1);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t515* L_22 = (__this->___input_buffer_1);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_24 = Encoding_get_BigEndianUnicode_m5947(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUnicode_m5947_MethodInfo);
		__this->___encoding_7 = L_24;
		return 2;
	}

IL_007f:
	{
		int32_t L_25 = ___count;
		if ((((int32_t)L_25) >= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		ByteU5BU5D_t515* L_26 = (__this->___input_buffer_1);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t515* L_28 = (__this->___input_buffer_1);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t515* L_30 = (__this->___input_buffer_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_32 = Encoding_get_UTF8Unmarked_m9445(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9445_MethodInfo);
		__this->___encoding_7 = L_32;
		return 3;
	}

IL_00bf:
	{
		int32_t L_33 = ___count;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_00fa;
		}
	}
	{
		ByteU5BU5D_t515* L_34 = (__this->___input_buffer_1);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t515* L_36 = (__this->___input_buffer_1);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t515* L_38 = (__this->___input_buffer_1);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_40 = Encoding_get_Unicode_m9447(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m9447_MethodInfo);
		__this->___encoding_7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		ByteU5BU5D_t515* L_41 = (__this->___input_buffer_1);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t515* L_43 = (__this->___input_buffer_1);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t515* L_45 = (__this->___input_buffer_1);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t515* L_47 = (__this->___input_buffer_1);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_49 = Encoding_get_BigEndianUTF32_m9449(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUTF32_m9449_MethodInfo);
		__this->___encoding_7 = L_49;
		return 4;
	}

IL_0139:
	{
		ByteU5BU5D_t515* L_50 = (__this->___input_buffer_1);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t515* L_52 = (__this->___input_buffer_1);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t515* L_54 = (__this->___input_buffer_1);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 2);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		ByteU5BU5D_t515* L_56 = (__this->___input_buffer_1);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 3);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_58 = Encoding_get_UTF32_m9448(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF32_m9448_MethodInfo);
		__this->___encoding_7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_59 = Encoding_get_Unicode_m9447(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m9447_MethodInfo);
		__this->___encoding_7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_ReadBuffer_m7964 (StreamReader_t1462 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadBuffer_m7964_init;
	if (!StreamReader_ReadBuffer_m7964_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		StreamReader_ReadBuffer_m7964_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Encoding_t514 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__this->___pos_4 = 0;
		V_0 = 0;
		__this->___decoded_count_3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		ByteU5BU5D_t515* L_1 = (__this->___input_buffer_1);
		int32_t L_2 = (__this->___buffer_size_5);
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Read_m6027_MethodInfo, L_0, L_1, 0, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___buffer_size_5);
		__this->___mayBlock_10 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		int32_t L_7 = (__this->___do_checks_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t514 * L_8 = (__this->___encoding_7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = StreamReader_DoChecks_m7963(__this, L_9, /*hidden argument*/&StreamReader_DoChecks_m7963_MethodInfo);
		V_1 = L_10;
		Encoding_t514 * L_11 = V_2;
		Encoding_t514 * L_12 = (__this->___encoding_7);
		if ((((Object_t*)(Encoding_t514 *)L_11) == ((Object_t*)(Encoding_t514 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		Encoding_t514 * L_13 = V_2;
		int32_t L_14 = (__this->___buffer_size_5);
		NullCheck(L_13);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10504_MethodInfo, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		Encoding_t514 * L_16 = (__this->___encoding_7);
		int32_t L_17 = (__this->___buffer_size_5);
		NullCheck(L_16);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m10504_MethodInfo, L_16, L_17);
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_4;
		__this->___decoded_buffer_2 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, L_21));
	}

IL_0097:
	{
		Encoding_t514 * L_22 = (__this->___encoding_7);
		NullCheck(L_22);
		Decoder_t1454 * L_23 = (Decoder_t1454 *)VirtFuncInvoker0< Decoder_t1454 * >::Invoke(&Encoding_GetDecoder_m9437_MethodInfo, L_22);
		__this->___decoder_8 = L_23;
	}

IL_00a8:
	{
		__this->___do_checks_6 = 0;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
	}

IL_00b3:
	{
		int32_t L_26 = (__this->___decoded_count_3);
		Decoder_t1454 * L_27 = (__this->___decoder_8);
		ByteU5BU5D_t515* L_28 = (__this->___input_buffer_1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		CharU5BU5D_t197* L_31 = (__this->___decoded_buffer_2);
		NullCheck(L_27);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t515*, int32_t, int32_t, CharU5BU5D_t197*, int32_t >::Invoke(&Decoder_GetChars_m10503_MethodInfo, L_27, L_28, L_29, L_30, L_31, 0);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_26+(int32_t)L_32));
		V_1 = 0;
		int32_t L_33 = (__this->___decoded_count_3);
		if (!L_33)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_34 = (__this->___decoded_count_3);
		return L_34;
	}
}
// System.Int32 System.IO.StreamReader::Peek()
extern MethodInfo StreamReader_Peek_m7965_MethodInfo;
extern "C" int32_t StreamReader_Peek_m7965 (StreamReader_t1462 * __this, MethodInfo* method)
{
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_1, (String_t*) &_stringLiteral1628, (String_t*) &_stringLiteral1629, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7964(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7964_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t197* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
// System.Int32 System.IO.StreamReader::Read()
extern MethodInfo StreamReader_Read_m7966_MethodInfo;
extern "C" int32_t StreamReader_Read_m7966 (StreamReader_t1462 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_1, (String_t*) &_stringLiteral1628, (String_t*) &_stringLiteral1629, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7964(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7964_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t197* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___pos_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m7967 (StreamReader_t1462 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_1, (String_t*) &_stringLiteral1628, (String_t*) &_stringLiteral1629, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		CharU5BU5D_t197* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral985, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_5 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_5, (String_t*) &_stringLiteral345, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_7 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_7, (String_t*) &_stringLiteral427, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t197* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t332 * L_11 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_11, (String_t*) &_stringLiteral1630, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0061:
	{
		V_0 = 0;
		goto IL_00d9;
	}

IL_0068:
	{
		int32_t L_12 = (__this->___pos_4);
		int32_t L_13 = (__this->___decoded_count_3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = StreamReader_ReadBuffer_m7964(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7964_MethodInfo);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_16 = V_0;
		G_B16_0 = L_16;
		goto IL_0086;
	}

IL_0085:
	{
		G_B16_0 = 0;
	}

IL_0086:
	{
		return G_B16_0;
	}

IL_0087:
	{
		int32_t L_17 = (__this->___decoded_count_3);
		int32_t L_18 = (__this->___pos_4);
		int32_t L_19 = ___count;
		int32_t L_20 = Math_Min_m10085(NULL /*static, unused*/, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, /*hidden argument*/&Math_Min_m10085_MethodInfo);
		V_1 = L_20;
		CharU5BU5D_t197* L_21 = (__this->___decoded_buffer_2);
		int32_t L_22 = (__this->___pos_4);
		CharU5BU5D_t197* L_23 = ___buffer;
		int32_t L_24 = ___index;
		int32_t L_25 = V_1;
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		int32_t L_26 = (__this->___pos_4);
		int32_t L_27 = V_1;
		__this->___pos_4 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = ___index;
		int32_t L_29 = V_1;
		___index = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		int32_t L_30 = ___count;
		int32_t L_31 = V_1;
		___count = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
		bool L_34 = (__this->___mayBlock_10);
		if (!L_34)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d9:
	{
		int32_t L_35 = ___count;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_00dd:
	{
		int32_t L_36 = V_0;
		return L_36;
	}
}
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m7968 (StreamReader_t1462 * __this, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		CharU5BU5D_t197* L_0 = (__this->___decoded_buffer_2);
		int32_t L_1 = (__this->___pos_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_4+(int32_t)1));
		bool L_5 = (__this->___foundCR_13);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)2));
		goto IL_0042;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0042:
	{
		V_1 = G_B5_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
	}

IL_0049:
	{
		__this->___foundCR_13 = 0;
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0052:
	{
		bool L_10 = (__this->___foundCR_13);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		__this->___foundCR_13 = 0;
		int32_t L_11 = (__this->___pos_4);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_006c:
	{
		int32_t L_12 = (__this->___pos_4);
		return ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0075:
	{
		uint16_t L_13 = V_0;
		__this->___foundCR_13 = ((((int32_t)L_13) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_14 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_15 = (__this->___pos_4);
		int32_t L_16 = (__this->___decoded_count_3);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String System.IO.StreamReader::ReadLine()
extern MethodInfo StreamReader_ReadLine_m7969_MethodInfo;
extern "C" String_t* StreamReader_ReadLine_m7969 (StreamReader_t1462 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t284 * V_2 = {0};
	StringBuilder_t284 * V_3 = {0};
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_1, (String_t*) &_stringLiteral1628, (String_t*) &_stringLiteral1629, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m7964(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7964_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0030:
	{
		int32_t L_5 = (__this->___pos_4);
		V_0 = L_5;
		int32_t L_6 = StreamReader_FindNextEOL_m7968(__this, /*hidden argument*/&StreamReader_FindNextEOL_m7968_MethodInfo);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___decoded_count_3);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		CharU5BU5D_t197* L_11 = (__this->___decoded_buffer_2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_15 = String_CreateString_m3514(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), /*hidden argument*/&String__ctor_m3491_MethodInfo);
		return L_15;
	}

IL_005b:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t284 * L_17 = (__this->___line_builder_11);
		StringBuilder_t284 * L_18 = (__this->___line_builder_11);
		NullCheck(L_18);
		int32_t L_19 = StringBuilder_get_Length_m4938(L_18, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_17);
		String_t* L_20 = StringBuilder_ToString_m9475(L_17, 0, L_19, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_20;
	}

IL_0078:
	{
		StringBuilder_t284 * L_21 = (__this->___line_builder_11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t284 * L_22 = (StringBuilder_t284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t284_il2cpp_TypeInfo));
		StringBuilder__ctor_m1321(L_22, /*hidden argument*/&StringBuilder__ctor_m1321_MethodInfo);
		__this->___line_builder_11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		StringBuilder_t284 * L_23 = (__this->___line_builder_11);
		NullCheck(L_23);
		StringBuilder_set_Length_m5044(L_23, 0, /*hidden argument*/&StringBuilder_set_Length_m5044_MethodInfo);
	}

IL_0099:
	{
		bool L_24 = (__this->___foundCR_13);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_25 = (__this->___decoded_count_3);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_25-(int32_t)1));
	}

IL_00af:
	{
		StringBuilder_t284 * L_26 = (__this->___line_builder_11);
		CharU5BU5D_t197* L_27 = (__this->___decoded_buffer_2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___decoded_count_3);
		int32_t L_30 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m9480(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), /*hidden argument*/&StringBuilder_Append_m9480_MethodInfo);
		int32_t L_31 = StreamReader_ReadBuffer_m7964(__this, /*hidden argument*/&StreamReader_ReadBuffer_m7964_MethodInfo);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t284 * L_32 = (__this->___line_builder_11);
		NullCheck(L_32);
		int32_t L_33 = StringBuilder_get_Capacity_m9471(L_32, /*hidden argument*/&StringBuilder_get_Capacity_m9471_MethodInfo);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t284 * L_34 = (__this->___line_builder_11);
		V_2 = L_34;
		__this->___line_builder_11 = (StringBuilder_t284 *)NULL;
		StringBuilder_t284 * L_35 = V_2;
		StringBuilder_t284 * L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m4938(L_36, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m9475(L_35, 0, L_37, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_38;
	}

IL_0100:
	{
		StringBuilder_t284 * L_39 = (__this->___line_builder_11);
		StringBuilder_t284 * L_40 = (__this->___line_builder_11);
		NullCheck(L_40);
		int32_t L_41 = StringBuilder_get_Length_m4938(L_40, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_39);
		String_t* L_42 = StringBuilder_ToString_m9475(L_39, 0, L_41, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->___pos_4);
		V_0 = L_43;
		int32_t L_44 = StreamReader_FindNextEOL_m7968(__this, /*hidden argument*/&StreamReader_FindNextEOL_m7968_MethodInfo);
		V_1 = L_44;
		int32_t L_45 = V_1;
		int32_t L_46 = (__this->___decoded_count_3);
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_018f;
		}
	}
	{
		StringBuilder_t284 * L_49 = (__this->___line_builder_11);
		CharU5BU5D_t197* L_50 = (__this->___decoded_buffer_2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m9480(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), /*hidden argument*/&StringBuilder_Append_m9480_MethodInfo);
		StringBuilder_t284 * L_54 = (__this->___line_builder_11);
		NullCheck(L_54);
		int32_t L_55 = StringBuilder_get_Capacity_m9471(L_54, /*hidden argument*/&StringBuilder_get_Capacity_m9471_MethodInfo);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		StringBuilder_t284 * L_56 = (__this->___line_builder_11);
		V_3 = L_56;
		__this->___line_builder_11 = (StringBuilder_t284 *)NULL;
		StringBuilder_t284 * L_57 = V_3;
		StringBuilder_t284 * L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59 = StringBuilder_get_Length_m4938(L_58, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_57);
		String_t* L_60 = StringBuilder_ToString_m9475(L_57, 0, L_59, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_60;
	}

IL_0177:
	{
		StringBuilder_t284 * L_61 = (__this->___line_builder_11);
		StringBuilder_t284 * L_62 = (__this->___line_builder_11);
		NullCheck(L_62);
		int32_t L_63 = StringBuilder_get_Length_m4938(L_62, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_61);
		String_t* L_64 = StringBuilder_ToString_m9475(L_61, 0, L_63, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_64;
	}

IL_018f:
	{
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_01ac;
		}
	}
	{
		StringBuilder_t284 * L_66 = (__this->___line_builder_11);
		StringBuilder_t284 * L_67 = (__this->___line_builder_11);
		NullCheck(L_67);
		int32_t L_68 = StringBuilder_get_Length_m4938(L_67, /*hidden argument*/&StringBuilder_get_Length_m4938_MethodInfo);
		NullCheck(L_66);
		String_t* L_69 = StringBuilder_ToString_m9475(L_66, 0, L_68, /*hidden argument*/&StringBuilder_ToString_m9475_MethodInfo);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
// System.String System.IO.StreamReader::ReadToEnd()
extern MethodInfo StreamReader_ReadToEnd_m7970_MethodInfo;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" String_t* StreamReader_ReadToEnd_m7970 (StreamReader_t1462 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadToEnd_m7970_init;
	if (!StreamReader_ReadToEnd_m7970_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		StreamReader_ReadToEnd_m7970_init = true;
	}
	StringBuilder_t284 * V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t197* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stream_t1223 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_1, (String_t*) &_stringLiteral1628, (String_t*) &_stringLiteral1629, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		StringBuilder_t284 * L_2 = (StringBuilder_t284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t284_il2cpp_TypeInfo));
		StringBuilder__ctor_m1321(L_2, /*hidden argument*/&StringBuilder__ctor_m1321_MethodInfo);
		V_0 = L_2;
		CharU5BU5D_t197* L_3 = (__this->___decoded_buffer_2);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		StringBuilder_t284 * L_5 = V_0;
		CharU5BU5D_t197* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		StringBuilder_Append_m9480(L_5, L_6, 0, L_7, /*hidden argument*/&StringBuilder_Append_m9480_MethodInfo);
	}

IL_003a:
	{
		CharU5BU5D_t197* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t197*, int32_t, int32_t >::Invoke(&StreamReader_Read_m7967_MethodInfo, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t284 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1325_MethodInfo, L_12);
		return L_13;
	}
}
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StreamWriter_t1480_il2cpp_TypeInfo;
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"

extern TypeInfo Int64_t717_il2cpp_TypeInfo;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
extern MethodInfo StreamWriter_Flush_m7977_MethodInfo;
extern MethodInfo StreamWriter__ctor_m7972_MethodInfo;
extern MethodInfo TextWriter__ctor_m8016_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4772_MethodInfo;
extern MethodInfo StreamWriter_Initialize_m7974_MethodInfo;
extern MethodInfo Math_Max_m5932_MethodInfo;
extern MethodInfo Encoding_GetMaxByteCount_m10505_MethodInfo;
extern MethodInfo Stream_get_CanSeek_m6020_MethodInfo;
extern MethodInfo Stream_get_Position_m10506_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m5940_MethodInfo;
extern MethodInfo StreamWriter_Decode_m7979_MethodInfo;
extern MethodInfo StreamWriter_FlushBytes_m7978_MethodInfo;
extern MethodInfo Stream_Flush_m6056_MethodInfo;
extern MethodInfo Encoding_GetBytes_m10507_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m7981_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m4846_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m7982_MethodInfo;
extern MethodInfo StreamWriter_Dispose_m7976_MethodInfo;
extern MethodInfo Object_Finalize_m103_MethodInfo;


// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamWriter__ctor_m7971_MethodInfo;
extern "C" void StreamWriter__ctor_m7971 (StreamWriter_t1480 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1223 * L_0 = ___stream;
		Encoding_t514 * L_1 = ___encoding;
		StreamWriter__ctor_m7972(__this, L_0, L_1, ((int32_t)1024), /*hidden argument*/&StreamWriter__ctor_m7972_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m7972 (StreamWriter_t1480 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextWriter__ctor_m8016(__this, /*hidden argument*/&TextWriter__ctor_m8016_MethodInfo);
		Stream_t1223 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1626, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Encoding_t514 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral1624, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___bufferSize;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_5 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_5, (String_t*) &_stringLiteral1541, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		Stream_t1223 * L_6 = ___stream;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m6038_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_8, (String_t*) &_stringLiteral1631, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		Stream_t1223 * L_9 = ___stream;
		__this->___internalStream_3 = L_9;
		Encoding_t514 * L_10 = ___encoding;
		int32_t L_11 = ___bufferSize;
		StreamWriter_Initialize_m7974(__this, L_10, L_11, /*hidden argument*/&StreamWriter_Initialize_m7974_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.cctor()
extern MethodInfo StreamWriter__cctor_m7973_MethodInfo;
extern "C" void StreamWriter__cctor_m7973 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Stream_t1223_il2cpp_TypeInfo));
		Stream_t1223 * L_0 = ((Stream_t1223_StaticFields*)InitializedTypeInfo(&Stream_t1223_il2cpp_TypeInfo)->static_fields)->___Null_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t514_il2cpp_TypeInfo));
		Encoding_t514 * L_1 = Encoding_get_UTF8Unmarked_m9445(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m9445_MethodInfo);
		StreamWriter_t1480 * L_2 = (StreamWriter_t1480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamWriter_t1480_il2cpp_TypeInfo));
		StreamWriter__ctor_m7972(L_2, L_0, L_1, 1, /*hidden argument*/&StreamWriter__ctor_m7972_MethodInfo);
		((StreamWriter_t1480_StaticFields*)InitializedTypeInfo(&StreamWriter_t1480_il2cpp_TypeInfo)->static_fields)->___Null_11 = L_2;
		return;
	}
}
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Initialize_m7974 (StreamWriter_t1480 * __this, Encoding_t514 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamWriter_Initialize_m7974_init;
	if (!StreamWriter_Initialize_m7974_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		StreamWriter_Initialize_m7974_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Encoding_t514 * L_0 = ___encoding;
		__this->___internalEncoding_2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->___byte_pos_6 = L_1;
		int32_t L_2 = V_1;
		__this->___decode_pos_8 = L_2;
		int32_t L_3 = ___bufferSize;
		int32_t L_4 = Math_Max_m5932(NULL /*static, unused*/, L_3, ((int32_t)256), /*hidden argument*/&Math_Max_m5932_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___decode_buf_7 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, L_5));
		Encoding_t514 * L_6 = ___encoding;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxByteCount_m10505_MethodInfo, L_6, L_7);
		__this->___byte_buf_5 = ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, L_8));
		Stream_t1223 * L_9 = (__this->___internalStream_3);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanSeek_m6020_MethodInfo, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		Stream_t1223 * L_11 = (__this->___internalStream_3);
		NullCheck(L_11);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Stream_get_Position_m10506_MethodInfo, L_11);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___preamble_done_10 = 1;
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern MethodInfo StreamWriter_set_AutoFlush_m7975_MethodInfo;
extern "C" void StreamWriter_set_AutoFlush_m7975 (StreamWriter_t1480 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___iflush_4 = L_0;
		bool L_1 = (__this->___iflush_4);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m7976 (StreamWriter_t1480 * __this, bool ___disposing, MethodInfo* method)
{
	Exception_t293 * V_0 = {0};
	Exception_t293 * V_1 = {0};
	Exception_t293 * V_2 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t293 *)NULL;
		bool L_0 = (__this->___DisposedAlready_9);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Stream_t1223 * L_2 = (__this->___internalStream_3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t293 *)__exception_local);
		Exception_t293 * L_3 = V_1;
		V_0 = L_3;
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		__this->___DisposedAlready_9 = 1;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		Stream_t1223 * L_4 = (__this->___internalStream_3);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(&Stream_Close_m5977_MethodInfo, L_4);
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t293 *)__exception_local);
			Exception_t293 * L_5 = V_0;
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			Exception_t293 * L_6 = V_2;
			V_0 = L_6;
		}

IL_003c:
		{
			goto IL_003e;
		}
	} // end catch (depth: 1)

IL_003e:
	{
		__this->___internalStream_3 = (Stream_t1223 *)NULL;
		__this->___byte_buf_5 = (ByteU5BU5D_t515*)NULL;
		__this->___internalEncoding_2 = (Encoding_t514 *)NULL;
		__this->___decode_buf_7 = (CharU5BU5D_t197*)NULL;
		Exception_t293 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		Exception_t293 * L_8 = V_0;
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m7977 (StreamWriter_t1480 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*) &_stringLiteral1632, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamWriter_Decode_m7979(__this, /*hidden argument*/&StreamWriter_Decode_m7979_MethodInfo);
		int32_t L_2 = (__this->___byte_pos_6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		StreamWriter_FlushBytes_m7978(__this, /*hidden argument*/&StreamWriter_FlushBytes_m7978_MethodInfo);
		Stream_t1223 * L_3 = (__this->___internalStream_3);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&Stream_Flush_m6056_MethodInfo, L_3);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m7978 (StreamWriter_t1480 * __this, MethodInfo* method)
{
	ByteU5BU5D_t515* V_0 = {0};
	{
		bool L_0 = (__this->___preamble_done_10);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = (__this->___byte_pos_6);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Encoding_t514 * L_2 = (__this->___internalEncoding_2);
		NullCheck(L_2);
		ByteU5BU5D_t515* L_3 = (ByteU5BU5D_t515*)VirtFuncInvoker0< ByteU5BU5D_t515* >::Invoke(&Encoding_GetPreamble_m9441_MethodInfo, L_2);
		V_0 = L_3;
		ByteU5BU5D_t515* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Stream_t1223 * L_5 = (__this->___internalStream_3);
		ByteU5BU5D_t515* L_6 = V_0;
		ByteU5BU5D_t515* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Write_m6011_MethodInfo, L_5, L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->___preamble_done_10 = 1;
	}

IL_003a:
	{
		Stream_t1223 * L_8 = (__this->___internalStream_3);
		ByteU5BU5D_t515* L_9 = (__this->___byte_buf_5);
		int32_t L_10 = (__this->___byte_pos_6);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t515*, int32_t, int32_t >::Invoke(&Stream_Write_m6011_MethodInfo, L_8, L_9, 0, L_10);
		__this->___byte_pos_6 = 0;
		return;
	}
}
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m7979 (StreamWriter_t1480 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___byte_pos_6);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		StreamWriter_FlushBytes_m7978(__this, /*hidden argument*/&StreamWriter_FlushBytes_m7978_MethodInfo);
	}

IL_000f:
	{
		int32_t L_1 = (__this->___decode_pos_8);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Encoding_t514 * L_2 = (__this->___internalEncoding_2);
		CharU5BU5D_t197* L_3 = (__this->___decode_buf_7);
		int32_t L_4 = (__this->___decode_pos_8);
		ByteU5BU5D_t515* L_5 = (__this->___byte_buf_5);
		int32_t L_6 = (__this->___byte_pos_6);
		NullCheck(L_2);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, CharU5BU5D_t197*, int32_t, int32_t, ByteU5BU5D_t515*, int32_t >::Invoke(&Encoding_GetBytes_m10507_MethodInfo, L_2, L_3, 0, L_4, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = (__this->___byte_pos_6);
		int32_t L_9 = V_0;
		__this->___byte_pos_6 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		__this->___decode_pos_8 = 0;
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo StreamWriter_Write_m7980_MethodInfo;
extern "C" void StreamWriter_Write_m7980 (StreamWriter_t1480 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*) &_stringLiteral1632, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t197* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t711 * L_3 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_3, (String_t*) &_stringLiteral985, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_5 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_5, (String_t*) &_stringLiteral345, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0035:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_7 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_7, (String_t*) &_stringLiteral427, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t197* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t332 * L_11 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_11, (String_t*) &_stringLiteral1630, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		CharU5BU5D_t197* L_12 = ___buffer;
		int32_t L_13 = ___index;
		int32_t L_14 = ___count;
		StreamWriter_LowLevelWrite_m7981(__this, L_12, L_13, L_14, /*hidden argument*/&StreamWriter_LowLevelWrite_m7981_MethodInfo);
		bool L_15 = (__this->___iflush_4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
	}

IL_0073:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m7981 (StreamWriter_t1480 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		CharU5BU5D_t197* L_0 = (__this->___decode_buf_7);
		NullCheck(L_0);
		int32_t L_1 = (__this->___decode_pos_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		StreamWriter_Decode_m7979(__this, /*hidden argument*/&StreamWriter_Decode_m7979_MethodInfo);
		CharU5BU5D_t197* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___count;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___count;
		V_0 = L_6;
	}

IL_002a:
	{
		CharU5BU5D_t197* L_7 = ___buffer;
		int32_t L_8 = ___index;
		CharU5BU5D_t197* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = (__this->___decode_pos_8);
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m4846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (Array_t *)(Array_t *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), /*hidden argument*/&Buffer_BlockCopy_m4846_MethodInfo);
		int32_t L_12 = ___count;
		int32_t L_13 = V_0;
		___count = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		int32_t L_14 = ___index;
		int32_t L_15 = V_0;
		___index = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = (__this->___decode_pos_8);
		int32_t L_17 = V_0;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
	}

IL_0060:
	{
		int32_t L_18 = ___count;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m7982 (StreamWriter_t1480 * __this, String_t* ___s, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1669(L_0, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		CharU5BU5D_t197* L_2 = (__this->___decode_buf_7);
		NullCheck(L_2);
		int32_t L_3 = (__this->___decode_pos_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		StreamWriter_Decode_m7979(__this, /*hidden argument*/&StreamWriter_Decode_m7979_MethodInfo);
		CharU5BU5D_t197* L_5 = (__this->___decode_buf_7);
		NullCheck(L_5);
		V_2 = (((int32_t)(((Array_t *)L_5)->max_length)));
	}

IL_002d:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_8 = V_0;
		V_2 = L_8;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		CharU5BU5D_t197* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->___decode_pos_8);
		String_t* L_12 = ___s;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		uint16_t L_15 = String_get_Chars_m1685(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)))) = (uint16_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		V_0 = ((int32_t)((int32_t)L_19-(int32_t)L_20));
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)L_22));
		int32_t L_23 = (__this->___decode_pos_8);
		int32_t L_24 = V_2;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_23+(int32_t)L_24));
	}

IL_006d:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char)
extern MethodInfo StreamWriter_Write_m7983_MethodInfo;
extern "C" void StreamWriter_Write_m7983 (StreamWriter_t1480 * __this, uint16_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*) &_stringLiteral1632, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->___decode_pos_8);
		CharU5BU5D_t197* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		StreamWriter_Decode_m7979(__this, /*hidden argument*/&StreamWriter_Decode_m7979_MethodInfo);
	}

IL_0029:
	{
		CharU5BU5D_t197* L_4 = (__this->___decode_buf_7);
		int32_t L_5 = (__this->___decode_pos_8);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_0;
		uint16_t L_8 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_7);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_7)) = (uint16_t)L_8;
		bool L_9 = (__this->___iflush_4);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern MethodInfo StreamWriter_Write_m7984_MethodInfo;
extern "C" void StreamWriter_Write_m7984 (StreamWriter_t1480 * __this, CharU5BU5D_t197* ___buffer, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*) &_stringLiteral1632, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t197* L_2 = ___buffer;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t197* L_3 = ___buffer;
		CharU5BU5D_t197* L_4 = ___buffer;
		NullCheck(L_4);
		StreamWriter_LowLevelWrite_m7981(__this, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/&StreamWriter_LowLevelWrite_m7981_MethodInfo);
	}

IL_0021:
	{
		bool L_5 = (__this->___iflush_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.String)
extern MethodInfo StreamWriter_Write_m7985_MethodInfo;
extern "C" void StreamWriter_Write_m7985 (StreamWriter_t1480 * __this, String_t* ___value, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1283 * L_1 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m5940(L_1, (String_t*) &_stringLiteral1632, /*hidden argument*/&ObjectDisposedException__ctor_m5940_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		String_t* L_2 = ___value;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___value;
		StreamWriter_LowLevelWrite_m7982(__this, L_3, /*hidden argument*/&StreamWriter_LowLevelWrite_m7982_MethodInfo);
	}

IL_001d:
	{
		bool L_4 = (__this->___iflush_4);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m7977_MethodInfo, __this);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Close()
extern MethodInfo StreamWriter_Close_m7986_MethodInfo;
extern "C" void StreamWriter_Close_m7986 (StreamWriter_t1480 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m7976_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.StreamWriter::Finalize()
extern MethodInfo StreamWriter_Finalize_m7987_MethodInfo;
extern "C" void StreamWriter_Finalize_m7987 (StreamWriter_t1480 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m7976_MethodInfo, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m103(__this, /*hidden argument*/&Object_Finalize_m103_MethodInfo);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_0010:
	{
		return;
	}
}
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringReader_t705_il2cpp_TypeInfo;
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"

extern MethodInfo StringReader_CheckObjectDisposedException_m7993_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9662_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m4952_MethodInfo;
extern MethodInfo String_CopyTo_m6374_MethodInfo;
extern MethodInfo StringReader_ReadToEnd_m7992_MethodInfo;


// System.Void System.IO.StringReader::.ctor(System.String)
extern MethodInfo StringReader__ctor_m3407_MethodInfo;
extern "C" void StringReader__ctor_m3407 (StringReader_t705 * __this, String_t* ___s, MethodInfo* method)
{
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1012, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___s;
		__this->___source_1 = L_2;
		__this->___nextChar_2 = 0;
		String_t* L_3 = ___s;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1669(L_3, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		__this->___sourceLength_3 = L_4;
		return;
	}
}
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern MethodInfo StringReader_Dispose_m7988_MethodInfo;
extern "C" void StringReader_Dispose_m7988 (StringReader_t705 * __this, bool ___disposing, MethodInfo* method)
{
	{
		__this->___source_1 = (String_t*)NULL;
		bool L_0 = ___disposing;
		TextReader_Dispose_m7999(__this, L_0, /*hidden argument*/&TextReader_Dispose_m7999_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StringReader::Peek()
extern MethodInfo StringReader_Peek_m7989_MethodInfo;
extern "C" int32_t StringReader_Peek_m7989 (StringReader_t705 * __this, MethodInfo* method)
{
	{
		StringReader_CheckObjectDisposedException_m7993(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7993_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m1685(L_2, L_3, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.IO.StringReader::Read()
extern MethodInfo StringReader_Read_m7990_MethodInfo;
extern "C" int32_t StringReader_Read_m7990 (StringReader_t705 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m7993(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7993_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		uint16_t L_6 = String_get_Chars_m1685(L_2, L_5, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		return L_6;
	}
}
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo StringReader_Read_m7991_MethodInfo;
extern "C" int32_t StringReader_Read_m7991 (StringReader_t705 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m7993(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7993_MethodInfo);
		CharU5BU5D_t197* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral985, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		CharU5BU5D_t197* L_2 = ___buffer;
		NullCheck(L_2);
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t332 * L_5 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m9662(L_5, /*hidden argument*/&ArgumentException__ctor_m9662_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		int32_t L_6 = ___index;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t715 * L_8 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4952(L_8, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4952_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0030:
	{
		int32_t L_9 = (__this->___nextChar_2);
		int32_t L_10 = (__this->___sourceLength_3);
		int32_t L_11 = ___count;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = (__this->___sourceLength_3);
		int32_t L_13 = (__this->___nextChar_2);
		V_0 = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		goto IL_0052;
	}

IL_0050:
	{
		int32_t L_14 = ___count;
		V_0 = L_14;
	}

IL_0052:
	{
		String_t* L_15 = (__this->___source_1);
		int32_t L_16 = (__this->___nextChar_2);
		CharU5BU5D_t197* L_17 = ___buffer;
		int32_t L_18 = ___index;
		int32_t L_19 = V_0;
		NullCheck(L_15);
		String_CopyTo_m6374(L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&String_CopyTo_m6374_MethodInfo);
		int32_t L_20 = (__this->___nextChar_2);
		int32_t L_21 = V_0;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.String System.IO.StringReader::ReadLine()
extern MethodInfo StringReader_ReadLine_m3408_MethodInfo;
extern "C" String_t* StringReader_ReadLine_m3408 (StringReader_t705 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	StringReader_t705 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	StringReader_t705 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	StringReader_t705 * G_B15_2 = {0};
	{
		StringReader_CheckObjectDisposedException_m7993(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7993_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		String_t* L_1 = (__this->___source_1);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1669(L_1, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = (__this->___source_1);
		int32_t L_4 = (__this->___nextChar_2);
		NullCheck(L_3);
		int32_t L_5 = String_IndexOf_m3399(L_3, ((int32_t)13), L_4, /*hidden argument*/&String_IndexOf_m3399_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = (__this->___source_1);
		int32_t L_7 = (__this->___nextChar_2);
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m3399(L_6, ((int32_t)10), L_7, /*hidden argument*/&String_IndexOf_m3399_MethodInfo);
		V_1 = L_8;
		V_3 = 0;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringReader_ReadToEnd_m7992_MethodInfo, __this);
		return L_11;
	}

IL_0054:
	{
		int32_t L_12 = V_1;
		V_2 = L_12;
		goto IL_0070;
	}

IL_0058:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0070;
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B11_0 = L_17;
		goto IL_0068;
	}

IL_0067:
	{
		int32_t L_18 = V_0;
		G_B11_0 = L_18;
	}

IL_0068:
	{
		V_2 = G_B11_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_3 = ((((int32_t)((int32_t)((int32_t)L_19+(int32_t)1))) == ((int32_t)L_20))? 1 : 0);
	}

IL_0070:
	{
		String_t* L_21 = (__this->___source_1);
		int32_t L_22 = (__this->___nextChar_2);
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->___nextChar_2);
		NullCheck(L_21);
		String_t* L_25 = String_Substring_m1686(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		V_4 = L_25;
		int32_t L_26 = V_2;
		bool L_27 = V_3;
		G_B13_0 = L_26;
		G_B13_1 = __this;
		if (!L_27)
		{
			G_B14_0 = L_26;
			G_B14_1 = __this;
			goto IL_0093;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0094;
	}

IL_0093:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0094:
	{
		NullCheck(G_B15_2);
		G_B15_2->___nextChar_2 = ((int32_t)((int32_t)G_B15_1+(int32_t)G_B15_0));
		String_t* L_28 = V_4;
		return L_28;
	}
}
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m7992 (StringReader_t705 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		StringReader_CheckObjectDisposedException_m7993(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m7993_MethodInfo);
		String_t* L_0 = (__this->___source_1);
		int32_t L_1 = (__this->___nextChar_2);
		int32_t L_2 = (__this->___sourceLength_3);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_0);
		String_t* L_4 = String_Substring_m1686(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = (__this->___sourceLength_3);
		__this->___nextChar_2 = L_5;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C" void StringReader_CheckObjectDisposedException_m7993 (StringReader_t705 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___source_1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m6869(NULL /*static, unused*/, (String_t*) &_stringLiteral1634, /*hidden argument*/&Locale_GetText_m6869_MethodInfo);
		ObjectDisposedException_t1283 * L_2 = (ObjectDisposedException_t1283 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1283_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10284(L_2, (String_t*) &_stringLiteral1633, L_1, /*hidden argument*/&ObjectDisposedException__ctor_m10284_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextReader_t1481_il2cpp_TypeInfo;
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReaderMethodDeclarations.h"



// System.Void System.IO.TextReader/NullTextReader::.ctor()
extern MethodInfo NullTextReader__ctor_m7994_MethodInfo;
extern "C" void NullTextReader__ctor_m7994 (NullTextReader_t1481 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		return;
	}
}
// System.String System.IO.TextReader/NullTextReader::ReadLine()
extern MethodInfo NullTextReader_ReadLine_m7995_MethodInfo;
extern "C" String_t* NullTextReader_ReadLine_m7995 (NullTextReader_t1481 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReader.h"
extern TypeInfo SynchronizedReader_t1482_il2cpp_TypeInfo;
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReaderMethodDeclarations.h"
extern MethodInfo GC_SuppressFinalize_m5924_MethodInfo;
extern MethodInfo TextReader_Read_m8001_MethodInfo;
extern MethodInfo SynchronizedReader__ctor_m8006_MethodInfo;


// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m7996 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextReader::.cctor()
extern MethodInfo TextReader__cctor_m7997_MethodInfo;
extern "C" void TextReader__cctor_m7997 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextReader_t1481 * L_0 = (NullTextReader_t1481 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextReader_t1481_il2cpp_TypeInfo));
		NullTextReader__ctor_m7994(L_0, /*hidden argument*/&NullTextReader__ctor_m7994_MethodInfo);
		((TextReader_t1408_StaticFields*)InitializedTypeInfo(&TextReader_t1408_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Void System.IO.TextReader::Dispose()
extern MethodInfo TextReader_Dispose_m7998_MethodInfo;
extern "C" void TextReader_Dispose_m7998 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextReader_Dispose_m7999_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m7999 (TextReader_t1408 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m5924(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5924_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Int32 System.IO.TextReader::Peek()
extern MethodInfo TextReader_Peek_m8000_MethodInfo;
extern "C" int32_t TextReader_Peek_m8000 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m8001 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo TextReader_Read_m8002_MethodInfo;
extern "C" int32_t TextReader_Read_m8002 (TextReader_t1408 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m8001_MethodInfo, __this);
		int32_t L_1 = L_0;
		V_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		return L_2;
	}

IL_0011:
	{
		CharU5BU5D_t197* L_3 = ___buffer;
		int32_t L_4 = ___index;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint16_t)(((uint16_t)L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.String System.IO.TextReader::ReadLine()
extern MethodInfo TextReader_ReadLine_m8003_MethodInfo;
extern "C" String_t* TextReader_ReadLine_m8003 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.String System.IO.TextReader::ReadToEnd()
extern MethodInfo TextReader_ReadToEnd_m8004_MethodInfo;
extern "C" String_t* TextReader_ReadToEnd_m8004 (TextReader_t1408 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern MethodInfo TextReader_Synchronized_m8005_MethodInfo;
extern "C" TextReader_t1408 * TextReader_Synchronized_m8005 (Object_t * __this /* static, unused */, TextReader_t1408 * ___reader, MethodInfo* method)
{
	{
		TextReader_t1408 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1635, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextReader_t1408 * L_2 = ___reader;
		if (!((SynchronizedReader_t1482 *)IsInst(L_2, InitializedTypeInfo(&SynchronizedReader_t1482_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		TextReader_t1408 * L_3 = ___reader;
		return L_3;
	}

IL_0018:
	{
		TextReader_t1408 * L_4 = ___reader;
		SynchronizedReader_t1482 * L_5 = (SynchronizedReader_t1482 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedReader_t1482_il2cpp_TypeInfo));
		SynchronizedReader__ctor_m8006(L_5, L_4, /*hidden argument*/&SynchronizedReader__ctor_m8006_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m8006 (SynchronizedReader_t1482 * __this, TextReader_t1408 * ___reader, MethodInfo* method)
{
	{
		TextReader__ctor_m7996(__this, /*hidden argument*/&TextReader__ctor_m7996_MethodInfo);
		TextReader_t1408 * L_0 = ___reader;
		__this->___reader_1 = L_0;
		return;
	}
}
// System.Int32 System.IO.SynchronizedReader::Peek()
extern MethodInfo SynchronizedReader_Peek_m8007_MethodInfo;
extern "C" int32_t SynchronizedReader_Peek_m8007 (SynchronizedReader_t1482 * __this, MethodInfo* method)
{
	SynchronizedReader_t1482 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1482 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1408 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Peek_m8000_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1482 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadLine()
extern MethodInfo SynchronizedReader_ReadLine_m8008_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadLine_m8008 (SynchronizedReader_t1482 * __this, MethodInfo* method)
{
	SynchronizedReader_t1482 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1482 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1408 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadLine_m8003_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1482 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern MethodInfo SynchronizedReader_ReadToEnd_m8009_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadToEnd_m8009 (SynchronizedReader_t1482 * __this, MethodInfo* method)
{
	SynchronizedReader_t1482 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1482 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1408 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadToEnd_m8004_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1482 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read()
extern MethodInfo SynchronizedReader_Read_m8010_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m8010 (SynchronizedReader_t1482 * __this, MethodInfo* method)
{
	SynchronizedReader_t1482 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1482 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1408 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m8001_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1482 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedReader_Read_m8011_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m8011 (SynchronizedReader_t1482 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedReader_t1482 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1482 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1408 * L_1 = (__this->___reader_1);
			CharU5BU5D_t197* L_2 = ___buffer;
			int32_t L_3 = ___index;
			int32_t L_4 = ___count;
			NullCheck(L_1);
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t197*, int32_t, int32_t >::Invoke(&TextReader_Read_m8002_MethodInfo, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1482 * L_6 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextWriter_t1483_il2cpp_TypeInfo;
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriterMethodDeclarations.h"



// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern MethodInfo NullTextWriter__ctor_m8012_MethodInfo;
extern "C" void NullTextWriter__ctor_m8012 (NullTextWriter_t1483 * __this, MethodInfo* method)
{
	{
		TextWriter__ctor_m8016(__this, /*hidden argument*/&TextWriter__ctor_m8016_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern MethodInfo NullTextWriter_Write_m8013_MethodInfo;
extern "C" void NullTextWriter_Write_m8013 (NullTextWriter_t1483 * __this, String_t* ___s, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern MethodInfo NullTextWriter_Write_m8014_MethodInfo;
extern "C" void NullTextWriter_Write_m8014 (NullTextWriter_t1483 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullTextWriter_Write_m8015_MethodInfo;
extern "C" void NullTextWriter_Write_m8015 (NullTextWriter_t1483 * __this, CharU5BU5D_t197* ___value, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextWriter_t1132_il2cpp_TypeInfo;

// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriter.h"
extern TypeInfo SynchronizedWriter_t1484_il2cpp_TypeInfo;
// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriterMethodDeclarations.h"
extern MethodInfo Environment_get_NewLine_m4857_MethodInfo;
extern MethodInfo String_ToCharArray_m3487_MethodInfo;
extern MethodInfo TextWriter_Dispose_m8019_MethodInfo;
extern MethodInfo SynchronizedWriter__ctor_m8028_MethodInfo;
extern MethodInfo TextWriter_Write_m8026_MethodInfo;
extern MethodInfo TextWriter_Write_m8024_MethodInfo;
extern MethodInfo TextWriter_Write_m8023_MethodInfo;
extern MethodInfo TextWriter_Write_m8025_MethodInfo;
extern MethodInfo TextWriter_WriteLine_m8027_MethodInfo;


// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m8016 (TextWriter_t1132 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		String_t* L_0 = Environment_get_NewLine_m4857(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m4857_MethodInfo);
		NullCheck(L_0);
		CharU5BU5D_t197* L_1 = String_ToCharArray_m3487(L_0, /*hidden argument*/&String_ToCharArray_m3487_MethodInfo);
		__this->___CoreNewLine_0 = L_1;
		return;
	}
}
// System.Void System.IO.TextWriter::.cctor()
extern MethodInfo TextWriter__cctor_m8017_MethodInfo;
extern "C" void TextWriter__cctor_m8017 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextWriter_t1483 * L_0 = (NullTextWriter_t1483 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextWriter_t1483_il2cpp_TypeInfo));
		NullTextWriter__ctor_m8012(L_0, /*hidden argument*/&NullTextWriter__ctor_m8012_MethodInfo);
		((TextWriter_t1132_StaticFields*)InitializedTypeInfo(&TextWriter_t1132_il2cpp_TypeInfo)->static_fields)->___Null_1 = L_0;
		return;
	}
}
// System.Void System.IO.TextWriter::Close()
extern MethodInfo TextWriter_Close_m8018_MethodInfo;
extern "C" void TextWriter_Close_m8018 (TextWriter_t1132 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m8019_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m8019 (TextWriter_t1132 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m5924(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5924_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose()
extern MethodInfo TextWriter_Dispose_m8020_MethodInfo;
extern "C" void TextWriter_Dispose_m8020 (TextWriter_t1132 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m8019_MethodInfo, __this, 1);
		GC_SuppressFinalize_m5924(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m5924_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter::Flush()
extern MethodInfo TextWriter_Flush_m8021_MethodInfo;
extern "C" void TextWriter_Flush_m8021 (TextWriter_t1132 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern MethodInfo TextWriter_Synchronized_m8022_MethodInfo;
extern "C" TextWriter_t1132 * TextWriter_Synchronized_m8022 (Object_t * __this /* static, unused */, TextWriter_t1132 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		TextWriter_t1132 * L_0 = ___writer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1636, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextWriter_t1132 * L_2 = ___writer;
		if (!((SynchronizedWriter_t1484 *)IsInst(L_2, InitializedTypeInfo(&SynchronizedWriter_t1484_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		TextWriter_t1132 * L_3 = ___writer;
		return L_3;
	}

IL_0018:
	{
		TextWriter_t1132 * L_4 = ___writer;
		bool L_5 = ___neverClose;
		SynchronizedWriter_t1484 * L_6 = (SynchronizedWriter_t1484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedWriter_t1484_il2cpp_TypeInfo));
		SynchronizedWriter__ctor_m8028(L_6, L_4, L_5, /*hidden argument*/&SynchronizedWriter__ctor_m8028_MethodInfo);
		return L_6;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m8023 (TextWriter_t1132 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m8024 (TextWriter_t1132 * __this, CharU5BU5D_t197* ___buffer, MethodInfo* method)
{
	{
		CharU5BU5D_t197* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		CharU5BU5D_t197* L_1 = ___buffer;
		CharU5BU5D_t197* L_2 = ___buffer;
		NullCheck(L_2);
		VirtActionInvoker3< CharU5BU5D_t197*, int32_t, int32_t >::Invoke(&TextWriter_Write_m8026_MethodInfo, __this, L_1, 0, (((int32_t)(((Array_t *)L_2)->max_length))));
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m8025 (TextWriter_t1132 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___value;
		NullCheck(L_1);
		CharU5BU5D_t197* L_2 = String_ToCharArray_m3487(L_1, /*hidden argument*/&String_ToCharArray_m3487_MethodInfo);
		VirtActionInvoker1< CharU5BU5D_t197* >::Invoke(&TextWriter_Write_m8024_MethodInfo, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m8026 (TextWriter_t1132 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		CharU5BU5D_t197* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral985, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t197* L_4 = ___buffer;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_t715 * L_5 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_5, (String_t*) &_stringLiteral345, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = ___index;
		CharU5BU5D_t197* L_8 = ___buffer;
		NullCheck(L_8);
		int32_t L_9 = ___count;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_t715 * L_10 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4772(L_10, (String_t*) &_stringLiteral427, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4772_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		CharU5BU5D_t197* L_11 = ___buffer;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m8023_MethodInfo, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
		int32_t L_14 = ___count;
		___count = ((int32_t)((int32_t)L_14-(int32_t)1));
		int32_t L_15 = ___index;
		___index = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = ___count;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m8027 (TextWriter_t1132 * __this, MethodInfo* method)
{
	{
		CharU5BU5D_t197* L_0 = (__this->___CoreNewLine_0);
		VirtActionInvoker1< CharU5BU5D_t197* >::Invoke(&TextWriter_Write_m8024_MethodInfo, __this, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern MethodInfo TextWriter_WriteLine_m5003_MethodInfo;
extern "C" void TextWriter_WriteLine_m5003 (TextWriter_t1132 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m8025_MethodInfo, __this, L_0);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m8027_MethodInfo, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m8028 (SynchronizedWriter_t1484 * __this, TextWriter_t1132 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		TextWriter__ctor_m8016(__this, /*hidden argument*/&TextWriter__ctor_m8016_MethodInfo);
		TextWriter_t1132 * L_0 = ___writer;
		__this->___writer_2 = L_0;
		bool L_1 = ___neverClose;
		__this->___neverClose_3 = L_1;
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Close()
extern MethodInfo SynchronizedWriter_Close_m8029_MethodInfo;
extern "C" void SynchronizedWriter_Close_m8029 (SynchronizedWriter_t1484 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___neverClose_3);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_1 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_2 = (__this->___writer_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&TextWriter_Close_m8018_MethodInfo, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Flush()
extern MethodInfo SynchronizedWriter_Flush_m8030_MethodInfo;
extern "C" void SynchronizedWriter_Flush_m8030 (SynchronizedWriter_t1484 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&TextWriter_Flush_m8021_MethodInfo, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_2 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern MethodInfo SynchronizedWriter_Write_m8031_MethodInfo;
extern "C" void SynchronizedWriter_Write_m8031 (SynchronizedWriter_t1484 * __this, uint16_t ___value, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		uint16_t L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m8023_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern MethodInfo SynchronizedWriter_Write_m8032_MethodInfo;
extern "C" void SynchronizedWriter_Write_m8032 (SynchronizedWriter_t1484 * __this, CharU5BU5D_t197* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		CharU5BU5D_t197* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< CharU5BU5D_t197* >::Invoke(&TextWriter_Write_m8024_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern MethodInfo SynchronizedWriter_Write_m8033_MethodInfo;
extern "C" void SynchronizedWriter_Write_m8033 (SynchronizedWriter_t1484 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m8025_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedWriter_Write_m8034_MethodInfo;
extern "C" void SynchronizedWriter_Write_m8034 (SynchronizedWriter_t1484 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		CharU5BU5D_t197* L_2 = ___buffer;
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck(L_1);
		VirtActionInvoker3< CharU5BU5D_t197*, int32_t, int32_t >::Invoke(&TextWriter_Write_m8026_MethodInfo, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_5 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern MethodInfo SynchronizedWriter_WriteLine_m8035_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m8035 (SynchronizedWriter_t1484 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m8027_MethodInfo, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_2 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern MethodInfo SynchronizedWriter_WriteLine_m8036_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m8036 (SynchronizedWriter_t1484 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1484 * V_0 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1484 * L_0 = V_0;
		Monitor_Enter_m4797(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4797_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1132 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_WriteLine_m5003_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t293 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1484 * L_3 = V_0;
		Monitor_Exit_m4798(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4798_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t293 *)
	}

IL_001d:
	{
		return;
	}
}
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamReader_t1485_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReaderMethodDeclarations.h"

extern TypeInfo BooleanU5BU5D_t972_il2cpp_TypeInfo;
extern Il2CppType BooleanU5BU5D_t972_0_0_0;
extern MethodInfo UnexceptionalStreamReader_CheckEOL_m8042_MethodInfo;


// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamReader__ctor_m8037_MethodInfo;
extern "C" void UnexceptionalStreamReader__ctor_m8037 (UnexceptionalStreamReader_t1485 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1223 * L_0 = ___stream;
		Encoding_t514 * L_1 = ___encoding;
		StreamReader__ctor_m7956(__this, L_0, L_1, /*hidden argument*/&StreamReader__ctor_m7956_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern MethodInfo UnexceptionalStreamReader__cctor_m8038_MethodInfo;
extern TypeInfo* BooleanU5BU5D_t972_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamReader__cctor_m8038 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool UnexceptionalStreamReader__cctor_m8038_init;
	if (!UnexceptionalStreamReader__cctor_m8038_init)
	{
		BooleanU5BU5D_t972_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&BooleanU5BU5D_t972_0_0_0);
		UnexceptionalStreamReader__cctor_m8038_init = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Environment_get_NewLine_m4857(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m4857_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1669(L_0, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14 = ((BooleanU5BU5D_t972*)SZArrayNew(BooleanU5BU5D_t972_il2cpp_TypeInfo_var, L_1));
		String_t* L_2 = Environment_get_NewLine_m4857(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m4857_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1669(L_3, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m1685(L_5, 0, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newlineChar_15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern MethodInfo UnexceptionalStreamReader_Peek_m8039_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Peek_m8039 (UnexceptionalStreamReader_t1485 * __this, MethodInfo* method)
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
			int32_t L_0 = StreamReader_Peek_m7965(__this, /*hidden argument*/&StreamReader_Peek_m7965_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1300_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern MethodInfo UnexceptionalStreamReader_Read_m8040_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m8040 (UnexceptionalStreamReader_t1485 * __this, MethodInfo* method)
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
			int32_t L_0 = StreamReader_Read_m7966(__this, /*hidden argument*/&StreamReader_Read_m7966_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1300_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamReader_Read_m8041_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m8041 (UnexceptionalStreamReader_t1485 * __this, CharU5BU5D_t197* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CharU5BU5D_t197* L_0 = ___dest_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1637, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_3 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_3, (String_t*) &_stringLiteral345, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t715 * L_5 = (ArgumentOutOfRangeException_t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t715_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m3495(L_5, (String_t*) &_stringLiteral427, (String_t*) &_stringLiteral744, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m3495_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = ___index;
		CharU5BU5D_t197* L_7 = ___dest_buffer;
		NullCheck(L_7);
		int32_t L_8 = ___count;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t332 * L_9 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_9, (String_t*) &_stringLiteral1638, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		uint16_t L_10 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newlineChar_15;
		V_1 = L_10;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0053:
		{
			int32_t L_11 = StreamReader_Read_m7966(__this, /*hidden argument*/&StreamReader_Read_m7966_MethodInfo);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((((int32_t)L_12) >= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_005e:
		{
			goto IL_0097;
		}

IL_0060:
		{
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
			int32_t L_14 = ___count;
			___count = ((int32_t)((int32_t)L_14-(int32_t)1));
			CharU5BU5D_t197* L_15 = ___dest_buffer;
			int32_t L_16 = ___index;
			int32_t L_17 = V_2;
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
			*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_16)) = (uint16_t)(((uint16_t)L_17));
			uint16_t L_18 = V_1;
			if (!L_18)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			int32_t L_19 = V_2;
			uint16_t L_20 = V_1;
			if ((!(((uint32_t)(((uint16_t)L_19))) == ((uint32_t)L_20))))
			{
				goto IL_007c;
			}
		}

IL_0078:
		{
			int32_t L_21 = V_0;
			V_3 = L_21;
			goto IL_009e;
		}

IL_007c:
		{
			goto IL_008c;
		}

IL_007e:
		{
			int32_t L_22 = V_2;
			bool L_23 = UnexceptionalStreamReader_CheckEOL_m8042(__this, (((uint16_t)L_22)), /*hidden argument*/&UnexceptionalStreamReader_CheckEOL_m8042_MethodInfo);
			if (!L_23)
			{
				goto IL_008c;
			}
		}

IL_0088:
		{
			int32_t L_24 = V_0;
			V_3 = L_24;
			goto IL_009e;
		}

IL_008c:
		{
			int32_t L_25 = ___index;
			___index = ((int32_t)((int32_t)L_25+(int32_t)1));
		}

IL_0093:
		{
			int32_t L_26 = ___count;
			if ((((int32_t)L_26) > ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0097:
		{
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1300_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0099;
		throw e;
	}

CATCH_0099:
	{ // begin catch(System.IO.IOException)
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_009e:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m8042 (UnexceptionalStreamReader_t1485 * __this, uint16_t ___current, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		BooleanU5BU5D_t972* L_0 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = ___current;
		String_t* L_4 = Environment_get_NewLine_m4857(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m4857_MethodInfo);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m1685(L_4, L_5, /*hidden argument*/&String_get_Chars_m1685_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		BooleanU5BU5D_t972* L_7 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		BooleanU5BU5D_t972* L_10 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_10);
		return ((((int32_t)L_9) == ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))))? 1 : 0);
	}

IL_0030:
	{
		goto IL_0040;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		BooleanU5BU5D_t972* L_13 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0004;
		}
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		BooleanU5BU5D_t972* L_14 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo));
		BooleanU5BU5D_t972* L_18 = ((UnexceptionalStreamReader_t1485_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1485_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern MethodInfo UnexceptionalStreamReader_ReadLine_m8043_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m8043 (UnexceptionalStreamReader_t1485 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
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
			String_t* L_0 = StreamReader_ReadLine_m7969(__this, /*hidden argument*/&StreamReader_ReadLine_m7969_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1300_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern MethodInfo UnexceptionalStreamReader_ReadToEnd_m8044_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m8044 (UnexceptionalStreamReader_t1485 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
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
			String_t* L_0 = StreamReader_ReadToEnd_m7970(__this, /*hidden argument*/&StreamReader_ReadToEnd_m7970_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1300_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamWriter_t1486_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriterMethodDeclarations.h"



// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamWriter__ctor_m8045_MethodInfo;
extern "C" void UnexceptionalStreamWriter__ctor_m8045 (UnexceptionalStreamWriter_t1486 * __this, Stream_t1223 * ___stream, Encoding_t514 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1223 * L_0 = ___stream;
		Encoding_t514 * L_1 = ___encoding;
		StreamWriter__ctor_m7971(__this, L_0, L_1, /*hidden argument*/&StreamWriter__ctor_m7971_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern MethodInfo UnexceptionalStreamWriter_Flush_m8046_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Flush_m8046 (UnexceptionalStreamWriter_t1486 * __this, MethodInfo* method)
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
		StreamWriter_Flush_m7977(__this, /*hidden argument*/&StreamWriter_Flush_m7977_MethodInfo);
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamWriter_Write_m8047_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m8047 (UnexceptionalStreamWriter_t1486 * __this, CharU5BU5D_t197* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
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
		CharU5BU5D_t197* L_0 = ___buffer;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		StreamWriter_Write_m7980(__this, L_0, L_1, L_2, /*hidden argument*/&StreamWriter_Write_m7980_MethodInfo);
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern MethodInfo UnexceptionalStreamWriter_Write_m8048_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m8048 (UnexceptionalStreamWriter_t1486 * __this, uint16_t ___value, MethodInfo* method)
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
		uint16_t L_0 = ___value;
		StreamWriter_Write_m7983(__this, L_0, /*hidden argument*/&StreamWriter_Write_m7983_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern MethodInfo UnexceptionalStreamWriter_Write_m8049_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m8049 (UnexceptionalStreamWriter_t1486 * __this, CharU5BU5D_t197* ___value, MethodInfo* method)
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
		CharU5BU5D_t197* L_0 = ___value;
		StreamWriter_Write_m7984(__this, L_0, /*hidden argument*/&StreamWriter_Write_m7984_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern MethodInfo UnexceptionalStreamWriter_Write_m8050_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m8050 (UnexceptionalStreamWriter_t1486 * __this, String_t* ___value, MethodInfo* method)
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
		String_t* L_0 = ___value;
		StreamWriter_Write_m7985(__this, L_0, /*hidden argument*/&StreamWriter_Write_m7985_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyBuilder_t1488_il2cpp_TypeInfo;
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
extern TypeInfo ModuleU5BU5D_t1489_il2cpp_TypeInfo;
extern TypeInfo Module_t1318_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Assembly_t1112_il2cpp_TypeInfo;
extern TypeInfo AssemblyName_t1490_il2cpp_TypeInfo;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
extern Il2CppType ModuleU5BU5D_t1489_0_0_0;
extern MethodInfo AssemblyBuilder_not_supported_m8054_MethodInfo;
extern MethodInfo Array_Clone_m4799_MethodInfo;
extern MethodInfo Assembly_UnprotectedGetName_m8285_MethodInfo;
extern MethodInfo StrongName_get_PublicKey_m7315_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKey_m8303_MethodInfo;
extern MethodInfo StrongName_get_PublicKeyToken_m7316_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKeyToken_m8304_MethodInfo;


// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern MethodInfo AssemblyBuilder_get_Location_m8051_MethodInfo;
extern "C" String_t* AssemblyBuilder_get_Location_m8051 (AssemblyBuilder_t1488 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = AssemblyBuilder_not_supported_m8054(__this, /*hidden argument*/&AssemblyBuilder_not_supported_m8054_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern MethodInfo AssemblyBuilder_GetModulesInternal_m8052_MethodInfo;
extern TypeInfo* ModuleU5BU5D_t1489_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1489* AssemblyBuilder_GetModulesInternal_m8052 (AssemblyBuilder_t1488 * __this, MethodInfo* method)
{
	static bool AssemblyBuilder_GetModulesInternal_m8052_init;
	if (!AssemblyBuilder_GetModulesInternal_m8052_init)
	{
		ModuleU5BU5D_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1489_0_0_0);
		AssemblyBuilder_GetModulesInternal_m8052_init = true;
	}
	{
		ModuleBuilderU5BU5D_t1487* L_0 = (__this->___modules_10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ModuleU5BU5D_t1489*)SZArrayNew(ModuleU5BU5D_t1489_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ModuleBuilderU5BU5D_t1487* L_1 = (__this->___modules_10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Array_Clone_m4799_MethodInfo, L_1);
		return ((ModuleU5BU5D_t1489*)Castclass(L_2, ModuleU5BU5D_t1489_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern MethodInfo AssemblyBuilder_get_IsCompilerContext_m8053_MethodInfo;
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m8053 (AssemblyBuilder_t1488 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_compiler_context_14);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t293 * AssemblyBuilder_not_supported_m8054 (AssemblyBuilder_t1488 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern MethodInfo AssemblyBuilder_UnprotectedGetName_m8055_MethodInfo;
extern "C" AssemblyName_t1490 * AssemblyBuilder_UnprotectedGetName_m8055 (AssemblyBuilder_t1488 * __this, MethodInfo* method)
{
	AssemblyName_t1490 * V_0 = {0};
	{
		AssemblyName_t1490 * L_0 = Assembly_UnprotectedGetName_m8285(__this, /*hidden argument*/&Assembly_UnprotectedGetName_m8285_MethodInfo);
		V_0 = L_0;
		StrongName_t1401 * L_1 = (__this->___sn_13);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AssemblyName_t1490 * L_2 = V_0;
		StrongName_t1401 * L_3 = (__this->___sn_13);
		NullCheck(L_3);
		ByteU5BU5D_t515* L_4 = StrongName_get_PublicKey_m7315(L_3, /*hidden argument*/&StrongName_get_PublicKey_m7315_MethodInfo);
		NullCheck(L_2);
		AssemblyName_SetPublicKey_m8303(L_2, L_4, /*hidden argument*/&AssemblyName_SetPublicKey_m8303_MethodInfo);
		AssemblyName_t1490 * L_5 = V_0;
		StrongName_t1401 * L_6 = (__this->___sn_13);
		NullCheck(L_6);
		ByteU5BU5D_t515* L_7 = StrongName_get_PublicKeyToken_m7316(L_6, /*hidden argument*/&StrongName_get_PublicKeyToken_m7316_MethodInfo);
		NullCheck(L_5);
		AssemblyName_SetPublicKeyToken_m8304(L_5, L_7, /*hidden argument*/&AssemblyName_SetPublicKeyToken_m8304_MethodInfo);
	}

IL_0031:
	{
		AssemblyName_t1490 * L_8 = V_0;
		return L_8;
	}
}
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ConstructorBuilder_t1493_il2cpp_TypeInfo;
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
extern TypeInfo ConstructorInfo_t624_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo TypeBuilder_t1491_il2cpp_TypeInfo;
extern TypeInfo ModuleBuilder_t1501_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t741_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t742_il2cpp_TypeInfo;
extern TypeInfo MonoCustomAttrs_t1816_il2cpp_TypeInfo;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
extern Il2CppType ParameterInfoU5BU5D_t741_0_0_0;
extern MethodInfo ConstructorBuilder_not_supported_m8073_MethodInfo;
extern MethodInfo MemberInfo_get_Module_m6837_MethodInfo;
extern MethodInfo ConstructorBuilder_get_TypeBuilder_m8057_MethodInfo;
extern MethodInfo TypeBuilder_get_Module_m8225_MethodInfo;
extern MethodInfo Module_get_Assembly_m8377_MethodInfo;
extern MethodInfo TypeBuilder_get_is_created_m8255_MethodInfo;
extern MethodInfo ConstructorBuilder_get_IsCompilerContext_m8072_MethodInfo;
extern MethodInfo ConstructorBuilder_not_created_m8074_MethodInfo;
extern MethodInfo ConstructorBuilder_GetParametersInternal_m8059_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m8505_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo;
extern MethodInfo TypeBuilder_get_Name_m8226_MethodInfo;


// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern MethodInfo ConstructorBuilder_get_CallingConvention_m8056_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m8056 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_4);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1491 * ConstructorBuilder_get_TypeBuilder_m8057 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern MethodInfo ConstructorBuilder_GetParameters_m8058_MethodInfo;
extern "C" ParameterInfoU5BU5D_t741* ConstructorBuilder_GetParameters_m8058 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m8072(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m8072_MethodInfo);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t293 * L_3 = ConstructorBuilder_not_created_m8074(__this, /*hidden argument*/&ConstructorBuilder_not_created_m8074_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ParameterInfoU5BU5D_t741* L_4 = ConstructorBuilder_GetParametersInternal_m8059(__this, /*hidden argument*/&ConstructorBuilder_GetParametersInternal_m8059_MethodInfo);
		return L_4;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern TypeInfo* ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t741* ConstructorBuilder_GetParametersInternal_m8059 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	static bool ConstructorBuilder_GetParametersInternal_m8059_init;
	if (!ConstructorBuilder_GetParametersInternal_m8059_init)
	{
		ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t741_0_0_0);
		ConstructorBuilder_GetParametersInternal_m8059_init = true;
	}
	ParameterInfoU5BU5D_t741* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t741* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t741* G_B4_1 = {0};
	ParameterBuilder_t1502 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t741* G_B6_2 = {0};
	{
		TypeU5BU5D_t618* L_0 = (__this->___parameters_2);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t618* L_1 = (__this->___parameters_2);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterInfoU5BU5D_t741* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterBuilderU5BU5D_t1492* L_4 = (__this->___pinfo_6);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t1502 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t1492* L_5 = (__this->___pinfo_6);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t1502 **)(ParameterBuilder_t1502 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t618* L_8 = (__this->___parameters_2);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		ParameterInfo_t742 * L_12 = (ParameterInfo_t742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t742_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8505(L_12, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m8505_MethodInfo);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t742 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t618* L_15 = (__this->___parameters_2);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_16 = V_0;
		return L_16;
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m8060_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m8060 (ConstructorBuilder_t1493 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m8061_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m8061 (ConstructorBuilder_t1493 * __this, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern MethodInfo ConstructorBuilder_get_MethodHandle_m8062_MethodInfo;
extern "C" RuntimeMethodHandle_t1494  ConstructorBuilder_get_MethodHandle_m8062 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern MethodInfo ConstructorBuilder_get_Attributes_m8063_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_Attributes_m8063 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_3);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern MethodInfo ConstructorBuilder_get_ReflectedType_m8064_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m8064 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern MethodInfo ConstructorBuilder_get_DeclaringType_m8065_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m8065 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern MethodInfo ConstructorBuilder_get_Name_m8066_MethodInfo;
extern "C" String_t* ConstructorBuilder_get_Name_m8066 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___attrs_3);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo));
		String_t* L_1 = ((ConstructorInfo_t624_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo));
		String_t* L_2 = ((ConstructorInfo_t624_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_IsDefined_m8067_MethodInfo;
extern "C" bool ConstructorBuilder_IsDefined_m8067 (ConstructorBuilder_t1493 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m8068_MethodInfo;
extern "C" ObjectU5BU5D_t288* ConstructorBuilder_GetCustomAttributes_m8068 (ConstructorBuilder_t1493 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m8072(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m8072_MethodInfo);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_4 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_4;
	}

IL_001d:
	{
		Exception_t293 * L_5 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m8069_MethodInfo;
extern "C" ObjectU5BU5D_t288* ConstructorBuilder_GetCustomAttributes_m8069 (ConstructorBuilder_t1493 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m8072(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m8072_MethodInfo);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_5 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_5;
	}

IL_001e:
	{
		Exception_t293 * L_6 = ConstructorBuilder_not_supported_m8073(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m8073_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern MethodInfo ConstructorBuilder_get_Module_m8070_MethodInfo;
extern "C" Module_t1318 * ConstructorBuilder_get_Module_m8070 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		Module_t1318 * L_0 = MemberInfo_get_Module_m6837(__this, /*hidden argument*/&MemberInfo_get_Module_m6837_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern MethodInfo ConstructorBuilder_ToString_m8071_MethodInfo;
extern "C" String_t* ConstructorBuilder_ToString_m8071 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m8226_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m1649(NULL /*static, unused*/, (String_t*) &_stringLiteral1640, L_1, (String_t*) &_stringLiteral1641, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m8072 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	ModuleBuilder_t1501 * V_0 = {0};
	AssemblyBuilder_t1488 * V_1 = {0};
	{
		TypeBuilder_t1491 * L_0 = ConstructorBuilder_get_TypeBuilder_m8057(__this, /*hidden argument*/&ConstructorBuilder_get_TypeBuilder_m8057_MethodInfo);
		NullCheck(L_0);
		Module_t1318 * L_1 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&TypeBuilder_get_Module_m8225_MethodInfo, L_0);
		V_0 = ((ModuleBuilder_t1501 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo)));
		ModuleBuilder_t1501 * L_2 = V_0;
		NullCheck(L_2);
		Assembly_t1112 * L_3 = Module_get_Assembly_m8377(L_2, /*hidden argument*/&Module_get_Assembly_m8377_MethodInfo);
		V_1 = ((AssemblyBuilder_t1488 *)Castclass(L_3, InitializedTypeInfo(&AssemblyBuilder_t1488_il2cpp_TypeInfo)));
		AssemblyBuilder_t1488 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = AssemblyBuilder_get_IsCompilerContext_m8053(L_4, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m8053_MethodInfo);
		return L_5;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t293 * ConstructorBuilder_not_supported_m8073 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t293 * ConstructorBuilder_not_created_m8074 (ConstructorBuilder_t1493 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1642, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnumBuilder_t1495_il2cpp_TypeInfo;
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilderMethodDeclarations.h"

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo RuntimeTypeHandle_t1317_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t744_il2cpp_TypeInfo;
extern TypeInfo Binder_t748_il2cpp_TypeInfo;
extern TypeInfo CallingConventions_t1516_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t618_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t749_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t750_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfoU5BU5D_t739_il2cpp_TypeInfo;
extern TypeInfo EventInfo_t_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo FieldInfoU5BU5D_t745_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t1319_il2cpp_TypeInfo;
extern TypeInfo PropertyInfoU5BU5D_t743_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t433_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo TypeBuilder_get_Assembly_m8219_MethodInfo;
extern MethodInfo TypeBuilder_get_AssemblyQualifiedName_m8220_MethodInfo;
extern MethodInfo TypeBuilder_get_BaseType_m8221_MethodInfo;
extern MethodInfo TypeBuilder_get_DeclaringType_m8222_MethodInfo;
extern MethodInfo TypeBuilder_get_FullName_m8224_MethodInfo;
extern MethodInfo TypeBuilder_get_Namespace_m8227_MethodInfo;
extern MethodInfo TypeBuilder_get_ReflectedType_m8228_MethodInfo;
extern MethodInfo TypeBuilder_get_TypeHandle_m8253_MethodInfo;
extern MethodInfo Type_GetConstructor_m6823_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructors_m8233_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m8231_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m8232_MethodInfo;
extern MethodInfo TypeBuilder_GetElementType_m8235_MethodInfo;
extern MethodInfo TypeBuilder_GetEvent_m8236_MethodInfo;
extern MethodInfo TypeBuilder_GetField_m8237_MethodInfo;
extern MethodInfo TypeBuilder_GetFields_m8238_MethodInfo;
extern MethodInfo TypeBuilder_GetInterfaces_m8239_MethodInfo;
extern MethodInfo Type_GetMethod_m6812_MethodInfo;
extern MethodInfo Type_GetMethod_m6813_MethodInfo;
extern MethodInfo TypeBuilder_GetMethods_m8241_MethodInfo;
extern MethodInfo TypeBuilder_GetProperties_m8243_MethodInfo;
extern MethodInfo EnumBuilder_CreateNotSupportedException_m8108_MethodInfo;
extern MethodInfo Type_get_HasElementType_m6781_MethodInfo;
extern MethodInfo TypeBuilder_InvokeMember_m8246_MethodInfo;
extern MethodInfo TypeBuilder_IsDefined_m8230_MethodInfo;


// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern MethodInfo EnumBuilder_get_Assembly_m8075_MethodInfo;
extern "C" Assembly_t1112 * EnumBuilder_get_Assembly_m8075 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Assembly_t1112 * L_1 = (Assembly_t1112 *)VirtFuncInvoker0< Assembly_t1112 * >::Invoke(&TypeBuilder_get_Assembly_m8219_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern MethodInfo EnumBuilder_get_AssemblyQualifiedName_m8076_MethodInfo;
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m8076 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_AssemblyQualifiedName_m8220_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern MethodInfo EnumBuilder_get_BaseType_m8077_MethodInfo;
extern "C" Type_t * EnumBuilder_get_BaseType_m8077 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_BaseType_m8221_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern MethodInfo EnumBuilder_get_DeclaringType_m8078_MethodInfo;
extern "C" Type_t * EnumBuilder_get_DeclaringType_m8078 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_DeclaringType_m8222_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern MethodInfo EnumBuilder_get_FullName_m8079_MethodInfo;
extern "C" String_t* EnumBuilder_get_FullName_m8079 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m8224_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern MethodInfo EnumBuilder_get_Module_m8080_MethodInfo;
extern "C" Module_t1318 * EnumBuilder_get_Module_m8080 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Module_t1318 * L_1 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&TypeBuilder_get_Module_m8225_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern MethodInfo EnumBuilder_get_Name_m8081_MethodInfo;
extern "C" String_t* EnumBuilder_get_Name_m8081 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m8226_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern MethodInfo EnumBuilder_get_Namespace_m8082_MethodInfo;
extern "C" String_t* EnumBuilder_get_Namespace_m8082 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Namespace_m8227_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern MethodInfo EnumBuilder_get_ReflectedType_m8083_MethodInfo;
extern "C" Type_t * EnumBuilder_get_ReflectedType_m8083 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_ReflectedType_m8228_MethodInfo, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern MethodInfo EnumBuilder_get_TypeHandle_m8084_MethodInfo;
extern "C" RuntimeTypeHandle_t1317  EnumBuilder_get_TypeHandle_m8084 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t1317  L_1 = (RuntimeTypeHandle_t1317 )VirtFuncInvoker0< RuntimeTypeHandle_t1317  >::Invoke(&TypeBuilder_get_TypeHandle_m8253_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern MethodInfo EnumBuilder_get_UnderlyingSystemType_m8085_MethodInfo;
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m8085 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____underlyingType_9);
		return L_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern MethodInfo EnumBuilder_GetAttributeFlagsImpl_m8086_MethodInfo;
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m8086 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_17);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetConstructorImpl_m8087_MethodInfo;
extern "C" ConstructorInfo_t624 * EnumBuilder_GetConstructorImpl_m8087 (EnumBuilder_t1495 * __this, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t748 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t618* L_4 = ___types;
		ParameterModifierU5BU5D_t749* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t624 * L_6 = (ConstructorInfo_t624 *)VirtFuncInvoker5< ConstructorInfo_t624 *, int32_t, Binder_t748 *, int32_t, TypeU5BU5D_t618*, ParameterModifierU5BU5D_t749* >::Invoke(&Type_GetConstructor_m6823_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetConstructors_m8088_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t739* EnumBuilder_GetConstructors_m8088 (EnumBuilder_t1495 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t739* L_2 = (ConstructorInfoU5BU5D_t739*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t739*, int32_t >::Invoke(&TypeBuilder_GetConstructors_m8233_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m8089_MethodInfo;
extern "C" ObjectU5BU5D_t288* EnumBuilder_GetCustomAttributes_m8089 (EnumBuilder_t1495 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t288* L_2 = (ObjectU5BU5D_t288*)VirtFuncInvoker1< ObjectU5BU5D_t288*, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m8231_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m8090_MethodInfo;
extern "C" ObjectU5BU5D_t288* EnumBuilder_GetCustomAttributes_m8090 (EnumBuilder_t1495 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t288* L_3 = (ObjectU5BU5D_t288*)VirtFuncInvoker2< ObjectU5BU5D_t288*, Type_t *, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m8232_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern MethodInfo EnumBuilder_GetElementType_m8091_MethodInfo;
extern "C" Type_t * EnumBuilder_GetElementType_m8091 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_GetElementType_m8235_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetEvent_m8092_MethodInfo;
extern "C" EventInfo_t * EnumBuilder_GetEvent_m8092 (EnumBuilder_t1495 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&TypeBuilder_GetEvent_m8236_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetField_m8093_MethodInfo;
extern "C" FieldInfo_t * EnumBuilder_GetField_m8093 (EnumBuilder_t1495 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&TypeBuilder_GetField_m8237_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetFields_m8094_MethodInfo;
extern "C" FieldInfoU5BU5D_t745* EnumBuilder_GetFields_m8094 (EnumBuilder_t1495 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfoU5BU5D_t745* L_2 = (FieldInfoU5BU5D_t745*)VirtFuncInvoker1< FieldInfoU5BU5D_t745*, int32_t >::Invoke(&TypeBuilder_GetFields_m8238_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern MethodInfo EnumBuilder_GetInterfaces_m8095_MethodInfo;
extern "C" TypeU5BU5D_t618* EnumBuilder_GetInterfaces_m8095 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		TypeU5BU5D_t618* L_1 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&TypeBuilder_GetInterfaces_m8239_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetMethodImpl_m8096_MethodInfo;
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m8096 (EnumBuilder_t1495 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		TypeU5BU5D_t618* L_0 = ___types;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeBuilder_t1491 * L_1 = (__this->____tb_8);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6812_MethodInfo, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		TypeBuilder_t1491 * L_5 = (__this->____tb_8);
		String_t* L_6 = ___name;
		int32_t L_7 = ___bindingAttr;
		Binder_t748 * L_8 = ___binder;
		int32_t L_9 = ___callConvention;
		TypeU5BU5D_t618* L_10 = ___types;
		ParameterModifierU5BU5D_t749* L_11 = ___modifiers;
		NullCheck(L_5);
		MethodInfo_t * L_12 = (MethodInfo_t *)VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t748 *, int32_t, TypeU5BU5D_t618*, ParameterModifierU5BU5D_t749* >::Invoke(&Type_GetMethod_m6813_MethodInfo, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetMethods_m8097_MethodInfo;
extern "C" MethodInfoU5BU5D_t1319* EnumBuilder_GetMethods_m8097 (EnumBuilder_t1495 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t1319* L_2 = (MethodInfoU5BU5D_t1319*)VirtFuncInvoker1< MethodInfoU5BU5D_t1319*, int32_t >::Invoke(&TypeBuilder_GetMethods_m8241_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetProperties_m8098_MethodInfo;
extern "C" PropertyInfoU5BU5D_t743* EnumBuilder_GetProperties_m8098 (EnumBuilder_t1495 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t743* L_2 = (PropertyInfoU5BU5D_t743*)VirtFuncInvoker1< PropertyInfoU5BU5D_t743*, int32_t >::Invoke(&TypeBuilder_GetProperties_m8243_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetPropertyImpl_m8099_MethodInfo;
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m8099 (EnumBuilder_t1495 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, Type_t * ___returnType, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = EnumBuilder_CreateNotSupportedException_m8108(__this, /*hidden argument*/&EnumBuilder_CreateNotSupportedException_m8108_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern MethodInfo EnumBuilder_HasElementTypeImpl_m8100_MethodInfo;
extern "C" bool EnumBuilder_HasElementTypeImpl_m8100 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6781_MethodInfo, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo EnumBuilder_InvokeMember_m8101_MethodInfo;
extern "C" Object_t * EnumBuilder_InvokeMember_m8101 (EnumBuilder_t1495 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t748 * ___binder, Object_t * ___target, ObjectU5BU5D_t288* ___args, ParameterModifierU5BU5D_t749* ___modifiers, CultureInfo_t714 * ___culture, StringU5BU5D_t433* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t748 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t288* L_5 = ___args;
		ParameterModifierU5BU5D_t749* L_6 = ___modifiers;
		CultureInfo_t714 * L_7 = ___culture;
		StringU5BU5D_t433* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t748 *, Object_t *, ObjectU5BU5D_t288*, ParameterModifierU5BU5D_t749*, CultureInfo_t714 *, StringU5BU5D_t433* >::Invoke(&TypeBuilder_InvokeMember_m8246_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern MethodInfo EnumBuilder_IsArrayImpl_m8102_MethodInfo;
extern "C" bool EnumBuilder_IsArrayImpl_m8102 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern MethodInfo EnumBuilder_IsByRefImpl_m8103_MethodInfo;
extern "C" bool EnumBuilder_IsByRefImpl_m8103 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern MethodInfo EnumBuilder_IsPointerImpl_m8104_MethodInfo;
extern "C" bool EnumBuilder_IsPointerImpl_m8104 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern MethodInfo EnumBuilder_IsPrimitiveImpl_m8105_MethodInfo;
extern "C" bool EnumBuilder_IsPrimitiveImpl_m8105 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern MethodInfo EnumBuilder_IsValueTypeImpl_m8106_MethodInfo;
extern "C" bool EnumBuilder_IsValueTypeImpl_m8106 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_IsDefined_m8107_MethodInfo;
extern "C" bool EnumBuilder_IsDefined_m8107 (EnumBuilder_t1495 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(&TypeBuilder_IsDefined_m8230_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t293 * EnumBuilder_CreateNotSupportedException_m8108 (EnumBuilder_t1495 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FieldBuilder_t1497_il2cpp_TypeInfo;
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilderMethodDeclarations.h"

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
extern MethodInfo FieldBuilder_CreateNotSupportedException_m8122_MethodInfo;


// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern MethodInfo FieldBuilder_get_Attributes_m8109_MethodInfo;
extern "C" int32_t FieldBuilder_get_Attributes_m8109 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern MethodInfo FieldBuilder_get_DeclaringType_m8110_MethodInfo;
extern "C" Type_t * FieldBuilder_get_DeclaringType_m8110 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern MethodInfo FieldBuilder_get_FieldHandle_m8111_MethodInfo;
extern "C" RuntimeFieldHandle_t1320  FieldBuilder_get_FieldHandle_m8111 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern MethodInfo FieldBuilder_get_FieldType_m8112_MethodInfo;
extern "C" Type_t * FieldBuilder_get_FieldType_m8112 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern MethodInfo FieldBuilder_get_Name_m8113_MethodInfo;
extern "C" String_t* FieldBuilder_get_Name_m8113 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern MethodInfo FieldBuilder_get_ReflectedType_m8114_MethodInfo;
extern "C" Type_t * FieldBuilder_get_ReflectedType_m8114 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m8115_MethodInfo;
extern "C" ObjectU5BU5D_t288* FieldBuilder_GetCustomAttributes_m8115 (FieldBuilder_t1497 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_3 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_2, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_3;
	}

IL_0015:
	{
		Exception_t293 * L_4 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m8116_MethodInfo;
extern "C" ObjectU5BU5D_t288* FieldBuilder_GetCustomAttributes_m8116 (FieldBuilder_t1497 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_4 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_4;
	}

IL_0016:
	{
		Exception_t293 * L_5 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern MethodInfo FieldBuilder_GetValue_m8117_MethodInfo;
extern "C" Object_t * FieldBuilder_GetValue_m8117 (FieldBuilder_t1497 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_IsDefined_m8118_MethodInfo;
extern "C" bool FieldBuilder_IsDefined_m8118 (FieldBuilder_t1497 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern MethodInfo FieldBuilder_GetFieldOffset_m8119_MethodInfo;
extern "C" int32_t FieldBuilder_GetFieldOffset_m8119 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo FieldBuilder_SetValue_m8120_MethodInfo;
extern "C" void FieldBuilder_SetValue_m8120 (FieldBuilder_t1497 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t748 * ___binder, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = FieldBuilder_CreateNotSupportedException_m8122(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m8122_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern MethodInfo FieldBuilder_get_UMarshal_m8121_MethodInfo;
extern "C" UnmanagedMarshal_t1496 * FieldBuilder_get_UMarshal_m8121 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1496 * L_0 = (__this->___marshal_info_4);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C" Exception_t293 * FieldBuilder_CreateNotSupportedException_m8122 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern MethodInfo FieldBuilder_get_Module_m8123_MethodInfo;
extern "C" Module_t1318 * FieldBuilder_get_Module_m8123 (FieldBuilder_t1497 * __this, MethodInfo* method)
{
	{
		Module_t1318 * L_0 = MemberInfo_get_Module_m6837(__this, /*hidden argument*/&MemberInfo_get_Module_m6837_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericTypeParameterBuilder_t1499_il2cpp_TypeInfo;
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilderMethodDeclarations.h"

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
extern TypeInfo MethodBuilder_t1498_il2cpp_TypeInfo;
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"
extern MethodInfo MethodBuilder_get_DeclaringType_m8175_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_DeclaringType_m8157_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_not_supported_m8166_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_BaseType_m8149_MethodInfo;
extern MethodInfo Type_IsSubclassOf_m6808_MethodInfo;
extern MethodInfo Type_get_IsValueType_m6793_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4771_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;
extern MethodInfo Type_Equals_m6797_MethodInfo;
extern MethodInfo Type_GetHashCode_m6810_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3613_MethodInfo;


// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsSubclassOf_m8124_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m8124 (GenericTypeParameterBuilder_t1499 * __this, Type_t * ___c, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		TypeBuilder_t1491 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1318 * L_1 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&TypeBuilder_get_Module_m8225_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1501 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo))));
		AssemblyBuilder_t1488 * L_2 = (((ModuleBuilder_t1501 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m8053(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m8053_MethodInfo);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t293 * L_4 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m8149_MethodInfo, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m8149_MethodInfo, __this);
		Type_t * L_7 = ___c;
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m8149_MethodInfo, __this);
		Type_t * L_9 = ___c;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6808_MethodInfo, L_8, L_9);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern MethodInfo GenericTypeParameterBuilder_GetAttributeFlagsImpl_m8125_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m8125 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1318 * L_1 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&TypeBuilder_get_Module_m8225_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1501 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo))));
		AssemblyBuilder_t1488 * L_2 = (((ModuleBuilder_t1501 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m8053(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m8053_MethodInfo);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Exception_t293 * L_4 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetConstructorImpl_m8126_MethodInfo;
extern "C" ConstructorInfo_t624 * GenericTypeParameterBuilder_GetConstructorImpl_m8126 (GenericTypeParameterBuilder_t1499 * __this, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetConstructors_m8127_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t739* GenericTypeParameterBuilder_GetConstructors_m8127 (GenericTypeParameterBuilder_t1499 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetEvent_m8128_MethodInfo;
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m8128 (GenericTypeParameterBuilder_t1499 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetField_m8129_MethodInfo;
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m8129 (GenericTypeParameterBuilder_t1499 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetFields_m8130_MethodInfo;
extern "C" FieldInfoU5BU5D_t745* GenericTypeParameterBuilder_GetFields_m8130 (GenericTypeParameterBuilder_t1499 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern MethodInfo GenericTypeParameterBuilder_GetInterfaces_m8131_MethodInfo;
extern "C" TypeU5BU5D_t618* GenericTypeParameterBuilder_GetInterfaces_m8131 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetMethods_m8132_MethodInfo;
extern "C" MethodInfoU5BU5D_t1319* GenericTypeParameterBuilder_GetMethods_m8132 (GenericTypeParameterBuilder_t1499 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetMethodImpl_m8133_MethodInfo;
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m8133 (GenericTypeParameterBuilder_t1499 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetProperties_m8134_MethodInfo;
extern "C" PropertyInfoU5BU5D_t743* GenericTypeParameterBuilder_GetProperties_m8134 (GenericTypeParameterBuilder_t1499 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetPropertyImpl_m8135_MethodInfo;
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m8135 (GenericTypeParameterBuilder_t1499 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, Type_t * ___returnType, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_HasElementTypeImpl_m8136_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m8136 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsAssignableFrom_m8137_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m8137 (GenericTypeParameterBuilder_t1499 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern MethodInfo GenericTypeParameterBuilder_IsInstanceOfType_m8138_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m8138 (GenericTypeParameterBuilder_t1499 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern MethodInfo GenericTypeParameterBuilder_IsArrayImpl_m8139_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m8139 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern MethodInfo GenericTypeParameterBuilder_IsByRefImpl_m8140_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m8140 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPointerImpl_m8141_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m8141 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPrimitiveImpl_m8142_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m8142 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_IsValueTypeImpl_m8143_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m8143 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = (__this->___base_type_11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___base_type_11);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6793_MethodInfo, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo GenericTypeParameterBuilder_InvokeMember_m8144_MethodInfo;
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m8144 (GenericTypeParameterBuilder_t1499 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t748 * ___binder, Object_t * ___target, ObjectU5BU5D_t288* ___args, ParameterModifierU5BU5D_t749* ___modifiers, CultureInfo_t714 * ___culture, StringU5BU5D_t433* ___namedParameters, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern MethodInfo GenericTypeParameterBuilder_GetElementType_m8145_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m8145 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern MethodInfo GenericTypeParameterBuilder_get_UnderlyingSystemType_m8146_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m8146 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern MethodInfo GenericTypeParameterBuilder_get_Assembly_m8147_MethodInfo;
extern "C" Assembly_t1112 * GenericTypeParameterBuilder_get_Assembly_m8147 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Assembly_t1112 * L_1 = (Assembly_t1112 *)VirtFuncInvoker0< Assembly_t1112 * >::Invoke(&TypeBuilder_get_Assembly_m8219_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern MethodInfo GenericTypeParameterBuilder_get_AssemblyQualifiedName_m8148_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m8148 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m8149 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___base_type_11);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern MethodInfo GenericTypeParameterBuilder_get_FullName_m8150_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m8150 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_IsDefined_m8151_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsDefined_m8151 (GenericTypeParameterBuilder_t1499 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m8152_MethodInfo;
extern "C" ObjectU5BU5D_t288* GenericTypeParameterBuilder_GetCustomAttributes_m8152 (GenericTypeParameterBuilder_t1499 * __this, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m8153_MethodInfo;
extern "C" ObjectU5BU5D_t288* GenericTypeParameterBuilder_GetCustomAttributes_m8153 (GenericTypeParameterBuilder_t1499 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern MethodInfo GenericTypeParameterBuilder_get_Name_m8154_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m8154 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern MethodInfo GenericTypeParameterBuilder_get_Namespace_m8155_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m8155 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern MethodInfo GenericTypeParameterBuilder_get_Module_m8156_MethodInfo;
extern "C" Module_t1318 * GenericTypeParameterBuilder_get_Module_m8156 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1318 * L_1 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&TypeBuilder_get_Module_m8225_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m8157 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	Type_t * G_B3_0 = {0};
	{
		MethodBuilder_t1498 * L_0 = (__this->___mbuilder_9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MethodBuilder_t1498 * L_1 = (__this->___mbuilder_9);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodBuilder_get_DeclaringType_m8175_MethodInfo, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		TypeBuilder_t1491 * L_3 = (__this->___tbuilder_8);
		G_B3_0 = ((Type_t *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern MethodInfo GenericTypeParameterBuilder_get_ReflectedType_m8158_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m8158 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_DeclaringType_m8157_MethodInfo, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern MethodInfo GenericTypeParameterBuilder_get_TypeHandle_m8159_MethodInfo;
extern "C" RuntimeTypeHandle_t1317  GenericTypeParameterBuilder_get_TypeHandle_m8159 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = GenericTypeParameterBuilder_not_supported_m8166(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m8166_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern MethodInfo GenericTypeParameterBuilder_GetGenericArguments_m8160_MethodInfo;
extern "C" TypeU5BU5D_t618* GenericTypeParameterBuilder_GetGenericArguments_m8160 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t1107 * L_0 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4771(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_GetGenericTypeDefinition_m8161_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m8161 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t1107 * L_0 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4771(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern MethodInfo GenericTypeParameterBuilder_get_ContainsGenericParameters_m8162_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m8162 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericParameter_m8163_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m8163 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericType_m8164_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m8164 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m8165_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m8165 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t293 * GenericTypeParameterBuilder_not_supported_m8166 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern MethodInfo GenericTypeParameterBuilder_ToString_m8167_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_ToString_m8167 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern MethodInfo GenericTypeParameterBuilder_Equals_m8168_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_Equals_m8168 (GenericTypeParameterBuilder_t1499 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Type_Equals_m6797(__this, L_0, /*hidden argument*/&Type_Equals_m6797_MethodInfo);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern MethodInfo GenericTypeParameterBuilder_GetHashCode_m8169_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m8169 (GenericTypeParameterBuilder_t1499 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Type_GetHashCode_m6810(__this, /*hidden argument*/&Type_GetHashCode_m6810_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern MethodInfo GenericTypeParameterBuilder_MakeGenericType_m8170_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m8170 (GenericTypeParameterBuilder_t1499 * __this, TypeU5BU5D_t618* ___typeArguments, MethodInfo* method)
{
	{
		TypeU5BU5D_t618* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m3613(__this, L_0, /*hidden argument*/&Type_MakeGenericType_m3613_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppType StringU5BU5D_t433_0_0_0;
extern Il2CppType TypeU5BU5D_t618_0_0_0;
extern MethodInfo MethodBuilder_NotSupported_m8188_MethodInfo;
extern MethodInfo String_Concat_m3423_MethodInfo;
extern MethodInfo Object_Equals_m106_MethodInfo;
extern MethodInfo String_GetHashCode_m3359_MethodInfo;


// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern MethodInfo MethodBuilder_get_ContainsGenericParameters_m8171_MethodInfo;
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m8171 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern MethodInfo MethodBuilder_get_MethodHandle_m8172_MethodInfo;
extern "C" RuntimeMethodHandle_t1494  MethodBuilder_get_MethodHandle_m8172 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern MethodInfo MethodBuilder_get_ReturnType_m8173_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReturnType_m8173 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___rtype_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern MethodInfo MethodBuilder_get_ReflectedType_m8174_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReflectedType_m8174 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m8175 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern MethodInfo MethodBuilder_get_Name_m8176_MethodInfo;
extern "C" String_t* MethodBuilder_get_Name_m8176 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern MethodInfo MethodBuilder_get_Attributes_m8177_MethodInfo;
extern "C" int32_t MethodBuilder_get_Attributes_m8177 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_2);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern MethodInfo MethodBuilder_get_CallingConvention_m8178_MethodInfo;
extern "C" int32_t MethodBuilder_get_CallingConvention_m8178 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_6);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern MethodInfo MethodBuilder_GetBaseDefinition_m8179_MethodInfo;
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m8179 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern MethodInfo MethodBuilder_GetParameters_m8180_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t741* MethodBuilder_GetParameters_m8180 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetParameters_m8180_init;
	if (!MethodBuilder_GetParameters_m8180_init)
	{
		ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t741_0_0_0);
		MethodBuilder_GetParameters_m8180_init = true;
	}
	ParameterInfoU5BU5D_t741* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	ParameterInfoU5BU5D_t741* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	ParameterInfoU5BU5D_t741* G_B6_1 = {0};
	ParameterBuilder_t1502 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	ParameterInfoU5BU5D_t741* G_B8_2 = {0};
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t293 * L_2 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		TypeU5BU5D_t618* L_3 = (__this->___parameters_1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (ParameterInfoU5BU5D_t741*)NULL;
	}

IL_001e:
	{
		TypeU5BU5D_t618* L_4 = (__this->___parameters_1);
		NullCheck(L_4);
		V_0 = ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		ParameterInfoU5BU5D_t741* L_5 = V_0;
		int32_t L_6 = V_1;
		ParameterBuilderU5BU5D_t1492* L_7 = (__this->___pinfo_5);
		G_B6_0 = L_6;
		G_B6_1 = L_5;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((ParameterBuilder_t1502 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		ParameterBuilderU5BU5D_t1492* L_8 = (__this->___pinfo_5);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(ParameterBuilder_t1502 **)(ParameterBuilder_t1502 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		TypeU5BU5D_t618* L_11 = (__this->___parameters_1);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		ParameterInfo_t742 * L_15 = (ParameterInfo_t742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t742_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8505(L_15, G_B8_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m8505_MethodInfo);
		NullCheck(G_B8_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_2, G_B8_1);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (ParameterInfo_t742 *)L_15;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_1;
		TypeU5BU5D_t618* L_18 = (__this->___parameters_1);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_19 = V_0;
		return L_19;
	}
}
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MethodBuilder_Invoke_m8181_MethodInfo;
extern "C" Object_t * MethodBuilder_Invoke_m8181 (MethodBuilder_t1498 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_IsDefined_m8182_MethodInfo;
extern "C" bool MethodBuilder_IsDefined_m8182 (MethodBuilder_t1498 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m8183_MethodInfo;
extern "C" ObjectU5BU5D_t288* MethodBuilder_GetCustomAttributes_m8183 (MethodBuilder_t1498 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_3 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_2, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_3;
	}

IL_0015:
	{
		Exception_t293 * L_4 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m8184_MethodInfo;
extern "C" ObjectU5BU5D_t288* MethodBuilder_GetCustomAttributes_m8184 (MethodBuilder_t1498 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m8255(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_4 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_4;
	}

IL_0016:
	{
		Exception_t293 * L_5 = MethodBuilder_NotSupported_m8188(__this, /*hidden argument*/&MethodBuilder_NotSupported_m8188_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern MethodInfo MethodBuilder_ToString_m8185_MethodInfo;
extern TypeInfo* StringU5BU5D_t433_il2cpp_TypeInfo_var;
extern "C" String_t* MethodBuilder_ToString_m8185 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	static bool MethodBuilder_ToString_m8185_init;
	if (!MethodBuilder_ToString_m8185_init)
	{
		StringU5BU5D_t433_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t433_0_0_0);
		MethodBuilder_ToString_m8185_init = true;
	}
	{
		StringU5BU5D_t433* L_0 = ((StringU5BU5D_t433*)SZArrayNew(StringU5BU5D_t433_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1643);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1643;
		StringU5BU5D_t433* L_1 = L_0;
		TypeBuilder_t1491 * L_2 = (__this->___type_4);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m8226_MethodInfo, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t433* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral411);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral411;
		StringU5BU5D_t433* L_5 = L_4;
		String_t* L_6 = (__this->___name_3);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t433* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral267);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral267;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m3423(NULL /*static, unused*/, L_7, /*hidden argument*/&String_Concat_m3423_MethodInfo);
		return L_8;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern MethodInfo MethodBuilder_Equals_m8186_MethodInfo;
extern "C" bool MethodBuilder_Equals_m8186 (MethodBuilder_t1498 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_Equals_m106(__this, L_0, /*hidden argument*/&Object_Equals_m106_MethodInfo);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern MethodInfo MethodBuilder_GetHashCode_m8187_MethodInfo;
extern "C" int32_t MethodBuilder_GetHashCode_m8187 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m3359_MethodInfo, L_0);
		return L_1;
	}
}
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t293 * MethodBuilder_NotSupported_m8188 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern MethodInfo MethodBuilder_MakeGenericMethod_m8189_MethodInfo;
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m8189 (MethodBuilder_t1498 * __this, TypeU5BU5D_t618* ___typeArguments, MethodInfo* method)
{
	typedef MethodInfo_t * (*MethodBuilder_MakeGenericMethod_m8189_ftn) (MethodBuilder_t1498 *, TypeU5BU5D_t618*);
	static MethodBuilder_MakeGenericMethod_m8189_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBuilder_MakeGenericMethod_m8189_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, ___typeArguments);
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern MethodInfo MethodBuilder_get_IsGenericMethodDefinition_m8190_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m8190 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1500*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern MethodInfo MethodBuilder_get_IsGenericMethod_m8191_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethod_m8191 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1500*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern MethodInfo MethodBuilder_GetGenericArguments_m8192_MethodInfo;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t618* MethodBuilder_GetGenericArguments_m8192 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetGenericArguments_m8192_init;
	if (!MethodBuilder_GetGenericArguments_m8192_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		MethodBuilder_GetGenericArguments_m8192_init = true;
	}
	TypeU5BU5D_t618* V_0 = {0};
	int32_t V_1 = 0;
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_7);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_1 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_1;
	}

IL_000e:
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_2 = (__this->___generic_params_7);
		NullCheck(L_2);
		V_0 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		TypeU5BU5D_t618* L_3 = V_0;
		int32_t L_4 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1500* L_5 = (__this->___generic_params_7);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, (*(GenericTypeParameterBuilder_t1499 **)(GenericTypeParameterBuilder_t1499 **)SZArrayLdElema(L_5, L_7)));
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, L_4)) = (Type_t *)(*(GenericTypeParameterBuilder_t1499 **)(GenericTypeParameterBuilder_t1499 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1500* L_10 = (__this->___generic_params_7);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		TypeU5BU5D_t618* L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern MethodInfo MethodBuilder_get_Module_m8193_MethodInfo;
extern "C" Module_t1318 * MethodBuilder_get_Module_m8193 (MethodBuilder_t1498 * __this, MethodInfo* method)
{
	{
		Module_t1318 * L_0 = MemberInfo_get_Module_m6837(__this, /*hidden argument*/&MemberInfo_get_Module_m6837_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"



// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern MethodInfo ModuleBuilder__cctor_m8194_MethodInfo;
extern TypeInfo* CharU5BU5D_t197_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__cctor_m8194 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ModuleBuilder__cctor_m8194_init;
	if (!ModuleBuilder__cctor_m8194_init)
	{
		CharU5BU5D_t197_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t197_0_0_0);
		ModuleBuilder__cctor_m8194_init = true;
	}
	{
		CharU5BU5D_t197* L_0 = ((CharU5BU5D_t197*)SZArrayNew(CharU5BU5D_t197_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t197* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		CharU5BU5D_t197* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((ModuleBuilder_t1501_StaticFields*)InitializedTypeInfo(&ModuleBuilder_t1501_il2cpp_TypeInfo)->static_fields)->___type_modifiers_11 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterBuilder_t1502_il2cpp_TypeInfo;
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern MethodInfo ParameterBuilder_get_Attributes_m8195_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Attributes_m8195 (ParameterBuilder_t1502 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern MethodInfo ParameterBuilder_get_Name_m8196_MethodInfo;
extern "C" String_t* ParameterBuilder_get_Name_m8196 (ParameterBuilder_t1502 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern MethodInfo ParameterBuilder_get_Position_m8197_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Position_m8197 (ParameterBuilder_t1502 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___position_2);
		return L_0;
	}
}
// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyBuilder_t1503_il2cpp_TypeInfo;
// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilderMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
extern MethodInfo PropertyBuilder_not_supported_m8217_MethodInfo;


// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern MethodInfo PropertyBuilder_get_Attributes_m8198_MethodInfo;
extern "C" int32_t PropertyBuilder_get_Attributes_m8198 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern MethodInfo PropertyBuilder_get_CanRead_m8199_MethodInfo;
extern "C" bool PropertyBuilder_get_CanRead_m8199 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		MethodBuilder_t1498 * L_0 = (__this->___get_method_4);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t1498 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern MethodInfo PropertyBuilder_get_CanWrite_m8200_MethodInfo;
extern "C" bool PropertyBuilder_get_CanWrite_m8200 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		MethodBuilder_t1498 * L_0 = (__this->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t1498 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern MethodInfo PropertyBuilder_get_DeclaringType_m8201_MethodInfo;
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m8201 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern MethodInfo PropertyBuilder_get_Name_m8202_MethodInfo;
extern "C" String_t* PropertyBuilder_get_Name_m8202 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern MethodInfo PropertyBuilder_get_PropertyType_m8203_MethodInfo;
extern "C" Type_t * PropertyBuilder_get_PropertyType_m8203 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern MethodInfo PropertyBuilder_get_ReflectedType_m8204_MethodInfo;
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m8204 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1491 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern MethodInfo PropertyBuilder_GetAccessors_m8205_MethodInfo;
extern "C" MethodInfoU5BU5D_t1319* PropertyBuilder_GetAccessors_m8205 (PropertyBuilder_t1503 * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		return (MethodInfoU5BU5D_t1319*)NULL;
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo PropertyBuilder_GetCustomAttributes_m8206_MethodInfo;
extern "C" ObjectU5BU5D_t288* PropertyBuilder_GetCustomAttributes_m8206 (PropertyBuilder_t1503 * __this, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = PropertyBuilder_not_supported_m8217(__this, /*hidden argument*/&PropertyBuilder_not_supported_m8217_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo PropertyBuilder_GetCustomAttributes_m8207_MethodInfo;
extern "C" ObjectU5BU5D_t288* PropertyBuilder_GetCustomAttributes_m8207 (PropertyBuilder_t1503 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = PropertyBuilder_not_supported_m8217(__this, /*hidden argument*/&PropertyBuilder_not_supported_m8217_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern MethodInfo PropertyBuilder_GetGetMethod_m8208_MethodInfo;
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m8208 (PropertyBuilder_t1503 * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MethodBuilder_t1498 * L_0 = (__this->___get_method_4);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern MethodInfo PropertyBuilder_GetIndexParameters_m8209_MethodInfo;
extern "C" ParameterInfoU5BU5D_t741* PropertyBuilder_GetIndexParameters_m8209 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = PropertyBuilder_not_supported_m8217(__this, /*hidden argument*/&PropertyBuilder_not_supported_m8217_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern MethodInfo PropertyBuilder_GetSetMethod_m8210_MethodInfo;
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m8210 (PropertyBuilder_t1503 * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MethodBuilder_t1498 * L_0 = (__this->___set_method_3);
		return L_0;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern MethodInfo PropertyBuilder_GetValue_m8211_MethodInfo;
extern "C" Object_t * PropertyBuilder_GetValue_m8211 (PropertyBuilder_t1503 * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___index, MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo PropertyBuilder_GetValue_m8212_MethodInfo;
extern "C" Object_t * PropertyBuilder_GetValue_m8212 (PropertyBuilder_t1503 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___index, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = PropertyBuilder_not_supported_m8217(__this, /*hidden argument*/&PropertyBuilder_not_supported_m8217_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo PropertyBuilder_IsDefined_m8213_MethodInfo;
extern "C" bool PropertyBuilder_IsDefined_m8213 (PropertyBuilder_t1503 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = PropertyBuilder_not_supported_m8217(__this, /*hidden argument*/&PropertyBuilder_not_supported_m8217_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern MethodInfo PropertyBuilder_SetValue_m8214_MethodInfo;
extern "C" void PropertyBuilder_SetValue_m8214 (PropertyBuilder_t1503 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t288* ___index, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo PropertyBuilder_SetValue_m8215_MethodInfo;
extern "C" void PropertyBuilder_SetValue_m8215 (PropertyBuilder_t1503 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___index, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		return;
	}
}
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern MethodInfo PropertyBuilder_get_Module_m8216_MethodInfo;
extern "C" Module_t1318 * PropertyBuilder_get_Module_m8216 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		Module_t1318 * L_0 = MemberInfo_get_Module_m6837(__this, /*hidden argument*/&MemberInfo_get_Module_m6837_MethodInfo);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C" Exception_t293 * PropertyBuilder_not_supported_m8217 (PropertyBuilder_t1503 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
extern TypeInfo AmbiguousMatchException_t1508_il2cpp_TypeInfo;
extern TypeInfo MethodBaseU5BU5D_t1515_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t730_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t936_il2cpp_TypeInfo;
extern TypeInfo MethodAttributes_t1522_il2cpp_TypeInfo;
extern TypeInfo FieldAttributes_t1519_il2cpp_TypeInfo;
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodBaseU5BU5D_t1515_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t739_0_0_0;
extern Il2CppType FieldInfoU5BU5D_t745_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t1319_0_0_0;
extern Il2CppType PropertyInfoU5BU5D_t743_0_0_0;
extern Il2CppType ValueType_t370_0_0_0;
extern MethodInfo Assembly_get_FullName_m8276_MethodInfo;
extern MethodInfo Type_get_UnderlyingSystemType_m10463_MethodInfo;
extern MethodInfo Type_get_IsEnum_m6786_MethodInfo;
extern MethodInfo TypeBuilder_get_IsCompilerContext_m8254_MethodInfo;
extern MethodInfo TypeBuilder_check_created_m8257_MethodInfo;
extern MethodInfo Type_get_TypeHandle_m6796_MethodInfo;
extern MethodInfo TypeBuilder_get_IsGenericTypeDefinition_m8266_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1522_MethodInfo;
extern MethodInfo AmbiguousMatchException__ctor_m8269_MethodInfo;
extern MethodInfo MethodBase_get_CallingConvention_m8358_MethodInfo;
extern MethodInfo Binder_get_DefaultBinder_m8324_MethodInfo;
extern MethodInfo Binder_SelectMethod_m10508_MethodInfo;
extern MethodInfo MonoCustomAttrs_IsDefined_m10120_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m10509_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m3569_MethodInfo;
extern MethodInfo Type_GetConstructors_m10480_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructorsInternal_m8234_MethodInfo;
extern MethodInfo ArrayList__ctor_m4777_MethodInfo;
extern MethodInfo ArrayList_Add_m4788_MethodInfo;
extern MethodInfo ArrayList_get_Count_m4773_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m4983_MethodInfo;
extern MethodInfo Type_GetEvent_m10510_MethodInfo;
extern MethodInfo Type_GetField_m10511_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3529_MethodInfo;
extern MethodInfo String_op_Inequality_m1684_MethodInfo;
extern MethodInfo FieldInfo_get_Attributes_m10474_MethodInfo;
extern MethodInfo Type_GetFields_m3564_MethodInfo;
extern MethodInfo Type_GetInterfaces_m10512_MethodInfo;
extern MethodInfo Array_CopyTo_m4957_MethodInfo;
extern MethodInfo Type_GetMethods_m10513_MethodInfo;
extern MethodInfo ArrayList__ctor_m4935_MethodInfo;
extern MethodInfo MethodBase_get_Attributes_m10473_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m3527_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m4931_MethodInfo;
extern MethodInfo String_Compare_m6383_MethodInfo;
extern MethodInfo TypeBuilder_GetMethodsByName_m8240_MethodInfo;
extern MethodInfo Binder_FindMostDerivedMatch_m8327_MethodInfo;
extern MethodInfo Type_GetProperties_m3563_MethodInfo;
extern MethodInfo PropertyInfo_GetGetMethod_m3565_MethodInfo;
extern MethodInfo PropertyInfo_GetSetMethod_m3566_MethodInfo;
extern MethodInfo TypeBuilder_not_supported_m8256_MethodInfo;
extern MethodInfo Type_InvokeMember_m3576_MethodInfo;
extern MethodInfo Type_type_is_subtype_of_m6806_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3615_MethodInfo;
extern MethodInfo Type_get_IsInterface_m6788_MethodInfo;


// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern MethodInfo TypeBuilder_GetAttributeFlagsImpl_m8218_MethodInfo;
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m8218 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_17);
		return L_0;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1112 * TypeBuilder_get_Assembly_m8219 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1501 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		Assembly_t1112 * L_1 = Module_get_Assembly_m8377(L_0, /*hidden argument*/&Module_get_Assembly_m8377_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m8220 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_21);
		Assembly_t1112 * L_1 = (Assembly_t1112 *)VirtFuncInvoker0< Assembly_t1112 * >::Invoke(&TypeBuilder_get_Assembly_m8219_MethodInfo, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m8276_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1649(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral329, L_2, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m8221 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___parent_10);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m8222 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern MethodInfo TypeBuilder_get_UnderlyingSystemType_m8223_MethodInfo;
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m8223 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_UnderlyingSystemType_m10463_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m8254(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m8254_MethodInfo);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_5 = (__this->___underlying_type_22);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = (__this->___underlying_type_22);
		return L_6;
	}

IL_0033:
	{
		InvalidOperationException_t1107 * L_7 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_7, (String_t*) &_stringLiteral1644, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m8224 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_21);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1318 * TypeBuilder_get_Module_m8225 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1501 * L_0 = (__this->___pmodule_18);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m8226 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___tname_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m8227 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___nspace_9);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m8228 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetConstructorImpl_m8229_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t624 * TypeBuilder_GetConstructorImpl_m8229 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorImpl_m8229_init;
	if (!TypeBuilder_GetConstructorImpl_m8229_init)
	{
		MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t1515_0_0_0);
		TypeBuilder_GetConstructorImpl_m8229_init = true;
	}
	ConstructorBuilder_t1493 * V_0 = {0};
	int32_t V_1 = 0;
	ConstructorBuilder_t1493 * V_2 = {0};
	ConstructorBuilderU5BU5D_t1505* V_3 = {0};
	int32_t V_4 = 0;
	MethodBaseU5BU5D_t1515* V_5 = {0};
	ConstructorInfo_t624 * V_6 = {0};
	ConstructorBuilderU5BU5D_t1505* V_7 = {0};
	int32_t V_8 = 0;
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		ConstructorBuilderU5BU5D_t1505* L_2 = (__this->___ctors_14);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ConstructorInfo_t624 *)NULL;
	}

IL_0025:
	{
		V_0 = (ConstructorBuilder_t1493 *)NULL;
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1505* L_3 = (__this->___ctors_14);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		ConstructorBuilderU5BU5D_t1505* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (*(ConstructorBuilder_t1493 **)(ConstructorBuilder_t1493 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = ___callConvention;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		ConstructorBuilder_t1493 * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_CallingConvention_m8056_MethodInfo, L_8);
		int32_t L_10 = ___callConvention;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		ConstructorBuilder_t1493 * L_11 = V_2;
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_4;
		ConstructorBuilderU5BU5D_t1505* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		return (ConstructorInfo_t624 *)NULL;
	}

IL_0061:
	{
		TypeU5BU5D_t618* L_17 = ___types;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		AmbiguousMatchException_t1508 * L_19 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_19, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		ConstructorBuilder_t1493 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((MethodBaseU5BU5D_t1515*)SZArrayNew(MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		MethodBaseU5BU5D_t1515* L_23 = V_5;
		ConstructorBuilder_t1493 * L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		ArrayElementTypeCheck (L_23, L_24);
		*((MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_23, 0)) = (MethodBase_t730 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		ConstructorBuilderU5BU5D_t1505* L_25 = (__this->___ctors_14);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		ConstructorBuilderU5BU5D_t1505* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		V_6 = (*(ConstructorBuilder_t1493 **)(ConstructorBuilder_t1493 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = ___callConvention;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		ConstructorInfo_t624 * L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8358_MethodInfo, L_30);
		int32_t L_32 = ___callConvention;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		MethodBaseU5BU5D_t1515* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		ConstructorInfo_t624 * L_36 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_35);
		ArrayElementTypeCheck (L_33, L_36);
		*((MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_33, L_35)) = (MethodBase_t730 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		ConstructorBuilderU5BU5D_t1505* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		Binder_t748 * L_40 = ___binder;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_41 = Binder_get_DefaultBinder_m8324(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8324_MethodInfo);
		___binder = L_41;
	}

IL_00ce:
	{
		Binder_t748 * L_42 = ___binder;
		int32_t L_43 = ___bindingAttr;
		MethodBaseU5BU5D_t1515* L_44 = V_5;
		TypeU5BU5D_t618* L_45 = ___types;
		ParameterModifierU5BU5D_t749* L_46 = ___modifiers;
		NullCheck(L_42);
		MethodBase_t730 * L_47 = (MethodBase_t730 *)VirtFuncInvoker4< MethodBase_t730 *, int32_t, MethodBaseU5BU5D_t1515*, TypeU5BU5D_t618*, ParameterModifierU5BU5D_t749* >::Invoke(&Binder_SelectMethod_m10508_MethodInfo, L_42, L_43, L_44, L_45, L_46);
		return ((ConstructorInfo_t624 *)Castclass(L_47, InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo)));
	}

IL_00e1:
	{
		Type_t * L_48 = (__this->___created_20);
		int32_t L_49 = ___bindingAttr;
		Binder_t748 * L_50 = ___binder;
		int32_t L_51 = ___callConvention;
		TypeU5BU5D_t618* L_52 = ___types;
		ParameterModifierU5BU5D_t749* L_53 = ___modifiers;
		NullCheck(L_48);
		ConstructorInfo_t624 * L_54 = (ConstructorInfo_t624 *)VirtFuncInvoker5< ConstructorInfo_t624 *, int32_t, Binder_t748 *, int32_t, TypeU5BU5D_t618*, ParameterModifierU5BU5D_t749* >::Invoke(&Type_GetConstructor_m6823_MethodInfo, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m8230 (TypeBuilder_t1491 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = TypeBuilder_get_IsCompilerContext_m8254(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m8254_MethodInfo);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t27 * L_2 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_2, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_5 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_5;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t288* TypeBuilder_GetCustomAttributes_m8231 (TypeBuilder_t1491 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t288* L_2 = (ObjectU5BU5D_t288*)VirtFuncInvoker1< ObjectU5BU5D_t288*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m10509_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t288* TypeBuilder_GetCustomAttributes_m8232 (TypeBuilder_t1491 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t288* L_3 = (ObjectU5BU5D_t288*)VirtFuncInvoker2< ObjectU5BU5D_t288*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m3569_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t739* TypeBuilder_GetConstructors_m8233 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t739* L_3 = (ConstructorInfoU5BU5D_t739*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t739*, int32_t >::Invoke(&Type_GetConstructors_m10480_MethodInfo, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m8254(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m8254_MethodInfo);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t27 * L_5 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_5, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___bindingAttr;
		ConstructorInfoU5BU5D_t739* L_7 = TypeBuilder_GetConstructorsInternal_m8234(__this, L_6, /*hidden argument*/&TypeBuilder_GetConstructorsInternal_m8234_MethodInfo);
		return L_7;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern TypeInfo* ConstructorInfoU5BU5D_t739_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t739* TypeBuilder_GetConstructorsInternal_m8234 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorsInternal_m8234_init;
	if (!TypeBuilder_GetConstructorsInternal_m8234_init)
	{
		ConstructorInfoU5BU5D_t739_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ConstructorInfoU5BU5D_t739_0_0_0);
		TypeBuilder_GetConstructorsInternal_m8234_init = true;
	}
	ArrayList_t936 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	ConstructorBuilder_t1493 * V_3 = {0};
	ConstructorBuilderU5BU5D_t1505* V_4 = {0};
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t739* V_6 = {0};
	{
		ConstructorBuilderU5BU5D_t1505* L_0 = (__this->___ctors_14);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ConstructorInfoU5BU5D_t739*)SZArrayNew(ConstructorInfoU5BU5D_t739_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_1 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4777(L_1, /*hidden argument*/&ArrayList__ctor_m4777_MethodInfo);
		V_0 = L_1;
		ConstructorBuilderU5BU5D_t1505* L_2 = (__this->___ctors_14);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		ConstructorBuilderU5BU5D_t1505* L_3 = V_4;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = (*(ConstructorBuilder_t1493 **)(ConstructorBuilder_t1493 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		ConstructorBuilder_t1493 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_Attributes_m8063_MethodInfo, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		int32_t L_10 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_13&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		ArrayList_t936 * L_16 = V_0;
		ConstructorBuilder_t1493 * L_17 = V_3;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		ConstructorBuilderU5BU5D_t1505* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t936 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_21);
		V_6 = ((ConstructorInfoU5BU5D_t739*)SZArrayNew(ConstructorInfoU5BU5D_t739_il2cpp_TypeInfo_var, L_22));
		ArrayList_t936 * L_23 = V_0;
		ConstructorInfoU5BU5D_t739* L_24 = V_6;
		NullCheck(L_23);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4983_MethodInfo, L_23, (Array_t *)(Array_t *)L_24);
		ConstructorInfoU5BU5D_t739* L_25 = V_6;
		return L_25;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m8235 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m8236 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&Type_GetEvent_m10510_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m8237 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	FieldInfo_t * V_2 = {0};
	FieldBuilderU5BU5D_t1507* V_3 = {0};
	int32_t V_4 = 0;
	{
		Type_t * L_0 = (__this->___created_20);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfo_t * L_4 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m10511_MethodInfo, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		FieldBuilderU5BU5D_t1507* L_5 = (__this->___fields_16);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}

IL_0020:
	{
		FieldBuilderU5BU5D_t1507* L_6 = (__this->___fields_16);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		FieldBuilderU5BU5D_t1507* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (*(FieldBuilder_t1497 **)(FieldBuilder_t1497 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_2;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		FieldInfo_t * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_11);
		String_t* L_13 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Inequality_m1684(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&String_op_Inequality_m1684_MethodInfo);
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		FieldInfo_t * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, L_15);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		int32_t L_21 = V_1;
		if (!((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		FieldInfo_t * L_25 = V_2;
		return L_25;
	}

IL_008e:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_27 = V_4;
		FieldBuilderU5BU5D_t1507* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern TypeInfo* FieldInfoU5BU5D_t745_il2cpp_TypeInfo_var;
extern "C" FieldInfoU5BU5D_t745* TypeBuilder_GetFields_m8238 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	static bool TypeBuilder_GetFields_m8238_init;
	if (!TypeBuilder_GetFields_m8238_init)
	{
		FieldInfoU5BU5D_t745_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&FieldInfoU5BU5D_t745_0_0_0);
		TypeBuilder_GetFields_m8238_init = true;
	}
	ArrayList_t936 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	FieldInfo_t * V_3 = {0};
	FieldBuilderU5BU5D_t1507* V_4 = {0};
	int32_t V_5 = 0;
	FieldInfoU5BU5D_t745* V_6 = {0};
	{
		Type_t * L_0 = (__this->___created_20);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfoU5BU5D_t745* L_3 = (FieldInfoU5BU5D_t745*)VirtFuncInvoker1< FieldInfoU5BU5D_t745*, int32_t >::Invoke(&Type_GetFields_m3564_MethodInfo, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		FieldBuilderU5BU5D_t1507* L_4 = (__this->___fields_16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((FieldInfoU5BU5D_t745*)SZArrayNew(FieldInfoU5BU5D_t745_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_5 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4777(L_5, /*hidden argument*/&ArrayList__ctor_m4777_MethodInfo);
		V_0 = L_5;
		FieldBuilderU5BU5D_t1507* L_6 = (__this->___fields_16);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		FieldBuilderU5BU5D_t1507* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (*(FieldBuilder_t1497 **)(FieldBuilder_t1497 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_3;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0090;
	}

IL_0045:
	{
		V_1 = 0;
		FieldInfo_t * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, L_11);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		V_1 = 1;
	}

IL_005c:
	{
		goto IL_0066;
	}

IL_005e:
	{
		int32_t L_15 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_15&(int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0090;
	}

IL_006b:
	{
		V_1 = 0;
		int32_t L_17 = V_2;
		if (!((int32_t)((int32_t)L_17&(int32_t)((int32_t)16))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		V_1 = 1;
	}

IL_007a:
	{
		goto IL_0083;
	}

IL_007c:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		V_1 = 1;
	}

IL_0083:
	{
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0090;
	}

IL_0088:
	{
		ArrayList_t936 * L_21 = V_0;
		FieldInfo_t * L_22 = V_3;
		NullCheck(L_21);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		FieldBuilderU5BU5D_t1507* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t936 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_26);
		V_6 = ((FieldInfoU5BU5D_t745*)SZArrayNew(FieldInfoU5BU5D_t745_il2cpp_TypeInfo_var, L_27));
		ArrayList_t936 * L_28 = V_0;
		FieldInfoU5BU5D_t745* L_29 = V_6;
		NullCheck(L_28);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4983_MethodInfo, L_28, (Array_t *)(Array_t *)L_29);
		FieldInfoU5BU5D_t745* L_30 = V_6;
		return L_30;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t618* TypeBuilder_GetInterfaces_m8239 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetInterfaces_m8239_init;
	if (!TypeBuilder_GetInterfaces_m8239_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		TypeBuilder_GetInterfaces_m8239_init = true;
	}
	TypeU5BU5D_t618* V_0 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		TypeU5BU5D_t618* L_2 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&Type_GetInterfaces_m10512_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		TypeU5BU5D_t618* L_3 = (__this->___interfaces_12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		TypeU5BU5D_t618* L_4 = (__this->___interfaces_12);
		NullCheck(L_4);
		V_0 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		TypeU5BU5D_t618* L_5 = (__this->___interfaces_12);
		TypeU5BU5D_t618* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4957_MethodInfo, L_5, (Array_t *)(Array_t *)L_6, 0);
		TypeU5BU5D_t618* L_7 = V_0;
		return L_7;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_8 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_8;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern TypeInfo* MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t1319* TypeBuilder_GetMethodsByName_m8240 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodsByName_m8240_init;
	if (!TypeBuilder_GetMethodsByName_m8240_init)
	{
		MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t1319_0_0_0);
		TypeBuilder_GetMethodsByName_m8240_init = true;
	}
	MethodInfoU5BU5D_t1319* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfoU5BU5D_t1319* V_3 = {0};
	ArrayList_t936 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	MethodInfo_t * V_7 = {0};
	ArrayList_t936 * V_8 = {0};
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t1319* V_10 = {0};
	int32_t V_11 = 0;
	MethodInfoU5BU5D_t1319* V_12 = {0};
	int32_t V_13 = {0};
	{
		int32_t L_0 = ___bindingAttr;
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_2 = (__this->___parent_10);
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_2);
		MethodInfoU5BU5D_t1319* L_4 = (MethodInfoU5BU5D_t1319*)VirtFuncInvoker1< MethodInfoU5BU5D_t1319*, int32_t >::Invoke(&Type_GetMethods_m10513_MethodInfo, L_2, L_3);
		V_3 = L_4;
		MethodInfoU5BU5D_t1319* L_5 = V_3;
		NullCheck(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_6 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4935(L_6, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&ArrayList__ctor_m4935_MethodInfo);
		V_4 = L_6;
		int32_t L_7 = ___bindingAttr;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		MethodInfoU5BU5D_t1319* L_8 = V_3;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_7 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		MethodInfo_t * L_11 = V_7;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, L_11);
		V_2 = L_12;
		MethodInfo_t * L_13 = V_7;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3527_MethodInfo, L_13);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		int32_t L_16 = V_2;
		V_13 = ((int32_t)((int32_t)L_16&(int32_t)7));
		int32_t L_17 = V_13;
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		int32_t L_18 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		int32_t L_19 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		int32_t L_20 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		ArrayList_t936 * L_22 = V_4;
		MethodInfo_t * L_23 = V_7;
		NullCheck(L_22);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		MethodInfoU5BU5D_t1319* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		MethodBuilderU5BU5D_t1504* L_27 = (__this->___methods_13);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		ArrayList_t936 * L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_28);
		V_0 = ((MethodInfoU5BU5D_t1319*)SZArrayNew(MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var, L_29));
		ArrayList_t936 * L_30 = V_4;
		MethodInfoU5BU5D_t1319* L_31 = V_0;
		NullCheck(L_30);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4983_MethodInfo, L_30, (Array_t *)(Array_t *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		MethodBuilderU5BU5D_t1504* L_32 = (__this->___methods_13);
		NullCheck(L_32);
		ArrayList_t936 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_33);
		V_0 = ((MethodInfoU5BU5D_t1319*)SZArrayNew(MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))+(int32_t)L_34))));
		ArrayList_t936 * L_35 = V_4;
		MethodInfoU5BU5D_t1319* L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&ArrayList_CopyTo_m4931_MethodInfo, L_35, (Array_t *)(Array_t *)L_36, 0);
		MethodBuilderU5BU5D_t1504* L_37 = (__this->___methods_13);
		MethodInfoU5BU5D_t1319* L_38 = V_0;
		ArrayList_t936 * L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4957_MethodInfo, L_37, (Array_t *)(Array_t *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		MethodBuilderU5BU5D_t1504* L_41 = (__this->___methods_13);
		V_0 = (MethodInfoU5BU5D_t1319*)L_41;
	}

IL_0125:
	{
		MethodInfoU5BU5D_t1319* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((MethodInfoU5BU5D_t1319*)SZArrayNew(MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_43 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4777(L_43, /*hidden argument*/&ArrayList__ctor_m4777_MethodInfo);
		V_8 = L_43;
		MethodInfoU5BU5D_t1319* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		MethodInfoU5BU5D_t1319* L_45 = V_10;
		int32_t L_46 = V_11;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_45, L_47));
		MethodInfo_t * L_48 = V_9;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		String_t* L_49 = ___name;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		MethodInfo_t * L_50 = V_9;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_50);
		String_t* L_52 = ___name;
		bool L_53 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_54 = String_Compare_m6383(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/&String_Compare_m6383_MethodInfo);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		MethodInfo_t * L_55 = V_9;
		NullCheck(L_55);
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_58 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_58&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		int32_t L_59 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_59&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		int32_t L_61 = V_2;
		if (!((int32_t)((int32_t)L_61&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_62 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_62&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		int32_t L_63 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		ArrayList_t936 * L_65 = V_8;
		MethodInfo_t * L_66 = V_9;
		NullCheck(L_65);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		MethodInfoU5BU5D_t1319* L_69 = V_10;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((Array_t *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		ArrayList_t936 * L_70 = V_8;
		NullCheck(L_70);
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_70);
		V_12 = ((MethodInfoU5BU5D_t1319*)SZArrayNew(MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var, L_71));
		ArrayList_t936 * L_72 = V_8;
		MethodInfoU5BU5D_t1319* L_73 = V_12;
		NullCheck(L_72);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4983_MethodInfo, L_72, (Array_t *)(Array_t *)L_73);
		MethodInfoU5BU5D_t1319* L_74 = V_12;
		return L_74;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1319* TypeBuilder_GetMethods_m8241 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodInfoU5BU5D_t1319* L_1 = TypeBuilder_GetMethodsByName_m8240(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m8240_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetMethodImpl_m8242_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m8242 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, int32_t ___callConvention, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodImpl_m8242_init;
	if (!TypeBuilder_GetMethodImpl_m8242_init)
	{
		MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t1515_0_0_0);
		TypeBuilder_GetMethodImpl_m8242_init = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t1319* V_1 = {0};
	MethodInfo_t * V_2 = {0};
	MethodBaseU5BU5D_t1515* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = {0};
	MethodInfoU5BU5D_t1319* V_7 = {0};
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t1319* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		MethodInfoU5BU5D_t1319* L_4 = TypeBuilder_GetMethodsByName_m8240(__this, L_1, L_2, L_3, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m8240_MethodInfo);
		V_1 = L_4;
		V_2 = (MethodInfo_t *)NULL;
		TypeU5BU5D_t618* L_5 = ___types;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		TypeU5BU5D_t618* L_6 = ___types;
		NullCheck(L_6);
		G_B3_0 = (((int32_t)(((Array_t *)L_6)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		MethodInfoU5BU5D_t1319* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		MethodInfoU5BU5D_t1319* L_8 = V_7;
		int32_t L_9 = V_8;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_6 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = ___callConvention;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8358_MethodInfo, L_12);
		int32_t L_14 = ___callConvention;
		int32_t L_15 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) == ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		MethodInfo_t * L_16 = V_6;
		V_2 = L_16;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = V_8;
		V_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_19 = V_8;
		MethodInfoU5BU5D_t1319* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		return (MethodInfo_t *)NULL;
	}

IL_006e:
	{
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		MethodInfo_t * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((MethodBaseU5BU5D_t1515*)SZArrayNew(MethodBaseU5BU5D_t1515_il2cpp_TypeInfo_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		MethodBaseU5BU5D_t1515* L_27 = V_3;
		MethodInfo_t * L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, L_28);
		*((MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_27, 0)) = (MethodBase_t730 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		MethodInfoU5BU5D_t1319* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		MethodInfoU5BU5D_t1319* L_30 = V_10;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = ___callConvention;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		MethodInfo_t * L_34 = V_9;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8358_MethodInfo, L_34);
		int32_t L_36 = ___callConvention;
		int32_t L_37 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)L_36))) == ((int32_t)L_37)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		MethodBaseU5BU5D_t1515* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		MethodInfo_t * L_41 = V_9;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_38, L_40)) = (MethodBase_t730 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		MethodInfoU5BU5D_t1319* L_44 = V_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		TypeU5BU5D_t618* L_45 = ___types;
		if (L_45)
		{
			goto IL_00dc;
		}
	}
	{
		MethodBaseU5BU5D_t1515* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		MethodBase_t730 * L_47 = Binder_FindMostDerivedMatch_m8327(NULL /*static, unused*/, L_46, /*hidden argument*/&Binder_FindMostDerivedMatch_m8327_MethodInfo);
		return ((MethodInfo_t *)Castclass(L_47, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo)));
	}

IL_00dc:
	{
		Binder_t748 * L_48 = ___binder;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_49 = Binder_get_DefaultBinder_m8324(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8324_MethodInfo);
		___binder = L_49;
	}

IL_00e8:
	{
		Binder_t748 * L_50 = ___binder;
		int32_t L_51 = ___bindingAttr;
		MethodBaseU5BU5D_t1515* L_52 = V_3;
		TypeU5BU5D_t618* L_53 = ___types;
		ParameterModifierU5BU5D_t749* L_54 = ___modifiers;
		NullCheck(L_50);
		MethodBase_t730 * L_55 = (MethodBase_t730 *)VirtFuncInvoker4< MethodBase_t730 *, int32_t, MethodBaseU5BU5D_t1515*, TypeU5BU5D_t618*, ParameterModifierU5BU5D_t749* >::Invoke(&Binder_SelectMethod_m10508_MethodInfo, L_50, L_51, L_52, L_53, L_54);
		return ((MethodInfo_t *)Castclass(L_55, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo)));
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern TypeInfo* PropertyInfoU5BU5D_t743_il2cpp_TypeInfo_var;
extern "C" PropertyInfoU5BU5D_t743* TypeBuilder_GetProperties_m8243 (TypeBuilder_t1491 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	static bool TypeBuilder_GetProperties_m8243_init;
	if (!TypeBuilder_GetProperties_m8243_init)
	{
		PropertyInfoU5BU5D_t743_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&PropertyInfoU5BU5D_t743_0_0_0);
		TypeBuilder_GetProperties_m8243_init = true;
	}
	ArrayList_t936 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfo_t * V_3 = {0};
	PropertyInfo_t * V_4 = {0};
	PropertyBuilderU5BU5D_t1506* V_5 = {0};
	int32_t V_6 = 0;
	PropertyInfoU5BU5D_t743* V_7 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_20);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		PropertyInfoU5BU5D_t743* L_3 = (PropertyInfoU5BU5D_t743*)VirtFuncInvoker1< PropertyInfoU5BU5D_t743*, int32_t >::Invoke(&Type_GetProperties_m3563_MethodInfo, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		PropertyBuilderU5BU5D_t1506* L_4 = (__this->___properties_15);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((PropertyInfoU5BU5D_t743*)SZArrayNew(PropertyInfoU5BU5D_t743_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_5 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4777(L_5, /*hidden argument*/&ArrayList__ctor_m4777_MethodInfo);
		V_0 = L_5;
		PropertyBuilderU5BU5D_t1506* L_6 = (__this->___properties_15);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		PropertyBuilderU5BU5D_t1506* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(PropertyBuilder_t1503 **)(PropertyBuilder_t1503 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		PropertyInfo_t * L_10 = V_4;
		NullCheck(L_10);
		MethodInfo_t * L_11 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetGetMethod_m3565_MethodInfo, L_10, 1);
		V_3 = L_11;
		MethodInfo_t * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		PropertyInfo_t * L_13 = V_4;
		NullCheck(L_13);
		MethodInfo_t * L_14 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&PropertyInfo_GetSetMethod_m3566_MethodInfo, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		MethodInfo_t * L_15 = V_3;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a7;
	}

IL_005d:
	{
		MethodInfo_t * L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 1;
	}

IL_0072:
	{
		goto IL_007c;
	}

IL_0074:
	{
		int32_t L_20 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		V_1 = 1;
	}

IL_007c:
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a7;
	}

IL_0081:
	{
		V_1 = 0;
		int32_t L_22 = V_2;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)16))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)8)))
		{
			goto IL_0090;
		}
	}
	{
		V_1 = 1;
	}

IL_0090:
	{
		goto IL_0099;
	}

IL_0092:
	{
		int32_t L_24 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_24&(int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		V_1 = 1;
	}

IL_0099:
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00a7;
	}

IL_009e:
	{
		ArrayList_t936 * L_26 = V_0;
		PropertyInfo_t * L_27 = V_4;
		NullCheck(L_26);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		PropertyBuilderU5BU5D_t1506* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t936 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m4773_MethodInfo, L_31);
		V_7 = ((PropertyInfoU5BU5D_t743*)SZArrayNew(PropertyInfoU5BU5D_t743_il2cpp_TypeInfo_var, L_32));
		ArrayList_t936 * L_33 = V_0;
		PropertyInfoU5BU5D_t743* L_34 = V_7;
		NullCheck(L_33);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m4983_MethodInfo, L_33, (Array_t *)(Array_t *)L_34);
		PropertyInfoU5BU5D_t743* L_35 = V_7;
		return L_35;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetPropertyImpl_m8244_MethodInfo;
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m8244 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t748 * ___binder, Type_t * ___returnType, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = TypeBuilder_not_supported_m8256(__this, /*hidden argument*/&TypeBuilder_not_supported_m8256_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern MethodInfo TypeBuilder_HasElementTypeImpl_m8245_MethodInfo;
extern "C" bool TypeBuilder_HasElementTypeImpl_m8245 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Type_t * L_1 = (__this->___created_20);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6781_MethodInfo, L_1);
		return L_2;
	}
}
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m8246 (TypeBuilder_t1491 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t748 * ___binder, Object_t * ___target, ObjectU5BU5D_t288* ___args, ParameterModifierU5BU5D_t749* ___modifiers, CultureInfo_t714 * ___culture, StringU5BU5D_t433* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t748 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t288* L_5 = ___args;
		ParameterModifierU5BU5D_t749* L_6 = ___modifiers;
		CultureInfo_t714 * L_7 = ___culture;
		StringU5BU5D_t433* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t748 *, Object_t *, ObjectU5BU5D_t288*, ParameterModifierU5BU5D_t749*, CultureInfo_t714 *, StringU5BU5D_t433* >::Invoke(&Type_InvokeMember_m3576_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern MethodInfo TypeBuilder_IsArrayImpl_m8247_MethodInfo;
extern "C" bool TypeBuilder_IsArrayImpl_m8247 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern MethodInfo TypeBuilder_IsByRefImpl_m8248_MethodInfo;
extern "C" bool TypeBuilder_IsByRefImpl_m8248 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern MethodInfo TypeBuilder_IsPointerImpl_m8249_MethodInfo;
extern "C" bool TypeBuilder_IsPointerImpl_m8249 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern MethodInfo TypeBuilder_IsPrimitiveImpl_m8250_MethodInfo;
extern "C" bool TypeBuilder_IsPrimitiveImpl_m8250 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern MethodInfo TypeBuilder_IsValueTypeImpl_m8251_MethodInfo;
extern "C" bool TypeBuilder_IsValueTypeImpl_m8251 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		ModuleBuilder_t1501 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		AssemblyBuilder_t1488 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		Type_t * L_2 = (L_1->___corlib_value_type_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		bool L_3 = Type_type_is_subtype_of_m6806(NULL /*static, unused*/, __this, L_2, 0, /*hidden argument*/&Type_type_is_subtype_of_m6806_MethodInfo);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ValueType_t370_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		bool L_5 = Type_type_is_subtype_of_m6806(NULL /*static, unused*/, __this, L_4, 0, /*hidden argument*/&Type_type_is_subtype_of_m6806_MethodInfo);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		ModuleBuilder_t1501 * L_6 = (__this->___pmodule_18);
		NullCheck(L_6);
		AssemblyBuilder_t1488 * L_7 = (L_6->___assemblyb_10);
		NullCheck(L_7);
		Type_t * L_8 = (L_7->___corlib_value_type_11);
		if ((((Object_t*)(TypeBuilder_t1491 *)__this) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		ModuleBuilder_t1501 * L_9 = (__this->___pmodule_18);
		NullCheck(L_9);
		AssemblyBuilder_t1488 * L_10 = (L_9->___assemblyb_10);
		NullCheck(L_10);
		Type_t * L_11 = (L_10->___corlib_enum_type_12);
		G_B5_0 = ((((int32_t)((((Object_t*)(TypeBuilder_t1491 *)__this) == ((Object_t*)(Type_t *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern MethodInfo TypeBuilder_MakeGenericType_m8252_MethodInfo;
extern "C" Type_t * TypeBuilder_MakeGenericType_m8252 (TypeBuilder_t1491 * __this, TypeU5BU5D_t618* ___typeArguments, MethodInfo* method)
{
	{
		TypeU5BU5D_t618* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m3613(__this, L_0, /*hidden argument*/&Type_MakeGenericType_m3613_MethodInfo);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1317  TypeBuilder_get_TypeHandle_m8253 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m8257(__this, /*hidden argument*/&TypeBuilder_check_created_m8257_MethodInfo);
		Type_t * L_0 = (__this->___created_20);
		NullCheck(L_0);
		RuntimeTypeHandle_t1317  L_1 = (RuntimeTypeHandle_t1317 )VirtFuncInvoker0< RuntimeTypeHandle_t1317  >::Invoke(&Type_get_TypeHandle_m6796_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m8254 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1501 * L_0 = (__this->___pmodule_18);
		NullCheck(L_0);
		AssemblyBuilder_t1488 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		bool L_2 = AssemblyBuilder_get_IsCompilerContext_m8053(L_1, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m8053_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m8255 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___created_20);
		return ((((int32_t)((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t293 * TypeBuilder_not_supported_m8256 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1639, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m8257 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t293 * L_1 = TypeBuilder_not_supported_m8256(__this, /*hidden argument*/&TypeBuilder_not_supported_m8256_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern MethodInfo TypeBuilder_ToString_m8258_MethodInfo;
extern "C" String_t* TypeBuilder_ToString_m8258 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m8224_MethodInfo, __this);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern MethodInfo TypeBuilder_IsAssignableFrom_m8259_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableFrom_m8259 (TypeBuilder_t1491 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsAssignableFrom_m3615(__this, L_0, /*hidden argument*/&Type_IsAssignableFrom_m3615_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern MethodInfo TypeBuilder_IsSubclassOf_m8260_MethodInfo;
extern "C" bool TypeBuilder_IsSubclassOf_m8260 (TypeBuilder_t1491 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsSubclassOf_m6808(__this, L_0, /*hidden argument*/&Type_IsSubclassOf_m6808_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern MethodInfo TypeBuilder_IsAssignableTo_m8261_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableTo_m8261 (TypeBuilder_t1491 * __this, Type_t * ___c, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t618* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___c;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(TypeBuilder_t1491 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_1 = ___c;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6788_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_3 = (__this->___parent_10);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_5 = ___c;
		Type_t * L_6 = (__this->___parent_10);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_5, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		TypeU5BU5D_t618* L_8 = (__this->___interfaces_12);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		TypeU5BU5D_t618* L_9 = (__this->___interfaces_12);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		TypeU5BU5D_t618* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_10, L_12));
		Type_t * L_13 = ___c;
		Type_t * L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_13, L_14);
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t618* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_19 = TypeBuilder_get_is_created_m8255(__this, /*hidden argument*/&TypeBuilder_get_is_created_m8255_MethodInfo);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		Type_t * L_20 = (__this->___parent_10);
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_21 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_22 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		return ((((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))? 1 : 0);
	}

IL_007c:
	{
		Type_t * L_23 = ___c;
		Type_t * L_24 = (__this->___parent_10);
		NullCheck(L_23);
		bool L_25 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_23, L_24);
		return L_25;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern MethodInfo TypeBuilder_GetGenericArguments_m8262_MethodInfo;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t618* TypeBuilder_GetGenericArguments_m8262 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetGenericArguments_m8262_init;
	if (!TypeBuilder_GetGenericArguments_m8262_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		TypeBuilder_GetGenericArguments_m8262_init = true;
	}
	TypeU5BU5D_t618* V_0 = {0};
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_19);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (TypeU5BU5D_t618*)NULL;
	}

IL_000a:
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_1 = (__this->___generic_params_19);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		GenericTypeParameterBuilderU5BU5D_t1500* L_2 = (__this->___generic_params_19);
		TypeU5BU5D_t618* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4957_MethodInfo, L_2, (Array_t *)(Array_t *)L_3, 0);
		TypeU5BU5D_t618* L_4 = V_0;
		return L_4;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern MethodInfo TypeBuilder_GetGenericTypeDefinition_m8263_MethodInfo;
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m8263 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_19);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1107 * L_1 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_1, (String_t*) &_stringLiteral1645, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern MethodInfo TypeBuilder_get_ContainsGenericParameters_m8264_MethodInfo;
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m8264 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_19);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1500*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern MethodInfo TypeBuilder_get_IsGenericParameter_m8265_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericParameter_m8265 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	typedef bool (*TypeBuilder_get_IsGenericParameter_m8265_ftn) (TypeBuilder_t1491 *);
	static TypeBuilder_get_IsGenericParameter_m8265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_get_IsGenericParameter_m8265_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m8266 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1500* L_0 = (__this->___generic_params_19);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1500*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern MethodInfo TypeBuilder_get_IsGenericType_m8267_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericType_m8267 (TypeBuilder_t1491 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&TypeBuilder_get_IsGenericTypeDefinition_m8266_MethodInfo, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedMarshal_t1496_il2cpp_TypeInfo;
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo MarshalAsAttribute_t1323_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttributeMethodDeclarations.h"
extern MethodInfo MarshalAsAttribute__ctor_m6853_MethodInfo;


// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern MethodInfo UnmanagedMarshal_ToMarshalAsAttribute_m8268_MethodInfo;
extern "C" MarshalAsAttribute_t1323 * UnmanagedMarshal_ToMarshalAsAttribute_m8268 (UnmanagedMarshal_t1496 * __this, MethodInfo* method)
{
	MarshalAsAttribute_t1323 * V_0 = {0};
	{
		int32_t L_0 = (__this->___t_1);
		MarshalAsAttribute_t1323 * L_1 = (MarshalAsAttribute_t1323 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MarshalAsAttribute_t1323_il2cpp_TypeInfo));
		MarshalAsAttribute__ctor_m6853(L_1, L_0, /*hidden argument*/&MarshalAsAttribute__ctor_m6853_MethodInfo);
		V_0 = L_1;
		MarshalAsAttribute_t1323 * L_2 = V_0;
		int32_t L_3 = (__this->___tbase_2);
		NullCheck(L_2);
		L_2->___ArraySubType_1 = L_3;
		MarshalAsAttribute_t1323 * L_4 = V_0;
		String_t* L_5 = (__this->___mcookie_4);
		NullCheck(L_4);
		L_4->___MarshalCookie_2 = L_5;
		MarshalAsAttribute_t1323 * L_6 = V_0;
		String_t* L_7 = (__this->___marshaltype_5);
		NullCheck(L_6);
		L_6->___MarshalType_3 = L_7;
		MarshalAsAttribute_t1323 * L_8 = V_0;
		Type_t * L_9 = (__this->___marshaltyperef_6);
		NullCheck(L_8);
		L_8->___MarshalTypeRef_4 = L_9;
		int32_t L_10 = (__this->___count_0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		MarshalAsAttribute_t1323 * L_11 = V_0;
		NullCheck(L_11);
		L_11->___SizeConst_5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		MarshalAsAttribute_t1323 * L_12 = V_0;
		int32_t L_13 = (__this->___count_0);
		NullCheck(L_12);
		L_12->___SizeConst_5 = L_13;
	}

IL_005a:
	{
		int32_t L_14 = (__this->___param_num_7);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		MarshalAsAttribute_t1323 * L_15 = V_0;
		NullCheck(L_15);
		L_15->___SizeParamIndex_6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		MarshalAsAttribute_t1323 * L_16 = V_0;
		int32_t L_17 = (__this->___param_num_7);
		NullCheck(L_16);
		L_16->___SizeParamIndex_6 = (((int16_t)L_17));
	}

IL_0079:
	{
		MarshalAsAttribute_t1323 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m4954_MethodInfo;
extern MethodInfo SystemException__ctor_m10321_MethodInfo;


// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m8269 (AmbiguousMatchException_t1508 * __this, MethodInfo* method)
{
	{
		SystemException__ctor_m4954(__this, (String_t*) &_stringLiteral1646, /*hidden argument*/&SystemException__ctor_m4954_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern MethodInfo AmbiguousMatchException__ctor_m8270_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m8270 (AmbiguousMatchException_t1508 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4954(__this, L_0, /*hidden argument*/&SystemException__ctor_m4954_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AmbiguousMatchException__ctor_m8271_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m8271 (AmbiguousMatchException_t1508 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		StreamingContext_t666  L_1 = ___context;
		SystemException__ctor_m10321(__this, L_0, L_1, /*hidden argument*/&SystemException__ctor_m10321_MethodInfo);
		return;
	}
}
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResolveEventHolder_t1509_il2cpp_TypeInfo;
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolderMethodDeclarations.h"



// System.Void System.Reflection.Assembly/ResolveEventHolder::.ctor()
extern MethodInfo ResolveEventHolder__ctor_m8272_MethodInfo;
extern "C" void ResolveEventHolder__ctor_m8272 (ResolveEventHolder_t1509 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern Il2CppType Module_t1318_0_0_0;
extern MethodInfo Assembly_ToString_m8286_MethodInfo;
extern MethodInfo Assembly_get_location_m8275_MethodInfo;
extern MethodInfo Assembly_GetType_m8283_MethodInfo;
extern MethodInfo Assembly_InternalGetType_m8282_MethodInfo;
extern MethodInfo AssemblyName__ctor_m8292_MethodInfo;
extern MethodInfo Assembly_FillName_m8284_MethodInfo;
extern MethodInfo Assembly_get_fullname_m8274_MethodInfo;
extern MethodInfo AppDomain_get_CurrentDomain_m9647_MethodInfo;
extern MethodInfo AppDomain_Load_m9649_MethodInfo;
extern MethodInfo Assembly_GetModules_m8290_MethodInfo;
extern MethodInfo Module_get_ScopeName_m8378_MethodInfo;
extern MethodInfo Assembly_GetModulesInternal_m8289_MethodInfo;
extern MethodInfo Module_IsResource_m8382_MethodInfo;
extern MethodInfo ArrayList_ToArray_m4911_MethodInfo;


// System.Void System.Reflection.Assembly::.ctor()
extern MethodInfo Assembly__ctor_m8273_MethodInfo;
extern "C" void Assembly__ctor_m8273 (Assembly_t1112 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		ResolveEventHolder_t1509 * L_0 = (ResolveEventHolder_t1509 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ResolveEventHolder_t1509_il2cpp_TypeInfo));
		ResolveEventHolder__ctor_m8272(L_0, /*hidden argument*/&ResolveEventHolder__ctor_m8272_MethodInfo);
		__this->___resolve_event_holder_1 = L_0;
		return;
	}
}
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m8274 (Assembly_t1112 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_fullname_m8274_ftn) (Assembly_t1112 *);
	static Assembly_get_fullname_m8274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_fullname_m8274_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m8275 (Assembly_t1112 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_location_m8275_ftn) (Assembly_t1112 *);
	static Assembly_get_location_m8275_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_location_m8275_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m8276 (Assembly_t1112 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_ToString_m8286_MethodInfo, __this);
		return L_0;
	}
}
// System.String System.Reflection.Assembly::get_Location()
extern MethodInfo Assembly_get_Location_m8277_MethodInfo;
extern "C" String_t* Assembly_get_Location_m8277 (Assembly_t1112 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = (__this->___fromByteArray_8);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = Assembly_get_location_m8275(__this, /*hidden argument*/&Assembly_get_location_m8275_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern MethodInfo Assembly_IsDefined_m8278_MethodInfo;
extern "C" bool Assembly_IsDefined_m8278 (Assembly_t1112 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Assembly_GetCustomAttributes_m8279_MethodInfo;
extern "C" ObjectU5BU5D_t288* Assembly_GetCustomAttributes_m8279 (Assembly_t1112 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern MethodInfo Assembly_GetManifestResourceInternal_m8280_MethodInfo;
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m8280 (Assembly_t1112 * __this, String_t* ___name, int32_t* ___size, Module_t1318 ** ___module, MethodInfo* method)
{
	typedef IntPtr_t (*Assembly_GetManifestResourceInternal_m8280_ftn) (Assembly_t1112 *, String_t*, int32_t*, Module_t1318 **);
	static Assembly_GetManifestResourceInternal_m8280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetManifestResourceInternal_m8280_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, ___name, ___size, ___module);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern MethodInfo Assembly_GetType_m8281_MethodInfo;
extern "C" Type_t * Assembly_GetType_m8281 (Assembly_t1112 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___throwOnError;
		Type_t * L_2 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m8283_MethodInfo, __this, L_0, L_1, 0);
		return L_2;
	}
}
// System.Type System.Reflection.Assembly::GetType(System.String)
extern MethodInfo Assembly_GetType_m4826_MethodInfo;
extern "C" Type_t * Assembly_GetType_m4826 (Assembly_t1112 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m8283_MethodInfo, __this, L_0, 0, 0);
		return L_1;
	}
}
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m8282 (Assembly_t1112 * __this, Module_t1318 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	typedef Type_t * (*Assembly_InternalGetType_m8282_ftn) (Assembly_t1112 *, Module_t1318 *, String_t*, bool, bool);
	static Assembly_InternalGetType_m8282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_InternalGetType_m8282_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, ___module, ___name, ___throwOnError, ___ignoreCase);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m8283 (Assembly_t1112 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name;
		ArgumentNullException_t711 * L_2 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_2, L_1, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___name;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1669(L_3, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t332 * L_5 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_5, (String_t*) &_stringLiteral217, (String_t*) &_stringLiteral1647, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		String_t* L_6 = ___name;
		bool L_7 = ___throwOnError;
		bool L_8 = ___ignoreCase;
		Type_t * L_9 = Assembly_InternalGetType_m8282(__this, (Module_t1318 *)NULL, L_6, L_7, L_8, /*hidden argument*/&Assembly_InternalGetType_m8282_MethodInfo);
		return L_9;
	}
}
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m8284 (Object_t * __this /* static, unused */, Assembly_t1112 * ___ass, AssemblyName_t1490 * ___aname, MethodInfo* method)
{
	typedef void (*Assembly_FillName_m8284_ftn) (Assembly_t1112 *, AssemblyName_t1490 *);
	static Assembly_FillName_m8284_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_FillName_m8284_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(___ass, ___aname);
}
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1490 * Assembly_UnprotectedGetName_m8285 (Assembly_t1112 * __this, MethodInfo* method)
{
	AssemblyName_t1490 * V_0 = {0};
	{
		AssemblyName_t1490 * L_0 = (AssemblyName_t1490 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AssemblyName_t1490_il2cpp_TypeInfo));
		AssemblyName__ctor_m8292(L_0, /*hidden argument*/&AssemblyName__ctor_m8292_MethodInfo);
		V_0 = L_0;
		AssemblyName_t1490 * L_1 = V_0;
		Assembly_FillName_m8284(NULL /*static, unused*/, __this, L_1, /*hidden argument*/&Assembly_FillName_m8284_MethodInfo);
		AssemblyName_t1490 * L_2 = V_0;
		return L_2;
	}
}
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m8286 (Assembly_t1112 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_9);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Assembly_get_fullname_m8274(__this, /*hidden argument*/&Assembly_get_fullname_m8274_MethodInfo);
		__this->___assemblyName_9 = L_2;
		String_t* L_3 = (__this->___assemblyName_9);
		return L_3;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern MethodInfo Assembly_Load_m8287_MethodInfo;
extern "C" Assembly_t1112 * Assembly_Load_m8287 (Object_t * __this /* static, unused */, String_t* ___assemblyString, MethodInfo* method)
{
	{
		AppDomain_t1767 * L_0 = AppDomain_get_CurrentDomain_m9647(NULL /*static, unused*/, /*hidden argument*/&AppDomain_get_CurrentDomain_m9647_MethodInfo);
		String_t* L_1 = ___assemblyString;
		NullCheck(L_0);
		Assembly_t1112 * L_2 = AppDomain_Load_m9649(L_0, L_1, /*hidden argument*/&AppDomain_Load_m9649_MethodInfo);
		return L_2;
	}
}
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern MethodInfo Assembly_GetModule_m8288_MethodInfo;
extern "C" Module_t1318 * Assembly_GetModule_m8288 (Assembly_t1112 * __this, String_t* ___name, MethodInfo* method)
{
	ModuleU5BU5D_t1489* V_0 = {0};
	Module_t1318 * V_1 = {0};
	ModuleU5BU5D_t1489* V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral217, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1669(L_2, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t332 * L_4 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_4, (String_t*) &_stringLiteral1648, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		ModuleU5BU5D_t1489* L_5 = (ModuleU5BU5D_t1489*)VirtFuncInvoker1< ModuleU5BU5D_t1489*, bool >::Invoke(&Assembly_GetModules_m8290_MethodInfo, __this, 1);
		V_0 = L_5;
		ModuleU5BU5D_t1489* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		ModuleU5BU5D_t1489* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_1 = (*(Module_t1318 **)(Module_t1318 **)SZArrayLdElema(L_7, L_9));
		Module_t1318 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = Module_get_ScopeName_m8378(L_10, /*hidden argument*/&Module_get_ScopeName_m8378_MethodInfo);
		String_t* L_12 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m58(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Module_t1318 * L_14 = V_1;
		return L_14;
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		ModuleU5BU5D_t1489* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (Module_t1318 *)NULL;
	}
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1489* Assembly_GetModulesInternal_m8289 (Assembly_t1112 * __this, MethodInfo* method)
{
	typedef ModuleU5BU5D_t1489* (*Assembly_GetModulesInternal_m8289_ftn) (Assembly_t1112 *);
	static Assembly_GetModulesInternal_m8289_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetModulesInternal_m8289_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern TypeInfo* ModuleU5BU5D_t1489_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1489* Assembly_GetModules_m8290 (Assembly_t1112 * __this, bool ___getResourceModules, MethodInfo* method)
{
	static bool Assembly_GetModules_m8290_init;
	if (!Assembly_GetModules_m8290_init)
	{
		ModuleU5BU5D_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1489_0_0_0);
		Assembly_GetModules_m8290_init = true;
	}
	ModuleU5BU5D_t1489* V_0 = {0};
	ArrayList_t936 * V_1 = {0};
	Module_t1318 * V_2 = {0};
	ModuleU5BU5D_t1489* V_3 = {0};
	int32_t V_4 = 0;
	{
		ModuleU5BU5D_t1489* L_0 = (ModuleU5BU5D_t1489*)VirtFuncInvoker0< ModuleU5BU5D_t1489* >::Invoke(&Assembly_GetModulesInternal_m8289_MethodInfo, __this);
		V_0 = L_0;
		bool L_1 = ___getResourceModules;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		ModuleU5BU5D_t1489* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList_t936 * L_3 = (ArrayList_t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t936_il2cpp_TypeInfo));
		ArrayList__ctor_m4935(L_3, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/&ArrayList__ctor_m4935_MethodInfo);
		V_1 = L_3;
		ModuleU5BU5D_t1489* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		ModuleU5BU5D_t1489* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = (*(Module_t1318 **)(Module_t1318 **)SZArrayLdElema(L_5, L_7));
		Module_t1318 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Module_IsResource_m8382(L_8, /*hidden argument*/&Module_IsResource_m8382_MethodInfo);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t936 * L_10 = V_1;
		Module_t1318 * L_11 = V_2;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m4788_MethodInfo, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		ModuleU5BU5D_t1489* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		ArrayList_t936 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Module_t1318_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_15);
		Array_t * L_17 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m4911_MethodInfo, L_15, L_16);
		return ((ModuleU5BU5D_t1489*)Castclass(L_17, ModuleU5BU5D_t1489_il2cpp_TypeInfo_var));
	}

IL_0052:
	{
		ModuleU5BU5D_t1489* L_18 = V_0;
		return L_18;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern MethodInfo Assembly_GetExecutingAssembly_m8291_MethodInfo;
extern "C" Assembly_t1112 * Assembly_GetExecutingAssembly_m8291 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Assembly_t1112 * (*Assembly_GetExecutingAssembly_m8291_ftn) ();
	static Assembly_GetExecutingAssembly_m8291_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetExecutingAssembly_m8291_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCompanyAttribute_t419_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m3394_MethodInfo;


// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
extern MethodInfo AssemblyCompanyAttribute__ctor_m2130_MethodInfo;
extern "C" void AssemblyCompanyAttribute__ctor_m2130 (AssemblyCompanyAttribute_t419 * __this, String_t* ___company, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___company;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyConfigurationAttribute_t418_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
extern MethodInfo AssemblyConfigurationAttribute__ctor_m2129_MethodInfo;
extern "C" void AssemblyConfigurationAttribute__ctor_m2129 (AssemblyConfigurationAttribute_t418 * __this, String_t* ___configuration, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___configuration;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCopyrightAttribute_t425_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2136_MethodInfo;
extern "C" void AssemblyCopyrightAttribute__ctor_m2136 (AssemblyCopyrightAttribute_t425 * __this, String_t* ___copyright, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___copyright;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDefaultAliasAttribute_t919_il2cpp_TypeInfo;
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDefaultAliasAttribute::.ctor(System.String)
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m3853_MethodInfo;
extern "C" void AssemblyDefaultAliasAttribute__ctor_m3853 (AssemblyDefaultAliasAttribute_t919 * __this, String_t* ___defaultAlias, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___defaultAlias;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDelaySignAttribute_t918_il2cpp_TypeInfo;
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDelaySignAttribute::.ctor(System.Boolean)
extern MethodInfo AssemblyDelaySignAttribute__ctor_m3852_MethodInfo;
extern "C" void AssemblyDelaySignAttribute__ctor_m3852 (AssemblyDelaySignAttribute_t918 * __this, bool ___delaySign, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		bool L_0 = ___delaySign;
		__this->___delay_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDescriptionAttribute_t417_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2128_MethodInfo;
extern "C" void AssemblyDescriptionAttribute__ctor_m2128 (AssemblyDescriptionAttribute_t417 * __this, String_t* ___description, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___description;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyFileVersionAttribute_t421_il2cpp_TypeInfo;
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2132_MethodInfo;
extern "C" void AssemblyFileVersionAttribute__ctor_m2132 (AssemblyFileVersionAttribute_t421 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___version;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral405, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___version;
		__this->___name_0 = L_2;
		return;
	}
}
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyInformationalVersionAttribute_t912_il2cpp_TypeInfo;
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttriMethodDeclarations.h"



// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m3846_MethodInfo;
extern "C" void AssemblyInformationalVersionAttribute__ctor_m3846 (AssemblyInformationalVersionAttribute_t912 * __this, String_t* ___informationalVersion, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___informationalVersion;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyKeyFileAttribute_t917_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyFileAttribute::.ctor(System.String)
extern MethodInfo AssemblyKeyFileAttribute__ctor_m3851_MethodInfo;
extern "C" void AssemblyKeyFileAttribute__ctor_m3851 (AssemblyKeyFileAttribute_t917 * __this, String_t* ___keyFile, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___keyFile;
		__this->___name_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"
// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1.h"
extern TypeInfo Version_t960_il2cpp_TypeInfo;
extern TypeInfo CryptographicException_t1119_il2cpp_TypeInfo;
extern TypeInfo StrongNameKeyPair_t1512_il2cpp_TypeInfo;
extern TypeInfo SecurityException_t1724_il2cpp_TypeInfo;
extern TypeInfo AssemblyHashAlgorithm_t1433_il2cpp_TypeInfo;
extern TypeInfo AssemblyVersionCompatibility_t1434_il2cpp_TypeInfo;
extern TypeInfo AssemblyNameFlags_t1513_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityExceptionMethodDeclarations.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1MethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
extern Il2CppType Version_t960_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1433_0_0_0;
extern Il2CppType StrongNameKeyPair_t1512_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1434_0_0_0;
extern Il2CppType AssemblyNameFlags_t1513_0_0_0;
extern MethodInfo StringBuilder_Append_m3494_MethodInfo;
extern MethodInfo AssemblyName_get_Version_m8297_MethodInfo;
extern MethodInfo Version_op_Inequality_m10410_MethodInfo;
extern MethodInfo Version_ToString_m10407_MethodInfo;
extern MethodInfo CultureInfo_get_LCID_m7634_MethodInfo;
extern MethodInfo CultureInfo_get_Name_m7635_MethodInfo;
extern MethodInfo AssemblyName_InternalGetPublicKeyToken_m8301_MethodInfo;
extern MethodInfo Byte_ToString_m4874_MethodInfo;
extern MethodInfo AssemblyName_get_Flags_m8295_MethodInfo;
extern MethodInfo Version_op_Equality_m10409_MethodInfo;
extern MethodInfo Version_get_Major_m10399_MethodInfo;
extern MethodInfo Version_get_Minor_m10400_MethodInfo;
extern MethodInfo Version_get_Build_m10398_MethodInfo;
extern MethodInfo Version_get_Revision_m10401_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m7073_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m7072_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m4791_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m4782_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m4793_MethodInfo;
extern MethodInfo CultureInfo__ctor_m7626_MethodInfo;
extern MethodInfo AssemblyName_get_FullName_m8296_MethodInfo;
extern MethodInfo Object_ToString_m108_MethodInfo;
extern MethodInfo AssemblyName_get_IsPublicKeyValid_m8300_MethodInfo;
extern MethodInfo SecurityException__ctor_m9330_MethodInfo;
extern MethodInfo AssemblyName_ComputePublicKeyToken_m8302_MethodInfo;
extern MethodInfo SHA1_Create_m4949_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m4950_MethodInfo;
extern MethodInfo Array_Reverse_m5964_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4794_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4781_MethodInfo;
extern MethodInfo AssemblyName_set_Version_m8298_MethodInfo;


// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m8292 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		__this->___versioncompat_12 = 1;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName__ctor_m8293_MethodInfo;
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" void AssemblyName__ctor_m8293 (AssemblyName_t1490 * __this, SerializationInfo_t665 * ___si, StreamingContext_t666  ___sc, MethodInfo* method)
{
	static bool AssemblyName__ctor_m8293_init;
	if (!AssemblyName__ctor_m8293_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		AssemblyName__ctor_m8293_init = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___si;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m4791(L_0, (String_t*) &_stringLiteral1655, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		__this->___name_0 = L_1;
		SerializationInfo_t665 * L_2 = ___si;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m4791(L_2, (String_t*) &_stringLiteral1656, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		__this->___codebase_1 = L_3;
		SerializationInfo_t665 * L_4 = ___si;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Version_t960_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_4);
		Object_t * L_6 = SerializationInfo_GetValue_m4782(L_4, (String_t*) &_stringLiteral1657, L_5, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___version_13 = ((Version_t960 *)Castclass(L_6, InitializedTypeInfo(&Version_t960_il2cpp_TypeInfo)));
		SerializationInfo_t665 * L_7 = ___si;
		Type_t * L_8 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m4782(L_7, (String_t*) &_stringLiteral1658, L_8, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___publicKey_10 = ((ByteU5BU5D_t515*)Castclass(L_9, ByteU5BU5D_t515_il2cpp_TypeInfo_var));
		SerializationInfo_t665 * L_10 = ___si;
		Type_t * L_11 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_10);
		Object_t * L_12 = SerializationInfo_GetValue_m4782(L_10, (String_t*) &_stringLiteral1659, L_11, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___keyToken_11 = ((ByteU5BU5D_t515*)Castclass(L_12, ByteU5BU5D_t515_il2cpp_TypeInfo_var));
		SerializationInfo_t665 * L_13 = ___si;
		Type_t * L_14 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&AssemblyHashAlgorithm_t1433_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_13);
		Object_t * L_15 = SerializationInfo_GetValue_m4782(L_13, (String_t*) &_stringLiteral1660, L_14, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___hashalg_8 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo)))));
		SerializationInfo_t665 * L_16 = ___si;
		Type_t * L_17 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&StrongNameKeyPair_t1512_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_16);
		Object_t * L_18 = SerializationInfo_GetValue_m4782(L_16, (String_t*) &_stringLiteral1661, L_17, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___keypair_9 = ((StrongNameKeyPair_t1512 *)Castclass(L_18, InitializedTypeInfo(&StrongNameKeyPair_t1512_il2cpp_TypeInfo)));
		SerializationInfo_t665 * L_19 = ___si;
		Type_t * L_20 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&AssemblyVersionCompatibility_t1434_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_19);
		Object_t * L_21 = SerializationInfo_GetValue_m4782(L_19, (String_t*) &_stringLiteral1662, L_20, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___versioncompat_12 = ((*(int32_t*)((int32_t*)UnBox (L_21, InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo)))));
		SerializationInfo_t665 * L_22 = ___si;
		Type_t * L_23 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&AssemblyNameFlags_t1513_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_22);
		Object_t * L_24 = SerializationInfo_GetValue_m4782(L_22, (String_t*) &_stringLiteral1663, L_23, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->___flags_7 = ((*(int32_t*)((int32_t*)UnBox (L_24, InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo)))));
		SerializationInfo_t665 * L_25 = ___si;
		NullCheck(L_25);
		int32_t L_26 = SerializationInfo_GetInt32_m4793(L_25, (String_t*) &_stringLiteral1664, /*hidden argument*/&SerializationInfo_GetInt32_m4793_MethodInfo);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t714_il2cpp_TypeInfo));
		CultureInfo_t714 * L_29 = (CultureInfo_t714 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CultureInfo_t714_il2cpp_TypeInfo));
		CultureInfo__ctor_m7626(L_29, L_28, /*hidden argument*/&CultureInfo__ctor_m7626_MethodInfo);
		__this->___cultureinfo_6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::get_Name()
extern MethodInfo AssemblyName_get_Name_m8294_MethodInfo;
extern "C" String_t* AssemblyName_get_Name_m8294 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m8295 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_7);
		return L_0;
	}
}
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m8296 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	StringBuilder_t284 * V_0 = {0};
	ByteU5BU5D_t515* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___name_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t284 * L_2 = (StringBuilder_t284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t284_il2cpp_TypeInfo));
		StringBuilder__ctor_m1321(L_2, /*hidden argument*/&StringBuilder__ctor_m1321_MethodInfo);
		V_0 = L_2;
		StringBuilder_t284 * L_3 = V_0;
		String_t* L_4 = (__this->___name_0);
		NullCheck(L_3);
		StringBuilder_Append_m3494(L_3, L_4, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		Version_t960 * L_5 = AssemblyName_get_Version_m8297(__this, /*hidden argument*/&AssemblyName_get_Version_m8297_MethodInfo);
		bool L_6 = Version_op_Inequality_m10410(NULL /*static, unused*/, L_5, (Version_t960 *)NULL, /*hidden argument*/&Version_op_Inequality_m10410_MethodInfo);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		StringBuilder_t284 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m3494(L_7, (String_t*) &_stringLiteral1649, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_8 = V_0;
		Version_t960 * L_9 = AssemblyName_get_Version_m8297(__this, /*hidden argument*/&AssemblyName_get_Version_m8297_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Version_ToString_m10407_MethodInfo, L_9);
		NullCheck(L_8);
		StringBuilder_Append_m3494(L_8, L_10, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_004d:
	{
		CultureInfo_t714 * L_11 = (__this->___cultureinfo_6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t284 * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m3494(L_12, (String_t*) &_stringLiteral1650, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		CultureInfo_t714 * L_13 = (__this->___cultureinfo_6);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7634_MethodInfo, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t714_il2cpp_TypeInfo));
		CultureInfo_t714 * L_15 = CultureInfo_get_InvariantCulture_m3492(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m3492_MethodInfo);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7634_MethodInfo, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		StringBuilder_t284 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3494(L_17, (String_t*) &_stringLiteral1651, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		goto IL_0098;
	}

IL_0086:
	{
		StringBuilder_t284 * L_18 = V_0;
		CultureInfo_t714 * L_19 = (__this->___cultureinfo_6);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&CultureInfo_get_Name_m7635_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3494(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0098:
	{
		ByteU5BU5D_t515* L_21 = AssemblyName_InternalGetPublicKeyToken_m8301(__this, /*hidden argument*/&AssemblyName_InternalGetPublicKeyToken_m8301_MethodInfo);
		V_1 = L_21;
		ByteU5BU5D_t515* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		ByteU5BU5D_t515* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)(((Array_t *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t284 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m3494(L_24, (String_t*) &_stringLiteral1652, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		goto IL_00e7;
	}

IL_00b5:
	{
		StringBuilder_t284 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3494(L_25, (String_t*) &_stringLiteral1653, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		StringBuilder_t284 * L_26 = V_0;
		ByteU5BU5D_t515* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		String_t* L_29 = Byte_ToString_m4874(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (String_t*) &_stringLiteral531, /*hidden argument*/&Byte_ToString_m4874_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m3494(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		ByteU5BU5D_t515* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = AssemblyName_get_Flags_m8295(__this, /*hidden argument*/&AssemblyName_get_Flags_m8295_MethodInfo);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		StringBuilder_t284 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m3494(L_34, (String_t*) &_stringLiteral1654, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0101:
	{
		StringBuilder_t284 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1325_MethodInfo, L_35);
		return L_36;
	}
}
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t960 * AssemblyName_get_Version_m8297 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	{
		Version_t960 * L_0 = (__this->___version_13);
		return L_0;
	}
}
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m8298 (AssemblyName_t1490 * __this, Version_t960 * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Version_t960 * L_0 = ___value;
		__this->___version_13 = L_0;
		Version_t960 * L_1 = ___value;
		bool L_2 = Version_op_Equality_m10409(NULL /*static, unused*/, L_1, (Version_t960 *)NULL, /*hidden argument*/&Version_op_Equality_m10409_MethodInfo);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = 0;
		V_0 = L_3;
		__this->___revision_5 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___build_4 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___minor_3 = L_7;
		int32_t L_8 = V_0;
		__this->___major_2 = L_8;
		goto IL_0064;
	}

IL_0034:
	{
		Version_t960 * L_9 = ___value;
		NullCheck(L_9);
		int32_t L_10 = Version_get_Major_m10399(L_9, /*hidden argument*/&Version_get_Major_m10399_MethodInfo);
		__this->___major_2 = L_10;
		Version_t960 * L_11 = ___value;
		NullCheck(L_11);
		int32_t L_12 = Version_get_Minor_m10400(L_11, /*hidden argument*/&Version_get_Minor_m10400_MethodInfo);
		__this->___minor_3 = L_12;
		Version_t960 * L_13 = ___value;
		NullCheck(L_13);
		int32_t L_14 = Version_get_Build_m10398(L_13, /*hidden argument*/&Version_get_Build_m10398_MethodInfo);
		__this->___build_4 = L_14;
		Version_t960 * L_15 = ___value;
		NullCheck(L_15);
		int32_t L_16 = Version_get_Revision_m10401(L_15, /*hidden argument*/&Version_get_Revision_m10401_MethodInfo);
		__this->___revision_5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::ToString()
extern MethodInfo AssemblyName_ToString_m8299_MethodInfo;
extern "C" String_t* AssemblyName_ToString_m8299 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = AssemblyName_get_FullName_m8296(__this, /*hidden argument*/&AssemblyName_get_FullName_m8296_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000d:
	{
		String_t* L_3 = Object_ToString_m108(__this, /*hidden argument*/&Object_ToString_m108_MethodInfo);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m8300 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t515* L_0 = (__this->___publicKey_10);
		NullCheck(L_0);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_t515* L_2 = (__this->___publicKey_10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_t515* L_7 = (__this->___publicKey_10);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		ByteU5BU5D_t515* L_9 = (__this->___publicKey_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		uint8_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		uint8_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		ByteU5BU5D_t515* L_14 = (__this->___publicKey_10);
		NullCheck(L_14);
		if ((((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_t515* L_15 = (__this->___publicKey_10);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)12));
		int32_t L_16 = ((int32_t)12);
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16))) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t515* L_17 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m7073(NULL /*static, unused*/, L_17, ((int32_t)12), /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m7073_MethodInfo);
			V_3 = 1;
			goto IL_0095;
		}

IL_0073:
		{
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t1119_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0075;
		throw e;
	}

CATCH_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t515* L_18 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m7072(NULL /*static, unused*/, L_18, /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m7072_MethodInfo);
			V_3 = 1;
			goto IL_0095;
		}

IL_008a:
		{
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t1119_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t515* AssemblyName_InternalGetPublicKeyToken_m8301 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	static bool AssemblyName_InternalGetPublicKeyToken_m8301_init;
	if (!AssemblyName_InternalGetPublicKeyToken_m8301_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		AssemblyName_InternalGetPublicKeyToken_m8301_init = true;
	}
	{
		ByteU5BU5D_t515* L_0 = (__this->___keyToken_11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_t515* L_1 = (__this->___keyToken_11);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t515* L_2 = (__this->___publicKey_10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (ByteU5BU5D_t515*)NULL;
	}

IL_0019:
	{
		ByteU5BU5D_t515* L_3 = (__this->___publicKey_10);
		NullCheck(L_3);
		if ((((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, 0));
	}

IL_002a:
	{
		bool L_4 = AssemblyName_get_IsPublicKeyValid_m8300(__this, /*hidden argument*/&AssemblyName_get_IsPublicKeyValid_m8300_MethodInfo);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		SecurityException_t1724 * L_5 = (SecurityException_t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SecurityException_t1724_il2cpp_TypeInfo));
		SecurityException__ctor_m9330(L_5, (String_t*) &_stringLiteral1665, /*hidden argument*/&SecurityException__ctor_m9330_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		ByteU5BU5D_t515* L_6 = AssemblyName_ComputePublicKeyToken_m8302(__this, /*hidden argument*/&AssemblyName_ComputePublicKeyToken_m8302_MethodInfo);
		return L_6;
	}
}
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t515* AssemblyName_ComputePublicKeyToken_m8302 (AssemblyName_t1490 * __this, MethodInfo* method)
{
	static bool AssemblyName_ComputePublicKeyToken_m8302_init;
	if (!AssemblyName_ComputePublicKeyToken_m8302_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		AssemblyName_ComputePublicKeyToken_m8302_init = true;
	}
	HashAlgorithm_t1183 * V_0 = {0};
	ByteU5BU5D_t515* V_1 = {0};
	ByteU5BU5D_t515* V_2 = {0};
	{
		SHA1_t1129 * L_0 = SHA1_Create_m4949(NULL /*static, unused*/, /*hidden argument*/&SHA1_Create_m4949_MethodInfo);
		V_0 = L_0;
		HashAlgorithm_t1183 * L_1 = V_0;
		ByteU5BU5D_t515* L_2 = (__this->___publicKey_10);
		NullCheck(L_1);
		ByteU5BU5D_t515* L_3 = HashAlgorithm_ComputeHash_m4950(L_1, L_2, /*hidden argument*/&HashAlgorithm_ComputeHash_m4950_MethodInfo);
		V_1 = L_3;
		V_2 = ((ByteU5BU5D_t515*)SZArrayNew(ByteU5BU5D_t515_il2cpp_TypeInfo_var, 8));
		ByteU5BU5D_t515* L_4 = V_1;
		ByteU5BU5D_t515* L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_t515* L_6 = V_2;
		Array_Copy_m6742(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)8)), (Array_t *)(Array_t *)L_6, 0, 8, /*hidden argument*/&Array_Copy_m6742_MethodInfo);
		ByteU5BU5D_t515* L_7 = V_2;
		Array_Reverse_m5964(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, 0, 8, /*hidden argument*/&Array_Reverse_m5964_MethodInfo);
		ByteU5BU5D_t515* L_8 = V_2;
		return L_8;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m8303 (AssemblyName_t1490 * __this, ByteU5BU5D_t515* ___publicKey, MethodInfo* method)
{
	{
		ByteU5BU5D_t515* L_0 = ___publicKey;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_1^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_2|(int32_t)1));
	}

IL_0021:
	{
		ByteU5BU5D_t515* L_3 = ___publicKey;
		__this->___publicKey_10 = L_3;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m8304 (AssemblyName_t1490 * __this, ByteU5BU5D_t515* ___publicKeyToken, MethodInfo* method)
{
	{
		ByteU5BU5D_t515* L_0 = ___publicKeyToken;
		__this->___keyToken_11 = L_0;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName_GetObjectData_m8305_MethodInfo;
extern "C" void AssemblyName_GetObjectData_m8305 (AssemblyName_t1490 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	String_t* G_B4_0 = {0};
	SerializationInfo_t665 * G_B4_1 = {0};
	String_t* G_B3_0 = {0};
	SerializationInfo_t665 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = {0};
	SerializationInfo_t665 * G_B5_2 = {0};
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
		String_t* L_3 = (__this->___name_0);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4794(L_2, (String_t*) &_stringLiteral1655, L_3, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_4 = ___info;
		ByteU5BU5D_t515* L_5 = (__this->___publicKey_10);
		NullCheck(L_4);
		SerializationInfo_AddValue_m4794(L_4, (String_t*) &_stringLiteral1658, (Object_t *)(Object_t *)L_5, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_6 = ___info;
		ByteU5BU5D_t515* L_7 = (__this->___keyToken_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m4794(L_6, (String_t*) &_stringLiteral1659, (Object_t *)(Object_t *)L_7, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_8 = ___info;
		CultureInfo_t714 * L_9 = (__this->___cultureinfo_6);
		G_B3_0 = (String_t*) &_stringLiteral1664;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (String_t*) &_stringLiteral1664;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		CultureInfo_t714 * L_10 = (__this->___cultureinfo_6);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m7634_MethodInfo, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m4781(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_12 = ___info;
		String_t* L_13 = (__this->___codebase_1);
		NullCheck(L_12);
		SerializationInfo_AddValue_m4794(L_12, (String_t*) &_stringLiteral1656, L_13, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_14 = ___info;
		Version_t960 * L_15 = AssemblyName_get_Version_m8297(__this, /*hidden argument*/&AssemblyName_get_Version_m8297_MethodInfo);
		NullCheck(L_14);
		SerializationInfo_AddValue_m4794(L_14, (String_t*) &_stringLiteral1657, L_15, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_16 = ___info;
		int32_t L_17 = (__this->___hashalg_8);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1433_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		SerializationInfo_AddValue_m4794(L_16, (String_t*) &_stringLiteral1660, L_19, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_20 = ___info;
		int32_t L_21 = 0;
		Object_t * L_22 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1433_il2cpp_TypeInfo), &L_21);
		NullCheck(L_20);
		SerializationInfo_AddValue_m4794(L_20, (String_t*) &_stringLiteral1666, L_22, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_23 = ___info;
		StrongNameKeyPair_t1512 * L_24 = (__this->___keypair_9);
		NullCheck(L_23);
		SerializationInfo_AddValue_m4794(L_23, (String_t*) &_stringLiteral1661, L_24, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_25 = ___info;
		int32_t L_26 = (__this->___versioncompat_12);
		int32_t L_27 = L_26;
		Object_t * L_28 = Box(InitializedTypeInfo(&AssemblyVersionCompatibility_t1434_il2cpp_TypeInfo), &L_27);
		NullCheck(L_25);
		SerializationInfo_AddValue_m4794(L_25, (String_t*) &_stringLiteral1662, L_28, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_29 = ___info;
		int32_t L_30 = (__this->___flags_7);
		int32_t L_31 = L_30;
		Object_t * L_32 = Box(InitializedTypeInfo(&AssemblyNameFlags_t1513_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		SerializationInfo_AddValue_m4794(L_29, (String_t*) &_stringLiteral1663, L_32, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_33 = ___info;
		NullCheck(L_33);
		SerializationInfo_AddValue_m4794(L_33, (String_t*) &_stringLiteral1667, NULL, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern MethodInfo AssemblyName_OnDeserialization_m8306_MethodInfo;
extern "C" void AssemblyName_OnDeserialization_m8306 (AssemblyName_t1490 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		Version_t960 * L_0 = (__this->___version_13);
		AssemblyName_set_Version_m8298(__this, L_0, /*hidden argument*/&AssemblyName_set_Version_m8298_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlagsMethodDeclarations.h"



// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyProductAttribute_t420_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
extern MethodInfo AssemblyProductAttribute__ctor_m2131_MethodInfo;
extern "C" void AssemblyProductAttribute__ctor_m2131 (AssemblyProductAttribute_t420 * __this, String_t* ___product, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___product;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTitleAttribute_t416_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
extern MethodInfo AssemblyTitleAttribute__ctor_m2127_MethodInfo;
extern "C" void AssemblyTitleAttribute__ctor_m2127 (AssemblyTitleAttribute_t416 * __this, String_t* ___title, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___title;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTrademarkAttribute_t424_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
extern MethodInfo AssemblyTrademarkAttribute__ctor_m2135_MethodInfo;
extern "C" void AssemblyTrademarkAttribute__ctor_m2135 (AssemblyTrademarkAttribute_t424 * __this, String_t* ___trademark, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___trademark;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_Default.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Default_t1514_il2cpp_TypeInfo;
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_DefaultMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
extern TypeInfo Enum_t348_il2cpp_TypeInfo;
extern TypeInfo Double_t716_il2cpp_TypeInfo;
extern TypeInfo Single_t44_il2cpp_TypeInfo;
extern TypeInfo Convert_t701_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Double_t716_0_0_0;
extern Il2CppType Single_t44_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern Il2CppType Nullable_1_t1865_0_0_0;
extern Il2CppType Enum_t348_0_0_0;
extern Il2CppType ParamArrayAttribute_t388_0_0_0;
extern MethodInfo Binder__ctor_m8322_MethodInfo;
extern MethodInfo Object_GetType_m1420_MethodInfo;
extern MethodInfo Default_SelectMethod_m8316_MethodInfo;
extern MethodInfo Default_ReorderParameters_m8309_MethodInfo;
extern MethodInfo Array_Copy_m4995_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3561_MethodInfo;
extern MethodInfo ParameterInfo_get_Name_m8514_MethodInfo;
extern MethodInfo Type_get_IsArray_m3522_MethodInfo;
extern MethodInfo Type_GetElementType_m10464_MethodInfo;
extern MethodInfo Default_IsArrayAssignable_m8310_MethodInfo;
extern MethodInfo Type_get_IsByRef_m6783_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m6809_MethodInfo;
extern MethodInfo Default_check_type_m8313_MethodInfo;
extern MethodInfo Enum_ToObject_m6669_MethodInfo;
extern MethodInfo Type_get_IsPointer_m6790_MethodInfo;
extern MethodInfo Convert_ChangeType_m9896_MethodInfo;
extern MethodInfo Enum_GetUnderlyingType_m6661_MethodInfo;
extern MethodInfo Type_get_IsGenericType_m6831_MethodInfo;
extern MethodInfo Type_GetGenericTypeDefinition_m6830_MethodInfo;
extern MethodInfo Type_GetGenericArguments_m6826_MethodInfo;
extern MethodInfo Type_GetTypeCode_m6804_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3562_MethodInfo;
extern MethodInfo Attribute_IsDefined_m6096_MethodInfo;
extern MethodInfo Default_check_arguments_m8314_MethodInfo;
extern MethodInfo Default_GetBetterMethod_m8317_MethodInfo;
extern MethodInfo MethodBase_get_IsGenericMethodDefinition_m8362_MethodInfo;
extern MethodInfo Default_CompareCloserType_m8318_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m3592_MethodInfo;
extern MethodInfo Type_get_IsGenericParameter_m6833_MethodInfo;
extern MethodInfo PropertyInfo_GetIndexParameters_m10514_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m3537_MethodInfo;
extern MethodInfo Default_check_arguments_with_score_m8320_MethodInfo;
extern MethodInfo Binder_GetDerivedLevel_m8326_MethodInfo;
extern MethodInfo Default_check_type_with_score_m8321_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m10516_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t288* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10516(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t288*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10516_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
#define Array_IndexOf_TisType_t_m10515(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t618*, Type_t *, MethodInfo*))Array_IndexOf_TisObject_t_m10516_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Array_IndexOf_TisType_t_m10515_GenericMethod;


// System.Void System.Reflection.Binder/Default::.ctor()
extern MethodInfo Default__ctor_m8307_MethodInfo;
extern "C" void Default__ctor_m8307 (Default_t1514 * __this, MethodInfo* method)
{
	{
		Binder__ctor_m8322(__this, /*hidden argument*/&Binder__ctor_m8322_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern MethodInfo Default_BindToMethod_m8308_MethodInfo;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" MethodBase_t730 * Default_BindToMethod_m8308 (Default_t1514 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1515* ___match, ObjectU5BU5D_t288** ___args, ParameterModifierU5BU5D_t749* ___modifiers, CultureInfo_t714 * ___culture, StringU5BU5D_t433* ___names, Object_t ** ___state, MethodInfo* method)
{
	static bool Default_BindToMethod_m8308_init;
	if (!Default_BindToMethod_m8308_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		Default_BindToMethod_m8308_init = true;
	}
	TypeU5BU5D_t618* V_0 = {0};
	int32_t V_1 = 0;
	MethodBase_t730 * V_2 = {0};
	{
		ObjectU5BU5D_t288** L_0 = ___args;
		if ((*((ObjectU5BU5D_t288**)L_0)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_1 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		V_0 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		ObjectU5BU5D_t288** L_2 = ___args;
		NullCheck((*((ObjectU5BU5D_t288**)L_2)));
		V_0 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t288**)L_2)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		ObjectU5BU5D_t288** L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck((*((ObjectU5BU5D_t288**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t288**)L_3)), L_4);
		int32_t L_5 = L_4;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t288**)L_3)), L_5)))
		{
			goto IL_002c;
		}
	}
	{
		TypeU5BU5D_t618* L_6 = V_0;
		int32_t L_7 = V_1;
		ObjectU5BU5D_t288** L_8 = ___args;
		int32_t L_9 = V_1;
		NullCheck((*((ObjectU5BU5D_t288**)L_8)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t288**)L_8)), L_9);
		int32_t L_10 = L_9;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t288**)L_8)), L_10)));
		Type_t * L_11 = Object_GetType_m1420((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t288**)L_8)), L_10)), /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		ArrayElementTypeCheck (L_6, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, L_7)) = (Type_t *)L_11;
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t288** L_14 = ___args;
		NullCheck((*((ObjectU5BU5D_t288**)L_14)));
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t288**)L_14)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		int32_t L_15 = ___bindingAttr;
		MethodBaseU5BU5D_t1515* L_16 = ___match;
		TypeU5BU5D_t618* L_17 = V_0;
		ParameterModifierU5BU5D_t749* L_18 = ___modifiers;
		MethodBase_t730 * L_19 = Default_SelectMethod_m8316(__this, L_15, L_16, L_17, L_18, 1, /*hidden argument*/&Default_SelectMethod_m8316_MethodInfo);
		V_2 = L_19;
		Object_t ** L_20 = ___state;
		*((Object_t **)(L_20)) = (Object_t *)NULL;
		StringU5BU5D_t433* L_21 = ___names;
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		StringU5BU5D_t433* L_22 = ___names;
		ObjectU5BU5D_t288** L_23 = ___args;
		MethodBase_t730 * L_24 = V_2;
		Default_ReorderParameters_m8309(__this, L_22, L_23, L_24, /*hidden argument*/&Default_ReorderParameters_m8309_MethodInfo);
	}

IL_0056:
	{
		MethodBase_t730 * L_25 = V_2;
		return L_25;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" void Default_ReorderParameters_m8309 (Default_t1514 * __this, StringU5BU5D_t433* ___names, ObjectU5BU5D_t288** ___args, MethodBase_t730 * ___selected, MethodInfo* method)
{
	static bool Default_ReorderParameters_m8309_init;
	if (!Default_ReorderParameters_m8309_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		Default_ReorderParameters_m8309_init = true;
	}
	ObjectU5BU5D_t288* V_0 = {0};
	ParameterInfoU5BU5D_t741* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t288** L_0 = ___args;
		NullCheck((*((ObjectU5BU5D_t288**)L_0)));
		V_0 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t288**)L_0)))->max_length)))));
		ObjectU5BU5D_t288** L_1 = ___args;
		ObjectU5BU5D_t288* L_2 = V_0;
		ObjectU5BU5D_t288** L_3 = ___args;
		NullCheck((*((ObjectU5BU5D_t288**)L_3)));
		Array_Copy_m4995(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t288**)L_1)), (Array_t *)(Array_t *)L_2, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t288**)L_3)))->max_length))), /*hidden argument*/&Array_Copy_m4995_MethodInfo);
		MethodBase_t730 * L_4 = ___selected;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t741* L_5 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		StringU5BU5D_t433* L_6 = ___names;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ParameterInfoU5BU5D_t741* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_9, L_11)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m8514_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_9, L_11)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m58(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8)), L_12, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t288* L_14 = V_0;
		int32_t L_15 = V_3;
		ObjectU5BU5D_t288** L_16 = ___args;
		int32_t L_17 = V_2;
		NullCheck((*((ObjectU5BU5D_t288**)L_16)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t288**)L_16)), L_17);
		int32_t L_18 = L_17;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t288**)L_16)), L_18)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, L_15)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t288**)L_16)), L_18));
		goto IL_004a;
	}

IL_0040:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_20 = V_3;
		ParameterInfoU5BU5D_t741* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t433* L_24 = ___names;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t288* L_25 = V_0;
		ObjectU5BU5D_t288** L_26 = ___args;
		ObjectU5BU5D_t288** L_27 = ___args;
		NullCheck((*((ObjectU5BU5D_t288**)L_27)));
		Array_Copy_m4995(NULL /*static, unused*/, (Array_t *)(Array_t *)L_25, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t288**)L_26)), (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t288**)L_27)))->max_length))), /*hidden argument*/&Array_Copy_m4995_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m8310 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___object_type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3522_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_2 = ___target_type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3522_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_4 = ___object_type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_4);
		Type_t * L_6 = ___target_type;
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_6);
		bool L_8 = Default_IsArrayAssignable_m8310(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/&Default_IsArrayAssignable_m8310_MethodInfo);
		return L_8;
	}

IL_0022:
	{
		Type_t * L_9 = ___target_type;
		Type_t * L_10 = ___object_type;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern MethodInfo Default_ChangeType_m8311_MethodInfo;
extern "C" Object_t * Default_ChangeType_m8311 (Default_t1514 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m1420(L_1, /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		V_0 = L_2;
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6783_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_5);
		___type = L_6;
	}

IL_001e:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = ___type;
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___type;
		Object_t * L_10 = ___value;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m6809_MethodInfo, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		Object_t * L_12 = ___value;
		return L_12;
	}

IL_002d:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3522_MethodInfo, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_15 = ___type;
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m3522_MethodInfo, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_17);
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_19);
		bool L_21 = Default_IsArrayAssignable_m8310(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Default_IsArrayAssignable_m8310_MethodInfo);
		if (!L_21)
		{
			goto IL_0052;
		}
	}
	{
		Object_t * L_22 = ___value;
		return L_22;
	}

IL_0052:
	{
		Type_t * L_23 = V_0;
		Type_t * L_24 = ___type;
		bool L_25 = Default_check_type_m8313(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Default_check_type_m8313_MethodInfo);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		Type_t * L_26 = ___type;
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_28 = ___type;
		Object_t * L_29 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t348_il2cpp_TypeInfo));
		Object_t * L_30 = Enum_ToObject_m6669(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&Enum_ToObject_m6669_MethodInfo);
		return L_30;
	}

IL_006e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Char_t190_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_33 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_34 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Double_t716_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_33) == ((Object_t*)(Type_t *)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_35 = ___value;
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo)))))));
		Object_t * L_37 = Box(InitializedTypeInfo(&Double_t716_il2cpp_TypeInfo), &L_36);
		return L_37;
	}

IL_0095:
	{
		Type_t * L_38 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_39 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Single_t44_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_38) == ((Object_t*)(Type_t *)L_39))))
		{
			goto IL_00af;
		}
	}
	{
		Object_t * L_40 = ___value;
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo)))))));
		Object_t * L_42 = Box(InitializedTypeInfo(&Single_t44_il2cpp_TypeInfo), &L_41);
		return L_42;
	}

IL_00af:
	{
		Type_t * L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_00c6;
		}
	}
	{
		Type_t * L_45 = ___type;
		NullCheck(L_45);
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6790_MethodInfo, L_45);
		if (!L_46)
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_47 = ___value;
		return L_47;
	}

IL_00c6:
	{
		Object_t * L_48 = ___value;
		Type_t * L_49 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t701_il2cpp_TypeInfo));
		Object_t * L_50 = Convert_ChangeType_m9896(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&Convert_ChangeType_m9896_MethodInfo);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern MethodInfo Default_ReorderArgumentArray_m8312_MethodInfo;
extern "C" void Default_ReorderArgumentArray_m8312 (Default_t1514 * __this, ObjectU5BU5D_t288** ___args, Object_t * ___state, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C" bool Default_check_type_m8313 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		Type_t * L_0 = ___from;
		Type_t * L_1 = ___to;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_2 = ___from;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		Type_t * L_3 = ___to;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6783_MethodInfo, L_3);
		Type_t * L_5 = ___from;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6783_MethodInfo, L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		Type_t * L_7 = ___to;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6788_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___to;
		Type_t * L_10 = ___from;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		Type_t * L_12 = ___to;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_14 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t348_il2cpp_TypeInfo));
		Type_t * L_15 = Enum_GetUnderlyingType_m6661(NULL /*static, unused*/, L_14, /*hidden argument*/&Enum_GetUnderlyingType_m6661_MethodInfo);
		___to = L_15;
		Type_t * L_16 = ___from;
		Type_t * L_17 = ___to;
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		Type_t * L_18 = ___to;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m6831_MethodInfo, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_20 = ___to;
		NullCheck(L_20);
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetGenericTypeDefinition_m6830_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_22 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Nullable_1_t1865_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_23 = ___to;
		NullCheck(L_23);
		TypeU5BU5D_t618* L_24 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&Type_GetGenericArguments_m6826_MethodInfo, L_23);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		Type_t * L_26 = ___from;
		if ((!(((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_24, L_25))) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		Type_t * L_27 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_28 = Type_GetTypeCode_m6804(NULL /*static, unused*/, L_27, /*hidden argument*/&Type_GetTypeCode_m6804_MethodInfo);
		V_0 = L_28;
		Type_t * L_29 = ___to;
		int32_t L_30 = Type_GetTypeCode_m6804(NULL /*static, unused*/, L_29, /*hidden argument*/&Type_GetTypeCode_m6804_MethodInfo);
		V_1 = L_30;
		int32_t L_31 = V_0;
		V_2 = L_31;
		int32_t L_32 = V_2;
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		Type_t * L_35 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_36 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		return ((((Object_t*)(Type_t *)L_35) == ((Object_t*)(Type_t *)L_36))? 1 : 0);
	}

IL_00e7:
	{
		int32_t L_37 = V_1;
		V_3 = L_37;
		int32_t L_38 = V_3;
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		Type_t * L_39 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_40 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0148;
		}
	}
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_0145;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B28_0 = ((((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		Type_t * L_47 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_48 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_47) == ((Object_t*)(Type_t *)L_48)))
		{
			goto IL_019f;
		}
	}
	{
		Type_t * L_49 = ___from;
		NullCheck(L_49);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_49);
		if (!L_50)
		{
			goto IL_019c;
		}
	}
	{
		Type_t * L_51 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_52 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B38_0 = ((((Object_t*)(Type_t *)L_51) == ((Object_t*)(Type_t *)L_52))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		int32_t L_53 = V_1;
		V_3 = L_53;
		int32_t L_54 = V_3;
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		Type_t * L_55 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_56 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_55) == ((Object_t*)(Type_t *)L_56)))
		{
			goto IL_01ef;
		}
	}
	{
		Type_t * L_57 = ___from;
		NullCheck(L_57);
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_57);
		if (!L_58)
		{
			goto IL_01ec;
		}
	}
	{
		Type_t * L_59 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_60 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B48_0 = ((((Object_t*)(Type_t *)L_59) == ((Object_t*)(Type_t *)L_60))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		int32_t L_61 = V_1;
		V_3 = L_61;
		int32_t L_62 = V_3;
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		Type_t * L_63 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_64 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_63) == ((Object_t*)(Type_t *)L_64)))
		{
			goto IL_023f;
		}
	}
	{
		Type_t * L_65 = ___from;
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_65);
		if (!L_66)
		{
			goto IL_023c;
		}
	}
	{
		Type_t * L_67 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_68 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B58_0 = ((((Object_t*)(Type_t *)L_67) == ((Object_t*)(Type_t *)L_68))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		int32_t L_69 = V_1;
		V_3 = L_69;
		int32_t L_70 = V_3;
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		Type_t * L_71 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_72 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_71) == ((Object_t*)(Type_t *)L_72)))
		{
			goto IL_0287;
		}
	}
	{
		Type_t * L_73 = ___from;
		NullCheck(L_73);
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_73);
		if (!L_74)
		{
			goto IL_0284;
		}
	}
	{
		Type_t * L_75 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_76 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B68_0 = ((((Object_t*)(Type_t *)L_75) == ((Object_t*)(Type_t *)L_76))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		int32_t L_77 = V_1;
		V_3 = L_77;
		int32_t L_78 = V_3;
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		Type_t * L_79 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_80 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_79) == ((Object_t*)(Type_t *)L_80)))
		{
			goto IL_02cf;
		}
	}
	{
		Type_t * L_81 = ___from;
		NullCheck(L_81);
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_81);
		if (!L_82)
		{
			goto IL_02cc;
		}
	}
	{
		Type_t * L_83 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_84 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B78_0 = ((((Object_t*)(Type_t *)L_83) == ((Object_t*)(Type_t *)L_84))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		int32_t L_85 = V_1;
		V_3 = L_85;
		int32_t L_86 = V_3;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_87 = V_3;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		Type_t * L_88 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_89 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_88) == ((Object_t*)(Type_t *)L_89)))
		{
			goto IL_0308;
		}
	}
	{
		Type_t * L_90 = ___from;
		NullCheck(L_90);
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_90);
		if (!L_91)
		{
			goto IL_0305;
		}
	}
	{
		Type_t * L_92 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_93 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B89_0 = ((((Object_t*)(Type_t *)L_92) == ((Object_t*)(Type_t *)L_93))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		int32_t L_94 = V_1;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		Type_t * L_95 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_96 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		G_B95_0 = ((((Object_t*)(Type_t *)L_95) == ((Object_t*)(Type_t *)L_96))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		Type_t * L_97 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_98 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_97) == ((Object_t*)(Type_t *)L_98))))
		{
			goto IL_0337;
		}
	}
	{
		Type_t * L_99 = ___from;
		NullCheck(L_99);
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6793_MethodInfo, L_99);
		if (!L_100)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		Type_t * L_101 = ___to;
		NullCheck(L_101);
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6790_MethodInfo, L_101);
		if (!L_102)
		{
			goto IL_034e;
		}
	}
	{
		Type_t * L_103 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_104 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_103) == ((Object_t*)(Type_t *)L_104))))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		Type_t * L_105 = ___to;
		Type_t * L_106 = ___from;
		NullCheck(L_105);
		bool L_107 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_105, L_106);
		return L_107;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m8314 (Object_t * __this /* static, unused */, TypeU5BU5D_t618* ___types, ParameterInfoU5BU5D_t741* ___args, bool ___allowByRefMatch, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Type_t * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		TypeU5BU5D_t618* L_0 = ___types;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t741* L_3 = ___args;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = Default_check_type_m8313(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/&Default_check_type_m8313_MethodInfo);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		bool L_9 = ___allowByRefMatch;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_10 = ___args;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		Type_t * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6783_MethodInfo, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		TypeU5BU5D_t618* L_16 = ___types;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Type_t * L_19 = V_2;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_19);
		bool L_21 = Default_check_type_m8313(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_16, L_18)), L_20, /*hidden argument*/&Default_check_type_m8313_MethodInfo);
		V_1 = L_21;
	}

IL_003b:
	{
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_24 = V_0;
		TypeU5BU5D_t618* L_25 = ___types;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectMethod_m8315_MethodInfo;
extern "C" MethodBase_t730 * Default_SelectMethod_m8315 (Default_t1514 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1515* ___match, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodBaseU5BU5D_t1515* L_1 = ___match;
		TypeU5BU5D_t618* L_2 = ___types;
		ParameterModifierU5BU5D_t749* L_3 = ___modifiers;
		MethodBase_t730 * L_4 = Default_SelectMethod_m8316(__this, L_0, L_1, L_2, L_3, 0, /*hidden argument*/&Default_SelectMethod_m8316_MethodInfo);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C" MethodBase_t730 * Default_SelectMethod_m8316 (Default_t1514 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t1515* ___match, TypeU5BU5D_t618* ___types, ParameterModifierU5BU5D_t749* ___modifiers, bool ___allowByRefMatch, MethodInfo* method)
{
	MethodBase_t730 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterInfoU5BU5D_t741* V_3 = {0};
	bool V_4 = false;
	Type_t * V_5 = {0};
	ParameterInfoU5BU5D_t741* V_6 = {0};
	MethodBase_t730 * V_7 = {0};
	ParameterInfoU5BU5D_t741* V_8 = {0};
	{
		MethodBaseU5BU5D_t1515* L_0 = ___match;
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
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		MethodBaseU5BU5D_t1515* L_2 = ___match;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_2, L_4));
		MethodBase_t730 * L_5 = V_0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_t741* L_6 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_5);
		V_3 = L_6;
		ParameterInfoU5BU5D_t741* L_7 = V_3;
		NullCheck(L_7);
		TypeU5BU5D_t618* L_8 = ___types;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		TypeU5BU5D_t618* L_9 = ___types;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		ParameterInfoU5BU5D_t741* L_12 = V_3;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_12, L_14)));
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_12, L_14)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_11))) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t618* L_18 = ___types;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		int32_t L_19 = V_2;
		TypeU5BU5D_t618* L_20 = ___types;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		MethodBase_t730 * L_21 = V_0;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_1;
		MethodBaseU5BU5D_t1515* L_24 = ___match;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (Type_t *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		MethodBaseU5BU5D_t1515* L_25 = ___match;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		V_0 = (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_25, L_27));
		MethodBase_t730 * L_28 = V_0;
		NullCheck(L_28);
		ParameterInfoU5BU5D_t741* L_29 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_28);
		V_6 = L_29;
		ParameterInfoU5BU5D_t741* L_30 = V_6;
		NullCheck(L_30);
		TypeU5BU5D_t618* L_31 = ___types;
		NullCheck(L_31);
		if ((((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))) <= ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		ParameterInfoU5BU5D_t741* L_32 = V_6;
		NullCheck(L_32);
		if ((((int32_t)(((Array_t *)L_32)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		ParameterInfoU5BU5D_t741* L_33 = V_6;
		ParameterInfoU5BU5D_t741* L_34 = V_6;
		NullCheck(L_34);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_36 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ParamArrayAttribute_t388_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		bool L_37 = Attribute_IsDefined_m6096(NULL /*static, unused*/, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_33, L_35)), L_36, /*hidden argument*/&Attribute_IsDefined_m6096_MethodInfo);
		V_4 = L_37;
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		ParameterInfoU5BU5D_t741* L_39 = V_6;
		ParameterInfoU5BU5D_t741* L_40 = V_6;
		NullCheck(L_40);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_39, L_41)));
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_39, L_41)));
		NullCheck(L_42);
		Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		ParameterInfoU5BU5D_t741* L_45 = V_6;
		NullCheck(L_45);
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		TypeU5BU5D_t618* L_46 = ___types;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		ParameterInfoU5BU5D_t741* L_49 = V_6;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_49, L_51)));
		Type_t * L_52 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_49, L_51)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_46, L_48))) == ((Object_t*)(Type_t *)L_52)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		int32_t L_53 = V_2;
		ParameterInfoU5BU5D_t741* L_54 = V_6;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))-(int32_t)1)))))
		{
			goto IL_00ec;
		}
	}
	{
		TypeU5BU5D_t618* L_55 = ___types;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		int32_t L_57 = L_56;
		Type_t * L_58 = V_5;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_55, L_57))) == ((Object_t*)(Type_t *)L_58)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		int32_t L_59 = V_2;
		V_2 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_60 = V_2;
		TypeU5BU5D_t618* L_61 = ___types;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((Array_t *)L_61)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		int32_t L_62 = V_2;
		TypeU5BU5D_t618* L_63 = ___types;
		NullCheck(L_63);
		if ((!(((uint32_t)L_62) == ((uint32_t)(((int32_t)(((Array_t *)L_63)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		MethodBase_t730 * L_64 = V_0;
		return L_64;
	}

IL_00fe:
	{
		int32_t L_65 = V_1;
		V_1 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_66 = V_1;
		MethodBaseU5BU5D_t1515* L_67 = ___match;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)(((Array_t *)L_67)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_68 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_68&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (MethodBase_t730 *)NULL;
	}

IL_0116:
	{
		V_7 = (MethodBase_t730 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		MethodBaseU5BU5D_t1515* L_69 = ___match;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		int32_t L_71 = L_70;
		V_0 = (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_69, L_71));
		MethodBase_t730 * L_72 = V_0;
		NullCheck(L_72);
		ParameterInfoU5BU5D_t741* L_73 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_72);
		V_8 = L_73;
		ParameterInfoU5BU5D_t741* L_74 = V_8;
		NullCheck(L_74);
		TypeU5BU5D_t618* L_75 = ___types;
		NullCheck(L_75);
		if ((((int32_t)(((int32_t)(((Array_t *)L_74)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_75)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		TypeU5BU5D_t618* L_76 = ___types;
		ParameterInfoU5BU5D_t741* L_77 = V_8;
		bool L_78 = ___allowByRefMatch;
		bool L_79 = Default_check_arguments_m8314(NULL /*static, unused*/, L_76, L_77, L_78, /*hidden argument*/&Default_check_arguments_m8314_MethodInfo);
		if (L_79)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		MethodBase_t730 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		MethodBase_t730 * L_81 = V_7;
		MethodBase_t730 * L_82 = V_0;
		TypeU5BU5D_t618* L_83 = ___types;
		MethodBase_t730 * L_84 = Default_GetBetterMethod_m8317(__this, L_81, L_82, L_83, /*hidden argument*/&Default_GetBetterMethod_m8317_MethodInfo);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		MethodBase_t730 * L_85 = V_0;
		V_7 = L_85;
	}

IL_0157:
	{
		int32_t L_86 = V_1;
		V_1 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_015b:
	{
		int32_t L_87 = V_1;
		MethodBaseU5BU5D_t1515* L_88 = ___match;
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((Array_t *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		MethodBase_t730 * L_89 = V_7;
		return L_89;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C" MethodBase_t730 * Default_GetBetterMethod_m8317 (Default_t1514 * __this, MethodBase_t730 * ___m1, MethodBase_t730 * ___m2, TypeU5BU5D_t618* ___types, MethodInfo* method)
{
	ParameterInfoU5BU5D_t741* V_0 = {0};
	ParameterInfoU5BU5D_t741* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	Type_t * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	MethodBase_t730 * G_B19_0 = {0};
	{
		MethodBase_t730 * L_0 = ___m1;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8362_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t730 * L_2 = ___m2;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8362_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t730 * L_4 = ___m2;
		return L_4;
	}

IL_0012:
	{
		MethodBase_t730 * L_5 = ___m2;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8362_MethodInfo, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t730 * L_7 = ___m1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m8362_MethodInfo, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t730 * L_9 = ___m1;
		return L_9;
	}

IL_0024:
	{
		MethodBase_t730 * L_10 = ___m1;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t741* L_11 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_10);
		V_0 = L_11;
		MethodBase_t730 * L_12 = ___m2;
		NullCheck(L_12);
		ParameterInfoU5BU5D_t741* L_13 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		ParameterInfoU5BU5D_t741* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_14, L_16)));
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_14, L_16)));
		ParameterInfoU5BU5D_t741* L_18 = V_1;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = Default_CompareCloserType_m8318(__this, L_17, L_21, /*hidden argument*/&Default_CompareCloserType_m8318_MethodInfo);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_24 = V_2;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		AmbiguousMatchException_t1508 * L_27 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_27, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0062:
	{
		int32_t L_28 = V_4;
		if (!L_28)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_29 = V_4;
		V_2 = L_29;
	}

IL_0069:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_31 = V_3;
		ParameterInfoU5BU5D_t741* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		MethodBase_t730 * L_35 = ___m2;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		MethodBase_t730 * L_36 = ___m1;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		MethodBase_t730 * L_37 = ___m1;
		NullCheck(L_37);
		Type_t * L_38 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_37);
		V_5 = L_38;
		MethodBase_t730 * L_39 = ___m2;
		NullCheck(L_39);
		Type_t * L_40 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_39);
		V_6 = L_40;
		Type_t * L_41 = V_5;
		Type_t * L_42 = V_6;
		if ((((Object_t*)(Type_t *)L_41) == ((Object_t*)(Type_t *)L_42)))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_43 = V_5;
		Type_t * L_44 = V_6;
		NullCheck(L_43);
		bool L_45 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6808_MethodInfo, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		MethodBase_t730 * L_46 = ___m1;
		return L_46;
	}

IL_00a2:
	{
		Type_t * L_47 = V_6;
		Type_t * L_48 = V_5;
		NullCheck(L_47);
		bool L_49 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6808_MethodInfo, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		MethodBase_t730 * L_50 = ___m2;
		return L_50;
	}

IL_00af:
	{
		MethodBase_t730 * L_51 = ___m1;
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8358_MethodInfo, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		MethodBase_t730 * L_53 = ___m2;
		NullCheck(L_53);
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m8358_MethodInfo, L_53);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_54&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_00d9;
		}
	}
	{
		MethodBase_t730 * L_57 = ___m2;
		return L_57;
	}

IL_00d9:
	{
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_59 = V_7;
		if (L_59)
		{
			goto IL_00e3;
		}
	}
	{
		MethodBase_t730 * L_60 = ___m1;
		return L_60;
	}

IL_00e3:
	{
		AmbiguousMatchException_t1508 * L_61 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_61, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_61);
	}
}
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern MethodInfo* Array_IndexOf_TisType_t_m10515_MethodInfo_var;
extern "C" int32_t Default_CompareCloserType_m8318 (Default_t1514 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method)
{
	static bool Default_CompareCloserType_m8318_init;
	if (!Default_CompareCloserType_m8318_init)
	{
		Array_IndexOf_TisType_t_m10515_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Array_IndexOf_TisType_t_m10515_GenericMethod);
		Default_CompareCloserType_m8318_init = true;
	}
	{
		Type_t * L_0 = ___t1;
		Type_t * L_1 = ___t2;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		Type_t * L_2 = ___t1;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6833_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_4 = ___t2;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6833_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Type_t * L_6 = ___t1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6833_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_8 = ___t2;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m6833_MethodInfo, L_8);
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		Type_t * L_10 = ___t1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6781_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_12 = ___t2;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6781_MethodInfo, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_14 = ___t1;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_14);
		Type_t * L_16 = ___t2;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_16);
		int32_t L_18 = Default_CompareCloserType_m8318(__this, L_15, L_17, /*hidden argument*/&Default_CompareCloserType_m8318_MethodInfo);
		return L_18;
	}

IL_004d:
	{
		Type_t * L_19 = ___t1;
		Type_t * L_20 = ___t2;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6808_MethodInfo, L_19, L_20);
		if (!L_21)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		Type_t * L_22 = ___t2;
		Type_t * L_23 = ___t1;
		NullCheck(L_22);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m6808_MethodInfo, L_22, L_23);
		if (!L_24)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		Type_t * L_25 = ___t1;
		NullCheck(L_25);
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6788_MethodInfo, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_27 = ___t2;
		NullCheck(L_27);
		TypeU5BU5D_t618* L_28 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&Type_GetInterfaces_m10512_MethodInfo, L_27);
		Type_t * L_29 = ___t1;
		int32_t L_30 = Array_IndexOf_TisType_t_m10515(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/Array_IndexOf_TisType_t_m10515_MethodInfo_var);
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		Type_t * L_31 = ___t2;
		NullCheck(L_31);
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m6788_MethodInfo, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		Type_t * L_33 = ___t1;
		NullCheck(L_33);
		TypeU5BU5D_t618* L_34 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&Type_GetInterfaces_m10512_MethodInfo, L_33);
		Type_t * L_35 = ___t2;
		int32_t L_36 = Array_IndexOf_TisType_t_m10515(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/Array_IndexOf_TisType_t_m10515_MethodInfo_var);
		if ((((int32_t)L_36) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectProperty_m8319_MethodInfo;
extern "C" PropertyInfo_t * Default_SelectProperty_m8319 (Default_t1514 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t743* ___match, Type_t * ___returnType, TypeU5BU5D_t618* ___indexes, ParameterModifierU5BU5D_t749* ___modifiers, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PropertyInfo_t * V_7 = {0};
	ParameterInfoU5BU5D_t741* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		PropertyInfoU5BU5D_t743* L_0 = ___match;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		PropertyInfoU5BU5D_t743* L_1 = ___match;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_t332 * L_2 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_2, (String_t*) &_stringLiteral1668, (String_t*) &_stringLiteral1177, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		Type_t * L_3 = ___returnType;
		V_0 = ((((int32_t)((((Object_t*)(Type_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		TypeU5BU5D_t618* L_4 = ___indexes;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		TypeU5BU5D_t618* L_5 = ___indexes;
		NullCheck(L_5);
		G_B6_0 = (((int32_t)(((Array_t *)L_5)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (PropertyInfo_t *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		PropertyInfoU5BU5D_t743* L_6 = ___match;
		NullCheck(L_6);
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		PropertyInfoU5BU5D_t743* L_7 = ___match;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_7 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_7, L_9));
		PropertyInfo_t * L_10 = V_7;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t741* L_11 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&PropertyInfo_GetIndexParameters_m10514_MethodInfo, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		ParameterInfoU5BU5D_t741* L_14 = V_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) == ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		PropertyInfo_t * L_16 = V_7;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m3537_MethodInfo, L_16);
		Type_t * L_18 = ___returnType;
		if ((((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		TypeU5BU5D_t618* L_20 = ___indexes;
		ParameterInfoU5BU5D_t741* L_21 = V_8;
		int32_t L_22 = Default_check_arguments_with_score_m8320(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&Default_check_arguments_with_score_m8320_MethodInfo);
		V_9 = L_22;
		int32_t L_23 = V_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		PropertyInfo_t * L_24 = V_7;
		NullCheck(L_24);
		Type_t * L_25 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		int32_t L_26 = Binder_GetDerivedLevel_m8326(NULL /*static, unused*/, L_25, /*hidden argument*/&Binder_GetDerivedLevel_m8326_MethodInfo);
		V_10 = L_26;
		PropertyInfo_t * L_27 = V_2;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_9;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		int32_t L_30 = V_4;
		int32_t L_31 = V_9;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_10;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_34 = V_9;
		V_5 = L_34;
		goto IL_00d2;
	}

IL_00bf:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_10;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		PropertyInfo_t * L_37 = V_7;
		V_2 = L_37;
		int32_t L_38 = V_9;
		V_4 = L_38;
		int32_t L_39 = V_10;
		V_6 = L_39;
	}

IL_00d2:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40-(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_00e9;
		}
	}
	{
		AmbiguousMatchException_t1508 * L_44 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_44, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		PropertyInfo_t * L_45 = V_2;
		return L_45;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m8320 (Object_t * __this /* static, unused */, TypeU5BU5D_t618* ___types, ParameterInfoU5BU5D_t741* ___args, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		TypeU5BU5D_t618* L_0 = ___types;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t741* L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = Default_check_type_with_score_m8321(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/&Default_check_type_with_score_m8321_MethodInfo);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_11 = V_2;
		V_0 = L_11;
	}

IL_0023:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		TypeU5BU5D_t618* L_14 = ___types;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C" int32_t Default_check_type_with_score_m8321 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		Type_t * L_0 = ___from;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_1 = ___to;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m6793_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		Type_t * L_3 = ___from;
		Type_t * L_4 = ___to;
		if ((!(((Object_t*)(Type_t *)L_3) == ((Object_t*)(Type_t *)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		Type_t * L_5 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_5) == ((Object_t*)(Type_t *)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		Type_t * L_7 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_8 = Type_GetTypeCode_m6804(NULL /*static, unused*/, L_7, /*hidden argument*/&Type_GetTypeCode_m6804_MethodInfo);
		V_0 = L_8;
		Type_t * L_9 = ___to;
		int32_t L_10 = Type_GetTypeCode_m6804(NULL /*static, unused*/, L_9, /*hidden argument*/&Type_GetTypeCode_m6804_MethodInfo);
		V_1 = L_10;
		int32_t L_11 = V_0;
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		int32_t L_14 = V_3;
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		int32_t L_15 = V_1;
		V_3 = L_15;
		int32_t L_16 = V_3;
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		Type_t * L_17 = ___from;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_17);
		if (!L_18)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_19 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_20 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_20))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		int32_t L_21 = V_1;
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		Type_t * L_23 = ___from;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_23);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_25 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_25) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		Type_t * L_29 = ___from;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_29);
		if (!L_30)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_31 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		Type_t * L_35 = ___from;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_35);
		if (!L_36)
		{
			goto IL_01b4;
		}
	}
	{
		Type_t * L_37 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_38 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_37) == ((Object_t*)(Type_t *)L_38))))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		int32_t L_39 = V_1;
		V_3 = L_39;
		int32_t L_40 = V_3;
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_01ed;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		Type_t * L_47 = ___from;
		NullCheck(L_47);
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_47);
		if (!L_48)
		{
			goto IL_0226;
		}
	}
	{
		Type_t * L_49 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_50 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_49) == ((Object_t*)(Type_t *)L_50))))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		int32_t L_51 = V_1;
		V_3 = L_51;
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		Type_t * L_54 = ___from;
		NullCheck(L_54);
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m6786_MethodInfo, L_54);
		if (!L_55)
		{
			goto IL_0250;
		}
	}
	{
		Type_t * L_56 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_57 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Enum_t348_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_56) == ((Object_t*)(Type_t *)L_57))))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		Type_t * L_59 = ___to;
		Type_t * L_60 = ___from;
		NullCheck(L_59);
		bool L_61 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m3615_MethodInfo, L_59, L_60);
		if (!L_61)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
extern TypeInfo TargetParameterCountException_t1539_il2cpp_TypeInfo;
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
extern MethodInfo TargetParameterCountException__ctor_m8535_MethodInfo;
extern MethodInfo Binder_ChangeType_m10517_MethodInfo;
extern MethodInfo Type_get_BaseType_m3568_MethodInfo;


// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8322 (Binder_t748 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Binder::.cctor()
extern MethodInfo Binder__cctor_m8323_MethodInfo;
extern "C" void Binder__cctor_m8323 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Default_t1514 * L_0 = (Default_t1514 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Default_t1514_il2cpp_TypeInfo));
		Default__ctor_m8307(L_0, /*hidden argument*/&Default__ctor_m8307_MethodInfo);
		((Binder_t748_StaticFields*)InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo)->static_fields)->___default_binder_0 = L_0;
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t748 * Binder_get_DefaultBinder_m8324 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_0 = ((Binder_t748_StaticFields*)InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo)->static_fields)->___default_binder_0;
		return L_0;
	}
}
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern MethodInfo Binder_ConvertArgs_m8325_MethodInfo;
extern "C" bool Binder_ConvertArgs_m8325 (Object_t * __this /* static, unused */, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___args, ParameterInfoU5BU5D_t741* ___pinfo, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t288* L_0 = ___args;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_1 = ___pinfo;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		TargetParameterCountException_t1539 * L_2 = (TargetParameterCountException_t1539 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1539_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8535(L_2, /*hidden argument*/&TargetParameterCountException__ctor_m8535_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		ParameterInfoU5BU5D_t741* L_3 = ___pinfo;
		NullCheck(L_3);
		ObjectU5BU5D_t288* L_4 = ___args;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		TargetParameterCountException_t1539 * L_5 = (TargetParameterCountException_t1539 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1539_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8535(L_5, /*hidden argument*/&TargetParameterCountException__ctor_m8535_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		Binder_t748 * L_6 = ___binder;
		ObjectU5BU5D_t288* L_7 = ___args;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ParameterInfoU5BU5D_t741* L_10 = ___pinfo;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_10, L_12)));
		CultureInfo_t714 * L_14 = ___culture;
		NullCheck(L_6);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t714 * >::Invoke(&Binder_ChangeType_m10517_MethodInfo, L_6, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
		V_1 = L_15;
		Object_t * L_16 = V_1;
		if (L_16)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t288* L_17 = ___args;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		ObjectU5BU5D_t288* L_20 = ___args;
		int32_t L_21 = V_0;
		Object_t * L_22 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, L_21)) = (Object_t *)L_22;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_24 = V_0;
		ObjectU5BU5D_t288* L_25 = ___args;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8326 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	Type_t * V_0 = {0};
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___type;
		V_0 = L_0;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3568_MethodInfo, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m3568_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t730 * Binder_FindMostDerivedMatch_m8327 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1515* ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MethodBase_t730 * V_4 = {0};
	int32_t V_5 = 0;
	ParameterInfoU5BU5D_t741* V_6 = {0};
	ParameterInfoU5BU5D_t741* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		MethodBaseU5BU5D_t1515* L_0 = ___match;
		NullCheck(L_0);
		V_2 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		MethodBaseU5BU5D_t1515* L_1 = ___match;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_4 = (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_1, L_3));
		MethodBase_t730 * L_4 = V_4;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		int32_t L_6 = Binder_GetDerivedLevel_m8326(NULL /*static, unused*/, L_5, /*hidden argument*/&Binder_GetDerivedLevel_m8326_MethodInfo);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		AmbiguousMatchException_t1508 * L_9 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_9, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		MethodBase_t730 * L_11 = V_4;
		NullCheck(L_11);
		ParameterInfoU5BU5D_t741* L_12 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_11);
		V_6 = L_12;
		MethodBaseU5BU5D_t1515* L_13 = ___match;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_13, L_15)));
		ParameterInfoU5BU5D_t741* L_16 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		ParameterInfoU5BU5D_t741* L_17 = V_6;
		NullCheck(L_17);
		ParameterInfoU5BU5D_t741* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_17)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		ParameterInfoU5BU5D_t741* L_19 = V_6;
		int32_t L_20 = V_9;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_19, L_21)));
		Type_t * L_22 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_19, L_21)));
		ParameterInfoU5BU5D_t741* L_23 = V_7;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_23, L_25)));
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_23, L_25)));
		if ((((Object_t*)(Type_t *)L_22) == ((Object_t*)(Type_t *)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		int32_t L_27 = V_9;
		V_9 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_9;
		ParameterInfoU5BU5D_t741* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_008e;
		}
	}
	{
		AmbiguousMatchException_t1508 * L_31 = (AmbiguousMatchException_t1508 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t1508_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m8269(L_31, /*hidden argument*/&AmbiguousMatchException__ctor_m8269_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_008e:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_34 = V_5;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_1 = L_35;
	}

IL_0098:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_009c:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_000f;
		}
	}
	{
		MethodBaseU5BU5D_t1515* L_39 = ___match;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = L_40;
		return (*(MethodBase_t730 **)(MethodBase_t730 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern MethodInfo MethodBase__ctor_m8353_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m10518_MethodInfo;


// System.Void System.Reflection.ConstructorInfo::.ctor()
extern MethodInfo ConstructorInfo__ctor_m8328_MethodInfo;
extern "C" void ConstructorInfo__ctor_m8328 (ConstructorInfo_t624 * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m8353(__this, /*hidden argument*/&MethodBase__ctor_m8353_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern MethodInfo ConstructorInfo__cctor_m8329_MethodInfo;
extern "C" void ConstructorInfo__cctor_m8329 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((ConstructorInfo_t624_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0 = (String_t*) &_stringLiteral1669;
		((ConstructorInfo_t624_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t624_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1 = (String_t*) &_stringLiteral1670;
		return;
	}
}
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern MethodInfo ConstructorInfo_get_MemberType_m8330_MethodInfo;
extern "C" int32_t ConstructorInfo_get_MemberType_m8330 (ConstructorInfo_t624 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern MethodInfo ConstructorInfo_Invoke_m3554_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructorInfo_Invoke_m3554 (ConstructorInfo_t624 * __this, ObjectU5BU5D_t288* ___parameters, MethodInfo* method)
{
	static bool ConstructorInfo_Invoke_m3554_init;
	if (!ConstructorInfo_Invoke_m3554_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		ConstructorInfo_Invoke_m3554_init = true;
	}
	{
		ObjectU5BU5D_t288* L_0 = ___parameters;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		___parameters = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 0));
	}

IL_000d:
	{
		ObjectU5BU5D_t288* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker4< Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&ConstructorInfo_Invoke_m10518_MethodInfo, __this, ((int32_t)512), (Binder_t748 *)NULL, L_1, (CultureInfo_t714 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventAttributes_t1517_il2cpp_TypeInfo;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributesMethodDeclarations.h"



// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddEventAdapter_t1518_il2cpp_TypeInfo;
// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapterMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"


// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo AddEventAdapter__ctor_m8331_MethodInfo;
extern "C" void AddEventAdapter__ctor_m8331 (AddEventAdapter_t1518 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern MethodInfo AddEventAdapter_Invoke_m8332_MethodInfo;
extern "C" void AddEventAdapter_Invoke_m8332 (AddEventAdapter_t1518 * __this, Object_t * ____this, Delegate_t310 * ___dele, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AddEventAdapter_Invoke_m8332((AddEventAdapter_t1518 *)__this->___prev_9,____this, ___dele, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, Delegate_t310 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ____this, Delegate_t310 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Delegate_t310 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1518(Il2CppObject* delegate, Object_t * ____this, Delegate_t310 * ___dele)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern MethodInfo AddEventAdapter_BeginInvoke_m8333_MethodInfo;
extern "C" Object_t * AddEventAdapter_BeginInvoke_m8333 (AddEventAdapter_t1518 * __this, Object_t * ____this, Delegate_t310 * ___dele, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ____this;
	__d_args[1] = ___dele;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo AddEventAdapter_EndInvoke_m8334_MethodInfo;
extern "C" void AddEventAdapter_EndInvoke_m8334 (AddEventAdapter_t1518 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfoMethodDeclarations.h"

extern MethodInfo EventInfo_GetAddMethod_m10519_MethodInfo;
extern MethodInfo MemberInfo__ctor_m6836_MethodInfo;


// System.Void System.Reflection.EventInfo::.ctor()
extern MethodInfo EventInfo__ctor_m8335_MethodInfo;
extern "C" void EventInfo__ctor_m8335 (EventInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6836(__this, /*hidden argument*/&MemberInfo__ctor_m6836_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern MethodInfo EventInfo_get_EventHandlerType_m8336_MethodInfo;
extern "C" Type_t * EventInfo_get_EventHandlerType_m8336 (EventInfo_t * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t741* V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Type_t * V_2 = {0};
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&EventInfo_GetAddMethod_m10519_MethodInfo, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t741* L_2 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t741* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_4, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		Type_t * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern MethodInfo EventInfo_get_MemberType_m8337_MethodInfo;
extern "C" int32_t EventInfo_get_MemberType_m8337 (EventInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo SystemException_t1130_il2cpp_TypeInfo;
extern TypeInfo NonSerializedAttribute_t1821_il2cpp_TypeInfo;
extern TypeInfo FieldOffsetAttribute_t1329_il2cpp_TypeInfo;
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandleMethodDeclarations.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttributeMethodDeclarations.h"
extern MethodInfo FieldInfo_GetUnmanagedMarshal_m8345_MethodInfo;
extern MethodInfo FieldInfo_SetValue_m10520_MethodInfo;
extern MethodInfo RuntimeFieldHandle_get_Value_m6841_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m3602_MethodInfo;
extern MethodInfo FieldInfo_internal_from_handle_type_m8342_MethodInfo;
extern MethodInfo FieldInfo_get_IsNotSerialized_m8341_MethodInfo;
extern MethodInfo Type_get_IsExplicitLayout_m6787_MethodInfo;
extern MethodInfo FieldInfo_get_UMarshal_m8346_MethodInfo;
extern MethodInfo NonSerializedAttribute__ctor_m10180_MethodInfo;
extern MethodInfo FieldInfo_GetFieldOffset_m8344_MethodInfo;
extern MethodInfo FieldOffsetAttribute__ctor_m6860_MethodInfo;


// System.Void System.Reflection.FieldInfo::.ctor()
extern MethodInfo FieldInfo__ctor_m8338_MethodInfo;
extern "C" void FieldInfo__ctor_m8338 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6836(__this, /*hidden argument*/&MemberInfo__ctor_m6836_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern MethodInfo FieldInfo_get_MemberType_m8339_MethodInfo;
extern "C" int32_t FieldInfo_get_MemberType_m8339 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern MethodInfo FieldInfo_get_IsLiteral_m8340_MethodInfo;
extern "C" bool FieldInfo_get_IsLiteral_m8340 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern MethodInfo FieldInfo_get_IsStatic_m3533_MethodInfo;
extern "C" bool FieldInfo_get_IsStatic_m3533 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern MethodInfo FieldInfo_get_IsInitOnly_m3540_MethodInfo;
extern "C" bool FieldInfo_get_IsInitOnly_m3540 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern MethodInfo FieldInfo_get_IsPublic_m3534_MethodInfo;
extern "C" bool FieldInfo_get_IsPublic_m3534 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m8341 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m10474_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern MethodInfo FieldInfo_SetValue_m3557_MethodInfo;
extern "C" void FieldInfo_SetValue_m3557 (FieldInfo_t * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		VirtActionInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, CultureInfo_t714 * >::Invoke(&FieldInfo_SetValue_m10520_MethodInfo, __this, L_0, L_1, 0, (Binder_t748 *)NULL, (CultureInfo_t714 *)NULL);
		return;
	}
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t * FieldInfo_internal_from_handle_type_m8342 (Object_t * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, MethodInfo* method)
{
	typedef FieldInfo_t * (*FieldInfo_internal_from_handle_type_m8342_ftn) (IntPtr_t, IntPtr_t);
	static FieldInfo_internal_from_handle_type_m8342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_internal_from_handle_type_m8342_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___field_handle, ___type_handle);
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern MethodInfo FieldInfo_GetFieldFromHandle_m8343_MethodInfo;
extern "C" FieldInfo_t * FieldInfo_GetFieldFromHandle_m8343 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t1320  ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = RuntimeFieldHandle_get_Value_m6841((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m6841_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m3602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&IntPtr_op_Equality_m3602_MethodInfo);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t332 * L_3 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_3, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		IntPtr_t L_4 = RuntimeFieldHandle_get_Value_m6841((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m6841_MethodInfo);
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		FieldInfo_t * L_6 = FieldInfo_internal_from_handle_type_m8342(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&FieldInfo_internal_from_handle_type_m8342_MethodInfo);
		return L_6;
	}
}
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C" int32_t FieldInfo_GetFieldOffset_m8344 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		SystemException_t1130 * L_0 = (SystemException_t1130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t1130_il2cpp_TypeInfo));
		SystemException__ctor_m4954(L_0, (String_t*) &_stringLiteral1672, /*hidden argument*/&SystemException__ctor_m4954_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t1496 * FieldInfo_GetUnmanagedMarshal_m8345 (FieldInfo_t * __this, MethodInfo* method)
{
	typedef UnmanagedMarshal_t1496 * (*FieldInfo_GetUnmanagedMarshal_m8345_ftn) (FieldInfo_t *);
	static FieldInfo_GetUnmanagedMarshal_m8345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_GetUnmanagedMarshal_m8345_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t1496 * FieldInfo_get_UMarshal_m8346 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1496 * L_0 = FieldInfo_GetUnmanagedMarshal_m8345(__this, /*hidden argument*/&FieldInfo_GetUnmanagedMarshal_m8345_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern MethodInfo FieldInfo_GetPseudoCustomAttributes_m8347_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t288* FieldInfo_GetPseudoCustomAttributes_m8347 (FieldInfo_t * __this, MethodInfo* method)
{
	static bool FieldInfo_GetPseudoCustomAttributes_m8347_init;
	if (!FieldInfo_GetPseudoCustomAttributes_m8347_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		FieldInfo_GetPseudoCustomAttributes_m8347_init = true;
	}
	int32_t V_0 = 0;
	UnmanagedMarshal_t1496 * V_1 = {0};
	ObjectU5BU5D_t288* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m8341_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, __this);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m6787_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		UnmanagedMarshal_t1496 * L_5 = (UnmanagedMarshal_t1496 *)VirtFuncInvoker0< UnmanagedMarshal_t1496 * >::Invoke(&FieldInfo_get_UMarshal_m8346_MethodInfo, __this);
		V_1 = L_5;
		UnmanagedMarshal_t1496 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return (ObjectU5BU5D_t288*)NULL;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_2 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m8341_MethodInfo, __this);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		ObjectU5BU5D_t288* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		NonSerializedAttribute_t1821 * L_14 = (NonSerializedAttribute_t1821 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NonSerializedAttribute_t1821_il2cpp_TypeInfo));
		NonSerializedAttribute__ctor_m10180(L_14, /*hidden argument*/&NonSerializedAttribute__ctor_m10180_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_004f:
	{
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, __this);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m6787_MethodInfo, L_15);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_t288* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_GetFieldOffset_m8344_MethodInfo, __this);
		FieldOffsetAttribute_t1329 * L_21 = (FieldOffsetAttribute_t1329 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldOffsetAttribute_t1329_il2cpp_TypeInfo));
		FieldOffsetAttribute__ctor_m6860(L_21, L_20, /*hidden argument*/&FieldOffsetAttribute__ctor_m6860_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_19);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)) = (Object_t *)L_21;
	}

IL_006e:
	{
		UnmanagedMarshal_t1496 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		ObjectU5BU5D_t288* L_23 = V_2;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		UnmanagedMarshal_t1496 * L_26 = V_1;
		NullCheck(L_26);
		MarshalAsAttribute_t1323 * L_27 = UnmanagedMarshal_ToMarshalAsAttribute_m8268(L_26, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m8268_MethodInfo);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)) = (Object_t *)L_27;
	}

IL_007e:
	{
		ObjectU5BU5D_t288* L_28 = V_2;
		return L_28;
	}
}
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MemberInfoSerializationHolder_t1520_il2cpp_TypeInfo;
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
extern TypeInfo SerializationException_t1108_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t1521_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
extern Il2CppType MemberInfoSerializationHolder_t1520_0_0_0;
extern Il2CppType String_t_0_0_0;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8350_MethodInfo;
extern MethodInfo SerializationInfo_SetType_m8955_MethodInfo;
extern MethodInfo Type_get_Module_m10481_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4779_MethodInfo;
extern MethodInfo Type_get_FullName_m3547_MethodInfo;
extern MethodInfo String_Equals_m4934_MethodInfo;
extern MethodInfo SerializationException__ctor_m4783_MethodInfo;
extern MethodInfo MethodInfo_get_IsGenericMethod_m8369_MethodInfo;
extern MethodInfo MethodInfo_GetGenericArguments_m8368_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m8367_MethodInfo;
extern MethodInfo Type_GetProperty_m6814_MethodInfo;


// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder__ctor_m8348_MethodInfo;
extern "C" void MemberInfoSerializationHolder__ctor_m8348 (MemberInfoSerializationHolder_t1520 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___ctx, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t1112 * V_2 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m4791(L_0, (String_t*) &_stringLiteral1673, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		V_0 = L_1;
		SerializationInfo_t665 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m4791(L_2, (String_t*) &_stringLiteral1201, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		V_1 = L_3;
		SerializationInfo_t665 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m4791(L_4, (String_t*) &_stringLiteral1674, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		__this->____memberName_0 = L_5;
		SerializationInfo_t665 * L_6 = ___info;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m4791(L_6, (String_t*) &_stringLiteral589, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		__this->____memberSignature_1 = L_7;
		SerializationInfo_t665 * L_8 = ___info;
		NullCheck(L_8);
		int32_t L_9 = SerializationInfo_GetInt32_m4793(L_8, (String_t*) &_stringLiteral1675, /*hidden argument*/&SerializationInfo_GetInt32_m4793_MethodInfo);
		__this->____memberType_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->____genericArguments_4 = (TypeU5BU5D_t618*)NULL;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SerializationException_t1108_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		String_t* L_10 = V_0;
		Assembly_t1112 * L_11 = Assembly_Load_m8287(NULL /*static, unused*/, L_10, /*hidden argument*/&Assembly_Load_m8287_MethodInfo);
		V_2 = L_11;
		Assembly_t1112 * L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m8283_MethodInfo, L_12, L_13, 1, 1);
		__this->____reflectedType_3 = L_14;
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern MethodInfo MemberInfoSerializationHolder_Serialize_m8349_MethodInfo;
extern "C" void MemberInfoSerializationHolder_Serialize_m8349 (Object_t * __this /* static, unused */, SerializationInfo_t665 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		String_t* L_1 = ___name;
		Type_t * L_2 = ___klass;
		String_t* L_3 = ___signature;
		int32_t L_4 = ___type;
		MemberInfoSerializationHolder_Serialize_m8350(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (TypeU5BU5D_t618*)(TypeU5BU5D_t618*)NULL, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8350_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m8350 (Object_t * __this /* static, unused */, SerializationInfo_t665 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t618* ___genericArguments, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&MemberInfoSerializationHolder_t1520_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_SetType_m8955(L_0, L_1, /*hidden argument*/&SerializationInfo_SetType_m8955_MethodInfo);
		SerializationInfo_t665 * L_2 = ___info;
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Module_t1318 * L_4 = (Module_t1318 *)VirtFuncInvoker0< Module_t1318 * >::Invoke(&Type_get_Module_m10481_MethodInfo, L_3);
		NullCheck(L_4);
		Assembly_t1112 * L_5 = Module_get_Assembly_m8377(L_4, /*hidden argument*/&Module_get_Assembly_m8377_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m8276_MethodInfo, L_5);
		Type_t * L_7 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_2);
		SerializationInfo_AddValue_m4779(L_2, (String_t*) &_stringLiteral1673, L_6, L_7, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t665 * L_8 = ___info;
		Type_t * L_9 = ___klass;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3547_MethodInfo, L_9);
		Type_t * L_11 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_8);
		SerializationInfo_AddValue_m4779(L_8, (String_t*) &_stringLiteral1201, L_10, L_11, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t665 * L_12 = ___info;
		String_t* L_13 = ___name;
		Type_t * L_14 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_12);
		SerializationInfo_AddValue_m4779(L_12, (String_t*) &_stringLiteral1674, L_13, L_14, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t665 * L_15 = ___info;
		String_t* L_16 = ___signature;
		Type_t * L_17 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_15);
		SerializationInfo_AddValue_m4779(L_15, (String_t*) &_stringLiteral589, L_16, L_17, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t665 * L_18 = ___info;
		int32_t L_19 = ___type;
		NullCheck(L_18);
		SerializationInfo_AddValue_m4781(L_18, (String_t*) &_stringLiteral1675, L_19, /*hidden argument*/&SerializationInfo_AddValue_m4781_MethodInfo);
		SerializationInfo_t665 * L_20 = ___info;
		TypeU5BU5D_t618* L_21 = ___genericArguments;
		Type_t * L_22 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&TypeU5BU5D_t618_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_20);
		SerializationInfo_AddValue_m4779(L_20, (String_t*) &_stringLiteral1676, (Object_t *)(Object_t *)L_21, L_22, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetObjectData_m8351_MethodInfo;
extern "C" void MemberInfoSerializationHolder_GetObjectData_m8351 (MemberInfoSerializationHolder_t1520 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetRealObject_m8352_MethodInfo;
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m8352 (MemberInfoSerializationHolder_t1520 * __this, StreamingContext_t666  ___context, MethodInfo* method)
{
	ConstructorInfoU5BU5D_t739* V_0 = {0};
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t1319* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	FieldInfo_t * V_5 = {0};
	PropertyInfo_t * V_6 = {0};
	EventInfo_t * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->____memberType_2);
		V_8 = L_0;
		int32_t L_1 = V_8;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		int32_t L_2 = V_8;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		Type_t * L_3 = (__this->____reflectedType_3);
		NullCheck(L_3);
		ConstructorInfoU5BU5D_t739* L_4 = (ConstructorInfoU5BU5D_t739*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t739*, int32_t >::Invoke(&Type_GetConstructors_m10480_MethodInfo, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		ConstructorInfoU5BU5D_t739* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ConstructorInfo_t624 **)(ConstructorInfo_t624 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, (*(ConstructorInfo_t624 **)(ConstructorInfo_t624 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_9 = (__this->____memberSignature_1);
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4934_MethodInfo, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		ConstructorInfoU5BU5D_t739* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		return (*(ConstructorInfo_t624 **)(ConstructorInfo_t624 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		ConstructorInfoU5BU5D_t739* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_17 = (__this->____memberSignature_1);
		Type_t * L_18 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1677, L_17, L_18, /*hidden argument*/&String_Format_m6406_MethodInfo);
		SerializationException_t1108 * L_20 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_20, L_19, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		Type_t * L_21 = (__this->____reflectedType_3);
		NullCheck(L_21);
		MethodInfoU5BU5D_t1319* L_22 = (MethodInfoU5BU5D_t1319*)VirtFuncInvoker1< MethodInfoU5BU5D_t1319*, int32_t >::Invoke(&Type_GetMethods_m10513_MethodInfo, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		MethodInfoU5BU5D_t1319* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_27 = (__this->____memberSignature_1);
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4934_MethodInfo, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		return (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_29, L_31));
	}

IL_00bb:
	{
		TypeU5BU5D_t618* L_32 = (__this->____genericArguments_4);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodInfo_get_IsGenericMethod_m8369_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		TypeU5BU5D_t618* L_40 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&MethodInfo_GetGenericArguments_m8368_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		NullCheck(L_40);
		TypeU5BU5D_t618* L_41 = (__this->____genericArguments_4);
		NullCheck(L_41);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((Array_t *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		TypeU5BU5D_t618* L_45 = (__this->____genericArguments_4);
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)));
		MethodInfo_t * L_46 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t618* >::Invoke(&MethodInfo_MakeGenericMethod_m8367_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		MethodInfo_t * L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m108_MethodInfo, L_47);
		String_t* L_49 = (__this->____memberSignature_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_50 = String_op_Equality_m58(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_50)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfo_t * L_51 = V_4;
		return L_51;
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_53 = V_3;
		MethodInfoU5BU5D_t1319* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((Array_t *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_55 = (__this->____memberSignature_1);
		Type_t * L_56 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_57 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1678, L_55, L_56, /*hidden argument*/&String_Format_m6406_MethodInfo);
		SerializationException_t1108 * L_58 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_58, L_57, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		Type_t * L_59 = (__this->____reflectedType_3);
		String_t* L_60 = (__this->____memberName_0);
		NullCheck(L_59);
		FieldInfo_t * L_61 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m10511_MethodInfo, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		FieldInfo_t * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		FieldInfo_t * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		String_t* L_64 = (__this->____memberName_0);
		Type_t * L_65 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_66 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1679, L_64, L_65, /*hidden argument*/&String_Format_m6406_MethodInfo);
		SerializationException_t1108 * L_67 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_67, L_66, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		Type_t * L_68 = (__this->____reflectedType_3);
		String_t* L_69 = (__this->____memberName_0);
		NullCheck(L_68);
		PropertyInfo_t * L_70 = (PropertyInfo_t *)VirtFuncInvoker2< PropertyInfo_t *, String_t*, int32_t >::Invoke(&Type_GetProperty_m6814_MethodInfo, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		PropertyInfo_t * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		PropertyInfo_t * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		String_t* L_73 = (__this->____memberName_0);
		Type_t * L_74 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_75 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1680, L_73, L_74, /*hidden argument*/&String_Format_m6406_MethodInfo);
		SerializationException_t1108 * L_76 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_76, L_75, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		Type_t * L_77 = (__this->____reflectedType_3);
		String_t* L_78 = (__this->____memberName_0);
		NullCheck(L_77);
		EventInfo_t * L_79 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&Type_GetEvent_m10510_MethodInfo, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		EventInfo_t * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		EventInfo_t * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		String_t* L_82 = (__this->____memberName_0);
		Type_t * L_83 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_84 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1681, L_82, L_83, /*hidden argument*/&String_Format_m6406_MethodInfo);
		SerializationException_t1108 * L_85 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_85, L_84, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->____memberType_2);
		int32_t L_87 = L_86;
		Object_t * L_88 = Box(InitializedTypeInfo(&MemberTypes_t1521_il2cpp_TypeInfo), &L_87);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_89 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1682, L_88, /*hidden argument*/&String_Format_m1502_MethodInfo);
		SerializationException_t1108 * L_90 = (SerializationException_t1108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1108_il2cpp_TypeInfo));
		SerializationException__ctor_m4783(L_90, L_89, /*hidden argument*/&SerializationException__ctor_m4783_MethodInfo);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle_get_Value_m10303_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromIntPtr_m8355_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromHandleInternalType_m8357_MethodInfo;
extern MethodInfo Type_get_IsGenericTypeDefinition_m6828_MethodInfo;
extern MethodInfo MethodBase_Invoke_m10521_MethodInfo;


// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m8353 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6836(__this, /*hidden argument*/&MemberInfo__ctor_m6836_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandleNoGenericCheck_m8354_MethodInfo;
extern "C" MethodBase_t730 * MethodBase_GetMethodFromHandleNoGenericCheck_m8354 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1494  ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m10303((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10303_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		MethodBase_t730 * L_2 = MethodBase_GetMethodFromIntPtr_m8355(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m8355_MethodInfo);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t730 * MethodBase_GetMethodFromIntPtr_m8355 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, MethodInfo* method)
{
	MethodBase_t730 * V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m3602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&IntPtr_op_Equality_m3602_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t332 * L_3 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_3, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___handle;
		IntPtr_t L_5 = ___declaringType;
		MethodBase_t730 * L_6 = MethodBase_GetMethodFromHandleInternalType_m8357(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&MethodBase_GetMethodFromHandleInternalType_m8357_MethodInfo);
		V_0 = L_6;
		MethodBase_t730 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t332 * L_8 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_8, (String_t*) &_stringLiteral1671, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		MethodBase_t730 * L_9 = V_0;
		return L_9;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandle_m8356_MethodInfo;
extern "C" MethodBase_t730 * MethodBase_GetMethodFromHandle_m8356 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1494  ___handle, MethodInfo* method)
{
	MethodBase_t730 * V_0 = {0};
	Type_t * V_1 = {0};
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m10303((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m10303_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		MethodBase_t730 * L_2 = MethodBase_GetMethodFromIntPtr_m8355(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m8355_MethodInfo);
		V_0 = L_2;
		MethodBase_t730 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_3);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m6831_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericTypeDefinition_m6828_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t332 * L_9 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_9, (String_t*) &_stringLiteral1683, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		MethodBase_t730 * L_10 = V_0;
		return L_10;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t730 * MethodBase_GetMethodFromHandleInternalType_m8357 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, MethodInfo* method)
{
	typedef MethodBase_t730 * (*MethodBase_GetMethodFromHandleInternalType_m8357_ftn) (IntPtr_t, IntPtr_t);
	static MethodBase_GetMethodFromHandleInternalType_m8357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBase_GetMethodFromHandleInternalType_m8357_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___method_handle, ___type_handle);
}
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern MethodInfo MethodBase_Invoke_m3555_MethodInfo;
extern "C" Object_t * MethodBase_Invoke_m3555 (MethodBase_t730 * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___parameters, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t288* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MethodBase_Invoke_m10521_MethodInfo, __this, L_0, 0, (Binder_t748 *)NULL, L_1, (CultureInfo_t714 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m8358 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern MethodInfo MethodBase_get_IsPublic_m3528_MethodInfo;
extern "C" bool MethodBase_get_IsPublic_m3528 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m3527 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern MethodInfo MethodBase_get_IsVirtual_m8359_MethodInfo;
extern "C" bool MethodBase_get_IsVirtual_m8359 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m10473_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern MethodInfo MethodBase_GetGenericArguments_m8360_MethodInfo;
extern "C" TypeU5BU5D_t618* MethodBase_GetGenericArguments_m8360 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern MethodInfo MethodBase_get_ContainsGenericParameters_m8361_MethodInfo;
extern "C" bool MethodBase_get_ContainsGenericParameters_m8361 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m8362 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern MethodInfo MethodBase_get_IsGenericMethod_m8363_MethodInfo;
extern "C" bool MethodBase_get_IsGenericMethod_m8363 (MethodBase_t730 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodImplAttributes_t1523_il2cpp_TypeInfo;
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo Type_ToString_m6824_MethodInfo;


// System.Void System.Reflection.MethodInfo::.ctor()
extern MethodInfo MethodInfo__ctor_m8364_MethodInfo;
extern "C" void MethodInfo__ctor_m8364 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m8353(__this, /*hidden argument*/&MethodBase__ctor_m8353_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern MethodInfo MethodInfo_get_MemberType_m8365_MethodInfo;
extern "C" int32_t MethodInfo_get_MemberType_m8365 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern MethodInfo MethodInfo_get_ReturnType_m8366_MethodInfo;
extern "C" Type_t * MethodInfo_get_ReturnType_m8366 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m8367 (MethodInfo_t * __this, TypeU5BU5D_t618* ___typeArguments, MethodInfo* method)
{
	{
		Type_t * L_0 = Object_GetType_m1420(__this, /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_0);
		NotSupportedException_t27 * L_2 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_2, L_1, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C" TypeU5BU5D_t618* MethodInfo_GetGenericArguments_m8368 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m8369 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern MethodInfo MethodInfo_get_IsGenericMethodDefinition_m8370_MethodInfo;
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m8370 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern MethodInfo MethodInfo_get_ContainsGenericParameters_m8371_MethodInfo;
extern "C" bool MethodInfo_get_ContainsGenericParameters_m8371 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Missing_t1524_il2cpp_TypeInfo;
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"

extern MethodInfo Missing__ctor_m8372_MethodInfo;


// System.Void System.Reflection.Missing::.ctor()
extern "C" void Missing__ctor_m8372 (Missing_t1524 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Missing::.cctor()
extern MethodInfo Missing__cctor_m8373_MethodInfo;
extern "C" void Missing__cctor_m8373 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Missing_t1524 * L_0 = (Missing_t1524 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Missing_t1524_il2cpp_TypeInfo));
		Missing__ctor_m8372(L_0, /*hidden argument*/&Missing__ctor_m8372_MethodInfo);
		((Missing_t1524_StaticFields*)InitializedTypeInfo(&Missing_t1524_il2cpp_TypeInfo)->static_fields)->___Value_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Missing::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m8374_MethodInfo;
extern "C" void Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m8374 (Missing_t1524 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
extern TypeInfo TypeFilter_t1525_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"
extern MethodInfo Module_filter_by_type_name_m8384_MethodInfo;
extern MethodInfo TypeFilter__ctor_m10428_MethodInfo;
extern MethodInfo Module_filter_by_type_name_ignore_case_m8385_MethodInfo;
extern MethodInfo UnitySerializationHolder_GetModuleData_m10391_MethodInfo;
extern MethodInfo String_StartsWith_m3409_MethodInfo;
extern MethodInfo String_ToLower_m4986_MethodInfo;


// System.Void System.Reflection.Module::.ctor()
extern MethodInfo Module__ctor_m8375_MethodInfo;
extern "C" void Module__ctor_m8375 (Module_t1318 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Module::.cctor()
extern MethodInfo Module__cctor_m8376_MethodInfo;
extern "C" void Module__cctor_m8376 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IntPtr_t L_0 = { &Module_filter_by_type_name_m8384_MethodInfo };
		TypeFilter_t1525 * L_1 = (TypeFilter_t1525 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t1525_il2cpp_TypeInfo));
		TypeFilter__ctor_m10428(L_1, NULL, L_0, /*hidden argument*/&TypeFilter__ctor_m10428_MethodInfo);
		((Module_t1318_StaticFields*)InitializedTypeInfo(&Module_t1318_il2cpp_TypeInfo)->static_fields)->___FilterTypeName_1 = L_1;
		IntPtr_t L_2 = { &Module_filter_by_type_name_ignore_case_m8385_MethodInfo };
		TypeFilter_t1525 * L_3 = (TypeFilter_t1525 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t1525_il2cpp_TypeInfo));
		TypeFilter__ctor_m10428(L_3, NULL, L_2, /*hidden argument*/&TypeFilter__ctor_m10428_MethodInfo);
		((Module_t1318_StaticFields*)InitializedTypeInfo(&Module_t1318_il2cpp_TypeInfo)->static_fields)->___FilterTypeNameIgnoreCase_2 = L_3;
		return;
	}
}
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t1112 * Module_get_Assembly_m8377 (Module_t1318 * __this, MethodInfo* method)
{
	{
		Assembly_t1112 * L_0 = (__this->___assembly_4);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m8378 (Module_t1318 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___scopename_7);
		return L_0;
	}
}
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Module_GetCustomAttributes_m8379_MethodInfo;
extern "C" ObjectU5BU5D_t288* Module_GetCustomAttributes_m8379 (Module_t1318 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Module_GetObjectData_m8380_MethodInfo;
extern "C" void Module_GetObjectData_m8380 (Module_t1318 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
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
		StreamingContext_t666  L_3 = ___context;
		UnitySerializationHolder_GetModuleData_m10391(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&UnitySerializationHolder_GetModuleData_m10391_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern MethodInfo Module_IsDefined_m8381_MethodInfo;
extern "C" bool Module_IsDefined_m8381 (Module_t1318 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m8382 (Module_t1318 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_resource_8);
		return L_0;
	}
}
// System.String System.Reflection.Module::ToString()
extern MethodInfo Module_ToString_m8383_MethodInfo;
extern "C" String_t* Module_ToString_m8383 (Module_t1318 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m8384 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m3585(L_1, (String_t*) &_stringLiteral659, /*hidden argument*/&String_EndsWith_m3585_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_3);
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1669(L_6, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_5);
		String_t* L_8 = String_Substring_m1686(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		NullCheck(L_4);
		bool L_9 = String_StartsWith_m3409(L_4, L_8, /*hidden argument*/&String_StartsWith_m3409_MethodInfo);
		return L_9;
	}

IL_002f:
	{
		Type_t * L_10 = ___m;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_10);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m58(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		return L_13;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m8385 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m3585(L_1, (String_t*) &_stringLiteral659, /*hidden argument*/&String_EndsWith_m3585_MethodInfo);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_3);
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m4986(L_4, /*hidden argument*/&String_ToLower_m4986_MethodInfo);
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m1669(L_7, /*hidden argument*/&String_get_Length_m1669_MethodInfo);
		NullCheck(L_6);
		String_t* L_9 = String_Substring_m1686(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), /*hidden argument*/&String_Substring_m1686_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = String_ToLower_m4986(L_9, /*hidden argument*/&String_ToLower_m4986_MethodInfo);
		NullCheck(L_5);
		bool L_11 = String_StartsWith_m3409(L_5, L_10, /*hidden argument*/&String_StartsWith_m3409_MethodInfo);
		return L_11;
	}

IL_0039:
	{
		Type_t * L_12 = ___m;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_12);
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_15 = String_Compare_m6383(NULL /*static, unused*/, L_13, L_14, 1, /*hidden argument*/&String_Compare_m6383_MethodInfo);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEventInfo_t1526_il2cpp_TypeInfo;
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfoMethodDeclarations.h"

// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEvent.h"
extern MethodInfo MonoEventInfo_get_event_info_m8386_MethodInfo;


// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m8386 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t1526 * ___info, MethodInfo* method)
{
	typedef void (*MonoEventInfo_get_event_info_m8386_ftn) (MonoEvent_t *, MonoEventInfo_t1526 *);
	static MonoEventInfo_get_event_info_m8386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEventInfo_get_event_info_m8386_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(___ev, ___info);
}
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern MethodInfo MonoEventInfo_GetEventInfo_m8387_MethodInfo;
extern "C" MonoEventInfo_t1526  MonoEventInfo_GetEventInfo_m8387 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEvent_t * L_0 = ___ev;
		MonoEventInfo_get_event_info_m8386(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&MonoEventInfo_get_event_info_m8386_MethodInfo);
		MonoEventInfo_t1526  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEvent_t_il2cpp_TypeInfo;
// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEventMethodDeclarations.h"

extern MethodInfo MonoEvent_get_Name_m8393_MethodInfo;
extern MethodInfo String_Concat_m1308_MethodInfo;
extern MethodInfo MonoEvent_get_ReflectedType_m8392_MethodInfo;
extern MethodInfo MonoEvent_ToString_m8394_MethodInfo;


// System.Void System.Reflection.MonoEvent::.ctor()
extern MethodInfo MonoEvent__ctor_m8388_MethodInfo;
extern "C" void MonoEvent__ctor_m8388 (MonoEvent_t * __this, MethodInfo* method)
{
	{
		EventInfo__ctor_m8335(__this, /*hidden argument*/&EventInfo__ctor_m8335_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern MethodInfo MonoEvent_get_Attributes_m8389_MethodInfo;
extern "C" int32_t MonoEvent_get_Attributes_m8389 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEventInfo_t1526  L_0 = MonoEventInfo_GetEventInfo_m8387(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8387_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->___attrs_6);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern MethodInfo MonoEvent_GetAddMethod_m8390_MethodInfo;
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m8390 (MonoEvent_t * __this, bool ___nonPublic, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEventInfo_t1526  L_0 = MonoEventInfo_GetEventInfo_m8387(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8387_MethodInfo);
		V_0 = L_0;
		bool L_1 = ___nonPublic;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodInfo_t * L_2 = ((&V_0)->___add_method_3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		MethodInfo_t * L_3 = ((&V_0)->___add_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3528_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		MethodInfo_t * L_5 = ((&V_0)->___add_method_3);
		return L_5;
	}

IL_0029:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern MethodInfo MonoEvent_get_DeclaringType_m8391_MethodInfo;
extern "C" Type_t * MonoEvent_get_DeclaringType_m8391 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEventInfo_t1526  L_0 = MonoEventInfo_GetEventInfo_m8387(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8387_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___declaring_type_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m8392 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEventInfo_t1526  L_0 = MonoEventInfo_GetEventInfo_m8387(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8387_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___reflected_type_1);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m8393 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t1526  V_0 = {0};
	{
		MonoEventInfo_t1526  L_0 = MonoEventInfo_GetEventInfo_m8387(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m8387_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = ((&V_0)->___name_2);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::ToString()
extern "C" String_t* MonoEvent_ToString_m8394 (MonoEvent_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&EventInfo_get_EventHandlerType_m8336_MethodInfo, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m8393_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m1308(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral89, L_1, /*hidden argument*/&String_Concat_m1308_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoEvent_IsDefined_m8395_MethodInfo;
extern "C" bool MonoEvent_IsDefined_m8395 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m8396_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoEvent_GetCustomAttributes_m8396 (MonoEvent_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_1 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m8397_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoEvent_GetCustomAttributes_m8397 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoEvent_GetObjectData_m8398_MethodInfo;
extern "C" void MonoEvent_GetObjectData_m8398 (MonoEvent_t * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m8393_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoEvent_get_ReflectedType_m8392_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_ToString_m8394_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8349(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 2, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8349_MethodInfo);
		return;
	}
}
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoField_t_il2cpp_TypeInfo;
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"

// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
extern TypeInfo TargetException_t1537_il2cpp_TypeInfo;
extern TypeInfo FieldAccessException_t1804_il2cpp_TypeInfo;
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"
extern MethodInfo MonoField_GetParentType_m8403_MethodInfo;
extern MethodInfo TargetException__ctor_m8531_MethodInfo;
extern MethodInfo MonoField_CheckGeneric_m8417_MethodInfo;
extern MethodInfo MonoField_GetValueInternal_m8411_MethodInfo;
extern MethodInfo FieldAccessException__ctor_m10053_MethodInfo;
extern MethodInfo String_Concat_m1387_MethodInfo;
extern MethodInfo MonoField_SetValueInternal_m8414_MethodInfo;
extern MethodInfo MonoField_get_Name_m8406_MethodInfo;
extern MethodInfo MonoField_get_ReflectedType_m8404_MethodInfo;
extern MethodInfo MonoField_ToString_m8413_MethodInfo;
extern MethodInfo MonoField_get_DeclaringType_m8405_MethodInfo;
extern MethodInfo Type_get_ContainsGenericParameters_m6827_MethodInfo;


// System.Void System.Reflection.MonoField::.ctor()
extern MethodInfo MonoField__ctor_m8399_MethodInfo;
extern "C" void MonoField__ctor_m8399 (MonoField_t * __this, MethodInfo* method)
{
	{
		FieldInfo__ctor_m8338(__this, /*hidden argument*/&FieldInfo__ctor_m8338_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern MethodInfo MonoField_get_Attributes_m8400_MethodInfo;
extern "C" int32_t MonoField_get_Attributes_m8400 (MonoField_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern MethodInfo MonoField_get_FieldHandle_m8401_MethodInfo;
extern "C" RuntimeFieldHandle_t1320  MonoField_get_FieldHandle_m8401 (MonoField_t * __this, MethodInfo* method)
{
	{
		RuntimeFieldHandle_t1320  L_0 = (__this->___fhandle_1);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_FieldType()
extern MethodInfo MonoField_get_FieldType_m8402_MethodInfo;
extern "C" Type_t * MonoField_get_FieldType_m8402 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m8403 (MonoField_t * __this, bool ___declaring, MethodInfo* method)
{
	typedef Type_t * (*MonoField_GetParentType_m8403_ftn) (MonoField_t *, bool);
	static MonoField_GetParentType_m8403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetParentType_m8403_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, ___declaring);
}
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m8404 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m8403(__this, 0, /*hidden argument*/&MonoField_GetParentType_m8403_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m8405 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m8403(__this, 1, /*hidden argument*/&MonoField_GetParentType_m8403_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m8406 (MonoField_t * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoField_IsDefined_m8407_MethodInfo;
extern "C" bool MonoField_IsDefined_m8407 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m8408_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoField_GetCustomAttributes_m8408 (MonoField_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_1 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m8409_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoField_GetCustomAttributes_m8409 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern MethodInfo MonoField_GetFieldOffset_m8410_MethodInfo;
extern "C" int32_t MonoField_GetFieldOffset_m8410 (MonoField_t * __this, MethodInfo* method)
{
	typedef int32_t (*MonoField_GetFieldOffset_m8410_ftn) (MonoField_t *);
	static MonoField_GetFieldOffset_m8410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetFieldOffset_m8410_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m8411 (MonoField_t * __this, Object_t * ___obj, MethodInfo* method)
{
	typedef Object_t * (*MonoField_GetValueInternal_m8411_ftn) (MonoField_t *, Object_t *);
	static MonoField_GetValueInternal_m8411_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetValueInternal_m8411_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, ___obj);
}
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern MethodInfo MonoField_GetValue_m8412_MethodInfo;
extern "C" Object_t * MonoField_GetValue_m8412 (MonoField_t * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3533_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1537 * L_2 = (TargetException_t1537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t1537_il2cpp_TypeInfo));
		TargetException__ctor_m8531(L_2, (String_t*) &_stringLiteral1684, /*hidden argument*/&TargetException__ctor_m8531_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m8340_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		MonoField_CheckGeneric_m8417(__this, /*hidden argument*/&MonoField_CheckGeneric_m8417_MethodInfo);
	}

IL_0024:
	{
		Object_t * L_4 = ___obj;
		Object_t * L_5 = MonoField_GetValueInternal_m8411(__this, L_4, /*hidden argument*/&MonoField_GetValueInternal_m8411_MethodInfo);
		return L_5;
	}
}
// System.String System.Reflection.MonoField::ToString()
extern "C" String_t* MonoField_ToString_m8413 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		String_t* L_1 = (__this->___name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1685, L_0, L_1, /*hidden argument*/&String_Format_m6406_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m8414 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	typedef void (*MonoField_SetValueInternal_m8414_ftn) (FieldInfo_t *, Object_t *, Object_t *);
	static MonoField_SetValueInternal_m8414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_SetValueInternal_m8414_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(___fi, ___obj, ___value);
}
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo MonoField_SetValue_m8415_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" void MonoField_SetValue_m8415 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t748 * ___binder, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	static bool MonoField_SetValue_m8415_init;
	if (!MonoField_SetValue_m8415_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		MonoField_SetValue_m8415_init = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m3533_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t1537 * L_2 = (TargetException_t1537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t1537_il2cpp_TypeInfo));
		TargetException__ctor_m8531(L_2, (String_t*) &_stringLiteral1684, /*hidden argument*/&TargetException__ctor_m8531_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m8340_MethodInfo, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		FieldAccessException_t1804 * L_4 = (FieldAccessException_t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldAccessException_t1804_il2cpp_TypeInfo));
		FieldAccessException__ctor_m10053(L_4, (String_t*) &_stringLiteral1686, /*hidden argument*/&FieldAccessException__ctor_m10053_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Binder_t748 * L_5 = ___binder;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_6 = Binder_get_DefaultBinder_m8324(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8324_MethodInfo);
		___binder = L_6;
	}

IL_0036:
	{
		MonoField_CheckGeneric_m8417(__this, /*hidden argument*/&MonoField_CheckGeneric_m8417_MethodInfo);
		Object_t * L_7 = ___val;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		Binder_t748 * L_8 = ___binder;
		Object_t * L_9 = ___val;
		Type_t * L_10 = (__this->___type_3);
		CultureInfo_t714 * L_11 = ___culture;
		NullCheck(L_8);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t714 * >::Invoke(&Binder_ChangeType_m10517_MethodInfo, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Object_t * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t288* L_14 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 4));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral1687);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral1687;
		ObjectU5BU5D_t288* L_15 = L_14;
		Object_t * L_16 = ___val;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m1420(L_16, /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_17;
		ObjectU5BU5D_t288* L_18 = L_15;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral1688);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 2)) = (Object_t *)(String_t*) &_stringLiteral1688;
		ObjectU5BU5D_t288* L_19 = L_18;
		Type_t * L_20 = (__this->___type_3);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 3)) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1387(NULL /*static, unused*/, L_19, /*hidden argument*/&String_Concat_m1387_MethodInfo);
		ArgumentException_t332 * L_22 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m4770(L_22, L_21, (String_t*) &_stringLiteral1689, /*hidden argument*/&ArgumentException__ctor_m4770_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		Object_t * L_23 = V_0;
		___val = L_23;
	}

IL_0090:
	{
		Object_t * L_24 = ___obj;
		Object_t * L_25 = ___val;
		MonoField_SetValueInternal_m8414(NULL /*static, unused*/, __this, L_24, L_25, /*hidden argument*/&MonoField_SetValueInternal_m8414_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoField_GetObjectData_m8416_MethodInfo;
extern "C" void MonoField_GetObjectData_m8416 (MonoField_t * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_get_Name_m8406_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_ReflectedType_m8404_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_ToString_m8413_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8349(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 4, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8349_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C" void MonoField_CheckGeneric_m8417 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_DeclaringType_m8405_MethodInfo, __this);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6827_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1107 * L_2 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_2, (String_t*) &_stringLiteral1690, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericMethod_t_il2cpp_TypeInfo;
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
extern MethodInfo MonoMethod__ctor_m8430_MethodInfo;


// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern MethodInfo MonoGenericMethod__ctor_m8418_MethodInfo;
extern "C" void MonoGenericMethod__ctor_m8418 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod__ctor_m8430(__this, /*hidden argument*/&MonoMethod__ctor_m8430_MethodInfo);
		InvalidOperationException_t1107 * L_0 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4771(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern MethodInfo MonoGenericMethod_get_ReflectedType_m8419_MethodInfo;
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m8419 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m8419_ftn) (MonoGenericMethod_t *);
	static MonoGenericMethod_get_ReflectedType_m8419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m8419_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericCMethod_t1527_il2cpp_TypeInfo;
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"
extern MethodInfo MonoCMethod__ctor_m8458_MethodInfo;


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern MethodInfo MonoGenericCMethod__ctor_m8420_MethodInfo;
extern "C" void MonoGenericCMethod__ctor_m8420 (MonoGenericCMethod_t1527 * __this, MethodInfo* method)
{
	{
		MonoCMethod__ctor_m8458(__this, /*hidden argument*/&MonoCMethod__ctor_m8458_MethodInfo);
		InvalidOperationException_t1107 * L_0 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4771(L_0, /*hidden argument*/&InvalidOperationException__ctor_m4771_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern MethodInfo MonoGenericCMethod_get_ReflectedType_m8421_MethodInfo;
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m8421 (MonoGenericCMethod_t1527 * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m8421_ftn) (MonoGenericCMethod_t1527 *);
	static MonoGenericCMethod_get_ReflectedType_m8421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m8421_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodInfo_t1529_il2cpp_TypeInfo;
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"

extern MethodInfo MonoMethodInfo_get_method_info_m8422_MethodInfo;
extern MethodInfo MonoMethodInfo_GetMethodInfo_m8423_MethodInfo;
extern MethodInfo MonoMethodInfo_get_parameter_info_m8428_MethodInfo;


// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m8422 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1529 * ___info, MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m8422_ftn) (IntPtr_t, MonoMethodInfo_t1529 *);
	static MonoMethodInfo_get_method_info_m8422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m8422_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1529  MonoMethodInfo_GetMethodInfo_m8423 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1529  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_get_method_info_m8422(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&MonoMethodInfo_get_method_info_m8422_MethodInfo);
		MonoMethodInfo_t1529  L_1 = V_0;
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetDeclaringType_m8424_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m8424 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1529  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1529  L_1 = MonoMethodInfo_GetMethodInfo_m8423(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8423_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___parent_0);
		return L_2;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetReturnType_m8425_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetReturnType_m8425 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1529  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1529  L_1 = MonoMethodInfo_GetMethodInfo_m8423(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8423_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___ret_1);
		return L_2;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetAttributes_m8426_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetAttributes_m8426 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1529  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1529  L_1 = MonoMethodInfo_GetMethodInfo_m8423(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8423_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___attrs_2);
		return L_2;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetCallingConvention_m8427_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m8427 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t1529  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t1529  L_1 = MonoMethodInfo_GetMethodInfo_m8423(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8423_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___callconv_4);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t741* MonoMethodInfo_get_parameter_info_m8428 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t741* (*MonoMethodInfo_get_parameter_info_m8428_ftn) (IntPtr_t, MemberInfo_t *);
	static MonoMethodInfo_get_parameter_info_m8428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m8428_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern MethodInfo MonoMethodInfo_GetParametersInfo_m8429_MethodInfo;
extern "C" ParameterInfoU5BU5D_t741* MonoMethodInfo_GetParametersInfo_m8429 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		MemberInfo_t * L_1 = ___member;
		ParameterInfoU5BU5D_t741* L_2 = MonoMethodInfo_get_parameter_info_m8428(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoMethodInfo_get_parameter_info_m8428_MethodInfo);
		return L_2;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethod_t_il2cpp_TypeInfo;

// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
extern TypeInfo RuntimeMethodHandle_t1494_il2cpp_TypeInfo;
extern TypeInfo TargetInvocationException_t1538_il2cpp_TypeInfo;
extern TypeInfo ThreadAbortException_t1760_il2cpp_TypeInfo;
extern TypeInfo MethodAccessException_t1810_il2cpp_TypeInfo;
extern TypeInfo PreserveSigAttribute_t1563_il2cpp_TypeInfo;
extern TypeInfo DllImportAttribute_t1322_il2cpp_TypeInfo;
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle__ctor_m10301_MethodInfo;
extern MethodInfo MonoMethod_get_name_m8431_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethod_m8456_MethodInfo;
extern MethodInfo MonoMethod_GetGenericArguments_m8454_MethodInfo;
extern MethodInfo MonoMethod_get_DeclaringType_m8442_MethodInfo;
extern MethodInfo MonoMethod_get_base_definition_m8432_MethodInfo;
extern MethodInfo TargetParameterCountException__ctor_m8536_MethodInfo;
extern MethodInfo MonoMethod_get_ContainsGenericParameters_m8457_MethodInfo;
extern MethodInfo MonoMethod_InternalInvoke_m8436_MethodInfo;
extern MethodInfo TargetInvocationException__ctor_m8533_MethodInfo;
extern MethodInfo PreserveSigAttribute__ctor_m8562_MethodInfo;
extern MethodInfo MonoMethod_GetDllImportAttribute_m8447_MethodInfo;
extern MethodInfo Type_get_IsClass_m6784_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m3634_MethodInfo;
extern MethodInfo Type_get_IsNested_m6834_MethodInfo;
extern MethodInfo MonoMethod_get_ReturnType_m8434_MethodInfo;
extern MethodInfo MonoMethod_ShouldPrintFullName_m8449_MethodInfo;
extern MethodInfo MonoMethod_get_Name_m8443_MethodInfo;
extern MethodInfo MonoMethod_GetParameters_m8435_MethodInfo;
extern MethodInfo MonoMethod_get_CallingConvention_m8440_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethodDefinition_m8455_MethodInfo;
extern MethodInfo MonoMethod_get_ReflectedType_m8441_MethodInfo;
extern MethodInfo MonoMethod_ToString_m8450_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m9668_MethodInfo;
extern MethodInfo MonoMethod_MakeGenericMethod_impl_m8453_MethodInfo;


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m8430 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MethodInfo__ctor_m8364(__this, /*hidden argument*/&MethodInfo__ctor_m8364_MethodInfo);
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m8431 (Object_t * __this /* static, unused */, MethodBase_t730 * ___method, MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m8431_ftn) (MethodBase_t730 *);
	static MonoMethod_get_name_m8431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m8431_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m8432 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, MethodInfo* method)
{
	typedef MonoMethod_t * (*MonoMethod_get_base_definition_m8432_ftn) (MonoMethod_t *);
	static MonoMethod_get_base_definition_m8432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m8432_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern MethodInfo MonoMethod_GetBaseDefinition_m8433_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m8433 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = MonoMethod_get_base_definition_m8432(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_base_definition_m8432_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m8434 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m8425(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetReturnType_m8425_MethodInfo);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t741* MonoMethod_GetParameters_m8435 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetParameters_m8435_init;
	if (!MonoMethod_GetParameters_m8435_init)
	{
		ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t741_0_0_0);
		MonoMethod_GetParameters_m8435_init = true;
	}
	ParameterInfoU5BU5D_t741* V_0 = {0};
	ParameterInfoU5BU5D_t741* V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t741* L_1 = MonoMethodInfo_GetParametersInfo_m8429(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8429_MethodInfo);
		V_0 = L_1;
		ParameterInfoU5BU5D_t741* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t741* L_3 = V_0;
		ParameterInfoU5BU5D_t741* L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4957_MethodInfo, L_3, (Array_t *)(Array_t *)L_4, 0);
		ParameterInfoU5BU5D_t741* L_5 = V_1;
		return L_5;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m8436 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___parameters, Exception_t293 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m8436_ftn) (MonoMethod_t *, Object_t *, ObjectU5BU5D_t288*, Exception_t293 **);
	static MonoMethod_InternalInvoke_m8436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m8436_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoMethod_Invoke_m8437_MethodInfo;
extern "C" Object_t * MonoMethod_Invoke_m8437 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t741* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t293 * V_4 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Binder_t748 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_1 = Binder_get_DefaultBinder_m8324(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8324_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		IntPtr_t L_2 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t741* L_3 = MonoMethodInfo_GetParametersInfo_m8429(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8429_MethodInfo);
		V_0 = L_3;
		ObjectU5BU5D_t288* L_4 = ___parameters;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		ObjectU5BU5D_t288* L_6 = ___parameters;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t288* L_7 = ___parameters;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t741* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t1539 * L_9 = (TargetParameterCountException_t1539 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1539_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8536(L_9, (String_t*) &_stringLiteral1691, /*hidden argument*/&TargetParameterCountException__ctor_m8536_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = ___invokeAttr;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		Binder_t748 * L_11 = ___binder;
		ObjectU5BU5D_t288* L_12 = ___parameters;
		ParameterInfoU5BU5D_t741* L_13 = V_0;
		CultureInfo_t714 * L_14 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		bool L_15 = Binder_ConvertArgs_m8325(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/&Binder_ConvertArgs_m8325_MethodInfo);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t332 * L_16 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_16, (String_t*) &_stringLiteral1692, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		ObjectU5BU5D_t288* L_17 = ___parameters;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)));
		Type_t * L_20 = Object_GetType_m1420((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		ParameterInfoU5BU5D_t741* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_21, L_23)));
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_21, L_23)));
		if ((((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t332 * L_25 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_25, (String_t*) &_stringLiteral1691, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		ParameterInfoU5BU5D_t741* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_ContainsGenericParameters_m8457_MethodInfo, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		InvalidOperationException_t1107 * L_30 = (InvalidOperationException_t1107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1107_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4764(L_30, (String_t*) &_stringLiteral1693, /*hidden argument*/&InvalidOperationException__ctor_m4764_MethodInfo);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		Object_t * L_31 = ___obj;
		ObjectU5BU5D_t288* L_32 = ___parameters;
		Object_t * L_33 = MonoMethod_InternalInvoke_m8436(__this, L_31, L_32, (&V_2), /*hidden argument*/&MonoMethod_InternalInvoke_m8436_MethodInfo);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ThreadAbortException_t1760_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1810_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b6;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t293 *)__exception_local);
		Exception_t293 * L_34 = V_4;
		TargetInvocationException_t1538 * L_35 = (TargetInvocationException_t1538 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1538_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8533(L_35, L_34, /*hidden argument*/&TargetInvocationException__ctor_m8533_MethodInfo);
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		Exception_t293 * L_36 = V_2;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		Exception_t293 * L_37 = V_2;
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00c7:
	{
		Object_t * L_38 = V_3;
		return L_38;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern MethodInfo MonoMethod_get_MethodHandle_m8438_MethodInfo;
extern "C" RuntimeMethodHandle_t1494  MonoMethod_get_MethodHandle_m8438 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t1494  L_1 = {0};
		RuntimeMethodHandle__ctor_m10301(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10301_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern MethodInfo MonoMethod_get_Attributes_m8439_MethodInfo;
extern "C" int32_t MonoMethod_get_Attributes_m8439 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8426(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8426_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m8440 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8427(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8427_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m8441 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m8442 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8424(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8424_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m8443 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8431(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8431_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoMethod_IsDefined_m8444_MethodInfo;
extern "C" bool MonoMethod_IsDefined_m8444 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8445_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoMethod_GetCustomAttributes_m8445 (MonoMethod_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_1 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m8446_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoMethod_GetCustomAttributes_m8446 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t1322 * MonoMethod_GetDllImportAttribute_m8447 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, MethodInfo* method)
{
	typedef DllImportAttribute_t1322 * (*MonoMethod_GetDllImportAttribute_m8447_ftn) (IntPtr_t);
	static MonoMethod_GetDllImportAttribute_m8447_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m8447_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern MethodInfo MonoMethod_GetPseudoCustomAttributes_m8448_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t288* MonoMethod_GetPseudoCustomAttributes_m8448 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetPseudoCustomAttributes_m8448_init;
	if (!MonoMethod_GetPseudoCustomAttributes_m8448_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		MonoMethod_GetPseudoCustomAttributes_m8448_init = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t1529  V_1 = {0};
	ObjectU5BU5D_t288* V_2 = {0};
	DllImportAttribute_t1322 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t1529  L_1 = MonoMethodInfo_GetMethodInfo_m8423(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m8423_MethodInfo);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t288*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t288* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		PreserveSigAttribute_t1563 * L_12 = (PreserveSigAttribute_t1563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PreserveSigAttribute_t1563_il2cpp_TypeInfo));
		PreserveSigAttribute__ctor_m8562(L_12, /*hidden argument*/&PreserveSigAttribute__ctor_m8562_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t L_14 = (__this->___mhandle_0);
		DllImportAttribute_t1322 * L_15 = MonoMethod_GetDllImportAttribute_m8447(NULL /*static, unused*/, L_14, /*hidden argument*/&MonoMethod_GetDllImportAttribute_m8447_MethodInfo);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		DllImportAttribute_t1322 * L_17 = V_3;
		NullCheck(L_17);
		L_17->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		ObjectU5BU5D_t288* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		DllImportAttribute_t1322 * L_21 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)L_21;
	}

IL_0096:
	{
		ObjectU5BU5D_t288* L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m8449 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsClass_m6784_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m6790_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3634_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_7);
		NullCheck(L_8);
		bool L_9 = Type_get_IsNested_m6834(L_8, /*hidden argument*/&Type_get_IsNested_m6834_MethodInfo);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern "C" String_t* MonoMethod_ToString_m8450 (MonoMethod_t * __this, MethodInfo* method)
{
	StringBuilder_t284 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t618* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t741* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t284 * L_0 = (StringBuilder_t284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t284_il2cpp_TypeInfo));
		StringBuilder__ctor_m1321(L_0, /*hidden argument*/&StringBuilder__ctor_m1321_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReturnType_m8434_MethodInfo, __this);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		bool L_3 = MonoMethod_ShouldPrintFullName_m8449(NULL /*static, unused*/, L_2, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8449_MethodInfo);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringBuilder_t284 * L_4 = V_0;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_5);
		NullCheck(L_4);
		StringBuilder_Append_m3494(L_4, L_6, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		goto IL_0031;
	}

IL_0024:
	{
		StringBuilder_t284 * L_7 = V_0;
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_8);
		NullCheck(L_7);
		StringBuilder_Append_m3494(L_7, L_9, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0031:
	{
		StringBuilder_t284 * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m3494(L_10, (String_t*) &_stringLiteral89, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_11 = V_0;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8443_MethodInfo, __this);
		NullCheck(L_11);
		StringBuilder_Append_m3494(L_11, L_12, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8456_MethodInfo, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t618* L_14 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&MonoMethod_GetGenericArguments_m8454_MethodInfo, __this);
		V_2 = L_14;
		StringBuilder_t284 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m3494(L_15, (String_t*) &_stringLiteral266, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t284 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3494(L_17, (String_t*) &_stringLiteral264, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t284 * L_18 = V_0;
		TypeU5BU5D_t618* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, (*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		NullCheck(L_18);
		StringBuilder_Append_m3494(L_18, L_22, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t618* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t284 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m3494(L_26, (String_t*) &_stringLiteral267, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_009e:
	{
		StringBuilder_t284 * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m3494(L_27, (String_t*) &_stringLiteral328, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		ParameterInfoU5BU5D_t741* L_28 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MonoMethod_GetParameters_m8435_MethodInfo, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		StringBuilder_t284 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m3494(L_30, (String_t*) &_stringLiteral329, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_00c8:
	{
		ParameterInfoU5BU5D_t741* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		Type_t * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m6783_MethodInfo, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_38 = V_6;
		NullCheck(L_38);
		Type_t * L_39 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		Type_t * L_40 = V_6;
		bool L_41 = MonoMethod_ShouldPrintFullName_m8449(NULL /*static, unused*/, L_40, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m8449_MethodInfo);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t284 * L_42 = V_0;
		Type_t * L_43 = V_6;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_43);
		NullCheck(L_42);
		StringBuilder_Append_m3494(L_42, L_44, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		goto IL_0111;
	}

IL_0103:
	{
		StringBuilder_t284 * L_45 = V_0;
		Type_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_46);
		NullCheck(L_45);
		StringBuilder_Append_m3494(L_45, L_47, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t284 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3494(L_49, (String_t*) &_stringLiteral1384, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		ParameterInfoU5BU5D_t741* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethod_get_CallingConvention_m8440_MethodInfo, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_54 = V_4;
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t284 * L_55 = V_0;
		NullCheck(L_55);
		StringBuilder_Append_m3494(L_55, (String_t*) &_stringLiteral329, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_014c:
	{
		StringBuilder_t284 * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_Append_m3494(L_56, (String_t*) &_stringLiteral1694, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0158:
	{
		StringBuilder_t284 * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_Append_m3494(L_57, (String_t*) &_stringLiteral63, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1325_MethodInfo, L_58);
		return L_59;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoMethod_GetObjectData_m8451_MethodInfo;
extern "C" void MonoMethod_GetObjectData_m8451 (MonoMethod_t * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	TypeU5BU5D_t618* V_0 = {0};
	TypeU5BU5D_t618* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8456_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethodDefinition_m8455_MethodInfo, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t618* L_2 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&MonoMethod_GetGenericArguments_m8454_MethodInfo, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t618*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		SerializationInfo_t665 * L_3 = ___info;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m8443_MethodInfo, __this);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReflectedType_m8441_MethodInfo, __this);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_ToString_m8450_MethodInfo, __this);
		TypeU5BU5D_t618* L_7 = V_0;
		MemberInfoSerializationHolder_Serialize_m8350(NULL /*static, unused*/, L_3, L_4, L_5, L_6, 8, L_7, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8350_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern MethodInfo MonoMethod_MakeGenericMethod_m8452_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m8452 (MonoMethod_t * __this, TypeU5BU5D_t618* ___methodInstantiation, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t618* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	{
		TypeU5BU5D_t618* L_0 = ___methodInstantiation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1695, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TypeU5BU5D_t618* L_2 = ___methodInstantiation;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		TypeU5BU5D_t618* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t711 * L_7 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m9668(L_7, /*hidden argument*/&ArgumentNullException__ctor_m9668_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t618* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t618* L_11 = ___methodInstantiation;
		MethodInfo_t * L_12 = MonoMethod_MakeGenericMethod_impl_m8453(__this, L_11, /*hidden argument*/&MonoMethod_MakeGenericMethod_impl_m8453_MethodInfo);
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t618* L_14 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&MonoMethod_GetGenericArguments_m8454_MethodInfo, __this);
		NullCheck(L_14);
		int32_t L_15 = (((int32_t)(((Array_t *)L_14)->max_length)));
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &L_15);
		TypeU5BU5D_t618* L_17 = ___methodInstantiation;
		NullCheck(L_17);
		int32_t L_18 = (((int32_t)(((Array_t *)L_17)->max_length)));
		Object_t * L_19 = Box(InitializedTypeInfo(&Int32_t33_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Format_m6406(NULL /*static, unused*/, (String_t*) &_stringLiteral1696, L_16, L_19, /*hidden argument*/&String_Format_m6406_MethodInfo);
		ArgumentException_t332 * L_21 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_21, L_20, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		MethodInfo_t * L_22 = V_3;
		return L_22;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m8453 (MonoMethod_t * __this, TypeU5BU5D_t618* ___types, MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_MakeGenericMethod_impl_m8453_ftn) (MonoMethod_t *, TypeU5BU5D_t618*);
	static MonoMethod_MakeGenericMethod_impl_m8453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m8453_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t618* MonoMethod_GetGenericArguments_m8454 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef TypeU5BU5D_t618* (*MonoMethod_GetGenericArguments_m8454_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericArguments_m8454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m8454_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m8455 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m8455_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethodDefinition_m8455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m8455_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m8456 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m8456_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethod_m8456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m8456_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m8457 (MonoMethod_t * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t618* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m8456_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t618* L_1 = (TypeU5BU5D_t618*)VirtFuncInvoker0< TypeU5BU5D_t618* >::Invoke(&MonoMethod_GetGenericArguments_m8454_MethodInfo, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		TypeU5BU5D_t618* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6827_MethodInfo, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		TypeU5BU5D_t618* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m8442_MethodInfo, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6827_MethodInfo, L_10);
		return L_11;
	}
}
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoCMethod_t1528_il2cpp_TypeInfo;

// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
extern TypeInfo MemberAccessException_t1805_il2cpp_TypeInfo;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"
extern MethodInfo MonoCMethod_GetParameters_m8459_MethodInfo;
extern MethodInfo MonoCMethod_get_DeclaringType_m8467_MethodInfo;
extern MethodInfo MemberAccessException__ctor_m10089_MethodInfo;
extern MethodInfo Type_get_IsAbstract_m6782_MethodInfo;
extern MethodInfo MonoCMethod_InternalInvoke_m8460_MethodInfo;
extern MethodInfo MonoCMethod_Invoke_m8461_MethodInfo;
extern MethodInfo MonoCMethod_get_Name_m8468_MethodInfo;
extern MethodInfo MonoCMethod_get_CallingConvention_m8465_MethodInfo;
extern MethodInfo MonoCMethod_get_ReflectedType_m8466_MethodInfo;
extern MethodInfo MonoCMethod_ToString_m8472_MethodInfo;


// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m8458 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		ConstructorInfo__ctor_m8328(__this, /*hidden argument*/&ConstructorInfo__ctor_m8328_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t741* MonoCMethod_GetParameters_m8459 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t741* L_1 = MonoMethodInfo_GetParametersInfo_m8429(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m8429_MethodInfo);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m8460 (MonoCMethod_t1528 * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___parameters, Exception_t293 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m8460_ftn) (MonoCMethod_t1528 *, Object_t *, ObjectU5BU5D_t288*, Exception_t293 **);
	static MonoCMethod_InternalInvoke_m8460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m8460_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8461 (MonoCMethod_t1528 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t741* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t293 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t293 * V_4 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Object_t * G_B31_0 = {0};
	{
		Binder_t748 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		Binder_t748 * L_1 = Binder_get_DefaultBinder_m8324(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m8324_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t741* L_2 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MonoCMethod_GetParameters_m8459_MethodInfo, __this);
		V_0 = L_2;
		ObjectU5BU5D_t288* L_3 = ___parameters;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		ObjectU5BU5D_t288* L_5 = ___parameters;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t288* L_6 = ___parameters;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t741* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t1539 * L_8 = (TargetParameterCountException_t1539 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t1539_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m8536(L_8, (String_t*) &_stringLiteral1691, /*hidden argument*/&TargetParameterCountException__ctor_m8536_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = ___invokeAttr;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		Binder_t748 * L_10 = ___binder;
		ObjectU5BU5D_t288* L_11 = ___parameters;
		ParameterInfoU5BU5D_t741* L_12 = V_0;
		CultureInfo_t714 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t748_il2cpp_TypeInfo));
		bool L_14 = Binder_ConvertArgs_m8325(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/&Binder_ConvertArgs_m8325_MethodInfo);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t332 * L_15 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_15, (String_t*) &_stringLiteral1692, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		ObjectU5BU5D_t288* L_16 = ___parameters;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m1420((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/&Object_GetType_m1420_MethodInfo);
		ParameterInfoU5BU5D_t741* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_20, L_22)));
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_20, L_22)));
		if ((((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t332 * L_24 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_24, (String_t*) &_stringLiteral1691, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		ParameterInfoU5BU5D_t741* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		Object_t * L_28 = ___obj;
		if (L_28)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8467_MethodInfo, __this);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m6827_MethodInfo, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_31 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8467_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_32 = String_Concat_m1308(NULL /*static, unused*/, (String_t*) &_stringLiteral1697, L_31, (String_t*) &_stringLiteral1698, /*hidden argument*/&String_Concat_m1308_MethodInfo);
		MemberAccessException_t1805 * L_33 = (MemberAccessException_t1805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1805_il2cpp_TypeInfo));
		MemberAccessException__ctor_m10089(L_33, L_32, /*hidden argument*/&MemberAccessException__ctor_m10089_MethodInfo);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00ae:
	{
		int32_t L_34 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_35 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8467_MethodInfo, __this);
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsAbstract_m6782_MethodInfo, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_37 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m8467_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Format_m1502(NULL /*static, unused*/, (String_t*) &_stringLiteral1699, L_37, /*hidden argument*/&String_Format_m1502_MethodInfo);
		MemberAccessException_t1805 * L_39 = (MemberAccessException_t1805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t1805_il2cpp_TypeInfo));
		MemberAccessException__ctor_m10089(L_39, L_38, /*hidden argument*/&MemberAccessException__ctor_m10089_MethodInfo);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_00da:
	{
		V_2 = (Exception_t293 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		Object_t * L_40 = ___obj;
		ObjectU5BU5D_t288* L_41 = ___parameters;
		Object_t * L_42 = MonoCMethod_InternalInvoke_m8460(__this, L_40, L_41, (&V_2), /*hidden argument*/&MonoCMethod_InternalInvoke_m8460_MethodInfo);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t1810_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t293_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00f1;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00fd;
	} // end catch (depth: 1)

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t293 *)__exception_local);
		Exception_t293 * L_43 = V_4;
		TargetInvocationException_t1538 * L_44 = (TargetInvocationException_t1538 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1538_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8533(L_44, L_43, /*hidden argument*/&TargetInvocationException__ctor_m8533_MethodInfo);
		il2cpp_codegen_raise_exception(L_44);
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		Exception_t293 * L_45 = V_2;
		if (!L_45)
		{
			goto IL_0102;
		}
	}
	{
		Exception_t293 * L_46 = V_2;
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0102:
	{
		Object_t * L_47 = ___obj;
		if (L_47)
		{
			goto IL_0108;
		}
	}
	{
		Object_t * L_48 = V_3;
		G_B31_0 = L_48;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoCMethod_Invoke_m8462_MethodInfo;
extern "C" Object_t * MonoCMethod_Invoke_m8462 (MonoCMethod_t1528 * __this, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___parameters, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	{
		int32_t L_0 = ___invokeAttr;
		Binder_t748 * L_1 = ___binder;
		ObjectU5BU5D_t288* L_2 = ___parameters;
		CultureInfo_t714 * L_3 = ___culture;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MonoCMethod_Invoke_m8461_MethodInfo, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern MethodInfo MonoCMethod_get_MethodHandle_m8463_MethodInfo;
extern "C" RuntimeMethodHandle_t1494  MonoCMethod_get_MethodHandle_m8463 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t1494  L_1 = {0};
		RuntimeMethodHandle__ctor_m10301(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m10301_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern MethodInfo MonoCMethod_get_Attributes_m8464_MethodInfo;
extern "C" int32_t MonoCMethod_get_Attributes_m8464 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m8426(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m8426_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m8465 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m8427(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m8427_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m8466 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m8467 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m8424(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m8424_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m8468 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m8431(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m8431_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_IsDefined_m8469_MethodInfo;
extern "C" bool MonoCMethod_IsDefined_m8469 (MonoCMethod_t1528 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8470_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoCMethod_GetCustomAttributes_m8470 (MonoCMethod_t1528 * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_1 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m8471_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoCMethod_GetCustomAttributes_m8471 (MonoCMethod_t1528 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m8472 (MonoCMethod_t1528 * __this, MethodInfo* method)
{
	StringBuilder_t284 * V_0 = {0};
	ParameterInfoU5BU5D_t741* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t284 * L_0 = (StringBuilder_t284 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t284_il2cpp_TypeInfo));
		StringBuilder__ctor_m1321(L_0, /*hidden argument*/&StringBuilder__ctor_m1321_MethodInfo);
		V_0 = L_0;
		StringBuilder_t284 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m3494(L_1, (String_t*) &_stringLiteral1700, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_2 = V_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8468_MethodInfo, __this);
		NullCheck(L_2);
		StringBuilder_Append_m3494(L_2, L_3, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m3494(L_4, (String_t*) &_stringLiteral328, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		ParameterInfoU5BU5D_t741* L_5 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MonoCMethod_GetParameters_m8459_MethodInfo, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t284 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m3494(L_7, (String_t*) &_stringLiteral329, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0046:
	{
		StringBuilder_t284 * L_8 = V_0;
		ParameterInfoU5BU5D_t741* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_9, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_9, L_11)));
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_12);
		NullCheck(L_8);
		StringBuilder_Append_m3494(L_8, L_13, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		ParameterInfoU5BU5D_t741* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoCMethod_get_CallingConvention_m8465_MethodInfo, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t284 * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_Append_m3494(L_18, (String_t*) &_stringLiteral1701, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t284 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3494(L_19, (String_t*) &_stringLiteral63, /*hidden argument*/&StringBuilder_Append_m3494_MethodInfo);
		StringBuilder_t284 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1325_MethodInfo, L_20);
		return L_21;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoCMethod_GetObjectData_m8473_MethodInfo;
extern "C" void MonoCMethod_GetObjectData_m8473 (MonoCMethod_t1528 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m8468_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_ReflectedType_m8466_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_ToString_m8472_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8349(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8349_MethodInfo);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoPropertyInfo_t1530_il2cpp_TypeInfo;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern MethodInfo MonoPropertyInfo_get_property_info_m8474_MethodInfo;
extern "C" void MonoPropertyInfo_get_property_info_m8474 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t1530 * ___info, int32_t ___req_info, MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m8474_ftn) (MonoProperty_t *, MonoPropertyInfo_t1530 *, int32_t);
	static MonoPropertyInfo_get_property_info_m8474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m8474_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern MethodInfo MonoPropertyInfo_GetTypeModifiers_m8475_MethodInfo;
extern "C" TypeU5BU5D_t618* MonoPropertyInfo_GetTypeModifiers_m8475 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, MethodInfo* method)
{
	typedef TypeU5BU5D_t618* (*MonoPropertyInfo_GetTypeModifiers_m8475_ftn) (MonoProperty_t *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m8475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m8475_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PInfo_t1531_il2cpp_TypeInfo;
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GetterAdapter_t1532_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetterAdapter__ctor_m8476_MethodInfo;
extern "C" void GetterAdapter__ctor_m8476 (GetterAdapter_t1532 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern MethodInfo GetterAdapter_Invoke_m8477_MethodInfo;
extern "C" Object_t * GetterAdapter_Invoke_m8477 (GetterAdapter_t1532 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m8477((GetterAdapter_t1532 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1532(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetterAdapter_BeginInvoke_m8478_MethodInfo;
extern "C" Object_t * GetterAdapter_BeginInvoke_m8478 (GetterAdapter_t1532 * __this, Object_t * ____this, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo GetterAdapter_EndInvoke_m8479_MethodInfo;
extern "C" Object_t * GetterAdapter_EndInvoke_m8479 (GetterAdapter_t1532 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoProperty_t_il2cpp_TypeInfo;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"
extern Il2CppType StaticGetter_1_t1866_0_0_0;
extern Il2CppType Getter_2_t1867_0_0_0;
extern Il2CppType MonoProperty_t_0_0_0;
extern Il2CppType GetterAdapter_t1532_0_0_0;
extern MethodInfo MonoProperty_CachePropertyInfo_m8481_MethodInfo;
extern MethodInfo PropertyInfo__ctor_m8521_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m8506_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6640_MethodInfo;
extern MethodInfo MethodAccessException__ctor_m10091_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6639_MethodInfo;
extern MethodInfo MonoProperty_GetValue_m8498_MethodInfo;
extern MethodInfo MonoProperty_GetGetMethod_m8490_MethodInfo;
extern MethodInfo MonoProperty_get_Name_m8488_MethodInfo;
extern MethodInfo MonoProperty_GetSetMethod_m8492_MethodInfo;
extern MethodInfo MonoProperty_get_PropertyType_m8485_MethodInfo;
extern MethodInfo MonoProperty_get_ReflectedType_m8486_MethodInfo;
extern MethodInfo MonoProperty_ToString_m8500_MethodInfo;


// System.Void System.Reflection.MonoProperty::.ctor()
extern MethodInfo MonoProperty__ctor_m8480_MethodInfo;
extern "C" void MonoProperty__ctor_m8480 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		PropertyInfo__ctor_m8521(__this, /*hidden argument*/&PropertyInfo__ctor_m8521_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8481 (MonoProperty_t * __this, int32_t ___flags, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		int32_t L_1 = ___flags;
		int32_t L_2 = ___flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_3 = &(__this->___info_2);
		int32_t L_4 = ___flags;
		MonoPropertyInfo_get_property_info_m8474(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoPropertyInfo_get_property_info_m8474_MethodInfo);
		int32_t L_5 = (__this->___cached_3);
		int32_t L_6 = ___flags;
		__this->___cached_3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern MethodInfo MonoProperty_get_Attributes_m8482_MethodInfo;
extern "C" int32_t MonoProperty_get_Attributes_m8482 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 1, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern MethodInfo MonoProperty_get_CanRead_m8483_MethodInfo;
extern "C" bool MonoProperty_get_CanRead_m8483 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern MethodInfo MonoProperty_get_CanWrite_m8484_MethodInfo;
extern "C" bool MonoProperty_get_CanWrite_m8484 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8485 (MonoProperty_t * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t741* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8366_MethodInfo, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t1530 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t741* L_7 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_6);
		V_0 = L_7;
		ParameterInfoU5BU5D_t741* L_8 = V_0;
		ParameterInfoU5BU5D_t741* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_8, L_10)));
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8486 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 8, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern MethodInfo MonoProperty_get_DeclaringType_m8487_MethodInfo;
extern "C" Type_t * MonoProperty_get_DeclaringType_m8487 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, ((int32_t)16), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8488 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, ((int32_t)32), /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern MethodInfo MonoProperty_GetAccessors_m8489_MethodInfo;
extern TypeInfo* MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t1319* MonoProperty_GetAccessors_m8489 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	static bool MonoProperty_GetAccessors_m8489_init;
	if (!MonoProperty_GetAccessors_m8489_init)
	{
		MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t1319_0_0_0);
		MonoProperty_GetAccessors_m8489_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t1319* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m8481(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3528_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t1530 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = ___nonPublic;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_9 = &(__this->___info_2);
		MethodInfo_t * L_10 = (L_9->___get_method_2);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3528_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((MethodInfoU5BU5D_t1319*)SZArrayNew(MethodInfoU5BU5D_t1319_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		MonoPropertyInfo_t1530 * L_18 = &(__this->___info_2);
		MethodInfo_t * L_19 = (L_18->___set_method_3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
		ArrayElementTypeCheck (L_15, L_19);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_15, L_17)) = (MethodInfo_t *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfoU5BU5D_t1319* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		MonoPropertyInfo_t1530 * L_24 = &(__this->___info_2);
		MethodInfo_t * L_25 = (L_24->___get_method_2);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_25);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_21, L_23)) = (MethodInfo_t *)L_25;
	}

IL_0088:
	{
		MethodInfoU5BU5D_t1319* L_26 = V_2;
		return L_26;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m8490 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___get_method_2);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3528_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1530 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern MethodInfo MonoProperty_GetIndexParameters_m8491_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t741* MonoProperty_GetIndexParameters_m8491 (MonoProperty_t * __this, MethodInfo* method)
{
	static bool MonoProperty_GetIndexParameters_m8491_init;
	if (!MonoProperty_GetIndexParameters_m8491_init)
	{
		ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t741_0_0_0);
		MonoProperty_GetIndexParameters_m8491_init = true;
	}
	ParameterInfoU5BU5D_t741* V_0 = {0};
	ParameterInfoU5BU5D_t741* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t742 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t741* L_4 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t1530 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_7 = &(__this->___info_2);
		MethodInfo_t * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t741* L_9 = (ParameterInfoU5BU5D_t741*)VirtFuncInvoker0< ParameterInfoU5BU5D_t741* >::Invoke(&MethodBase_GetParameters_m3561_MethodInfo, L_8);
		V_1 = L_9;
		ParameterInfoU5BU5D_t741* L_10 = V_1;
		NullCheck(L_10);
		V_0 = ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))));
		ParameterInfoU5BU5D_t741* L_11 = V_1;
		ParameterInfoU5BU5D_t741* L_12 = V_0;
		ParameterInfoU5BU5D_t741* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m4995(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/&Array_Copy_m4995_MethodInfo);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t741*)SZArrayNew(ParameterInfoU5BU5D_t741_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		ParameterInfoU5BU5D_t741* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_3 = (*(ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_14, L_16));
		ParameterInfoU5BU5D_t741* L_17 = V_0;
		int32_t L_18 = V_2;
		ParameterInfo_t742 * L_19 = V_3;
		ParameterInfo_t742 * L_20 = (ParameterInfo_t742 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t742_il2cpp_TypeInfo));
		ParameterInfo__ctor_m8506(L_20, L_19, __this, /*hidden argument*/&ParameterInfo__ctor_m8506_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_20);
		*((ParameterInfo_t742 **)(ParameterInfo_t742 **)SZArrayLdElema(L_17, L_18)) = (ParameterInfo_t742 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		ParameterInfoU5BU5D_t741* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		ParameterInfoU5BU5D_t741* L_24 = V_0;
		return L_24;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m8492 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m8481(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m8481_MethodInfo);
		MonoPropertyInfo_t1530 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t1530 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m3528_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t1530 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___set_method_3);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoProperty_IsDefined_m8493_MethodInfo;
extern "C" bool MonoProperty_IsDefined_m8493 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_1 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8494_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoProperty_GetCustomAttributes_m8494 (MonoProperty_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_0 = MonoCustomAttrs_GetCustomAttributes_m10119(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10119_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m8495_MethodInfo;
extern "C" ObjectU5BU5D_t288* MonoProperty_GetCustomAttributes_m8495 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_1 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern MethodInfo MonoProperty_CreateGetterDelegate_m8496_MethodInfo;
extern TypeInfo* TypeU5BU5D_t618_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t1532 * MonoProperty_CreateGetterDelegate_m8496 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool MonoProperty_CreateGetterDelegate_m8496_init;
	if (!MonoProperty_CreateGetterDelegate_m8496_init)
	{
		TypeU5BU5D_t618_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t618_0_0_0);
		MonoProperty_CreateGetterDelegate_m8496_init = true;
	}
	TypeU5BU5D_t618* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		MethodInfo_t * L_0 = ___method;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m3527_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t618* L_2 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, 1));
		MethodInfo_t * L_3 = ___method;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8366_MethodInfo, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&StaticGetter_1_t1866_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		V_4 = L_5;
		V_5 = (String_t*) &_stringLiteral1702;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t618* L_6 = ((TypeU5BU5D_t618*)SZArrayNew(TypeU5BU5D_t618_il2cpp_TypeInfo_var, 2));
		MethodInfo_t * L_7 = ___method;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_8;
		TypeU5BU5D_t618* L_9 = L_6;
		MethodInfo_t * L_10 = ___method;
		NullCheck(L_10);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8366_MethodInfo, L_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 1)) = (Type_t *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Getter_2_t1867_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		V_4 = L_12;
		V_5 = (String_t*) &_stringLiteral1703;
	}

IL_0059:
	{
		Type_t * L_13 = V_4;
		TypeU5BU5D_t618* L_14 = V_0;
		NullCheck(L_13);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t618* >::Invoke(&Type_MakeGenericType_m3613_MethodInfo, L_13, L_14);
		V_1 = L_15;
		Type_t * L_16 = V_1;
		MethodInfo_t * L_17 = ___method;
		Delegate_t310 * L_18 = Delegate_CreateDelegate_m6640(NULL /*static, unused*/, L_16, L_17, 0, /*hidden argument*/&Delegate_CreateDelegate_m6640_MethodInfo);
		V_2 = L_18;
		Object_t * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		MethodAccessException_t1810 * L_20 = (MethodAccessException_t1810 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodAccessException_t1810_il2cpp_TypeInfo));
		MethodAccessException__ctor_m10091(L_20, /*hidden argument*/&MethodAccessException__ctor_m10091_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&MonoProperty_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		String_t* L_22 = V_5;
		NullCheck(L_21);
		MethodInfo_t * L_23 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m6812_MethodInfo, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		MethodInfo_t * L_24 = V_3;
		TypeU5BU5D_t618* L_25 = V_0;
		NullCheck(L_24);
		MethodInfo_t * L_26 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t618* >::Invoke(&MethodInfo_MakeGenericMethod_m8367_MethodInfo, L_24, L_25);
		V_3 = L_26;
		Type_t * L_27 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&GetterAdapter_t1532_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		Object_t * L_28 = V_2;
		MethodInfo_t * L_29 = V_3;
		Delegate_t310 * L_30 = Delegate_CreateDelegate_m6639(NULL /*static, unused*/, L_27, L_28, L_29, 1, /*hidden argument*/&Delegate_CreateDelegate_m6639_MethodInfo);
		return ((GetterAdapter_t1532 *)Castclass(L_30, InitializedTypeInfo(&GetterAdapter_t1532_il2cpp_TypeInfo)));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern MethodInfo MonoProperty_GetValue_m8497_MethodInfo;
extern "C" Object_t * MonoProperty_GetValue_m8497 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t288* L_0 = ___index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t288* L_1 = ___index;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		Object_t * L_2 = ___obj;
		ObjectU5BU5D_t288* L_3 = ___index;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MonoProperty_GetValue_m8498_MethodInfo, __this, L_2, 0, (Binder_t748 *)NULL, L_3, (CultureInfo_t714 *)NULL);
		return L_4;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8498 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___index, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	Object_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	SecurityException_t1724 * V_2 = {0};
	Exception_t293 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t293 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetGetMethod_m8490_MethodInfo, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8488_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1649(NULL /*static, unused*/, (String_t*) &_stringLiteral1704, L_2, (String_t*) &_stringLiteral56, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		ArgumentException_t332 * L_4 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t288* L_5 = ___index;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			ObjectU5BU5D_t288* L_6 = ___index;
			NullCheck(L_6);
			if ((((int32_t)(((Array_t *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			MethodInfo_t * L_7 = V_1;
			Object_t * L_8 = ___obj;
			int32_t L_9 = ___invokeAttr;
			Binder_t748 * L_10 = ___binder;
			CultureInfo_t714 * L_11 = ___culture;
			NullCheck(L_7);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MethodBase_Invoke_m10521_MethodInfo, L_7, L_8, L_9, L_10, (ObjectU5BU5D_t288*)(ObjectU5BU5D_t288*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			MethodInfo_t * L_13 = V_1;
			Object_t * L_14 = ___obj;
			int32_t L_15 = ___invokeAttr;
			Binder_t748 * L_16 = ___binder;
			ObjectU5BU5D_t288* L_17 = ___index;
			CultureInfo_t714 * L_18 = ___culture;
			NullCheck(L_13);
			Object_t * L_19 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MethodBase_Invoke_m10521_MethodInfo, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t293 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SecurityException_t1724_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t1724 *)__exception_local);
		SecurityException_t1724 * L_20 = V_2;
		TargetInvocationException_t1538 * L_21 = (TargetInvocationException_t1538 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t1538_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m8533(L_21, L_20, /*hidden argument*/&TargetInvocationException__ctor_m8533_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		Object_t * L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoProperty_SetValue_m8499_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m8499 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t748 * ___binder, ObjectU5BU5D_t288* ___index, CultureInfo_t714 * ___culture, MethodInfo* method)
{
	static bool MonoProperty_SetValue_m8499_init;
	if (!MonoProperty_SetValue_m8499_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		MonoProperty_SetValue_m8499_init = true;
	}
	MethodInfo_t * V_0 = {0};
	ObjectU5BU5D_t288* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetSetMethod_m8492_MethodInfo, __this, 1);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8488_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1649(NULL /*static, unused*/, (String_t*) &_stringLiteral1705, L_2, (String_t*) &_stringLiteral56, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		ArgumentException_t332 * L_4 = (ArgumentException_t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t332_il2cpp_TypeInfo));
		ArgumentException__ctor_m1882(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m1882_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		ObjectU5BU5D_t288* L_5 = ___index;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t288* L_6 = ___index;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t288* L_7 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, 1));
		Object_t * L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		ObjectU5BU5D_t288* L_9 = ___index;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		ObjectU5BU5D_t288* L_11 = ___index;
		ObjectU5BU5D_t288* L_12 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4957_MethodInfo, L_11, (Array_t *)(Array_t *)L_12, 0);
		ObjectU5BU5D_t288* L_13 = V_1;
		int32_t L_14 = V_2;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_15;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_0;
		Object_t * L_17 = ___obj;
		int32_t L_18 = ___invokeAttr;
		Binder_t748 * L_19 = ___binder;
		ObjectU5BU5D_t288* L_20 = V_1;
		CultureInfo_t714 * L_21 = ___culture;
		NullCheck(L_16);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&MethodBase_Invoke_m10521_MethodInfo, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8500 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_PropertyType_m8485_MethodInfo, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m6824_MethodInfo, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8488_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1649(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral89, L_2, /*hidden argument*/&String_Concat_m1649_MethodInfo);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern MethodInfo MonoProperty_GetOptionalCustomModifiers_m8501_MethodInfo;
extern "C" TypeU5BU5D_t618* MonoProperty_GetOptionalCustomModifiers_m8501 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t618* V_0 = {0};
	{
		TypeU5BU5D_t618* L_0 = MonoPropertyInfo_GetTypeModifiers_m8475(NULL /*static, unused*/, __this, 1, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8475_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t618* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t618* L_3 = V_0;
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern MethodInfo MonoProperty_GetRequiredCustomModifiers_m8502_MethodInfo;
extern "C" TypeU5BU5D_t618* MonoProperty_GetRequiredCustomModifiers_m8502 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t618* V_0 = {0};
	{
		TypeU5BU5D_t618* L_0 = MonoPropertyInfo_GetTypeModifiers_m8475(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m8475_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t618* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t618* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoProperty_GetObjectData_m8503_MethodInfo;
extern "C" void MonoProperty_GetObjectData_m8503 (MonoProperty_t * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m8488_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_ReflectedType_m8486_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_ToString_m8500_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m8349(NULL /*static, unused*/, L_0, L_1, L_2, L_3, ((int32_t)16), /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m8349_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterAttributes_t1533_il2cpp_TypeInfo;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
extern TypeInfo InAttribute_t1324_il2cpp_TypeInfo;
extern TypeInfo OptionalAttribute_t1327_il2cpp_TypeInfo;
extern TypeInfo OutAttribute_t1321_il2cpp_TypeInfo;
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern MethodInfo ParameterInfo_get_Attributes_m8508_MethodInfo;
extern MethodInfo ParameterInfo_get_Position_m8515_MethodInfo;
extern MethodInfo Type_get_Namespace_m3593_MethodInfo;
extern MethodInfo ParameterInfo_get_IsRetval_m8512_MethodInfo;
extern MethodInfo ParameterInfo_get_IsIn_m8509_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOut_m8511_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOptional_m8510_MethodInfo;
extern MethodInfo InAttribute__ctor_m6854_MethodInfo;
extern MethodInfo OptionalAttribute__ctor_m6857_MethodInfo;
extern MethodInfo OutAttribute__ctor_m6850_MethodInfo;


// System.Void System.Reflection.ParameterInfo::.ctor()
extern MethodInfo ParameterInfo__ctor_m8504_MethodInfo;
extern "C" void ParameterInfo__ctor_m8504 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C" void ParameterInfo__ctor_m8505 (ParameterInfo_t742 * __this, ParameterBuilder_t1502 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		Type_t * L_0 = ___type;
		__this->___ClassImpl_0 = L_0;
		MemberInfo_t * L_1 = ___member;
		__this->___MemberImpl_2 = L_1;
		ParameterBuilder_t1502 * L_2 = ___pb;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		ParameterBuilder_t1502 * L_3 = ___pb;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterBuilder_get_Name_m8196_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterBuilder_t1502 * L_5 = ___pb;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Position_m8197_MethodInfo, L_5);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		ParameterBuilder_t1502 * L_7 = ___pb;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Attributes_m8195_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		int32_t L_9 = ___position;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m8506 (ParameterInfo_t742 * __this, ParameterInfo_t742 * ___pinfo, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		ParameterInfo_t742 * L_0 = ___pinfo;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3562_MethodInfo, L_0);
		__this->___ClassImpl_0 = L_1;
		MemberInfo_t * L_2 = ___member;
		__this->___MemberImpl_2 = L_2;
		ParameterInfo_t742 * L_3 = ___pinfo;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m8514_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterInfo_t742 * L_5 = ___pinfo;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Position_m8515_MethodInfo, L_5);
		__this->___PositionImpl_4 = L_6;
		ParameterInfo_t742 * L_7 = ___pinfo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8508_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern MethodInfo ParameterInfo_ToString_m8507_MethodInfo;
extern "C" String_t* ParameterInfo_ToString_m8507 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m10464_MethodInfo, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m6781_MethodInfo, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3634_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_7 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&Void_t34_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_9 = (__this->___ClassImpl_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3593_MethodInfo, L_9);
		MemberInfo_t * L_11 = (__this->___MemberImpl_2);
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m3592_MethodInfo, L_11);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m3593_MethodInfo, L_12);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m58(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = (__this->___ClassImpl_0);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3529_MethodInfo, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_18 = (__this->___ClassImpl_0);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m3547_MethodInfo, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = ParameterInfo_get_IsRetval_m8512(__this, /*hidden argument*/&ParameterInfo_get_IsRetval_m8512_MethodInfo);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		Object_t * L_23 = Box(InitializedTypeInfo(&Char_t190_il2cpp_TypeInfo), &L_22);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m1322(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/&String_Concat_m1322_MethodInfo);
		V_2 = L_24;
		String_t* L_25 = V_2;
		String_t* L_26 = (__this->___NameImpl_3);
		String_t* L_27 = String_Concat_m1710(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&String_Concat_m1710_MethodInfo);
		V_2 = L_27;
	}

IL_0095:
	{
		String_t* L_28 = V_2;
		return L_28;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m3562 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m8508 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m8509 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8508_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m8510 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8508_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m8511 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8508_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m8512 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m8508_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern MethodInfo ParameterInfo_get_Member_m8513_MethodInfo;
extern "C" MemberInfo_t * ParameterInfo_get_Member_m8513 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m8514 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m8515 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_GetCustomAttributes_m8516_MethodInfo;
extern "C" ObjectU5BU5D_t288* ParameterInfo_GetCustomAttributes_m8516 (ParameterInfo_t742 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		ObjectU5BU5D_t288* L_2 = MonoCustomAttrs_GetCustomAttributes_m10118(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m10118_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_IsDefined_m8517_MethodInfo;
extern "C" bool ParameterInfo_IsDefined_m8517 (ParameterInfo_t742 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t1816_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m10120(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m10120_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern MethodInfo ParameterInfo_GetPseudoCustomAttributes_m8518_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t288_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t288* ParameterInfo_GetPseudoCustomAttributes_m8518 (ParameterInfo_t742 * __this, MethodInfo* method)
{
	static bool ParameterInfo_GetPseudoCustomAttributes_m8518_init;
	if (!ParameterInfo_GetPseudoCustomAttributes_m8518_init)
	{
		ObjectU5BU5D_t288_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t288_0_0_0);
		ParameterInfo_GetPseudoCustomAttributes_m8518_init = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t288* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m8509(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8509_MethodInfo);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ParameterInfo_get_IsOut_m8511(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8511_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = ParameterInfo_get_IsOptional_m8510(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8510_MethodInfo);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t1496 * L_6 = (__this->___marshalAs_6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t288*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((ObjectU5BU5D_t288*)SZArrayNew(ObjectU5BU5D_t288_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = ParameterInfo_get_IsIn_m8509(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m8509_MethodInfo);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t288* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		InAttribute_t1324 * L_14 = (InAttribute_t1324 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InAttribute_t1324_il2cpp_TypeInfo));
		InAttribute__ctor_m6854(L_14, /*hidden argument*/&InAttribute__ctor_m6854_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_0054:
	{
		bool L_15 = ParameterInfo_get_IsOptional_m8510(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m8510_MethodInfo);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ObjectU5BU5D_t288* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		OptionalAttribute_t1327 * L_19 = (OptionalAttribute_t1327 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OptionalAttribute_t1327_il2cpp_TypeInfo));
		OptionalAttribute__ctor_m6857(L_19, /*hidden argument*/&OptionalAttribute__ctor_m6857_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)) = (Object_t *)L_19;
	}

IL_0068:
	{
		bool L_20 = ParameterInfo_get_IsOut_m8511(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m8511_MethodInfo);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t288* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		OutAttribute_t1321 * L_24 = (OutAttribute_t1321 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OutAttribute_t1321_il2cpp_TypeInfo));
		OutAttribute__ctor_m6850(L_24, /*hidden argument*/&OutAttribute__ctor_m6850_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23)) = (Object_t *)L_24;
	}

IL_007c:
	{
		UnmanagedMarshal_t1496 * L_25 = (__this->___marshalAs_6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_t288* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		UnmanagedMarshal_t1496 * L_29 = (__this->___marshalAs_6);
		NullCheck(L_29);
		MarshalAsAttribute_t1323 * L_30 = UnmanagedMarshal_ToMarshalAsAttribute_m8268(L_29, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m8268_MethodInfo);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		ArrayElementTypeCheck (L_26, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)) = (Object_t *)L_30;
	}

IL_0096:
	{
		ObjectU5BU5D_t288* L_31 = V_1;
		return L_31;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t750_marshal(const ParameterModifier_t750& unmarshaled, ParameterModifier_t750_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
void ParameterModifier_t750_marshal_back(const ParameterModifier_t750_marshaled& marshaled, ParameterModifier_t750& unmarshaled)
{
	unmarshaled.____byref_0 = (BooleanU5BU5D_t972*)il2cpp_codegen_marshal_array_result(&Boolean_t35_il2cpp_TypeInfo, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t750_marshal_cleanup(ParameterModifier_t750_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pointer_t1534_il2cpp_TypeInfo;
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"



// System.Void System.Reflection.Pointer::.ctor()
extern MethodInfo Pointer__ctor_m8519_MethodInfo;
extern "C" void Pointer__ctor_m8519 (Pointer_t1534 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8520_MethodInfo;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m8520 (Pointer_t1534 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4785(L_0, (String_t*) &_stringLiteral1706, /*hidden argument*/&NotSupportedException__ctor_m4785_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProcessorArchitecture_t1535_il2cpp_TypeInfo;
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttributes_t1536_il2cpp_TypeInfo;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo PropertyInfo_GetValue_m10522_MethodInfo;
extern MethodInfo PropertyInfo_SetValue_m10523_MethodInfo;


// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m8521 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m6836(__this, /*hidden argument*/&MemberInfo__ctor_m6836_MethodInfo);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern MethodInfo PropertyInfo_get_MemberType_m8522_MethodInfo;
extern "C" int32_t PropertyInfo_get_MemberType_m8522 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern MethodInfo PropertyInfo_GetValue_m8523_MethodInfo;
extern "C" Object_t * PropertyInfo_GetValue_m8523 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t288* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t288* L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&PropertyInfo_GetValue_m10522_MethodInfo, __this, L_0, 0, (Binder_t748 *)NULL, L_1, (CultureInfo_t714 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern MethodInfo PropertyInfo_SetValue_m8524_MethodInfo;
extern "C" void PropertyInfo_SetValue_m8524 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t288* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		ObjectU5BU5D_t288* L_2 = ___index;
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t748 *, ObjectU5BU5D_t288*, CultureInfo_t714 * >::Invoke(&PropertyInfo_SetValue_m10523_MethodInfo, __this, L_0, L_1, 0, (Binder_t748 *)NULL, L_2, (CultureInfo_t714 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern MethodInfo PropertyInfo_GetOptionalCustomModifiers_m8525_MethodInfo;
extern "C" TypeU5BU5D_t618* PropertyInfo_GetOptionalCustomModifiers_m8525 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern MethodInfo PropertyInfo_GetRequiredCustomModifiers_m8526_MethodInfo;
extern "C" TypeU5BU5D_t618* PropertyInfo_GetRequiredCustomModifiers_m8526 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t618* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"

extern MethodInfo SerializationInfo_GetBoolean_m4784_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m4780_MethodInfo;


// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair__ctor_m8527_MethodInfo;
extern TypeInfo* ByteU5BU5D_t515_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m8527 (StrongNameKeyPair_t1512 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	static bool StrongNameKeyPair__ctor_m8527_init;
	if (!StrongNameKeyPair__ctor_m8527_init)
	{
		ByteU5BU5D_t515_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t515_0_0_0);
		StrongNameKeyPair__ctor_m8527_init = true;
	}
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		SerializationInfo_t665 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m4782(L_0, (String_t*) &_stringLiteral1707, L_1, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->____publicKey_0 = ((ByteU5BU5D_t515*)Castclass(L_2, ByteU5BU5D_t515_il2cpp_TypeInfo_var));
		SerializationInfo_t665 * L_3 = ___info;
		NullCheck(L_3);
		String_t* L_4 = SerializationInfo_GetString_m4791(L_3, (String_t*) &_stringLiteral1708, /*hidden argument*/&SerializationInfo_GetString_m4791_MethodInfo);
		__this->____keyPairContainer_1 = L_4;
		SerializationInfo_t665 * L_5 = ___info;
		NullCheck(L_5);
		bool L_6 = SerializationInfo_GetBoolean_m4784(L_5, (String_t*) &_stringLiteral1709, /*hidden argument*/&SerializationInfo_GetBoolean_m4784_MethodInfo);
		__this->____keyPairExported_2 = L_6;
		SerializationInfo_t665 * L_7 = ___info;
		Type_t * L_8 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m4782(L_7, (String_t*) &_stringLiteral1710, L_8, /*hidden argument*/&SerializationInfo_GetValue_m4782_MethodInfo);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t515*)Castclass(L_9, ByteU5BU5D_t515_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8528_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m8528 (StrongNameKeyPair_t1512 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		ByteU5BU5D_t515* L_1 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_AddValue_m4779(L_0, (String_t*) &_stringLiteral1707, (Object_t *)(Object_t *)L_1, L_2, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		SerializationInfo_t665 * L_3 = ___info;
		String_t* L_4 = (__this->____keyPairContainer_1);
		NullCheck(L_3);
		SerializationInfo_AddValue_m4794(L_3, (String_t*) &_stringLiteral1708, L_4, /*hidden argument*/&SerializationInfo_AddValue_m4794_MethodInfo);
		SerializationInfo_t665 * L_5 = ___info;
		bool L_6 = (__this->____keyPairExported_2);
		NullCheck(L_5);
		SerializationInfo_AddValue_m4780(L_5, (String_t*) &_stringLiteral1709, L_6, /*hidden argument*/&SerializationInfo_AddValue_m4780_MethodInfo);
		SerializationInfo_t665 * L_7 = ___info;
		ByteU5BU5D_t515* L_8 = (__this->____keyPairArray_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m1522(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t515_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1522_MethodInfo);
		NullCheck(L_7);
		SerializationInfo_AddValue_m4779(L_7, (String_t*) &_stringLiteral1710, (Object_t *)(Object_t *)L_8, L_9, /*hidden argument*/&SerializationInfo_AddValue_m4779_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8529_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8529 (StrongNameKeyPair_t1512 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Exception__ctor_m3597_MethodInfo;
extern MethodInfo Exception__ctor_m3600_MethodInfo;


// System.Void System.Reflection.TargetException::.ctor()
extern MethodInfo TargetException__ctor_m8530_MethodInfo;
extern "C" void TargetException__ctor_m8530 (TargetException_t1537 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6869(NULL /*static, unused*/, (String_t*) &_stringLiteral1711, /*hidden argument*/&Locale_GetText_m6869_MethodInfo);
		Exception__ctor_m3597(__this, L_0, /*hidden argument*/&Exception__ctor_m3597_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern "C" void TargetException__ctor_m8531 (TargetException_t1537 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3597(__this, L_0, /*hidden argument*/&Exception__ctor_m3597_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetException__ctor_m8532_MethodInfo;
extern "C" void TargetException__ctor_m8532 (TargetException_t1537 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		StreamingContext_t666  L_1 = ___context;
		Exception__ctor_m3600(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3600_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Exception__ctor_m3599_MethodInfo;


// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8533 (TargetInvocationException_t1538 * __this, Exception_t293 * ___inner, MethodInfo* method)
{
	{
		Exception_t293 * L_0 = ___inner;
		Exception__ctor_m3599(__this, (String_t*) &_stringLiteral1712, L_0, /*hidden argument*/&Exception__ctor_m3599_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetInvocationException__ctor_m8534_MethodInfo;
extern "C" void TargetInvocationException__ctor_m8534 (TargetInvocationException_t1538 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___sc, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		StreamingContext_t666  L_1 = ___sc;
		Exception__ctor_m3600(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3600_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m8535 (TargetParameterCountException_t1539 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m6869(NULL /*static, unused*/, (String_t*) &_stringLiteral1713, /*hidden argument*/&Locale_GetText_m6869_MethodInfo);
		Exception__ctor_m3597(__this, L_0, /*hidden argument*/&Exception__ctor_m3597_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m8536 (TargetParameterCountException_t1539 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m3597(__this, L_0, /*hidden argument*/&Exception__ctor_m3597_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetParameterCountException__ctor_m8537_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m8537 (TargetParameterCountException_t1539 * __this, SerializationInfo_t665 * ___info, StreamingContext_t666  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t665 * L_0 = ___info;
		StreamingContext_t666  L_1 = ___context;
		Exception__ctor_m3600(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m3600_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeAttributes_t1540_il2cpp_TypeInfo;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NeutralResourcesLanguageAttribute_t913_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"



// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m3847_MethodInfo;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m3847 (NeutralResourcesLanguageAttribute_t913 * __this, String_t* ___cultureName, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t711 * L_1 = (ArgumentNullException_t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t711_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3479(L_1, (String_t*) &_stringLiteral1714, /*hidden argument*/&ArgumentNullException__ctor_m3479_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SatelliteContractVersionAttribute_t911_il2cpp_TypeInfo;
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

extern MethodInfo Version__ctor_m10395_MethodInfo;


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern MethodInfo SatelliteContractVersionAttribute__ctor_m3845_MethodInfo;
extern "C" void SatelliteContractVersionAttribute__ctor_m3845 (SatelliteContractVersionAttribute_t911 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		String_t* L_0 = ___version;
		Version_t960 * L_1 = (Version_t960 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t960_il2cpp_TypeInfo));
		Version__ctor_m10395(L_1, L_0, /*hidden argument*/&Version__ctor_m10395_MethodInfo);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxations_t1541_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxationsAttribute_t916_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern MethodInfo CompilationRelaxationsAttribute__ctor_m3850_MethodInfo;
extern "C" void CompilationRelaxationsAttribute__ctor_m3850 (CompilationRelaxationsAttribute_t916 * __this, int32_t ___relaxations, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultDependencyAttribute_t1542_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern MethodInfo DefaultDependencyAttribute__ctor_m8538_MethodInfo;
extern "C" void DefaultDependencyAttribute__ctor_m8538 (DefaultDependencyAttribute_t1542 * __this, int32_t ___loadHintArgument, MethodInfo* method)
{
	{
		Attribute__ctor_m3394(__this, /*hidden argument*/&Attribute__ctor_m3394_MethodInfo);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IsVolatile_t1543_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo LoadHint_t1544_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
