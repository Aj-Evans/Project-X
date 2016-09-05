#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1237;
// System.IO.Stream
struct Stream_t1223;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t962;
// System.Net.HttpWebRequest
struct HttpWebRequest_t963;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t948;
// System.Int32[]
struct Int32U5BU5D_t1041;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t977;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m5579 (HttpsClientStream_t1237 * __this, Stream_t1223 * ___stream, X509CertificateCollection_t962 * ___clientCertificates, HttpWebRequest_t963 * ___request, ByteU5BU5D_t515* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m5580 (HttpsClientStream_t1237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m5581 (HttpsClientStream_t1237 * __this, X509Certificate_t948 * ___certificate, Int32U5BU5D_t1041* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t948 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5582 (Object_t * __this /* static, unused */, X509CertificateCollection_t962 * ___clientCerts, X509Certificate_t948 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t962 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t977 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5583 (Object_t * __this /* static, unused */, X509Certificate_t948 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
