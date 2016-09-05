#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t1268;
// Mono.Security.Protocol.Tls.Context
struct Context_t1213;
// System.Byte[]
struct ByteU5BU5D_t515;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m5885 (TlsServerHelloDone_t1268 * __this, Context_t1213 * ___context, ByteU5BU5D_t515* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m5886 (TlsServerHelloDone_t1268 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m5887 (TlsServerHelloDone_t1268 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
