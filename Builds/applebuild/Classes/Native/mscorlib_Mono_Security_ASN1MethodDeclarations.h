﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1
struct ASN1_t1386;
// System.Byte[]
struct ByteU5BU5D_t515;
// System.String
struct String_t;

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C" void ASN1__ctor_m7274 (ASN1_t1386 * __this, uint8_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C" void ASN1__ctor_m7275 (ASN1_t1386 * __this, uint8_t ___tag, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" void ASN1__ctor_m7276 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" int32_t ASN1_get_Count_m7277 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" uint8_t ASN1_get_Tag_m7278 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C" int32_t ASN1_get_Length_m7279 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" ByteU5BU5D_t515* ASN1_get_Value_m7280 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" void ASN1_set_Value_m7281 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C" bool ASN1_CompareArray_m7282 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___array1, ByteU5BU5D_t515* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C" bool ASN1_CompareValue_m7283 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" ASN1_t1386 * ASN1_Add_m7284 (ASN1_t1386 * __this, ASN1_t1386 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C" ByteU5BU5D_t515* ASN1_GetBytes_m7285 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C" void ASN1_Decode_m7286 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___asn1, int32_t* ___anPos, int32_t ___anLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C" void ASN1_DecodeTLV_m7287 (ASN1_t1386 * __this, ByteU5BU5D_t515* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t515** ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" ASN1_t1386 * ASN1_get_Item_m7288 (ASN1_t1386 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C" ASN1_t1386 * ASN1_Element_m7289 (ASN1_t1386 * __this, int32_t ___index, uint8_t ___anTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C" String_t* ASN1_ToString_m7290 (ASN1_t1386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
