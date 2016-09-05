#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t16;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t17;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// TouchInput
struct  TouchInput_t18  : public MonoBehaviour_t2
{
	// UnityEngine.LayerMask TouchInput::touchInputMask
	LayerMask_t19  ___touchInputMask_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TouchInput::touchList
	List_1_t16 * ___touchList_3;
	// UnityEngine.GameObject[] TouchInput::touchesOld
	GameObjectU5BU5D_t17* ___touchesOld_4;
	// UnityEngine.RaycastHit TouchInput::hit
	RaycastHit_t20  ___hit_5;
};
