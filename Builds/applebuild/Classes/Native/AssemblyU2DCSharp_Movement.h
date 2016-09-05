#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t12;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Movement
struct  Movement_t10  : public MonoBehaviour_t2
{
	// System.Single Movement::speed
	float ___speed_2;
	// System.Single Movement::jumpForce
	float ___jumpForce_3;
	// UnityEngine.Rigidbody2D Movement::RB
	Rigidbody2D_t12 * ___RB_4;
	// System.String Movement::FloorTag
	String_t* ___FloorTag_5;
	// System.String Movement::MetalCrateTag
	String_t* ___MetalCrateTag_6;
	// System.String Movement::PowerCrateTag
	String_t* ___PowerCrateTag_7;
	// UnityEngine.GameObject Movement::dieCanvas
	GameObject_t6 * ___dieCanvas_8;
	// System.Boolean Movement::grounded
	bool ___grounded_9;
	// System.Boolean Movement::goRight
	bool ___goRight_10;
	// System.Boolean Movement::dead
	bool ___dead_11;
	// System.Boolean Movement::setGrounded
	bool ___setGrounded_12;
};
