#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// ButtonControl
#include "AssemblyU2DCSharp_ButtonControl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ButtonControl_t1_il2cpp_TypeInfo;
// ButtonControl
#include "AssemblyU2DCSharp_ButtonControlMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m46_MethodInfo;
extern MethodInfo Time_set_timeScale_m47_MethodInfo;
extern MethodInfo Application_LoadLevel_m48_MethodInfo;


// System.Void ButtonControl::.ctor()
extern MethodInfo ButtonControl__ctor_m0_MethodInfo;
extern "C" void ButtonControl__ctor_m0 (ButtonControl_t1 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void ButtonControl::Restart()
extern MethodInfo ButtonControl_Restart_m1_MethodInfo;
extern "C" void ButtonControl_Restart_m1 (ButtonControl_t1 * __this, MethodInfo* method)
{
	{
		Time_set_timeScale_m47(NULL /*static, unused*/, (1.0f), /*hidden argument*/&Time_set_timeScale_m47_MethodInfo);
		int32_t L_0 = (__this->___firstLevelIndex_2);
		Application_LoadLevel_m48(NULL /*static, unused*/, L_0, /*hidden argument*/&Application_LoadLevel_m48_MethodInfo);
		return;
	}
}
// ChangeMusic
#include "AssemblyU2DCSharp_ChangeMusic.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ChangeMusic_t5_il2cpp_TypeInfo;
// ChangeMusic
#include "AssemblyU2DCSharp_ChangeMusicMethodDeclarations.h"

// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
extern MethodInfo AudioSource_set_clip_m49_MethodInfo;
extern MethodInfo AudioSource_Play_m50_MethodInfo;
struct Component_t25;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.AudioSource>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t25;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m52_gshared (Component_t25 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m52(__this, method) (( Object_t * (*) (Component_t25 *, MethodInfo*))Component_GetComponent_TisObject_t_m52_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t4_m51(__this, method) (( AudioSource_t4 * (*) (Component_t25 *, MethodInfo*))Component_GetComponent_TisObject_t_m52_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAudioSource_t4_m51_GenericMethod;


// System.Void ChangeMusic::.ctor()
extern MethodInfo ChangeMusic__ctor_m2_MethodInfo;
extern "C" void ChangeMusic__ctor_m2 (ChangeMusic_t5 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void ChangeMusic::Awake()
extern MethodInfo ChangeMusic_Awake_m3_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAudioSource_t4_m51_MethodInfo_var;
extern "C" void ChangeMusic_Awake_m3 (ChangeMusic_t5 * __this, MethodInfo* method)
{
	static bool ChangeMusic_Awake_m3_init;
	if (!ChangeMusic_Awake_m3_init)
	{
		Component_GetComponent_TisAudioSource_t4_m51_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAudioSource_t4_m51_GenericMethod);
		ChangeMusic_Awake_m3_init = true;
	}
	{
		AudioSource_t4 * L_0 = Component_GetComponent_TisAudioSource_t4_m51(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t4_m51_MethodInfo_var);
		__this->___source_3 = L_0;
		return;
	}
}
// System.Void ChangeMusic::OnLevelWasLoaded(System.Int32)
extern MethodInfo ChangeMusic_OnLevelWasLoaded_m4_MethodInfo;
extern "C" void ChangeMusic_OnLevelWasLoaded_m4 (ChangeMusic_t5 * __this, int32_t ___level, MethodInfo* method)
{
	{
		int32_t L_0 = ___level;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		AudioSource_t4 * L_1 = (__this->___source_3);
		AudioClip_t3 * L_2 = (__this->___level1Music_2);
		NullCheck(L_1);
		AudioSource_set_clip_m49(L_1, L_2, /*hidden argument*/&AudioSource_set_clip_m49_MethodInfo);
		AudioSource_t4 * L_3 = (__this->___source_3);
		NullCheck(L_3);
		AudioSource_Play_m50(L_3, /*hidden argument*/&AudioSource_Play_m50_MethodInfo);
	}

IL_0023:
	{
		return;
	}
}
// DAVE_ButtonControl
#include "AssemblyU2DCSharp_DAVE_ButtonControl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DAVE_ButtonControl_t7_il2cpp_TypeInfo;
// DAVE_ButtonControl
#include "AssemblyU2DCSharp_DAVE_ButtonControlMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo GameObject_SetActive_m53_MethodInfo;


// System.Void DAVE_ButtonControl::.ctor()
extern MethodInfo DAVE_ButtonControl__ctor_m5_MethodInfo;
extern "C" void DAVE_ButtonControl__ctor_m5 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::ShowMainMenu()
extern MethodInfo DAVE_ButtonControl_ShowMainMenu_m6_MethodInfo;
extern "C" void DAVE_ButtonControl_ShowMainMenu_m6 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___mainMenuCanvas_3);
		NullCheck(L_0);
		GameObject_SetActive_m53(L_0, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_1 = (__this->___creditsCanvas_4);
		NullCheck(L_1);
		GameObject_SetActive_m53(L_1, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_2 = (__this->___settingsCanvas_5);
		NullCheck(L_2);
		GameObject_SetActive_m53(L_2, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_3 = (__this->___musicCanvas_6);
		NullCheck(L_3);
		GameObject_SetActive_m53(L_3, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::Play()
extern MethodInfo DAVE_ButtonControl_Play_m7_MethodInfo;
extern "C" void DAVE_ButtonControl_Play_m7 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gameSceneIndex_2);
		Application_LoadLevel_m48(NULL /*static, unused*/, L_0, /*hidden argument*/&Application_LoadLevel_m48_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::ShowCredits()
extern MethodInfo DAVE_ButtonControl_ShowCredits_m8_MethodInfo;
extern "C" void DAVE_ButtonControl_ShowCredits_m8 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___mainMenuCanvas_3);
		NullCheck(L_0);
		GameObject_SetActive_m53(L_0, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_1 = (__this->___creditsCanvas_4);
		NullCheck(L_1);
		GameObject_SetActive_m53(L_1, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::ShowSettings()
extern MethodInfo DAVE_ButtonControl_ShowSettings_m9_MethodInfo;
extern "C" void DAVE_ButtonControl_ShowSettings_m9 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___mainMenuCanvas_3);
		NullCheck(L_0);
		GameObject_SetActive_m53(L_0, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_1 = (__this->___settingsCanvas_5);
		NullCheck(L_1);
		GameObject_SetActive_m53(L_1, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::ShowMusic()
extern MethodInfo DAVE_ButtonControl_ShowMusic_m10_MethodInfo;
extern "C" void DAVE_ButtonControl_ShowMusic_m10 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___mainMenuCanvas_3);
		NullCheck(L_0);
		GameObject_SetActive_m53(L_0, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_1 = (__this->___musicCanvas_6);
		NullCheck(L_1);
		GameObject_SetActive_m53(L_1, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		return;
	}
}
// System.Void DAVE_ButtonControl::ShowTeam()
extern MethodInfo DAVE_ButtonControl_ShowTeam_m11_MethodInfo;
extern "C" void DAVE_ButtonControl_ShowTeam_m11 (DAVE_ButtonControl_t7 * __this, MethodInfo* method)
{
	{
		GameObject_t6 * L_0 = (__this->___mainMenuCanvas_3);
		NullCheck(L_0);
		GameObject_SetActive_m53(L_0, 0, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		GameObject_t6 * L_1 = (__this->___teamCanvas_7);
		NullCheck(L_1);
		GameObject_SetActive_m53(L_1, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
		return;
	}
}
// LoadOnClick
#include "AssemblyU2DCSharp_LoadOnClick.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LoadOnClick_t8_il2cpp_TypeInfo;
// LoadOnClick
#include "AssemblyU2DCSharp_LoadOnClickMethodDeclarations.h"



// System.Void LoadOnClick::.ctor()
extern MethodInfo LoadOnClick__ctor_m12_MethodInfo;
extern "C" void LoadOnClick__ctor_m12 (LoadOnClick_t8 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void LoadOnClick::LoadScene(System.Int32)
extern MethodInfo LoadOnClick_LoadScene_m13_MethodInfo;
extern "C" void LoadOnClick_LoadScene_m13 (LoadOnClick_t8 * __this, int32_t ___level, MethodInfo* method)
{
	{
		int32_t L_0 = ___level;
		Application_LoadLevel_m48(NULL /*static, unused*/, L_0, /*hidden argument*/&Application_LoadLevel_m48_MethodInfo);
		return;
	}
}
// Movement/<CheckCol>c__Iterator0
#include "AssemblyU2DCSharp_Movement_U3CCheckColU3Ec__Iterator0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCheckColU3Ec__Iterator0_t11_il2cpp_TypeInfo;
// Movement/<CheckCol>c__Iterator0
#include "AssemblyU2DCSharp_Movement_U3CCheckColU3Ec__Iterator0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// Movement
#include "AssemblyU2DCSharp_Movement.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// System.String
#include "mscorlib_System_String.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo WaitForSeconds_t26_il2cpp_TypeInfo;
extern TypeInfo Movement_t10_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t27_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m54_MethodInfo;
extern MethodInfo WaitForSeconds__ctor_m55_MethodInfo;
extern MethodInfo Collision2D_get_gameObject_m56_MethodInfo;
extern MethodInfo GameObject_get_tag_m57_MethodInfo;
extern MethodInfo String_op_Equality_m58_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m59_MethodInfo;


// System.Void Movement/<CheckCol>c__Iterator0::.ctor()
extern MethodInfo U3CCheckColU3Ec__Iterator0__ctor_m14_MethodInfo;
extern "C" void U3CCheckColU3Ec__Iterator0__ctor_m14 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Object Movement/<CheckCol>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CCheckColU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m15_MethodInfo;
extern "C" Object_t * U3CCheckColU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m15 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object Movement/<CheckCol>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CCheckColU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m16_MethodInfo;
extern "C" Object_t * U3CCheckColU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m16 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Boolean Movement/<CheckCol>c__Iterator0::MoveNext()
extern MethodInfo U3CCheckColU3Ec__Iterator0_MoveNext_m17_MethodInfo;
extern "C" bool U3CCheckColU3Ec__Iterator0_MoveNext_m17 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0085;
	}

IL_0021:
	{
		WaitForSeconds_t26 * L_2 = (WaitForSeconds_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t26_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m55(L_2, (0.1f), /*hidden argument*/&WaitForSeconds__ctor_m55_MethodInfo);
		__this->___$current_2 = L_2;
		__this->___$PC_1 = 1;
		goto IL_0087;
	}

IL_003d:
	{
		Movement_t10 * L_3 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_3);
		bool L_4 = (L_3->___setGrounded_12);
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		Collision2D_t9 * L_5 = (__this->___col_0);
		NullCheck(L_5);
		GameObject_t6 * L_6 = Collision2D_get_gameObject_m56(L_5, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = GameObject_get_tag_m57(L_6, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		Movement_t10 * L_8 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_8);
		String_t* L_9 = (L_8->___FloorTag_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_10 = String_op_Equality_m58(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		Movement_t10 * L_11 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_11);
		L_11->___grounded_9 = 0;
	}

IL_007e:
	{
		__this->___$PC_1 = (-1);
	}

IL_0085:
	{
		return 0;
	}

IL_0087:
	{
		return 1;
	}
	// Dead block : IL_0089: ldloc.1
}
// System.Void Movement/<CheckCol>c__Iterator0::Dispose()
extern MethodInfo U3CCheckColU3Ec__Iterator0_Dispose_m18_MethodInfo;
extern "C" void U3CCheckColU3Ec__Iterator0_Dispose_m18 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void Movement/<CheckCol>c__Iterator0::Reset()
extern MethodInfo U3CCheckColU3Ec__Iterator0_Reset_m19_MethodInfo;
extern "C" void U3CCheckColU3Ec__Iterator0_Reset_m19 (U3CCheckColU3Ec__Iterator0_t11 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// Movement
#include "AssemblyU2DCSharp_MovementMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.ForceMode2D
#include "UnityEngine_UnityEngine_ForceMode2D.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern TypeInfo Vector3_t28_il2cpp_TypeInfo;
extern TypeInfo Input_t29_il2cpp_TypeInfo;
extern TypeInfo Vector2_t30_il2cpp_TypeInfo;
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
extern MethodInfo Component_get_transform_m60_MethodInfo;
extern MethodInfo Transform_get_position_m61_MethodInfo;
extern MethodInfo Time_get_deltaTime_m62_MethodInfo;
extern MethodInfo Vector3__ctor_m63_MethodInfo;
extern MethodInfo Vector3_op_Addition_m64_MethodInfo;
extern MethodInfo Transform_set_position_m65_MethodInfo;
extern MethodInfo Input_GetKeyDown_m66_MethodInfo;
extern MethodInfo Vector2__ctor_m67_MethodInfo;
extern MethodInfo Rigidbody2D_AddRelativeForce_m68_MethodInfo;
extern MethodInfo Movement_CheckCol_m25_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m69_MethodInfo;
struct Component_t25;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody2D>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t12_m70(__this, method) (( Rigidbody2D_t12 * (*) (Component_t25 *, MethodInfo*))Component_GetComponent_TisObject_t_m52_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRigidbody2D_t12_m70_GenericMethod;


// System.Void Movement::.ctor()
extern MethodInfo Movement__ctor_m20_MethodInfo;
extern "C" void Movement__ctor_m20 (Movement_t10 * __this, MethodInfo* method)
{
	{
		__this->___goRight_10 = 1;
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void Movement::Start()
extern MethodInfo Movement_Start_m21_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody2D_t12_m70_MethodInfo_var;
extern "C" void Movement_Start_m21 (Movement_t10 * __this, MethodInfo* method)
{
	static bool Movement_Start_m21_init;
	if (!Movement_Start_m21_init)
	{
		Component_GetComponent_TisRigidbody2D_t12_m70_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody2D_t12_m70_GenericMethod);
		Movement_Start_m21_init = true;
	}
	{
		Rigidbody2D_t12 * L_0 = Component_GetComponent_TisRigidbody2D_t12_m70(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t12_m70_MethodInfo_var);
		__this->___RB_4 = L_0;
		return;
	}
}
// System.Void Movement::FixedUpdate()
extern MethodInfo Movement_FixedUpdate_m22_MethodInfo;
extern "C" void Movement_FixedUpdate_m22 (Movement_t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___goRight_10);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Transform_t31 * L_1 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		Transform_t31 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t28  L_3 = Transform_get_position_m61(L_2, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		float L_4 = (__this->___speed_2);
		float L_5 = Time_get_deltaTime_m62(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m62_MethodInfo);
		Vector3_t28  L_6 = {0};
		Vector3__ctor_m63(&L_6, ((float)((float)L_4*(float)L_5)), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m63_MethodInfo);
		Vector3_t28  L_7 = Vector3_op_Addition_m64(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/&Vector3_op_Addition_m64_MethodInfo);
		NullCheck(L_2);
		Transform_set_position_m65(L_2, L_7, /*hidden argument*/&Transform_set_position_m65_MethodInfo);
	}

IL_003c:
	{
		bool L_8 = (__this->___grounded_9);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t29_il2cpp_TypeInfo));
		bool L_9 = Input_GetKeyDown_m66(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/&Input_GetKeyDown_m66_MethodInfo);
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		Rigidbody2D_t12 * L_10 = (__this->___RB_4);
		float L_11 = (__this->___jumpForce_3);
		Vector2_t30  L_12 = {0};
		Vector2__ctor_m67(&L_12, (0.0f), L_11, /*hidden argument*/&Vector2__ctor_m67_MethodInfo);
		NullCheck(L_10);
		Rigidbody2D_AddRelativeForce_m68(L_10, L_12, 1, /*hidden argument*/&Rigidbody2D_AddRelativeForce_m68_MethodInfo);
	}

IL_006f:
	{
		bool L_13 = (__this->___dead_11);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		__this->___goRight_10 = 0;
		GameObject_t6 * L_14 = (__this->___dieCanvas_8);
		NullCheck(L_14);
		GameObject_SetActive_m53(L_14, 1, /*hidden argument*/&GameObject_SetActive_m53_MethodInfo);
	}

IL_008d:
	{
		return;
	}
}
// System.Void Movement::OnCollisionStay2D(UnityEngine.Collision2D)
extern MethodInfo Movement_OnCollisionStay2D_m23_MethodInfo;
extern "C" void Movement_OnCollisionStay2D_m23 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method)
{
	{
		Collision2D_t9 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t6 * L_1 = Collision2D_get_gameObject_m56(L_0, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m57(L_1, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_3 = (__this->___FloorTag_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m58(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		__this->___grounded_9 = 1;
		__this->___setGrounded_12 = 0;
		goto IL_009c;
	}

IL_002e:
	{
		Collision2D_t9 * L_5 = ___col;
		NullCheck(L_5);
		GameObject_t6 * L_6 = Collision2D_get_gameObject_m56(L_5, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_6);
		String_t* L_7 = GameObject_get_tag_m57(L_6, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_8 = (__this->___MetalCrateTag_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_9 = String_op_Equality_m58(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		__this->___goRight_10 = 0;
		goto IL_009c;
	}

IL_0055:
	{
		Collision2D_t9 * L_10 = ___col;
		NullCheck(L_10);
		GameObject_t6 * L_11 = Collision2D_get_gameObject_m56(L_10, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = GameObject_get_tag_m57(L_11, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_13 = (__this->___PowerCrateTag_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m58(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_14)
		{
			goto IL_009c;
		}
	}
	{
		__this->___dead_11 = 1;
		Time_set_timeScale_m47(NULL /*static, unused*/, (0.5f), /*hidden argument*/&Time_set_timeScale_m47_MethodInfo);
		Rigidbody2D_t12 * L_15 = (__this->___RB_4);
		Vector2_t30  L_16 = {0};
		Vector2__ctor_m67(&L_16, (-60.0f), (0.0f), /*hidden argument*/&Vector2__ctor_m67_MethodInfo);
		NullCheck(L_15);
		Rigidbody2D_AddRelativeForce_m68(L_15, L_16, 1, /*hidden argument*/&Rigidbody2D_AddRelativeForce_m68_MethodInfo);
	}

IL_009c:
	{
		return;
	}
}
// System.Void Movement::OnCollisionExit2D(UnityEngine.Collision2D)
extern MethodInfo Movement_OnCollisionExit2D_m24_MethodInfo;
extern "C" void Movement_OnCollisionExit2D_m24 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method)
{
	{
		Collision2D_t9 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t6 * L_1 = Collision2D_get_gameObject_m56(L_0, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m57(L_1, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_3 = (__this->___FloorTag_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_4 = String_op_Equality_m58(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		__this->___setGrounded_12 = 1;
		Collision2D_t9 * L_5 = ___col;
		Object_t * L_6 = Movement_CheckCol_m25(__this, L_5, /*hidden argument*/&Movement_CheckCol_m25_MethodInfo);
		MonoBehaviour_StartCoroutine_m69(__this, L_6, /*hidden argument*/&MonoBehaviour_StartCoroutine_m69_MethodInfo);
		goto IL_007e;
	}

IL_0035:
	{
		Collision2D_t9 * L_7 = ___col;
		NullCheck(L_7);
		GameObject_t6 * L_8 = Collision2D_get_gameObject_m56(L_7, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = GameObject_get_tag_m57(L_8, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_10 = (__this->___MetalCrateTag_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m58(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		__this->___goRight_10 = 1;
		goto IL_007e;
	}

IL_005c:
	{
		Collision2D_t9 * L_12 = ___col;
		NullCheck(L_12);
		GameObject_t6 * L_13 = Collision2D_get_gameObject_m56(L_12, /*hidden argument*/&Collision2D_get_gameObject_m56_MethodInfo);
		NullCheck(L_13);
		String_t* L_14 = GameObject_get_tag_m57(L_13, /*hidden argument*/&GameObject_get_tag_m57_MethodInfo);
		String_t* L_15 = (__this->___PowerCrateTag_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_16 = String_op_Equality_m58(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		__this->___goRight_10 = 1;
	}

IL_007e:
	{
		return;
	}
}
// System.Collections.IEnumerator Movement::CheckCol(UnityEngine.Collision2D)
extern "C" Object_t * Movement_CheckCol_m25 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method)
{
	U3CCheckColU3Ec__Iterator0_t11 * V_0 = {0};
	{
		U3CCheckColU3Ec__Iterator0_t11 * L_0 = (U3CCheckColU3Ec__Iterator0_t11 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CCheckColU3Ec__Iterator0_t11_il2cpp_TypeInfo));
		U3CCheckColU3Ec__Iterator0__ctor_m14(L_0, /*hidden argument*/&U3CCheckColU3Ec__Iterator0__ctor_m14_MethodInfo);
		V_0 = L_0;
		U3CCheckColU3Ec__Iterator0_t11 * L_1 = V_0;
		Collision2D_t9 * L_2 = ___col;
		NullCheck(L_1);
		L_1->___col_0 = L_2;
		U3CCheckColU3Ec__Iterator0_t11 * L_3 = V_0;
		Collision2D_t9 * L_4 = ___col;
		NullCheck(L_3);
		L_3->___U3C$U3Ecol_3 = L_4;
		U3CCheckColU3Ec__Iterator0_t11 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CCheckColU3Ec__Iterator0_t11 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Movement::JumpButtonDown()
extern MethodInfo Movement_JumpButtonDown_m26_MethodInfo;
extern "C" void Movement_JumpButtonDown_m26 (Movement_t10 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___grounded_9);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Rigidbody2D_t12 * L_1 = (__this->___RB_4);
		float L_2 = (__this->___jumpForce_3);
		Vector2_t30  L_3 = {0};
		Vector2__ctor_m67(&L_3, (0.0f), L_2, /*hidden argument*/&Vector2__ctor_m67_MethodInfo);
		NullCheck(L_1);
		Rigidbody2D_AddRelativeForce_m68(L_1, L_3, 1, /*hidden argument*/&Rigidbody2D_AddRelativeForce_m68_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// RandomGenerator
#include "AssemblyU2DCSharp_RandomGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RandomGenerator_t15_il2cpp_TypeInfo;
// RandomGenerator
#include "AssemblyU2DCSharp_RandomGeneratorMethodDeclarations.h"

// metreCounterScript
#include "AssemblyU2DCSharp_metreCounterScript.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
extern TypeInfo metreCounterScript_t14_il2cpp_TypeInfo;
extern TypeInfo Quaternion_t32_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo Random_get_value_m71_MethodInfo;
extern MethodInfo Random_Range_m72_MethodInfo;
extern MethodInfo Quaternion__ctor_m73_MethodInfo;
extern MethodInfo Object_Instantiate_m74_MethodInfo;
struct GameObject_t6;
// UnityEngine.CastHelper`1<metreCounterScript>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
struct GameObject_t6;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m76_gshared (GameObject_t6 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m76(__this, method) (( Object_t * (*) (GameObject_t6 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m76_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<metreCounterScript>()
// !!0 UnityEngine.GameObject::GetComponent<metreCounterScript>()
#define GameObject_GetComponent_TismetreCounterScript_t14_m75(__this, method) (( metreCounterScript_t14 * (*) (GameObject_t6 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m76_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TismetreCounterScript_t14_m75_GenericMethod;


// System.Void RandomGenerator::.ctor()
extern MethodInfo RandomGenerator__ctor_m27_MethodInfo;
extern "C" void RandomGenerator__ctor_m27 (RandomGenerator_t15 * __this, MethodInfo* method)
{
	{
		__this->___woodCrateProb_7 = (0.6f);
		__this->___metalCrateProb_8 = (0.3f);
		__this->___powerCrateProb_9 = (0.1f);
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void RandomGenerator::Start()
extern MethodInfo RandomGenerator_Start_m28_MethodInfo;
extern MethodInfo* GameObject_GetComponent_TismetreCounterScript_t14_m75_MethodInfo_var;
extern "C" void RandomGenerator_Start_m28 (RandomGenerator_t15 * __this, MethodInfo* method)
{
	static bool RandomGenerator_Start_m28_init;
	if (!RandomGenerator_Start_m28_init)
	{
		GameObject_GetComponent_TismetreCounterScript_t14_m75_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TismetreCounterScript_t14_m75_GenericMethod);
		RandomGenerator_Start_m28_init = true;
	}
	{
		GameObject_t6 * L_0 = (__this->___metreCounter_11);
		NullCheck(L_0);
		metreCounterScript_t14 * L_1 = GameObject_GetComponent_TismetreCounterScript_t14_m75(L_0, /*hidden argument*/GameObject_GetComponent_TismetreCounterScript_t14_m75_MethodInfo_var);
		__this->___metreScript_12 = L_1;
		return;
	}
}
// System.Void RandomGenerator::Update()
extern MethodInfo RandomGenerator_Update_m29_MethodInfo;
extern "C" void RandomGenerator_Update_m29 (RandomGenerator_t15 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		metreCounterScript_t14 * L_0 = (__this->___metreScript_12);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___metres_2);
		__this->___metres_3 = L_1;
		bool L_2 = (__this->___hasSpawned_2);
		if (L_2)
		{
			goto IL_017b;
		}
	}
	{
		__this->___hasSpawned_2 = 1;
		int32_t L_3 = (__this->___metres_3);
		if (((int32_t)((int32_t)L_3%(int32_t)5)))
		{
			goto IL_017b;
		}
	}
	{
		float L_4 = Random_get_value_m71(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m71_MethodInfo);
		V_0 = L_4;
		float L_5 = V_0;
		float L_6 = (__this->___woodCrateProb_7);
		if ((!(((float)L_5) <= ((float)L_6))))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_7 = Random_Range_m72(NULL /*static, unused*/, 0, 2, /*hidden argument*/&Random_Range_m72_MethodInfo);
		if (L_7)
		{
			goto IL_0083;
		}
	}
	{
		GameObject_t6 * L_8 = (__this->___woodCrate_4);
		Transform_t31 * L_9 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_9);
		Vector3_t28  L_10 = Transform_get_position_m61(L_9, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		Quaternion_t32  L_11 = {0};
		Quaternion__ctor_m73(&L_11, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Quaternion__ctor_m73_MethodInfo);
		Object_Instantiate_m74(NULL /*static, unused*/, L_8, L_10, L_11, /*hidden argument*/&Object_Instantiate_m74_MethodInfo);
		goto IL_00fe;
	}

IL_0083:
	{
		GameObject_t6 * L_12 = (__this->___woodCrate_4);
		Transform_t31 * L_13 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_13);
		Vector3_t28  L_14 = Transform_get_position_m61(L_13, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		Quaternion_t32  L_15 = {0};
		Quaternion__ctor_m73(&L_15, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Quaternion__ctor_m73_MethodInfo);
		Object_Instantiate_m74(NULL /*static, unused*/, L_12, L_14, L_15, /*hidden argument*/&Object_Instantiate_m74_MethodInfo);
		GameObject_t6 * L_16 = (__this->___woodCrate_4);
		Transform_t31 * L_17 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_17);
		Vector3_t28  L_18 = Transform_get_position_m61(L_17, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		int32_t L_19 = (__this->___woodCrateHeight_10);
		Vector3_t28  L_20 = {0};
		Vector3__ctor_m63(&L_20, (0.0f), (((float)L_19)), (0.0f), /*hidden argument*/&Vector3__ctor_m63_MethodInfo);
		Vector3_t28  L_21 = Vector3_op_Addition_m64(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Vector3_op_Addition_m64_MethodInfo);
		Quaternion_t32  L_22 = {0};
		Quaternion__ctor_m73(&L_22, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Quaternion__ctor_m73_MethodInfo);
		Object_Instantiate_m74(NULL /*static, unused*/, L_16, L_21, L_22, /*hidden argument*/&Object_Instantiate_m74_MethodInfo);
	}

IL_00fe:
	{
		goto IL_017b;
	}

IL_0103:
	{
		float L_23 = V_0;
		float L_24 = (__this->___woodCrateProb_7);
		float L_25 = (__this->___metalCrateProb_8);
		if ((!(((float)L_23) <= ((float)((float)((float)L_24+(float)L_25))))))
		{
			goto IL_014b;
		}
	}
	{
		GameObject_t6 * L_26 = (__this->___metalCrate_5);
		Transform_t31 * L_27 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_27);
		Vector3_t28  L_28 = Transform_get_position_m61(L_27, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		Quaternion_t32  L_29 = {0};
		Quaternion__ctor_m73(&L_29, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Quaternion__ctor_m73_MethodInfo);
		Object_Instantiate_m74(NULL /*static, unused*/, L_26, L_28, L_29, /*hidden argument*/&Object_Instantiate_m74_MethodInfo);
		goto IL_017b;
	}

IL_014b:
	{
		GameObject_t6 * L_30 = (__this->___powerCrate_6);
		Transform_t31 * L_31 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_31);
		Vector3_t28  L_32 = Transform_get_position_m61(L_31, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		Quaternion_t32  L_33 = {0};
		Quaternion__ctor_m73(&L_33, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/&Quaternion__ctor_m73_MethodInfo);
		Object_Instantiate_m74(NULL /*static, unused*/, L_30, L_32, L_33, /*hidden argument*/&Object_Instantiate_m74_MethodInfo);
	}

IL_017b:
	{
		return;
	}
}
// TouchInput
#include "AssemblyU2DCSharp_TouchInput.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchInput_t18_il2cpp_TypeInfo;
// TouchInput
#include "AssemblyU2DCSharp_TouchInputMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern TypeInfo List_1_t16_il2cpp_TypeInfo;
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
extern TypeInfo GameObjectU5BU5D_t17_il2cpp_TypeInfo;
extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
extern TypeInfo Void_t34_il2cpp_TypeInfo;
extern TypeInfo Boolean_t35_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
extern Il2CppType List_1_t16_0_0_0;
extern Il2CppType GameObjectU5BU5D_t17_0_0_0;
extern MethodInfo List_1__ctor_m77_MethodInfo;
extern MethodInfo Input_get_touchCount_m78_MethodInfo;
extern MethodInfo List_1_get_Count_m79_MethodInfo;
extern MethodInfo List_1_Clear_m80_MethodInfo;
extern MethodInfo Input_get_touches_m81_MethodInfo;
extern MethodInfo Camera_get_main_m82_MethodInfo;
extern MethodInfo Touch_get_position_m83_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m84_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m85_MethodInfo;
extern MethodInfo LayerMask_op_Implicit_m86_MethodInfo;
extern MethodInfo Physics_Raycast_m87_MethodInfo;
extern MethodInfo RaycastHit_get_transform_m88_MethodInfo;
extern MethodInfo Component_get_gameObject_m89_MethodInfo;
extern MethodInfo List_1_Add_m90_MethodInfo;
extern MethodInfo Touch_get_phase_m91_MethodInfo;
extern MethodInfo RaycastHit_get_point_m92_MethodInfo;
extern MethodInfo GameObject_SendMessage_m93_MethodInfo;
extern MethodInfo List_1_Contains_m94_MethodInfo;
extern MethodInfo GameObject_SendMessage_m95_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m77_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m79_GenericMethod;
extern Il2CppGenericMethod List_1_CopyTo_m96_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m80_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m90_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m94_GenericMethod;


// System.Void TouchInput::.ctor()
extern MethodInfo TouchInput__ctor_m30_MethodInfo;
extern TypeInfo* List_1_t16_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m77_MethodInfo_var;
extern "C" void TouchInput__ctor_m30 (TouchInput_t18 * __this, MethodInfo* method)
{
	static bool TouchInput__ctor_m30_init;
	if (!TouchInput__ctor_m30_init)
	{
		List_1_t16_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t16_0_0_0);
		List_1__ctor_m77_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m77_GenericMethod);
		TouchInput__ctor_m30_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t16_il2cpp_TypeInfo_var);
		List_1_t16 * L_0 = (List_1_t16 *)il2cpp_codegen_object_new (List_1_t16_il2cpp_TypeInfo_var);
		List_1__ctor_m77(L_0, /*hidden argument*/List_1__ctor_m77_MethodInfo_var);
		__this->___touchList_3 = L_0;
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void TouchInput::Update()
extern MethodInfo TouchInput_Update_m31_MethodInfo;
extern TypeInfo* GameObjectU5BU5D_t17_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m79_MethodInfo_var;
extern MethodInfo* List_1_CopyTo_m96_MethodInfo_var;
extern MethodInfo* List_1_Clear_m80_MethodInfo_var;
extern MethodInfo* List_1_Add_m90_MethodInfo_var;
extern MethodInfo* List_1_Contains_m94_MethodInfo_var;
extern "C" void TouchInput_Update_m31 (TouchInput_t18 * __this, MethodInfo* method)
{
	static bool TouchInput_Update_m31_init;
	if (!TouchInput_Update_m31_init)
	{
		GameObjectU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&GameObjectU5BU5D_t17_0_0_0);
		List_1_get_Count_m79_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m79_GenericMethod);
		List_1_CopyTo_m96_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_CopyTo_m96_GenericMethod);
		List_1_Clear_m80_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m80_GenericMethod);
		List_1_Add_m90_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m90_GenericMethod);
		List_1_Contains_m94_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Contains_m94_GenericMethod);
		TouchInput_Update_m31_init = true;
	}
	Touch_t36  V_0 = {0};
	TouchU5BU5D_t37* V_1 = {0};
	int32_t V_2 = 0;
	Ray_t38  V_3 = {0};
	GameObject_t6 * V_4 = {0};
	GameObject_t6 * V_5 = {0};
	GameObjectU5BU5D_t17* V_6 = {0};
	int32_t V_7 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t29_il2cpp_TypeInfo));
		int32_t L_0 = Input_get_touchCount_m78(NULL /*static, unused*/, /*hidden argument*/&Input_get_touchCount_m78_MethodInfo);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_01b1;
		}
	}
	{
		List_1_t16 * L_1 = (__this->___touchList_3);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m79_MethodInfo_var, L_1);
		__this->___touchesOld_4 = ((GameObjectU5BU5D_t17*)SZArrayNew(GameObjectU5BU5D_t17_il2cpp_TypeInfo_var, L_2));
		List_1_t16 * L_3 = (__this->___touchList_3);
		GameObjectU5BU5D_t17* L_4 = (__this->___touchesOld_4);
		NullCheck(L_3);
		List_1_CopyTo_m96(L_3, L_4, /*hidden argument*/List_1_CopyTo_m96_MethodInfo_var);
		List_1_t16 * L_5 = (__this->___touchList_3);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(List_1_Clear_m80_MethodInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t29_il2cpp_TypeInfo));
		TouchU5BU5D_t37* L_6 = Input_get_touches_m81(NULL /*static, unused*/, /*hidden argument*/&Input_get_touches_m81_MethodInfo);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0162;
	}

IL_004a:
	{
		TouchU5BU5D_t37* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		V_0 = (*(Touch_t36 *)((Touch_t36 *)(Touch_t36 *)SZArrayLdElema(L_7, L_8)));
		Camera_t39 * L_9 = Camera_get_main_m82(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m82_MethodInfo);
		Vector2_t30  L_10 = Touch_get_position_m83((&V_0), /*hidden argument*/&Touch_get_position_m83_MethodInfo);
		Vector3_t28  L_11 = Vector2_op_Implicit_m84(NULL /*static, unused*/, L_10, /*hidden argument*/&Vector2_op_Implicit_m84_MethodInfo);
		NullCheck(L_9);
		Ray_t38  L_12 = Camera_ScreenPointToRay_m85(L_9, L_11, /*hidden argument*/&Camera_ScreenPointToRay_m85_MethodInfo);
		V_3 = L_12;
		Ray_t38  L_13 = V_3;
		RaycastHit_t20 * L_14 = &(__this->___hit_5);
		LayerMask_t19  L_15 = (__this->___touchInputMask_2);
		int32_t L_16 = LayerMask_op_Implicit_m86(NULL /*static, unused*/, L_15, /*hidden argument*/&LayerMask_op_Implicit_m86_MethodInfo);
		bool L_17 = Physics_Raycast_m87(NULL /*static, unused*/, L_13, L_14, (((float)L_16)), /*hidden argument*/&Physics_Raycast_m87_MethodInfo);
		if (!L_17)
		{
			goto IL_015e;
		}
	}
	{
		RaycastHit_t20 * L_18 = &(__this->___hit_5);
		Transform_t31 * L_19 = RaycastHit_get_transform_m88(L_18, /*hidden argument*/&RaycastHit_get_transform_m88_MethodInfo);
		NullCheck(L_19);
		GameObject_t6 * L_20 = Component_get_gameObject_m89(L_19, /*hidden argument*/&Component_get_gameObject_m89_MethodInfo);
		V_4 = L_20;
		List_1_t16 * L_21 = (__this->___touchList_3);
		GameObject_t6 * L_22 = V_4;
		NullCheck(L_21);
		VirtActionInvoker1< GameObject_t6 * >::Invoke(List_1_Add_m90_MethodInfo_var, L_21, L_22);
		int32_t L_23 = Touch_get_phase_m91((&V_0), /*hidden argument*/&Touch_get_phase_m91_MethodInfo);
		if (L_23)
		{
			goto IL_00d3;
		}
	}
	{
		GameObject_t6 * L_24 = V_4;
		RaycastHit_t20 * L_25 = &(__this->___hit_5);
		Vector3_t28  L_26 = RaycastHit_get_point_m92(L_25, /*hidden argument*/&RaycastHit_get_point_m92_MethodInfo);
		Vector3_t28  L_27 = L_26;
		Object_t * L_28 = Box(InitializedTypeInfo(&Vector3_t28_il2cpp_TypeInfo), &L_27);
		NullCheck(L_24);
		GameObject_SendMessage_m93(L_24, (String_t*) &_stringLiteral1, L_28, 1, /*hidden argument*/&GameObject_SendMessage_m93_MethodInfo);
	}

IL_00d3:
	{
		int32_t L_29 = Touch_get_phase_m91((&V_0), /*hidden argument*/&Touch_get_phase_m91_MethodInfo);
		if ((!(((uint32_t)L_29) == ((uint32_t)3))))
		{
			goto IL_00fd;
		}
	}
	{
		GameObject_t6 * L_30 = V_4;
		RaycastHit_t20 * L_31 = &(__this->___hit_5);
		Vector3_t28  L_32 = RaycastHit_get_point_m92(L_31, /*hidden argument*/&RaycastHit_get_point_m92_MethodInfo);
		Vector3_t28  L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Vector3_t28_il2cpp_TypeInfo), &L_33);
		NullCheck(L_30);
		GameObject_SendMessage_m93(L_30, (String_t*) &_stringLiteral2, L_34, 1, /*hidden argument*/&GameObject_SendMessage_m93_MethodInfo);
	}

IL_00fd:
	{
		int32_t L_35 = Touch_get_phase_m91((&V_0), /*hidden argument*/&Touch_get_phase_m91_MethodInfo);
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_36 = Touch_get_phase_m91((&V_0), /*hidden argument*/&Touch_get_phase_m91_MethodInfo);
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0134;
		}
	}

IL_0117:
	{
		GameObject_t6 * L_37 = V_4;
		RaycastHit_t20 * L_38 = &(__this->___hit_5);
		Vector3_t28  L_39 = RaycastHit_get_point_m92(L_38, /*hidden argument*/&RaycastHit_get_point_m92_MethodInfo);
		Vector3_t28  L_40 = L_39;
		Object_t * L_41 = Box(InitializedTypeInfo(&Vector3_t28_il2cpp_TypeInfo), &L_40);
		NullCheck(L_37);
		GameObject_SendMessage_m93(L_37, (String_t*) &_stringLiteral3, L_41, 1, /*hidden argument*/&GameObject_SendMessage_m93_MethodInfo);
	}

IL_0134:
	{
		int32_t L_42 = Touch_get_phase_m91((&V_0), /*hidden argument*/&Touch_get_phase_m91_MethodInfo);
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_015e;
		}
	}
	{
		GameObject_t6 * L_43 = V_4;
		RaycastHit_t20 * L_44 = &(__this->___hit_5);
		Vector3_t28  L_45 = RaycastHit_get_point_m92(L_44, /*hidden argument*/&RaycastHit_get_point_m92_MethodInfo);
		Vector3_t28  L_46 = L_45;
		Object_t * L_47 = Box(InitializedTypeInfo(&Vector3_t28_il2cpp_TypeInfo), &L_46);
		NullCheck(L_43);
		GameObject_SendMessage_m93(L_43, (String_t*) &_stringLiteral4, L_47, 1, /*hidden argument*/&GameObject_SendMessage_m93_MethodInfo);
	}

IL_015e:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_0162:
	{
		int32_t L_49 = V_2;
		TouchU5BU5D_t37* L_50 = V_1;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)(((Array_t *)L_50)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		GameObjectU5BU5D_t17* L_51 = (__this->___touchesOld_4);
		V_6 = L_51;
		V_7 = 0;
		goto IL_01a6;
	}

IL_017b:
	{
		GameObjectU5BU5D_t17* L_52 = V_6;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		int32_t L_54 = L_53;
		V_5 = (*(GameObject_t6 **)(GameObject_t6 **)SZArrayLdElema(L_52, L_54));
		List_1_t16 * L_55 = (__this->___touchList_3);
		GameObject_t6 * L_56 = V_5;
		NullCheck(L_55);
		bool L_57 = (bool)VirtFuncInvoker1< bool, GameObject_t6 * >::Invoke(List_1_Contains_m94_MethodInfo_var, L_55, L_56);
		if (L_57)
		{
			goto IL_01a0;
		}
	}
	{
		GameObject_t6 * L_58 = V_5;
		NullCheck(L_58);
		GameObject_SendMessage_m95(L_58, (String_t*) &_stringLiteral4, /*hidden argument*/&GameObject_SendMessage_m95_MethodInfo);
	}

IL_01a0:
	{
		int32_t L_59 = V_7;
		V_7 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_01a6:
	{
		int32_t L_60 = V_7;
		GameObjectU5BU5D_t17* L_61 = V_6;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((Array_t *)L_61)->max_length))))))
		{
			goto IL_017b;
		}
	}

IL_01b1:
	{
		return;
	}
}
// cameraFollow2D
#include "AssemblyU2DCSharp_cameraFollow2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo cameraFollow2D_t21_il2cpp_TypeInfo;
// cameraFollow2D
#include "AssemblyU2DCSharp_cameraFollow2DMethodDeclarations.h"

extern MethodInfo GameObject_get_transform_m97_MethodInfo;


// System.Void cameraFollow2D::.ctor()
extern MethodInfo cameraFollow2D__ctor_m32_MethodInfo;
extern "C" void cameraFollow2D__ctor_m32 (cameraFollow2D_t21 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void cameraFollow2D::Start()
extern MethodInfo cameraFollow2D_Start_m33_MethodInfo;
extern "C" void cameraFollow2D_Start_m33 (cameraFollow2D_t21 * __this, MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	{
		Transform_t31 * L_0 = Component_get_transform_m60(__this, /*hidden argument*/&Component_get_transform_m60_MethodInfo);
		NullCheck(L_0);
		Vector3_t28  L_1 = Transform_get_position_m61(L_0, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		V_0 = L_1;
		float L_2 = ((&V_0)->___z_3);
		__this->___startZPosition_3 = L_2;
		return;
	}
}
// System.Void cameraFollow2D::Update()
extern MethodInfo cameraFollow2D_Update_m34_MethodInfo;
extern "C" void cameraFollow2D_Update_m34 (cameraFollow2D_t21 * __this, MethodInfo* method)
{
	Vector3_t28  V_0 = {0};
	Vector3_t28  V_1 = {0};
	Vector3_t28  V_2 = {0};
	{
		GameObject_t6 * L_0 = (__this->___player_2);
		NullCheck(L_0);
		Transform_t31 * L_1 = GameObject_get_transform_m97(L_0, /*hidden argument*/&GameObject_get_transform_m97_MethodInfo);
		NullCheck(L_1);
		Vector3_t28  L_2 = Transform_get_position_m61(L_1, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		V_1 = L_2;
		float L_3 = ((&V_1)->___x_1);
		GameObject_t6 * L_4 = (__this->___player_2);
		NullCheck(L_4);
		Transform_t31 * L_5 = GameObject_get_transform_m97(L_4, /*hidden argument*/&GameObject_get_transform_m97_MethodInfo);
		NullCheck(L_5);
		Vector3_t28  L_6 = Transform_get_position_m61(L_5, /*hidden argument*/&Transform_get_position_m61_MethodInfo);
		V_2 = L_6;
		float L_7 = ((&V_2)->___y_2);
		float L_8 = (__this->___startZPosition_3);
		Vector3__ctor_m63((&V_0), L_3, L_7, L_8, /*hidden argument*/&Vector3__ctor_m63_MethodInfo);
		return;
	}
}
// destroyBlocks
#include "AssemblyU2DCSharp_destroyBlocks.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo destroyBlocks_t22_il2cpp_TypeInfo;
// destroyBlocks
#include "AssemblyU2DCSharp_destroyBlocksMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
extern MethodInfo Component_get_tag_m98_MethodInfo;
extern MethodInfo Object_Destroy_m99_MethodInfo;


// System.Void destroyBlocks::.ctor()
extern MethodInfo destroyBlocks__ctor_m35_MethodInfo;
extern "C" void destroyBlocks__ctor_m35 (destroyBlocks_t22 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void destroyBlocks::OnTriggerEnter2D(UnityEngine.Collider2D)
extern MethodInfo destroyBlocks_OnTriggerEnter2D_m36_MethodInfo;
extern "C" void destroyBlocks_OnTriggerEnter2D_m36 (destroyBlocks_t22 * __this, Collider2D_t23 * ___collision, MethodInfo* method)
{
	{
		Collider2D_t23 * L_0 = ___collision;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m98(L_0, /*hidden argument*/&Component_get_tag_m98_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m58(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral5, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t23 * L_3 = ___collision;
		NullCheck(L_3);
		String_t* L_4 = Component_get_tag_m98(L_3, /*hidden argument*/&Component_get_tag_m98_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_5 = String_op_Equality_m58(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral6, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t23 * L_6 = ___collision;
		NullCheck(L_6);
		String_t* L_7 = Component_get_tag_m98(L_6, /*hidden argument*/&Component_get_tag_m98_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m58(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral7, /*hidden argument*/&String_op_Equality_m58_MethodInfo);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_003f:
	{
		Collider2D_t23 * L_9 = ___collision;
		NullCheck(L_9);
		GameObject_t6 * L_10 = Component_get_gameObject_m89(L_9, /*hidden argument*/&Component_get_gameObject_m89_MethodInfo);
		Object_Destroy_m99(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_Destroy_m99_MethodInfo);
	}

IL_004a:
	{
		return;
	}
}
// metreCounterScript/<AddMetres>c__Iterator1
#include "AssemblyU2DCSharp_metreCounterScript_U3CAddMetresU3Ec__Itera.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CAddMetresU3Ec__Iterator1_t24_il2cpp_TypeInfo;
// metreCounterScript/<AddMetres>c__Iterator1
#include "AssemblyU2DCSharp_metreCounterScript_U3CAddMetresU3Ec__IteraMethodDeclarations.h"

extern MethodInfo GameObject_get_activeSelf_m100_MethodInfo;


// System.Void metreCounterScript/<AddMetres>c__Iterator1::.ctor()
extern MethodInfo U3CAddMetresU3Ec__Iterator1__ctor_m37_MethodInfo;
extern "C" void U3CAddMetresU3Ec__Iterator1__ctor_m37 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	{
		Object__ctor_m54(__this, /*hidden argument*/&Object__ctor_m54_MethodInfo);
		return;
	}
}
// System.Object metreCounterScript/<AddMetres>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CAddMetresU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m38_MethodInfo;
extern "C" Object_t * U3CAddMetresU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m38 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object metreCounterScript/<AddMetres>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CAddMetresU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m39_MethodInfo;
extern "C" Object_t * U3CAddMetresU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m39 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean metreCounterScript/<AddMetres>c__Iterator1::MoveNext()
extern MethodInfo U3CAddMetresU3Ec__Iterator1_MoveNext_m40_MethodInfo;
extern "C" bool U3CAddMetresU3Ec__Iterator1_MoveNext_m40 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0088;
	}

IL_0021:
	{
		goto IL_006c;
	}

IL_0026:
	{
		metreCounterScript_t14 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___secondsPerMetre_6);
		WaitForSeconds_t26 * L_4 = (WaitForSeconds_t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForSeconds_t26_il2cpp_TypeInfo));
		WaitForSeconds__ctor_m55(L_4, L_3, /*hidden argument*/&WaitForSeconds__ctor_m55_MethodInfo);
		__this->___$current_1 = L_4;
		__this->___$PC_0 = 1;
		goto IL_008a;
	}

IL_0048:
	{
		metreCounterScript_t14 * L_5 = (__this->___U3CU3Ef__this_2);
		metreCounterScript_t14 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___metres_2);
		NullCheck(L_6);
		L_6->___metres_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		metreCounterScript_t14 * L_8 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_8);
		RandomGenerator_t15 * L_9 = (L_8->___randomScript_5);
		NullCheck(L_9);
		L_9->___hasSpawned_2 = 0;
	}

IL_006c:
	{
		metreCounterScript_t14 * L_10 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_10);
		GameObject_t6 * L_11 = (L_10->___deathCanvas_3);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeSelf_m100(L_11, /*hidden argument*/&GameObject_get_activeSelf_m100_MethodInfo);
		if (!L_12)
		{
			goto IL_0026;
		}
	}
	{
		__this->___$PC_0 = (-1);
	}

IL_0088:
	{
		return 0;
	}

IL_008a:
	{
		return 1;
	}
	// Dead block : IL_008c: ldloc.1
}
// System.Void metreCounterScript/<AddMetres>c__Iterator1::Dispose()
extern MethodInfo U3CAddMetresU3Ec__Iterator1_Dispose_m41_MethodInfo;
extern "C" void U3CAddMetresU3Ec__Iterator1_Dispose_m41 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void metreCounterScript/<AddMetres>c__Iterator1::Reset()
extern MethodInfo U3CAddMetresU3Ec__Iterator1_Reset_m42_MethodInfo;
extern "C" void U3CAddMetresU3Ec__Iterator1_Reset_m42 (U3CAddMetresU3Ec__Iterator1_t24 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t27 * L_0 = (NotSupportedException_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t27_il2cpp_TypeInfo));
		NotSupportedException__ctor_m59(L_0, /*hidden argument*/&NotSupportedException__ctor_m59_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// metreCounterScript
#include "AssemblyU2DCSharp_metreCounterScriptMethodDeclarations.h"

extern MethodInfo metreCounterScript_AddMetres_m45_MethodInfo;
struct GameObject_t6;
// UnityEngine.CastHelper`1<RandomGenerator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<RandomGenerator>()
// !!0 UnityEngine.GameObject::GetComponent<RandomGenerator>()
#define GameObject_GetComponent_TisRandomGenerator_t15_m101(__this, method) (( RandomGenerator_t15 * (*) (GameObject_t6 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m76_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisRandomGenerator_t15_m101_GenericMethod;


// System.Void metreCounterScript::.ctor()
extern MethodInfo metreCounterScript__ctor_m43_MethodInfo;
extern "C" void metreCounterScript__ctor_m43 (metreCounterScript_t14 * __this, MethodInfo* method)
{
	{
		__this->___secondsPerMetre_6 = (1.0f);
		MonoBehaviour__ctor_m46(__this, /*hidden argument*/&MonoBehaviour__ctor_m46_MethodInfo);
		return;
	}
}
// System.Void metreCounterScript::Start()
extern MethodInfo metreCounterScript_Start_m44_MethodInfo;
extern MethodInfo* GameObject_GetComponent_TisRandomGenerator_t15_m101_MethodInfo_var;
extern "C" void metreCounterScript_Start_m44 (metreCounterScript_t14 * __this, MethodInfo* method)
{
	static bool metreCounterScript_Start_m44_init;
	if (!metreCounterScript_Start_m44_init)
	{
		GameObject_GetComponent_TisRandomGenerator_t15_m101_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisRandomGenerator_t15_m101_GenericMethod);
		metreCounterScript_Start_m44_init = true;
	}
	{
		Object_t * L_0 = metreCounterScript_AddMetres_m45(__this, /*hidden argument*/&metreCounterScript_AddMetres_m45_MethodInfo);
		MonoBehaviour_StartCoroutine_m69(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_m69_MethodInfo);
		GameObject_t6 * L_1 = (__this->___randomGenerator_4);
		NullCheck(L_1);
		RandomGenerator_t15 * L_2 = GameObject_GetComponent_TisRandomGenerator_t15_m101(L_1, /*hidden argument*/GameObject_GetComponent_TisRandomGenerator_t15_m101_MethodInfo_var);
		__this->___randomScript_5 = L_2;
		return;
	}
}
// System.Collections.IEnumerator metreCounterScript::AddMetres()
extern "C" Object_t * metreCounterScript_AddMetres_m45 (metreCounterScript_t14 * __this, MethodInfo* method)
{
	U3CAddMetresU3Ec__Iterator1_t24 * V_0 = {0};
	{
		U3CAddMetresU3Ec__Iterator1_t24 * L_0 = (U3CAddMetresU3Ec__Iterator1_t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CAddMetresU3Ec__Iterator1_t24_il2cpp_TypeInfo));
		U3CAddMetresU3Ec__Iterator1__ctor_m37(L_0, /*hidden argument*/&U3CAddMetresU3Ec__Iterator1__ctor_m37_MethodInfo);
		V_0 = L_0;
		U3CAddMetresU3Ec__Iterator1_t24 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CAddMetresU3Ec__Iterator1_t24 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
