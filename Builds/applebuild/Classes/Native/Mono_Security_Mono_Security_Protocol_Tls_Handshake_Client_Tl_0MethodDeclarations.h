﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1260;
// Mono.Security.Protocol.Tls.Context
struct Context_t1213;
// System.Security.Cryptography.RSA
struct RSA_t983;
// System.Byte[]
struct ByteU5BU5D_t515;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m5843 (TlsClientCertificateVerify_t1260 * __this, Context_t1213 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m5844 (TlsClientCertificateVerify_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m5845 (TlsClientCertificateVerify_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m5846 (TlsClientCertificateVerify_t1260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t983 * TlsClientCertificateVerify_getClientCertRSA_m5847 (TlsClientCertificateVerify_t1260 * __this, RSA_t983 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t515* TlsClientCertificateVerify_getUnsignedBigInteger_m5848 (TlsClientCertificateVerify_t1260 * __this, ByteU5BU5D_t515* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;