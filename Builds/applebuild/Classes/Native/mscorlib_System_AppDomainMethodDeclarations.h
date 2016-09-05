#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1767;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1112;
// System.Security.Policy.Evidence
struct Evidence_t1510;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1577;

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m9645 (AppDomain_t1767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1767 * AppDomain_getCurDomain_m9646 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1767 * AppDomain_get_CurrentDomain_m9647 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1112 * AppDomain_LoadAssembly_m9648 (AppDomain_t1767 * __this, String_t* ___assemblyRef, Evidence_t1510 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1112 * AppDomain_Load_m9649 (AppDomain_t1767 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1112 * AppDomain_Load_m9650 (AppDomain_t1767 * __this, String_t* ___assemblyString, Evidence_t1510 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1577 * AppDomain_InternalGetContext_m9651 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1577 * AppDomain_InternalGetDefaultContext_m9652 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m9653 (Object_t * __this /* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m9654 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m9655 (AppDomain_t1767 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
