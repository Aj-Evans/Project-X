#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t6;
// RandomGenerator
struct RandomGenerator_t15;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// metreCounterScript
struct  metreCounterScript_t14  : public MonoBehaviour_t2
{
	// System.Int32 metreCounterScript::metres
	int32_t ___metres_2;
	// UnityEngine.GameObject metreCounterScript::deathCanvas
	GameObject_t6 * ___deathCanvas_3;
	// UnityEngine.GameObject metreCounterScript::randomGenerator
	GameObject_t6 * ___randomGenerator_4;
	// RandomGenerator metreCounterScript::randomScript
	RandomGenerator_t15 * ___randomScript_5;
	// System.Single metreCounterScript::secondsPerMetre
	float ___secondsPerMetre_6;
};
