#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1236;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t977;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t948;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m5909 (PrivateKeySelectionCallback_t1236 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t977 * PrivateKeySelectionCallback_Invoke_m5910 (PrivateKeySelectionCallback_t1236 * __this, X509Certificate_t948 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" AsymmetricAlgorithm_t977 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1236(Il2CppObject* delegate, X509Certificate_t948 * ___certificate, String_t* ___targetHost);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m5911 (PrivateKeySelectionCallback_t1236 * __this, X509Certificate_t948 * ___certificate, String_t* ___targetHost, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t977 * PrivateKeySelectionCallback_EndInvoke_m5912 (PrivateKeySelectionCallback_t1236 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
