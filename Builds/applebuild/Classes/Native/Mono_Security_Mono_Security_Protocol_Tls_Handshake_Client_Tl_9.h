﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t515;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1269  : public HandshakeMessage_t1224
{
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t1116  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t515* ___signedParams_10;
};
