#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t1227;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t515;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1226;
// Mono.Security.Protocol.Tls.Context
struct Context_t1213;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
extern "C" void ClientSessionCache__cctor_m5511 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
extern "C" void ClientSessionCache_Add_m5512 (Object_t * __this /* static, unused */, String_t* ___host, ByteU5BU5D_t515* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
extern "C" ByteU5BU5D_t515* ClientSessionCache_FromHost_m5513 (Object_t * __this /* static, unused */, String_t* ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
extern "C" ClientSessionInfo_t1226 * ClientSessionCache_FromContext_m5514 (Object_t * __this /* static, unused */, Context_t1213 * ___context, bool ___checkValidity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
extern "C" bool ClientSessionCache_SetContextInCache_m5515 (Object_t * __this /* static, unused */, Context_t1213 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
extern "C" bool ClientSessionCache_SetContextFromCache_m5516 (Object_t * __this /* static, unused */, Context_t1213 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
