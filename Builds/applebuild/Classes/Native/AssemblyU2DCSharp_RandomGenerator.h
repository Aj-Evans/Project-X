#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t6;
// metreCounterScript
struct metreCounterScript_t14;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RandomGenerator
struct  RandomGenerator_t15  : public MonoBehaviour_t2
{
	// System.Boolean RandomGenerator::hasSpawned
	bool ___hasSpawned_2;
	// System.Int32 RandomGenerator::metres
	int32_t ___metres_3;
	// UnityEngine.GameObject RandomGenerator::woodCrate
	GameObject_t6 * ___woodCrate_4;
	// UnityEngine.GameObject RandomGenerator::metalCrate
	GameObject_t6 * ___metalCrate_5;
	// UnityEngine.GameObject RandomGenerator::powerCrate
	GameObject_t6 * ___powerCrate_6;
	// System.Single RandomGenerator::woodCrateProb
	float ___woodCrateProb_7;
	// System.Single RandomGenerator::metalCrateProb
	float ___metalCrateProb_8;
	// System.Single RandomGenerator::powerCrateProb
	float ___powerCrateProb_9;
	// System.Int32 RandomGenerator::woodCrateHeight
	int32_t ___woodCrateHeight_10;
	// UnityEngine.GameObject RandomGenerator::metreCounter
	GameObject_t6 * ___metreCounter_11;
	// metreCounterScript RandomGenerator::metreScript
	metreCounterScript_t14 * ___metreScript_12;
};
