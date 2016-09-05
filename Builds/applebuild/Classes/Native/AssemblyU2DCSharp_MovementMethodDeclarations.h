#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Movement
struct Movement_t10;
// UnityEngine.Collision2D
struct Collision2D_t9;
// System.Collections.IEnumerator
struct IEnumerator_t13;

// System.Void Movement::.ctor()
extern "C" void Movement__ctor_m20 (Movement_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::Start()
extern "C" void Movement_Start_m21 (Movement_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::FixedUpdate()
extern "C" void Movement_FixedUpdate_m22 (Movement_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::OnCollisionStay2D(UnityEngine.Collision2D)
extern "C" void Movement_OnCollisionStay2D_m23 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C" void Movement_OnCollisionExit2D_m24 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Movement::CheckCol(UnityEngine.Collision2D)
extern "C" Object_t * Movement_CheckCol_m25 (Movement_t10 * __this, Collision2D_t9 * ___col, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Movement::JumpButtonDown()
extern "C" void Movement_JumpButtonDown_m26 (Movement_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
