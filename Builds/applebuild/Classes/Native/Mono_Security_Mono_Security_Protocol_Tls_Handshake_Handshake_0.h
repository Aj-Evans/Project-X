#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Context
struct Context_t1213;
// System.Byte[]
struct ByteU5BU5D_t515;
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t1224  : public TlsStream_t1225
{
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t1213 * ___context_5;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_6;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_7;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t515* ___cache_8;
};
