#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t1385;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1190;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" void SymmetricTransform__ctor_m7184 (SymmetricTransform_t1385 * __this, SymmetricAlgorithm_t1190 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t515* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" void SymmetricTransform_System_IDisposable_Dispose_m7185 (SymmetricTransform_t1385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" void SymmetricTransform_Finalize_m7186 (SymmetricTransform_t1385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" void SymmetricTransform_Dispose_m7187 (SymmetricTransform_t1385 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" bool SymmetricTransform_get_CanReuseTransform_m7188 (SymmetricTransform_t1385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_Transform_m7189 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___input, ByteU5BU5D_t515* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CBC_m7190 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___input, ByteU5BU5D_t515* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CFB_m7191 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___input, ByteU5BU5D_t515* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_OFB_m7192 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___input, ByteU5BU5D_t515* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CTS_m7193 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___input, ByteU5BU5D_t515* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_CheckInput_m7194 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_TransformBlock_m7195 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t515* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" bool SymmetricTransform_get_KeepLastBlock_m7196 (SymmetricTransform_t1385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_InternalTransformBlock_m7197 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t515* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_Random_m7198 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___buffer, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" void SymmetricTransform_ThrowBadPaddingException_m7199 (SymmetricTransform_t1385 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t515* SymmetricTransform_FinalEncrypt_m7200 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t515* SymmetricTransform_FinalDecrypt_m7201 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t515* SymmetricTransform_TransformFinalBlock_m7202 (SymmetricTransform_t1385 * __this, ByteU5BU5D_t515* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
