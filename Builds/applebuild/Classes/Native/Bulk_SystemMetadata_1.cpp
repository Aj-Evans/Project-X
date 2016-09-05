#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCache.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache
extern TypeInfo FactoryCache_t1039_il2cpp_TypeInfo;
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCacheMethodDeclarations.h"
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo FactoryCache_t1039_FactoryCache__ctor_m4382_ParameterInfos[] = 
{
	{"capacity", 0, 134218210, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
MethodInfo FactoryCache__ctor_m4382_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FactoryCache__ctor_m4382/* method */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, FactoryCache_t1039_FactoryCache__ctor_m4382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1043_0_0_0;
extern Il2CppType RegexOptions_t1043_0_0_0;
extern Il2CppType IMachineFactory_t1040_0_0_0;
extern Il2CppType IMachineFactory_t1040_0_0_0;
static ParameterInfo FactoryCache_t1039_FactoryCache_Add_m4383_ParameterInfos[] = 
{
	{"pattern", 0, 134218211, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218212, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
	{"factory", 2, 134218213, &EmptyCustomAttributesCache, &IMachineFactory_t1040_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
MethodInfo FactoryCache_Add_m4383_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&FactoryCache_Add_m4383/* method */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Object_t/* invoker_method */
	, FactoryCache_t1039_FactoryCache_Add_m4383_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
MethodInfo FactoryCache_Cleanup_m4384_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&FactoryCache_Cleanup_m4384/* method */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo FactoryCache_t1039_FactoryCache_Lookup_m4385_ParameterInfos[] = 
{
	{"pattern", 0, 134218214, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218215, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType IMachineFactory_t1040_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo FactoryCache_Lookup_m4385_MethodInfo = 
{
	"Lookup"/* name */
	, (methodPointerType)&FactoryCache_Lookup_m4385/* method */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1040_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t33/* invoker_method */
	, FactoryCache_t1039_FactoryCache_Lookup_m4385_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FactoryCache_t1039_MethodInfos[] =
{
	&FactoryCache__ctor_m4382_MethodInfo,
	&FactoryCache_Add_m4383_MethodInfo,
	&FactoryCache_Cleanup_m4384_MethodInfo,
	&FactoryCache_Lookup_m4385_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo FactoryCache_t1039____capacity_0_FieldInfo = 
{
	"capacity"/* name */
	, &Int32_t33_0_0_1/* type */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1039, ___capacity_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t923_0_0_1;
FieldInfo FactoryCache_t1039____factories_1_FieldInfo = 
{
	"factories"/* name */
	, &Hashtable_t923_0_0_1/* type */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1039, ___factories_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MRUList_t1048_0_0_1;
FieldInfo FactoryCache_t1039____mru_list_2_FieldInfo = 
{
	"mru_list"/* name */
	, &MRUList_t1048_0_0_1/* type */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1039, ___mru_list_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FactoryCache_t1039_FieldInfos[] =
{
	&FactoryCache_t1039____capacity_0_FieldInfo,
	&FactoryCache_t1039____factories_1_FieldInfo,
	&FactoryCache_t1039____mru_list_2_FieldInfo,
	NULL
};
extern Il2CppType Key_t1047_0_0_0;
static const Il2CppType* FactoryCache_t1039_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Key_t1047_0_0_0,
};
extern MethodInfo Object_Equals_m106_MethodInfo;
extern MethodInfo Object_Finalize_m103_MethodInfo;
extern MethodInfo Object_GetHashCode_m107_MethodInfo;
extern MethodInfo Object_ToString_m108_MethodInfo;
static Il2CppMethodReference FactoryCache_t1039_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool FactoryCache_t1039_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType FactoryCache_t1039_0_0_0;
extern Il2CppType FactoryCache_t1039_1_0_0;
extern Il2CppType Object_t_0_0_0;
struct FactoryCache_t1039;
const Il2CppTypeDefinitionMetadata FactoryCache_t1039_DefinitionMetadata = 
{
	NULL/* declaringType */
	, FactoryCache_t1039_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FactoryCache_t1039_VTable/* vtableMethods */
	, FactoryCache_t1039_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo FactoryCache_t1039_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "FactoryCache"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, FactoryCache_t1039_MethodInfos/* methods */
	, NULL/* properties */
	, FactoryCache_t1039_FieldInfos/* fields */
	, NULL/* events */
	, &FactoryCache_t1039_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FactoryCache_t1039_0_0_0/* byval_arg */
	, &FactoryCache_t1039_1_0_0/* this_arg */
	, &FactoryCache_t1039_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FactoryCache_t1039)/* instance_size */
	, sizeof (FactoryCache_t1039)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_Node.h"
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern TypeInfo Node_t1049_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_NodeMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Node_t1049_Node__ctor_m4386_ParameterInfos[] = 
{
	{"value", 0, 134218220, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList/Node::.ctor(System.Object)
MethodInfo Node__ctor_m4386_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Node__ctor_m4386/* method */
	, &Node_t1049_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Node_t1049_Node__ctor_m4386_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Node_t1049_MethodInfos[] =
{
	&Node__ctor_m4386_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_6;
FieldInfo Node_t1049____value_0_FieldInfo = 
{
	"value"/* name */
	, &Object_t_0_0_6/* type */
	, &Node_t1049_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1049, ___value_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1049_0_0_6;
FieldInfo Node_t1049____previous_1_FieldInfo = 
{
	"previous"/* name */
	, &Node_t1049_0_0_6/* type */
	, &Node_t1049_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1049, ___previous_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1049_0_0_6;
FieldInfo Node_t1049____next_2_FieldInfo = 
{
	"next"/* name */
	, &Node_t1049_0_0_6/* type */
	, &Node_t1049_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1049, ___next_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Node_t1049_FieldInfos[] =
{
	&Node_t1049____value_0_FieldInfo,
	&Node_t1049____previous_1_FieldInfo,
	&Node_t1049____next_2_FieldInfo,
	NULL
};
static Il2CppMethodReference Node_t1049_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool Node_t1049_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Node_t1049_0_0_0;
extern Il2CppType Node_t1049_1_0_0;
extern TypeInfo MRUList_t1048_il2cpp_TypeInfo;
extern Il2CppType MRUList_t1048_0_0_0;
struct Node_t1049;
const Il2CppTypeDefinitionMetadata Node_t1049_DefinitionMetadata = 
{
	&MRUList_t1048_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Node_t1049_VTable/* vtableMethods */
	, Node_t1049_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Node_t1049_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Node"/* name */
	, ""/* namespaze */
	, Node_t1049_MethodInfos/* methods */
	, NULL/* properties */
	, Node_t1049_FieldInfos/* fields */
	, NULL/* events */
	, &Node_t1049_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Node_t1049_0_0_0/* byval_arg */
	, &Node_t1049_1_0_0/* this_arg */
	, &Node_t1049_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Node_t1049)/* instance_size */
	, sizeof (Node_t1049)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUList.h"
// Metadata Definition System.Text.RegularExpressions.MRUList
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUListMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::.ctor()
MethodInfo MRUList__ctor_m4387_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MRUList__ctor_m4387/* method */
	, &MRUList_t1048_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MRUList_t1048_MRUList_Use_m4388_ParameterInfos[] = 
{
	{"o", 0, 134218219, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
MethodInfo MRUList_Use_m4388_MethodInfo = 
{
	"Use"/* name */
	, (methodPointerType)&MRUList_Use_m4388/* method */
	, &MRUList_t1048_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, MRUList_t1048_MRUList_Use_m4388_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.MRUList::Evict()
MethodInfo MRUList_Evict_m4389_MethodInfo = 
{
	"Evict"/* name */
	, (methodPointerType)&MRUList_Evict_m4389/* method */
	, &MRUList_t1048_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MRUList_t1048_MethodInfos[] =
{
	&MRUList__ctor_m4387_MethodInfo,
	&MRUList_Use_m4388_MethodInfo,
	&MRUList_Evict_m4389_MethodInfo,
	NULL
};
extern Il2CppType Node_t1049_0_0_1;
FieldInfo MRUList_t1048____head_0_FieldInfo = 
{
	"head"/* name */
	, &Node_t1049_0_0_1/* type */
	, &MRUList_t1048_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1048, ___head_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1049_0_0_1;
FieldInfo MRUList_t1048____tail_1_FieldInfo = 
{
	"tail"/* name */
	, &Node_t1049_0_0_1/* type */
	, &MRUList_t1048_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1048, ___tail_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* MRUList_t1048_FieldInfos[] =
{
	&MRUList_t1048____head_0_FieldInfo,
	&MRUList_t1048____tail_1_FieldInfo,
	NULL
};
static const Il2CppType* MRUList_t1048_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Node_t1049_0_0_0,
};
static Il2CppMethodReference MRUList_t1048_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool MRUList_t1048_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MRUList_t1048_1_0_0;
struct MRUList_t1048;
const Il2CppTypeDefinitionMetadata MRUList_t1048_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MRUList_t1048_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MRUList_t1048_VTable/* vtableMethods */
	, MRUList_t1048_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo MRUList_t1048_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MRUList"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MRUList_t1048_MethodInfos/* methods */
	, NULL/* properties */
	, MRUList_t1048_FieldInfos/* fields */
	, NULL/* events */
	, &MRUList_t1048_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MRUList_t1048_0_0_0/* byval_arg */
	, &MRUList_t1048_1_0_0/* this_arg */
	, &MRUList_t1048_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MRUList_t1048)/* instance_size */
	, sizeof (MRUList_t1048)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// Metadata Definition System.Text.RegularExpressions.Category
extern TypeInfo Category_t1050_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_CategoryMethodDeclarations.h"
static MethodInfo* Category_t1050_MethodInfos[] =
{
	NULL
};
extern Il2CppType UInt16_t707_0_0_1542;
FieldInfo Category_t1050____value___1_FieldInfo = 
{
	"value__"/* name */
	, &UInt16_t707_0_0_1542/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, offsetof(Category_t1050, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____None_2_FieldInfo = 
{
	"None"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____Any_3_FieldInfo = 
{
	"Any"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____AnySingleline_4_FieldInfo = 
{
	"AnySingleline"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____Word_5_FieldInfo = 
{
	"Word"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____Digit_6_FieldInfo = 
{
	"Digit"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____WhiteSpace_7_FieldInfo = 
{
	"WhiteSpace"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____EcmaAny_8_FieldInfo = 
{
	"EcmaAny"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____EcmaAnySingleline_9_FieldInfo = 
{
	"EcmaAnySingleline"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____EcmaWord_10_FieldInfo = 
{
	"EcmaWord"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____EcmaDigit_11_FieldInfo = 
{
	"EcmaDigit"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____EcmaWhiteSpace_12_FieldInfo = 
{
	"EcmaWhiteSpace"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeL_13_FieldInfo = 
{
	"UnicodeL"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeM_14_FieldInfo = 
{
	"UnicodeM"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeN_15_FieldInfo = 
{
	"UnicodeN"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeZ_16_FieldInfo = 
{
	"UnicodeZ"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeP_17_FieldInfo = 
{
	"UnicodeP"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeS_18_FieldInfo = 
{
	"UnicodeS"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeC_19_FieldInfo = 
{
	"UnicodeC"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLu_20_FieldInfo = 
{
	"UnicodeLu"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLl_21_FieldInfo = 
{
	"UnicodeLl"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLt_22_FieldInfo = 
{
	"UnicodeLt"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLm_23_FieldInfo = 
{
	"UnicodeLm"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLo_24_FieldInfo = 
{
	"UnicodeLo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMn_25_FieldInfo = 
{
	"UnicodeMn"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMe_26_FieldInfo = 
{
	"UnicodeMe"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMc_27_FieldInfo = 
{
	"UnicodeMc"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeNd_28_FieldInfo = 
{
	"UnicodeNd"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeNl_29_FieldInfo = 
{
	"UnicodeNl"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeNo_30_FieldInfo = 
{
	"UnicodeNo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeZs_31_FieldInfo = 
{
	"UnicodeZs"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeZl_32_FieldInfo = 
{
	"UnicodeZl"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeZp_33_FieldInfo = 
{
	"UnicodeZp"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePd_34_FieldInfo = 
{
	"UnicodePd"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePs_35_FieldInfo = 
{
	"UnicodePs"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePi_36_FieldInfo = 
{
	"UnicodePi"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePe_37_FieldInfo = 
{
	"UnicodePe"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePf_38_FieldInfo = 
{
	"UnicodePf"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePc_39_FieldInfo = 
{
	"UnicodePc"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePo_40_FieldInfo = 
{
	"UnicodePo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSm_41_FieldInfo = 
{
	"UnicodeSm"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSc_42_FieldInfo = 
{
	"UnicodeSc"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSk_43_FieldInfo = 
{
	"UnicodeSk"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSo_44_FieldInfo = 
{
	"UnicodeSo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCc_45_FieldInfo = 
{
	"UnicodeCc"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCf_46_FieldInfo = 
{
	"UnicodeCf"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCo_47_FieldInfo = 
{
	"UnicodeCo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCs_48_FieldInfo = 
{
	"UnicodeCs"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCn_49_FieldInfo = 
{
	"UnicodeCn"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBasicLatin_50_FieldInfo = 
{
	"UnicodeBasicLatin"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLatin1Supplement_51_FieldInfo = 
{
	"UnicodeLatin1Supplement"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLatinExtendedA_52_FieldInfo = 
{
	"UnicodeLatinExtendedA"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLatinExtendedB_53_FieldInfo = 
{
	"UnicodeLatinExtendedB"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeIPAExtensions_54_FieldInfo = 
{
	"UnicodeIPAExtensions"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSpacingModifierLetters_55_FieldInfo = 
{
	"UnicodeSpacingModifierLetters"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCombiningDiacriticalMarks_56_FieldInfo = 
{
	"UnicodeCombiningDiacriticalMarks"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGreek_57_FieldInfo = 
{
	"UnicodeGreek"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCyrillic_58_FieldInfo = 
{
	"UnicodeCyrillic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeArmenian_59_FieldInfo = 
{
	"UnicodeArmenian"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHebrew_60_FieldInfo = 
{
	"UnicodeHebrew"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeArabic_61_FieldInfo = 
{
	"UnicodeArabic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSyriac_62_FieldInfo = 
{
	"UnicodeSyriac"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeThaana_63_FieldInfo = 
{
	"UnicodeThaana"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeDevanagari_64_FieldInfo = 
{
	"UnicodeDevanagari"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBengali_65_FieldInfo = 
{
	"UnicodeBengali"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGurmukhi_66_FieldInfo = 
{
	"UnicodeGurmukhi"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGujarati_67_FieldInfo = 
{
	"UnicodeGujarati"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeOriya_68_FieldInfo = 
{
	"UnicodeOriya"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeTamil_69_FieldInfo = 
{
	"UnicodeTamil"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeTelugu_70_FieldInfo = 
{
	"UnicodeTelugu"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeKannada_71_FieldInfo = 
{
	"UnicodeKannada"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMalayalam_72_FieldInfo = 
{
	"UnicodeMalayalam"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSinhala_73_FieldInfo = 
{
	"UnicodeSinhala"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeThai_74_FieldInfo = 
{
	"UnicodeThai"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLao_75_FieldInfo = 
{
	"UnicodeLao"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeTibetan_76_FieldInfo = 
{
	"UnicodeTibetan"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMyanmar_77_FieldInfo = 
{
	"UnicodeMyanmar"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGeorgian_78_FieldInfo = 
{
	"UnicodeGeorgian"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHangulJamo_79_FieldInfo = 
{
	"UnicodeHangulJamo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeEthiopic_80_FieldInfo = 
{
	"UnicodeEthiopic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCherokee_81_FieldInfo = 
{
	"UnicodeCherokee"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo = 
{
	"UnicodeUnifiedCanadianAboriginalSyllabics"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeOgham_83_FieldInfo = 
{
	"UnicodeOgham"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeRunic_84_FieldInfo = 
{
	"UnicodeRunic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeKhmer_85_FieldInfo = 
{
	"UnicodeKhmer"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMongolian_86_FieldInfo = 
{
	"UnicodeMongolian"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLatinExtendedAdditional_87_FieldInfo = 
{
	"UnicodeLatinExtendedAdditional"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGreekExtended_88_FieldInfo = 
{
	"UnicodeGreekExtended"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGeneralPunctuation_89_FieldInfo = 
{
	"UnicodeGeneralPunctuation"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSuperscriptsandSubscripts_90_FieldInfo = 
{
	"UnicodeSuperscriptsandSubscripts"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCurrencySymbols_91_FieldInfo = 
{
	"UnicodeCurrencySymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCombiningMarksforSymbols_92_FieldInfo = 
{
	"UnicodeCombiningMarksforSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLetterlikeSymbols_93_FieldInfo = 
{
	"UnicodeLetterlikeSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeNumberForms_94_FieldInfo = 
{
	"UnicodeNumberForms"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeArrows_95_FieldInfo = 
{
	"UnicodeArrows"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMathematicalOperators_96_FieldInfo = 
{
	"UnicodeMathematicalOperators"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMiscellaneousTechnical_97_FieldInfo = 
{
	"UnicodeMiscellaneousTechnical"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeControlPictures_98_FieldInfo = 
{
	"UnicodeControlPictures"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeOpticalCharacterRecognition_99_FieldInfo = 
{
	"UnicodeOpticalCharacterRecognition"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeEnclosedAlphanumerics_100_FieldInfo = 
{
	"UnicodeEnclosedAlphanumerics"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBoxDrawing_101_FieldInfo = 
{
	"UnicodeBoxDrawing"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBlockElements_102_FieldInfo = 
{
	"UnicodeBlockElements"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGeometricShapes_103_FieldInfo = 
{
	"UnicodeGeometricShapes"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMiscellaneousSymbols_104_FieldInfo = 
{
	"UnicodeMiscellaneousSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeDingbats_105_FieldInfo = 
{
	"UnicodeDingbats"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBraillePatterns_106_FieldInfo = 
{
	"UnicodeBraillePatterns"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKRadicalsSupplement_107_FieldInfo = 
{
	"UnicodeCJKRadicalsSupplement"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeKangxiRadicals_108_FieldInfo = 
{
	"UnicodeKangxiRadicals"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeIdeographicDescriptionCharacters_109_FieldInfo = 
{
	"UnicodeIdeographicDescriptionCharacters"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKSymbolsandPunctuation_110_FieldInfo = 
{
	"UnicodeCJKSymbolsandPunctuation"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHiragana_111_FieldInfo = 
{
	"UnicodeHiragana"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeKatakana_112_FieldInfo = 
{
	"UnicodeKatakana"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBopomofo_113_FieldInfo = 
{
	"UnicodeBopomofo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHangulCompatibilityJamo_114_FieldInfo = 
{
	"UnicodeHangulCompatibilityJamo"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeKanbun_115_FieldInfo = 
{
	"UnicodeKanbun"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeBopomofoExtended_116_FieldInfo = 
{
	"UnicodeBopomofoExtended"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo = 
{
	"UnicodeEnclosedCJKLettersandMonths"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKCompatibility_118_FieldInfo = 
{
	"UnicodeCJKCompatibility"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionA"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKUnifiedIdeographs_120_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographs"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeYiSyllables_121_FieldInfo = 
{
	"UnicodeYiSyllables"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeYiRadicals_122_FieldInfo = 
{
	"UnicodeYiRadicals"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHangulSyllables_123_FieldInfo = 
{
	"UnicodeHangulSyllables"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHighSurrogates_124_FieldInfo = 
{
	"UnicodeHighSurrogates"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHighPrivateUseSurrogates_125_FieldInfo = 
{
	"UnicodeHighPrivateUseSurrogates"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeLowSurrogates_126_FieldInfo = 
{
	"UnicodeLowSurrogates"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodePrivateUse_127_FieldInfo = 
{
	"UnicodePrivateUse"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKCompatibilityIdeographs_128_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographs"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeAlphabeticPresentationForms_129_FieldInfo = 
{
	"UnicodeAlphabeticPresentationForms"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeArabicPresentationFormsA_130_FieldInfo = 
{
	"UnicodeArabicPresentationFormsA"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCombiningHalfMarks_131_FieldInfo = 
{
	"UnicodeCombiningHalfMarks"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKCompatibilityForms_132_FieldInfo = 
{
	"UnicodeCJKCompatibilityForms"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSmallFormVariants_133_FieldInfo = 
{
	"UnicodeSmallFormVariants"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeArabicPresentationFormsB_134_FieldInfo = 
{
	"UnicodeArabicPresentationFormsB"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeSpecials_135_FieldInfo = 
{
	"UnicodeSpecials"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeHalfwidthandFullwidthForms_136_FieldInfo = 
{
	"UnicodeHalfwidthandFullwidthForms"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeOldItalic_137_FieldInfo = 
{
	"UnicodeOldItalic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeGothic_138_FieldInfo = 
{
	"UnicodeGothic"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeDeseret_139_FieldInfo = 
{
	"UnicodeDeseret"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeByzantineMusicalSymbols_140_FieldInfo = 
{
	"UnicodeByzantineMusicalSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMusicalSymbols_141_FieldInfo = 
{
	"UnicodeMusicalSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo = 
{
	"UnicodeMathematicalAlphanumericSymbols"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionB"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographsSupplement"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____UnicodeTags_145_FieldInfo = 
{
	"UnicodeTags"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1050_0_0_32854;
FieldInfo Category_t1050____LastValue_146_FieldInfo = 
{
	"LastValue"/* name */
	, &Category_t1050_0_0_32854/* type */
	, &Category_t1050_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Category_t1050_FieldInfos[] =
{
	&Category_t1050____value___1_FieldInfo,
	&Category_t1050____None_2_FieldInfo,
	&Category_t1050____Any_3_FieldInfo,
	&Category_t1050____AnySingleline_4_FieldInfo,
	&Category_t1050____Word_5_FieldInfo,
	&Category_t1050____Digit_6_FieldInfo,
	&Category_t1050____WhiteSpace_7_FieldInfo,
	&Category_t1050____EcmaAny_8_FieldInfo,
	&Category_t1050____EcmaAnySingleline_9_FieldInfo,
	&Category_t1050____EcmaWord_10_FieldInfo,
	&Category_t1050____EcmaDigit_11_FieldInfo,
	&Category_t1050____EcmaWhiteSpace_12_FieldInfo,
	&Category_t1050____UnicodeL_13_FieldInfo,
	&Category_t1050____UnicodeM_14_FieldInfo,
	&Category_t1050____UnicodeN_15_FieldInfo,
	&Category_t1050____UnicodeZ_16_FieldInfo,
	&Category_t1050____UnicodeP_17_FieldInfo,
	&Category_t1050____UnicodeS_18_FieldInfo,
	&Category_t1050____UnicodeC_19_FieldInfo,
	&Category_t1050____UnicodeLu_20_FieldInfo,
	&Category_t1050____UnicodeLl_21_FieldInfo,
	&Category_t1050____UnicodeLt_22_FieldInfo,
	&Category_t1050____UnicodeLm_23_FieldInfo,
	&Category_t1050____UnicodeLo_24_FieldInfo,
	&Category_t1050____UnicodeMn_25_FieldInfo,
	&Category_t1050____UnicodeMe_26_FieldInfo,
	&Category_t1050____UnicodeMc_27_FieldInfo,
	&Category_t1050____UnicodeNd_28_FieldInfo,
	&Category_t1050____UnicodeNl_29_FieldInfo,
	&Category_t1050____UnicodeNo_30_FieldInfo,
	&Category_t1050____UnicodeZs_31_FieldInfo,
	&Category_t1050____UnicodeZl_32_FieldInfo,
	&Category_t1050____UnicodeZp_33_FieldInfo,
	&Category_t1050____UnicodePd_34_FieldInfo,
	&Category_t1050____UnicodePs_35_FieldInfo,
	&Category_t1050____UnicodePi_36_FieldInfo,
	&Category_t1050____UnicodePe_37_FieldInfo,
	&Category_t1050____UnicodePf_38_FieldInfo,
	&Category_t1050____UnicodePc_39_FieldInfo,
	&Category_t1050____UnicodePo_40_FieldInfo,
	&Category_t1050____UnicodeSm_41_FieldInfo,
	&Category_t1050____UnicodeSc_42_FieldInfo,
	&Category_t1050____UnicodeSk_43_FieldInfo,
	&Category_t1050____UnicodeSo_44_FieldInfo,
	&Category_t1050____UnicodeCc_45_FieldInfo,
	&Category_t1050____UnicodeCf_46_FieldInfo,
	&Category_t1050____UnicodeCo_47_FieldInfo,
	&Category_t1050____UnicodeCs_48_FieldInfo,
	&Category_t1050____UnicodeCn_49_FieldInfo,
	&Category_t1050____UnicodeBasicLatin_50_FieldInfo,
	&Category_t1050____UnicodeLatin1Supplement_51_FieldInfo,
	&Category_t1050____UnicodeLatinExtendedA_52_FieldInfo,
	&Category_t1050____UnicodeLatinExtendedB_53_FieldInfo,
	&Category_t1050____UnicodeIPAExtensions_54_FieldInfo,
	&Category_t1050____UnicodeSpacingModifierLetters_55_FieldInfo,
	&Category_t1050____UnicodeCombiningDiacriticalMarks_56_FieldInfo,
	&Category_t1050____UnicodeGreek_57_FieldInfo,
	&Category_t1050____UnicodeCyrillic_58_FieldInfo,
	&Category_t1050____UnicodeArmenian_59_FieldInfo,
	&Category_t1050____UnicodeHebrew_60_FieldInfo,
	&Category_t1050____UnicodeArabic_61_FieldInfo,
	&Category_t1050____UnicodeSyriac_62_FieldInfo,
	&Category_t1050____UnicodeThaana_63_FieldInfo,
	&Category_t1050____UnicodeDevanagari_64_FieldInfo,
	&Category_t1050____UnicodeBengali_65_FieldInfo,
	&Category_t1050____UnicodeGurmukhi_66_FieldInfo,
	&Category_t1050____UnicodeGujarati_67_FieldInfo,
	&Category_t1050____UnicodeOriya_68_FieldInfo,
	&Category_t1050____UnicodeTamil_69_FieldInfo,
	&Category_t1050____UnicodeTelugu_70_FieldInfo,
	&Category_t1050____UnicodeKannada_71_FieldInfo,
	&Category_t1050____UnicodeMalayalam_72_FieldInfo,
	&Category_t1050____UnicodeSinhala_73_FieldInfo,
	&Category_t1050____UnicodeThai_74_FieldInfo,
	&Category_t1050____UnicodeLao_75_FieldInfo,
	&Category_t1050____UnicodeTibetan_76_FieldInfo,
	&Category_t1050____UnicodeMyanmar_77_FieldInfo,
	&Category_t1050____UnicodeGeorgian_78_FieldInfo,
	&Category_t1050____UnicodeHangulJamo_79_FieldInfo,
	&Category_t1050____UnicodeEthiopic_80_FieldInfo,
	&Category_t1050____UnicodeCherokee_81_FieldInfo,
	&Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo,
	&Category_t1050____UnicodeOgham_83_FieldInfo,
	&Category_t1050____UnicodeRunic_84_FieldInfo,
	&Category_t1050____UnicodeKhmer_85_FieldInfo,
	&Category_t1050____UnicodeMongolian_86_FieldInfo,
	&Category_t1050____UnicodeLatinExtendedAdditional_87_FieldInfo,
	&Category_t1050____UnicodeGreekExtended_88_FieldInfo,
	&Category_t1050____UnicodeGeneralPunctuation_89_FieldInfo,
	&Category_t1050____UnicodeSuperscriptsandSubscripts_90_FieldInfo,
	&Category_t1050____UnicodeCurrencySymbols_91_FieldInfo,
	&Category_t1050____UnicodeCombiningMarksforSymbols_92_FieldInfo,
	&Category_t1050____UnicodeLetterlikeSymbols_93_FieldInfo,
	&Category_t1050____UnicodeNumberForms_94_FieldInfo,
	&Category_t1050____UnicodeArrows_95_FieldInfo,
	&Category_t1050____UnicodeMathematicalOperators_96_FieldInfo,
	&Category_t1050____UnicodeMiscellaneousTechnical_97_FieldInfo,
	&Category_t1050____UnicodeControlPictures_98_FieldInfo,
	&Category_t1050____UnicodeOpticalCharacterRecognition_99_FieldInfo,
	&Category_t1050____UnicodeEnclosedAlphanumerics_100_FieldInfo,
	&Category_t1050____UnicodeBoxDrawing_101_FieldInfo,
	&Category_t1050____UnicodeBlockElements_102_FieldInfo,
	&Category_t1050____UnicodeGeometricShapes_103_FieldInfo,
	&Category_t1050____UnicodeMiscellaneousSymbols_104_FieldInfo,
	&Category_t1050____UnicodeDingbats_105_FieldInfo,
	&Category_t1050____UnicodeBraillePatterns_106_FieldInfo,
	&Category_t1050____UnicodeCJKRadicalsSupplement_107_FieldInfo,
	&Category_t1050____UnicodeKangxiRadicals_108_FieldInfo,
	&Category_t1050____UnicodeIdeographicDescriptionCharacters_109_FieldInfo,
	&Category_t1050____UnicodeCJKSymbolsandPunctuation_110_FieldInfo,
	&Category_t1050____UnicodeHiragana_111_FieldInfo,
	&Category_t1050____UnicodeKatakana_112_FieldInfo,
	&Category_t1050____UnicodeBopomofo_113_FieldInfo,
	&Category_t1050____UnicodeHangulCompatibilityJamo_114_FieldInfo,
	&Category_t1050____UnicodeKanbun_115_FieldInfo,
	&Category_t1050____UnicodeBopomofoExtended_116_FieldInfo,
	&Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo,
	&Category_t1050____UnicodeCJKCompatibility_118_FieldInfo,
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo,
	&Category_t1050____UnicodeCJKUnifiedIdeographs_120_FieldInfo,
	&Category_t1050____UnicodeYiSyllables_121_FieldInfo,
	&Category_t1050____UnicodeYiRadicals_122_FieldInfo,
	&Category_t1050____UnicodeHangulSyllables_123_FieldInfo,
	&Category_t1050____UnicodeHighSurrogates_124_FieldInfo,
	&Category_t1050____UnicodeHighPrivateUseSurrogates_125_FieldInfo,
	&Category_t1050____UnicodeLowSurrogates_126_FieldInfo,
	&Category_t1050____UnicodePrivateUse_127_FieldInfo,
	&Category_t1050____UnicodeCJKCompatibilityIdeographs_128_FieldInfo,
	&Category_t1050____UnicodeAlphabeticPresentationForms_129_FieldInfo,
	&Category_t1050____UnicodeArabicPresentationFormsA_130_FieldInfo,
	&Category_t1050____UnicodeCombiningHalfMarks_131_FieldInfo,
	&Category_t1050____UnicodeCJKCompatibilityForms_132_FieldInfo,
	&Category_t1050____UnicodeSmallFormVariants_133_FieldInfo,
	&Category_t1050____UnicodeArabicPresentationFormsB_134_FieldInfo,
	&Category_t1050____UnicodeSpecials_135_FieldInfo,
	&Category_t1050____UnicodeHalfwidthandFullwidthForms_136_FieldInfo,
	&Category_t1050____UnicodeOldItalic_137_FieldInfo,
	&Category_t1050____UnicodeGothic_138_FieldInfo,
	&Category_t1050____UnicodeDeseret_139_FieldInfo,
	&Category_t1050____UnicodeByzantineMusicalSymbols_140_FieldInfo,
	&Category_t1050____UnicodeMusicalSymbols_141_FieldInfo,
	&Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo,
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo,
	&Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo,
	&Category_t1050____UnicodeTags_145_FieldInfo,
	&Category_t1050____LastValue_146_FieldInfo,
	NULL
};
static const uint16_t Category_t1050____None_2_DefaultValueData = 0;
extern Il2CppType UInt16_t707_0_0_0;
static Il2CppFieldDefaultValueEntry Category_t1050____None_2_DefaultValue = 
{
	&Category_t1050____None_2_FieldInfo/* field */
	, { (char*)&Category_t1050____None_2_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____Any_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Category_t1050____Any_3_DefaultValue = 
{
	&Category_t1050____Any_3_FieldInfo/* field */
	, { (char*)&Category_t1050____Any_3_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____AnySingleline_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Category_t1050____AnySingleline_4_DefaultValue = 
{
	&Category_t1050____AnySingleline_4_FieldInfo/* field */
	, { (char*)&Category_t1050____AnySingleline_4_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____Word_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry Category_t1050____Word_5_DefaultValue = 
{
	&Category_t1050____Word_5_FieldInfo/* field */
	, { (char*)&Category_t1050____Word_5_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____Digit_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry Category_t1050____Digit_6_DefaultValue = 
{
	&Category_t1050____Digit_6_FieldInfo/* field */
	, { (char*)&Category_t1050____Digit_6_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____WhiteSpace_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry Category_t1050____WhiteSpace_7_DefaultValue = 
{
	&Category_t1050____WhiteSpace_7_FieldInfo/* field */
	, { (char*)&Category_t1050____WhiteSpace_7_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____EcmaAny_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry Category_t1050____EcmaAny_8_DefaultValue = 
{
	&Category_t1050____EcmaAny_8_FieldInfo/* field */
	, { (char*)&Category_t1050____EcmaAny_8_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____EcmaAnySingleline_9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry Category_t1050____EcmaAnySingleline_9_DefaultValue = 
{
	&Category_t1050____EcmaAnySingleline_9_FieldInfo/* field */
	, { (char*)&Category_t1050____EcmaAnySingleline_9_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____EcmaWord_10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry Category_t1050____EcmaWord_10_DefaultValue = 
{
	&Category_t1050____EcmaWord_10_FieldInfo/* field */
	, { (char*)&Category_t1050____EcmaWord_10_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____EcmaDigit_11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry Category_t1050____EcmaDigit_11_DefaultValue = 
{
	&Category_t1050____EcmaDigit_11_FieldInfo/* field */
	, { (char*)&Category_t1050____EcmaDigit_11_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____EcmaWhiteSpace_12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry Category_t1050____EcmaWhiteSpace_12_DefaultValue = 
{
	&Category_t1050____EcmaWhiteSpace_12_FieldInfo/* field */
	, { (char*)&Category_t1050____EcmaWhiteSpace_12_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeL_13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeL_13_DefaultValue = 
{
	&Category_t1050____UnicodeL_13_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeL_13_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeM_14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeM_14_DefaultValue = 
{
	&Category_t1050____UnicodeM_14_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeM_14_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeN_15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeN_15_DefaultValue = 
{
	&Category_t1050____UnicodeN_15_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeN_15_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeZ_16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeZ_16_DefaultValue = 
{
	&Category_t1050____UnicodeZ_16_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeZ_16_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeP_17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeP_17_DefaultValue = 
{
	&Category_t1050____UnicodeP_17_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeP_17_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeS_18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeS_18_DefaultValue = 
{
	&Category_t1050____UnicodeS_18_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeS_18_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeC_19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeC_19_DefaultValue = 
{
	&Category_t1050____UnicodeC_19_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeC_19_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLu_20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLu_20_DefaultValue = 
{
	&Category_t1050____UnicodeLu_20_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLu_20_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLl_21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLl_21_DefaultValue = 
{
	&Category_t1050____UnicodeLl_21_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLl_21_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLt_22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLt_22_DefaultValue = 
{
	&Category_t1050____UnicodeLt_22_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLt_22_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLm_23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLm_23_DefaultValue = 
{
	&Category_t1050____UnicodeLm_23_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLm_23_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLo_24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLo_24_DefaultValue = 
{
	&Category_t1050____UnicodeLo_24_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLo_24_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMn_25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMn_25_DefaultValue = 
{
	&Category_t1050____UnicodeMn_25_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMn_25_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMe_26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMe_26_DefaultValue = 
{
	&Category_t1050____UnicodeMe_26_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMe_26_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMc_27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMc_27_DefaultValue = 
{
	&Category_t1050____UnicodeMc_27_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMc_27_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeNd_28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeNd_28_DefaultValue = 
{
	&Category_t1050____UnicodeNd_28_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeNd_28_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeNl_29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeNl_29_DefaultValue = 
{
	&Category_t1050____UnicodeNl_29_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeNl_29_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeNo_30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeNo_30_DefaultValue = 
{
	&Category_t1050____UnicodeNo_30_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeNo_30_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeZs_31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeZs_31_DefaultValue = 
{
	&Category_t1050____UnicodeZs_31_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeZs_31_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeZl_32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeZl_32_DefaultValue = 
{
	&Category_t1050____UnicodeZl_32_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeZl_32_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeZp_33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeZp_33_DefaultValue = 
{
	&Category_t1050____UnicodeZp_33_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeZp_33_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePd_34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePd_34_DefaultValue = 
{
	&Category_t1050____UnicodePd_34_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePd_34_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePs_35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePs_35_DefaultValue = 
{
	&Category_t1050____UnicodePs_35_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePs_35_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePi_36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePi_36_DefaultValue = 
{
	&Category_t1050____UnicodePi_36_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePi_36_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePe_37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePe_37_DefaultValue = 
{
	&Category_t1050____UnicodePe_37_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePe_37_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePf_38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePf_38_DefaultValue = 
{
	&Category_t1050____UnicodePf_38_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePf_38_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePc_39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePc_39_DefaultValue = 
{
	&Category_t1050____UnicodePc_39_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePc_39_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePo_40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePo_40_DefaultValue = 
{
	&Category_t1050____UnicodePo_40_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePo_40_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSm_41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSm_41_DefaultValue = 
{
	&Category_t1050____UnicodeSm_41_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSm_41_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSc_42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSc_42_DefaultValue = 
{
	&Category_t1050____UnicodeSc_42_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSc_42_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSk_43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSk_43_DefaultValue = 
{
	&Category_t1050____UnicodeSk_43_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSk_43_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSo_44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSo_44_DefaultValue = 
{
	&Category_t1050____UnicodeSo_44_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSo_44_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCc_45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCc_45_DefaultValue = 
{
	&Category_t1050____UnicodeCc_45_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCc_45_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCf_46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCf_46_DefaultValue = 
{
	&Category_t1050____UnicodeCf_46_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCf_46_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCo_47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCo_47_DefaultValue = 
{
	&Category_t1050____UnicodeCo_47_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCo_47_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCs_48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCs_48_DefaultValue = 
{
	&Category_t1050____UnicodeCs_48_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCs_48_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCn_49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCn_49_DefaultValue = 
{
	&Category_t1050____UnicodeCn_49_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCn_49_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBasicLatin_50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBasicLatin_50_DefaultValue = 
{
	&Category_t1050____UnicodeBasicLatin_50_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBasicLatin_50_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLatin1Supplement_51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLatin1Supplement_51_DefaultValue = 
{
	&Category_t1050____UnicodeLatin1Supplement_51_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLatin1Supplement_51_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLatinExtendedA_52_DefaultValueData = 50;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLatinExtendedA_52_DefaultValue = 
{
	&Category_t1050____UnicodeLatinExtendedA_52_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLatinExtendedA_52_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLatinExtendedB_53_DefaultValueData = 51;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLatinExtendedB_53_DefaultValue = 
{
	&Category_t1050____UnicodeLatinExtendedB_53_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLatinExtendedB_53_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeIPAExtensions_54_DefaultValueData = 52;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeIPAExtensions_54_DefaultValue = 
{
	&Category_t1050____UnicodeIPAExtensions_54_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeIPAExtensions_54_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSpacingModifierLetters_55_DefaultValueData = 53;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSpacingModifierLetters_55_DefaultValue = 
{
	&Category_t1050____UnicodeSpacingModifierLetters_55_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSpacingModifierLetters_55_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCombiningDiacriticalMarks_56_DefaultValueData = 54;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCombiningDiacriticalMarks_56_DefaultValue = 
{
	&Category_t1050____UnicodeCombiningDiacriticalMarks_56_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCombiningDiacriticalMarks_56_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGreek_57_DefaultValueData = 55;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGreek_57_DefaultValue = 
{
	&Category_t1050____UnicodeGreek_57_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGreek_57_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCyrillic_58_DefaultValueData = 56;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCyrillic_58_DefaultValue = 
{
	&Category_t1050____UnicodeCyrillic_58_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCyrillic_58_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeArmenian_59_DefaultValueData = 57;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeArmenian_59_DefaultValue = 
{
	&Category_t1050____UnicodeArmenian_59_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeArmenian_59_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHebrew_60_DefaultValueData = 58;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHebrew_60_DefaultValue = 
{
	&Category_t1050____UnicodeHebrew_60_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHebrew_60_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeArabic_61_DefaultValueData = 59;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeArabic_61_DefaultValue = 
{
	&Category_t1050____UnicodeArabic_61_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeArabic_61_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSyriac_62_DefaultValueData = 60;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSyriac_62_DefaultValue = 
{
	&Category_t1050____UnicodeSyriac_62_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSyriac_62_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeThaana_63_DefaultValueData = 61;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeThaana_63_DefaultValue = 
{
	&Category_t1050____UnicodeThaana_63_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeThaana_63_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeDevanagari_64_DefaultValueData = 62;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeDevanagari_64_DefaultValue = 
{
	&Category_t1050____UnicodeDevanagari_64_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeDevanagari_64_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBengali_65_DefaultValueData = 63;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBengali_65_DefaultValue = 
{
	&Category_t1050____UnicodeBengali_65_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBengali_65_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGurmukhi_66_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGurmukhi_66_DefaultValue = 
{
	&Category_t1050____UnicodeGurmukhi_66_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGurmukhi_66_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGujarati_67_DefaultValueData = 65;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGujarati_67_DefaultValue = 
{
	&Category_t1050____UnicodeGujarati_67_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGujarati_67_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeOriya_68_DefaultValueData = 66;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeOriya_68_DefaultValue = 
{
	&Category_t1050____UnicodeOriya_68_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeOriya_68_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeTamil_69_DefaultValueData = 67;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeTamil_69_DefaultValue = 
{
	&Category_t1050____UnicodeTamil_69_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeTamil_69_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeTelugu_70_DefaultValueData = 68;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeTelugu_70_DefaultValue = 
{
	&Category_t1050____UnicodeTelugu_70_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeTelugu_70_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeKannada_71_DefaultValueData = 69;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeKannada_71_DefaultValue = 
{
	&Category_t1050____UnicodeKannada_71_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeKannada_71_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMalayalam_72_DefaultValueData = 70;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMalayalam_72_DefaultValue = 
{
	&Category_t1050____UnicodeMalayalam_72_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMalayalam_72_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSinhala_73_DefaultValueData = 71;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSinhala_73_DefaultValue = 
{
	&Category_t1050____UnicodeSinhala_73_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSinhala_73_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeThai_74_DefaultValueData = 72;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeThai_74_DefaultValue = 
{
	&Category_t1050____UnicodeThai_74_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeThai_74_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLao_75_DefaultValueData = 73;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLao_75_DefaultValue = 
{
	&Category_t1050____UnicodeLao_75_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLao_75_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeTibetan_76_DefaultValueData = 74;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeTibetan_76_DefaultValue = 
{
	&Category_t1050____UnicodeTibetan_76_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeTibetan_76_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMyanmar_77_DefaultValueData = 75;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMyanmar_77_DefaultValue = 
{
	&Category_t1050____UnicodeMyanmar_77_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMyanmar_77_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGeorgian_78_DefaultValueData = 76;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGeorgian_78_DefaultValue = 
{
	&Category_t1050____UnicodeGeorgian_78_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGeorgian_78_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHangulJamo_79_DefaultValueData = 77;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHangulJamo_79_DefaultValue = 
{
	&Category_t1050____UnicodeHangulJamo_79_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHangulJamo_79_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeEthiopic_80_DefaultValueData = 78;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeEthiopic_80_DefaultValue = 
{
	&Category_t1050____UnicodeEthiopic_80_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeEthiopic_80_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCherokee_81_DefaultValueData = 79;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCherokee_81_DefaultValue = 
{
	&Category_t1050____UnicodeCherokee_81_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCherokee_81_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue = 
{
	&Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeOgham_83_DefaultValueData = 81;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeOgham_83_DefaultValue = 
{
	&Category_t1050____UnicodeOgham_83_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeOgham_83_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeRunic_84_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeRunic_84_DefaultValue = 
{
	&Category_t1050____UnicodeRunic_84_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeRunic_84_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeKhmer_85_DefaultValueData = 83;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeKhmer_85_DefaultValue = 
{
	&Category_t1050____UnicodeKhmer_85_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeKhmer_85_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMongolian_86_DefaultValueData = 84;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMongolian_86_DefaultValue = 
{
	&Category_t1050____UnicodeMongolian_86_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMongolian_86_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLatinExtendedAdditional_87_DefaultValueData = 85;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLatinExtendedAdditional_87_DefaultValue = 
{
	&Category_t1050____UnicodeLatinExtendedAdditional_87_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLatinExtendedAdditional_87_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGreekExtended_88_DefaultValueData = 86;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGreekExtended_88_DefaultValue = 
{
	&Category_t1050____UnicodeGreekExtended_88_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGreekExtended_88_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGeneralPunctuation_89_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGeneralPunctuation_89_DefaultValue = 
{
	&Category_t1050____UnicodeGeneralPunctuation_89_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGeneralPunctuation_89_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSuperscriptsandSubscripts_90_DefaultValueData = 88;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSuperscriptsandSubscripts_90_DefaultValue = 
{
	&Category_t1050____UnicodeSuperscriptsandSubscripts_90_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSuperscriptsandSubscripts_90_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCurrencySymbols_91_DefaultValueData = 89;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCurrencySymbols_91_DefaultValue = 
{
	&Category_t1050____UnicodeCurrencySymbols_91_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCurrencySymbols_91_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCombiningMarksforSymbols_92_DefaultValueData = 90;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCombiningMarksforSymbols_92_DefaultValue = 
{
	&Category_t1050____UnicodeCombiningMarksforSymbols_92_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCombiningMarksforSymbols_92_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLetterlikeSymbols_93_DefaultValueData = 91;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLetterlikeSymbols_93_DefaultValue = 
{
	&Category_t1050____UnicodeLetterlikeSymbols_93_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLetterlikeSymbols_93_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeNumberForms_94_DefaultValueData = 92;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeNumberForms_94_DefaultValue = 
{
	&Category_t1050____UnicodeNumberForms_94_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeNumberForms_94_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeArrows_95_DefaultValueData = 93;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeArrows_95_DefaultValue = 
{
	&Category_t1050____UnicodeArrows_95_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeArrows_95_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMathematicalOperators_96_DefaultValueData = 94;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMathematicalOperators_96_DefaultValue = 
{
	&Category_t1050____UnicodeMathematicalOperators_96_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMathematicalOperators_96_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMiscellaneousTechnical_97_DefaultValueData = 95;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMiscellaneousTechnical_97_DefaultValue = 
{
	&Category_t1050____UnicodeMiscellaneousTechnical_97_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMiscellaneousTechnical_97_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeControlPictures_98_DefaultValueData = 96;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeControlPictures_98_DefaultValue = 
{
	&Category_t1050____UnicodeControlPictures_98_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeControlPictures_98_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeOpticalCharacterRecognition_99_DefaultValueData = 97;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeOpticalCharacterRecognition_99_DefaultValue = 
{
	&Category_t1050____UnicodeOpticalCharacterRecognition_99_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeOpticalCharacterRecognition_99_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeEnclosedAlphanumerics_100_DefaultValueData = 98;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeEnclosedAlphanumerics_100_DefaultValue = 
{
	&Category_t1050____UnicodeEnclosedAlphanumerics_100_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeEnclosedAlphanumerics_100_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBoxDrawing_101_DefaultValueData = 99;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBoxDrawing_101_DefaultValue = 
{
	&Category_t1050____UnicodeBoxDrawing_101_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBoxDrawing_101_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBlockElements_102_DefaultValueData = 100;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBlockElements_102_DefaultValue = 
{
	&Category_t1050____UnicodeBlockElements_102_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBlockElements_102_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGeometricShapes_103_DefaultValueData = 101;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGeometricShapes_103_DefaultValue = 
{
	&Category_t1050____UnicodeGeometricShapes_103_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGeometricShapes_103_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMiscellaneousSymbols_104_DefaultValueData = 102;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMiscellaneousSymbols_104_DefaultValue = 
{
	&Category_t1050____UnicodeMiscellaneousSymbols_104_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMiscellaneousSymbols_104_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeDingbats_105_DefaultValueData = 103;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeDingbats_105_DefaultValue = 
{
	&Category_t1050____UnicodeDingbats_105_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeDingbats_105_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBraillePatterns_106_DefaultValueData = 104;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBraillePatterns_106_DefaultValue = 
{
	&Category_t1050____UnicodeBraillePatterns_106_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBraillePatterns_106_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKRadicalsSupplement_107_DefaultValueData = 105;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKRadicalsSupplement_107_DefaultValue = 
{
	&Category_t1050____UnicodeCJKRadicalsSupplement_107_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKRadicalsSupplement_107_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeKangxiRadicals_108_DefaultValueData = 106;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeKangxiRadicals_108_DefaultValue = 
{
	&Category_t1050____UnicodeKangxiRadicals_108_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeKangxiRadicals_108_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData = 107;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeIdeographicDescriptionCharacters_109_DefaultValue = 
{
	&Category_t1050____UnicodeIdeographicDescriptionCharacters_109_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData = 108;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKSymbolsandPunctuation_110_DefaultValue = 
{
	&Category_t1050____UnicodeCJKSymbolsandPunctuation_110_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHiragana_111_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHiragana_111_DefaultValue = 
{
	&Category_t1050____UnicodeHiragana_111_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHiragana_111_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeKatakana_112_DefaultValueData = 110;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeKatakana_112_DefaultValue = 
{
	&Category_t1050____UnicodeKatakana_112_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeKatakana_112_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBopomofo_113_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBopomofo_113_DefaultValue = 
{
	&Category_t1050____UnicodeBopomofo_113_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBopomofo_113_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHangulCompatibilityJamo_114_DefaultValueData = 112;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHangulCompatibilityJamo_114_DefaultValue = 
{
	&Category_t1050____UnicodeHangulCompatibilityJamo_114_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHangulCompatibilityJamo_114_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeKanbun_115_DefaultValueData = 113;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeKanbun_115_DefaultValue = 
{
	&Category_t1050____UnicodeKanbun_115_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeKanbun_115_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeBopomofoExtended_116_DefaultValueData = 114;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeBopomofoExtended_116_DefaultValue = 
{
	&Category_t1050____UnicodeBopomofoExtended_116_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeBopomofoExtended_116_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData = 115;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue = 
{
	&Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKCompatibility_118_DefaultValueData = 116;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKCompatibility_118_DefaultValue = 
{
	&Category_t1050____UnicodeCJKCompatibility_118_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKCompatibility_118_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData = 117;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue = 
{
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKUnifiedIdeographs_120_DefaultValueData = 118;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKUnifiedIdeographs_120_DefaultValue = 
{
	&Category_t1050____UnicodeCJKUnifiedIdeographs_120_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKUnifiedIdeographs_120_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeYiSyllables_121_DefaultValueData = 119;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeYiSyllables_121_DefaultValue = 
{
	&Category_t1050____UnicodeYiSyllables_121_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeYiSyllables_121_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeYiRadicals_122_DefaultValueData = 120;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeYiRadicals_122_DefaultValue = 
{
	&Category_t1050____UnicodeYiRadicals_122_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeYiRadicals_122_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHangulSyllables_123_DefaultValueData = 121;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHangulSyllables_123_DefaultValue = 
{
	&Category_t1050____UnicodeHangulSyllables_123_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHangulSyllables_123_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHighSurrogates_124_DefaultValueData = 122;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHighSurrogates_124_DefaultValue = 
{
	&Category_t1050____UnicodeHighSurrogates_124_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHighSurrogates_124_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHighPrivateUseSurrogates_125_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHighPrivateUseSurrogates_125_DefaultValue = 
{
	&Category_t1050____UnicodeHighPrivateUseSurrogates_125_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHighPrivateUseSurrogates_125_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeLowSurrogates_126_DefaultValueData = 124;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeLowSurrogates_126_DefaultValue = 
{
	&Category_t1050____UnicodeLowSurrogates_126_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeLowSurrogates_126_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodePrivateUse_127_DefaultValueData = 125;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodePrivateUse_127_DefaultValue = 
{
	&Category_t1050____UnicodePrivateUse_127_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodePrivateUse_127_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData = 126;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKCompatibilityIdeographs_128_DefaultValue = 
{
	&Category_t1050____UnicodeCJKCompatibilityIdeographs_128_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeAlphabeticPresentationForms_129_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeAlphabeticPresentationForms_129_DefaultValue = 
{
	&Category_t1050____UnicodeAlphabeticPresentationForms_129_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeAlphabeticPresentationForms_129_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeArabicPresentationFormsA_130_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeArabicPresentationFormsA_130_DefaultValue = 
{
	&Category_t1050____UnicodeArabicPresentationFormsA_130_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeArabicPresentationFormsA_130_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCombiningHalfMarks_131_DefaultValueData = 129;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCombiningHalfMarks_131_DefaultValue = 
{
	&Category_t1050____UnicodeCombiningHalfMarks_131_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCombiningHalfMarks_131_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKCompatibilityForms_132_DefaultValueData = 130;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKCompatibilityForms_132_DefaultValue = 
{
	&Category_t1050____UnicodeCJKCompatibilityForms_132_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKCompatibilityForms_132_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSmallFormVariants_133_DefaultValueData = 131;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSmallFormVariants_133_DefaultValue = 
{
	&Category_t1050____UnicodeSmallFormVariants_133_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSmallFormVariants_133_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeArabicPresentationFormsB_134_DefaultValueData = 132;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeArabicPresentationFormsB_134_DefaultValue = 
{
	&Category_t1050____UnicodeArabicPresentationFormsB_134_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeArabicPresentationFormsB_134_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeSpecials_135_DefaultValueData = 133;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeSpecials_135_DefaultValue = 
{
	&Category_t1050____UnicodeSpecials_135_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeSpecials_135_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData = 134;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeHalfwidthandFullwidthForms_136_DefaultValue = 
{
	&Category_t1050____UnicodeHalfwidthandFullwidthForms_136_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeOldItalic_137_DefaultValueData = 135;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeOldItalic_137_DefaultValue = 
{
	&Category_t1050____UnicodeOldItalic_137_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeOldItalic_137_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeGothic_138_DefaultValueData = 136;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeGothic_138_DefaultValue = 
{
	&Category_t1050____UnicodeGothic_138_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeGothic_138_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeDeseret_139_DefaultValueData = 137;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeDeseret_139_DefaultValue = 
{
	&Category_t1050____UnicodeDeseret_139_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeDeseret_139_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeByzantineMusicalSymbols_140_DefaultValueData = 138;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeByzantineMusicalSymbols_140_DefaultValue = 
{
	&Category_t1050____UnicodeByzantineMusicalSymbols_140_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeByzantineMusicalSymbols_140_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMusicalSymbols_141_DefaultValueData = 139;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMusicalSymbols_141_DefaultValue = 
{
	&Category_t1050____UnicodeMusicalSymbols_141_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMusicalSymbols_141_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData = 140;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue = 
{
	&Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData = 141;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue = 
{
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData = 142;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue = 
{
	&Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____UnicodeTags_145_DefaultValueData = 143;
static Il2CppFieldDefaultValueEntry Category_t1050____UnicodeTags_145_DefaultValue = 
{
	&Category_t1050____UnicodeTags_145_FieldInfo/* field */
	, { (char*)&Category_t1050____UnicodeTags_145_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static const uint16_t Category_t1050____LastValue_146_DefaultValueData = 144;
static Il2CppFieldDefaultValueEntry Category_t1050____LastValue_146_DefaultValue = 
{
	&Category_t1050____LastValue_146_FieldInfo/* field */
	, { (char*)&Category_t1050____LastValue_146_DefaultValueData, &UInt16_t707_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Category_t1050_FieldDefaultValues[] = 
{
	&Category_t1050____None_2_DefaultValue,
	&Category_t1050____Any_3_DefaultValue,
	&Category_t1050____AnySingleline_4_DefaultValue,
	&Category_t1050____Word_5_DefaultValue,
	&Category_t1050____Digit_6_DefaultValue,
	&Category_t1050____WhiteSpace_7_DefaultValue,
	&Category_t1050____EcmaAny_8_DefaultValue,
	&Category_t1050____EcmaAnySingleline_9_DefaultValue,
	&Category_t1050____EcmaWord_10_DefaultValue,
	&Category_t1050____EcmaDigit_11_DefaultValue,
	&Category_t1050____EcmaWhiteSpace_12_DefaultValue,
	&Category_t1050____UnicodeL_13_DefaultValue,
	&Category_t1050____UnicodeM_14_DefaultValue,
	&Category_t1050____UnicodeN_15_DefaultValue,
	&Category_t1050____UnicodeZ_16_DefaultValue,
	&Category_t1050____UnicodeP_17_DefaultValue,
	&Category_t1050____UnicodeS_18_DefaultValue,
	&Category_t1050____UnicodeC_19_DefaultValue,
	&Category_t1050____UnicodeLu_20_DefaultValue,
	&Category_t1050____UnicodeLl_21_DefaultValue,
	&Category_t1050____UnicodeLt_22_DefaultValue,
	&Category_t1050____UnicodeLm_23_DefaultValue,
	&Category_t1050____UnicodeLo_24_DefaultValue,
	&Category_t1050____UnicodeMn_25_DefaultValue,
	&Category_t1050____UnicodeMe_26_DefaultValue,
	&Category_t1050____UnicodeMc_27_DefaultValue,
	&Category_t1050____UnicodeNd_28_DefaultValue,
	&Category_t1050____UnicodeNl_29_DefaultValue,
	&Category_t1050____UnicodeNo_30_DefaultValue,
	&Category_t1050____UnicodeZs_31_DefaultValue,
	&Category_t1050____UnicodeZl_32_DefaultValue,
	&Category_t1050____UnicodeZp_33_DefaultValue,
	&Category_t1050____UnicodePd_34_DefaultValue,
	&Category_t1050____UnicodePs_35_DefaultValue,
	&Category_t1050____UnicodePi_36_DefaultValue,
	&Category_t1050____UnicodePe_37_DefaultValue,
	&Category_t1050____UnicodePf_38_DefaultValue,
	&Category_t1050____UnicodePc_39_DefaultValue,
	&Category_t1050____UnicodePo_40_DefaultValue,
	&Category_t1050____UnicodeSm_41_DefaultValue,
	&Category_t1050____UnicodeSc_42_DefaultValue,
	&Category_t1050____UnicodeSk_43_DefaultValue,
	&Category_t1050____UnicodeSo_44_DefaultValue,
	&Category_t1050____UnicodeCc_45_DefaultValue,
	&Category_t1050____UnicodeCf_46_DefaultValue,
	&Category_t1050____UnicodeCo_47_DefaultValue,
	&Category_t1050____UnicodeCs_48_DefaultValue,
	&Category_t1050____UnicodeCn_49_DefaultValue,
	&Category_t1050____UnicodeBasicLatin_50_DefaultValue,
	&Category_t1050____UnicodeLatin1Supplement_51_DefaultValue,
	&Category_t1050____UnicodeLatinExtendedA_52_DefaultValue,
	&Category_t1050____UnicodeLatinExtendedB_53_DefaultValue,
	&Category_t1050____UnicodeIPAExtensions_54_DefaultValue,
	&Category_t1050____UnicodeSpacingModifierLetters_55_DefaultValue,
	&Category_t1050____UnicodeCombiningDiacriticalMarks_56_DefaultValue,
	&Category_t1050____UnicodeGreek_57_DefaultValue,
	&Category_t1050____UnicodeCyrillic_58_DefaultValue,
	&Category_t1050____UnicodeArmenian_59_DefaultValue,
	&Category_t1050____UnicodeHebrew_60_DefaultValue,
	&Category_t1050____UnicodeArabic_61_DefaultValue,
	&Category_t1050____UnicodeSyriac_62_DefaultValue,
	&Category_t1050____UnicodeThaana_63_DefaultValue,
	&Category_t1050____UnicodeDevanagari_64_DefaultValue,
	&Category_t1050____UnicodeBengali_65_DefaultValue,
	&Category_t1050____UnicodeGurmukhi_66_DefaultValue,
	&Category_t1050____UnicodeGujarati_67_DefaultValue,
	&Category_t1050____UnicodeOriya_68_DefaultValue,
	&Category_t1050____UnicodeTamil_69_DefaultValue,
	&Category_t1050____UnicodeTelugu_70_DefaultValue,
	&Category_t1050____UnicodeKannada_71_DefaultValue,
	&Category_t1050____UnicodeMalayalam_72_DefaultValue,
	&Category_t1050____UnicodeSinhala_73_DefaultValue,
	&Category_t1050____UnicodeThai_74_DefaultValue,
	&Category_t1050____UnicodeLao_75_DefaultValue,
	&Category_t1050____UnicodeTibetan_76_DefaultValue,
	&Category_t1050____UnicodeMyanmar_77_DefaultValue,
	&Category_t1050____UnicodeGeorgian_78_DefaultValue,
	&Category_t1050____UnicodeHangulJamo_79_DefaultValue,
	&Category_t1050____UnicodeEthiopic_80_DefaultValue,
	&Category_t1050____UnicodeCherokee_81_DefaultValue,
	&Category_t1050____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue,
	&Category_t1050____UnicodeOgham_83_DefaultValue,
	&Category_t1050____UnicodeRunic_84_DefaultValue,
	&Category_t1050____UnicodeKhmer_85_DefaultValue,
	&Category_t1050____UnicodeMongolian_86_DefaultValue,
	&Category_t1050____UnicodeLatinExtendedAdditional_87_DefaultValue,
	&Category_t1050____UnicodeGreekExtended_88_DefaultValue,
	&Category_t1050____UnicodeGeneralPunctuation_89_DefaultValue,
	&Category_t1050____UnicodeSuperscriptsandSubscripts_90_DefaultValue,
	&Category_t1050____UnicodeCurrencySymbols_91_DefaultValue,
	&Category_t1050____UnicodeCombiningMarksforSymbols_92_DefaultValue,
	&Category_t1050____UnicodeLetterlikeSymbols_93_DefaultValue,
	&Category_t1050____UnicodeNumberForms_94_DefaultValue,
	&Category_t1050____UnicodeArrows_95_DefaultValue,
	&Category_t1050____UnicodeMathematicalOperators_96_DefaultValue,
	&Category_t1050____UnicodeMiscellaneousTechnical_97_DefaultValue,
	&Category_t1050____UnicodeControlPictures_98_DefaultValue,
	&Category_t1050____UnicodeOpticalCharacterRecognition_99_DefaultValue,
	&Category_t1050____UnicodeEnclosedAlphanumerics_100_DefaultValue,
	&Category_t1050____UnicodeBoxDrawing_101_DefaultValue,
	&Category_t1050____UnicodeBlockElements_102_DefaultValue,
	&Category_t1050____UnicodeGeometricShapes_103_DefaultValue,
	&Category_t1050____UnicodeMiscellaneousSymbols_104_DefaultValue,
	&Category_t1050____UnicodeDingbats_105_DefaultValue,
	&Category_t1050____UnicodeBraillePatterns_106_DefaultValue,
	&Category_t1050____UnicodeCJKRadicalsSupplement_107_DefaultValue,
	&Category_t1050____UnicodeKangxiRadicals_108_DefaultValue,
	&Category_t1050____UnicodeIdeographicDescriptionCharacters_109_DefaultValue,
	&Category_t1050____UnicodeCJKSymbolsandPunctuation_110_DefaultValue,
	&Category_t1050____UnicodeHiragana_111_DefaultValue,
	&Category_t1050____UnicodeKatakana_112_DefaultValue,
	&Category_t1050____UnicodeBopomofo_113_DefaultValue,
	&Category_t1050____UnicodeHangulCompatibilityJamo_114_DefaultValue,
	&Category_t1050____UnicodeKanbun_115_DefaultValue,
	&Category_t1050____UnicodeBopomofoExtended_116_DefaultValue,
	&Category_t1050____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue,
	&Category_t1050____UnicodeCJKCompatibility_118_DefaultValue,
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue,
	&Category_t1050____UnicodeCJKUnifiedIdeographs_120_DefaultValue,
	&Category_t1050____UnicodeYiSyllables_121_DefaultValue,
	&Category_t1050____UnicodeYiRadicals_122_DefaultValue,
	&Category_t1050____UnicodeHangulSyllables_123_DefaultValue,
	&Category_t1050____UnicodeHighSurrogates_124_DefaultValue,
	&Category_t1050____UnicodeHighPrivateUseSurrogates_125_DefaultValue,
	&Category_t1050____UnicodeLowSurrogates_126_DefaultValue,
	&Category_t1050____UnicodePrivateUse_127_DefaultValue,
	&Category_t1050____UnicodeCJKCompatibilityIdeographs_128_DefaultValue,
	&Category_t1050____UnicodeAlphabeticPresentationForms_129_DefaultValue,
	&Category_t1050____UnicodeArabicPresentationFormsA_130_DefaultValue,
	&Category_t1050____UnicodeCombiningHalfMarks_131_DefaultValue,
	&Category_t1050____UnicodeCJKCompatibilityForms_132_DefaultValue,
	&Category_t1050____UnicodeSmallFormVariants_133_DefaultValue,
	&Category_t1050____UnicodeArabicPresentationFormsB_134_DefaultValue,
	&Category_t1050____UnicodeSpecials_135_DefaultValue,
	&Category_t1050____UnicodeHalfwidthandFullwidthForms_136_DefaultValue,
	&Category_t1050____UnicodeOldItalic_137_DefaultValue,
	&Category_t1050____UnicodeGothic_138_DefaultValue,
	&Category_t1050____UnicodeDeseret_139_DefaultValue,
	&Category_t1050____UnicodeByzantineMusicalSymbols_140_DefaultValue,
	&Category_t1050____UnicodeMusicalSymbols_141_DefaultValue,
	&Category_t1050____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue,
	&Category_t1050____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue,
	&Category_t1050____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue,
	&Category_t1050____UnicodeTags_145_DefaultValue,
	&Category_t1050____LastValue_146_DefaultValue,
	NULL
};
extern MethodInfo Enum_Equals_m1967_MethodInfo;
extern MethodInfo Enum_GetHashCode_m1968_MethodInfo;
extern MethodInfo Enum_ToString_m1969_MethodInfo;
extern MethodInfo Enum_ToString_m1970_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m1971_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m1972_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m1973_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m1974_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m1975_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m1976_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m1977_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m1978_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m1979_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m1980_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m1981_MethodInfo;
extern MethodInfo Enum_ToString_m1982_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m1983_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m1984_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m1985_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m1986_MethodInfo;
extern MethodInfo Enum_CompareTo_m1987_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m1988_MethodInfo;
static Il2CppMethodReference Category_t1050_VTable[] =
{
	&Enum_Equals_m1967_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Enum_GetHashCode_m1968_MethodInfo,
	&Enum_ToString_m1969_MethodInfo,
	&Enum_ToString_m1970_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1971_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1972_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1973_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1974_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1975_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1976_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1977_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1978_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1979_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1980_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1981_MethodInfo,
	&Enum_ToString_m1982_MethodInfo,
	&Enum_System_IConvertible_ToType_m1983_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1984_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1985_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1986_MethodInfo,
	&Enum_CompareTo_m1987_MethodInfo,
	&Enum_GetTypeCode_m1988_MethodInfo,
};
static bool Category_t1050_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IFormattable_t344_0_0_0;
extern Il2CppType IConvertible_t345_0_0_0;
extern Il2CppType IComparable_t346_0_0_0;
static Il2CppInterfaceOffsetPair Category_t1050_InterfacesOffsets[] = 
{
	{ &IFormattable_t344_0_0_0, 4},
	{ &IConvertible_t345_0_0_0, 5},
	{ &IComparable_t346_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Category_t1050_1_0_0;
extern Il2CppType Enum_t348_0_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t707_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Category_t1050_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Category_t1050_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t348_0_0_0/* parent */
	, Category_t1050_VTable/* vtableMethods */
	, Category_t1050_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Category_t1050_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Category"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Category_t1050_MethodInfos/* methods */
	, NULL/* properties */
	, Category_t1050_FieldInfos/* fields */
	, NULL/* events */
	, &UInt16_t707_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Category_t1050_0_0_0/* byval_arg */
	, &Category_t1050_1_0_0/* this_arg */
	, &Category_t1050_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Category_t1050_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Category_t1050)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Category_t1050)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 146/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtils.h"
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern TypeInfo CategoryUtils_t1051_il2cpp_TypeInfo;
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo CategoryUtils_t1051_CategoryUtils_CategoryFromName_m4390_ParameterInfos[] = 
{
	{"name", 0, 134218221, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Category_t1050_0_0_0;
extern void* RuntimeInvoker_Category_t1050_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
MethodInfo CategoryUtils_CategoryFromName_m4390_MethodInfo = 
{
	"CategoryFromName"/* name */
	, (methodPointerType)&CategoryUtils_CategoryFromName_m4390/* method */
	, &CategoryUtils_t1051_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1050_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1050_Object_t/* invoker_method */
	, CategoryUtils_t1051_CategoryUtils_CategoryFromName_m4390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo CategoryUtils_t1051_CategoryUtils_IsCategory_m4391_ParameterInfos[] = 
{
	{"cat", 0, 134218222, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"c", 1, 134218223, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_UInt16_t707_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
MethodInfo CategoryUtils_IsCategory_m4391_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m4391/* method */
	, &CategoryUtils_t1051_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_UInt16_t707_Int16_t386/* invoker_method */
	, CategoryUtils_t1051_CategoryUtils_IsCategory_m4391_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnicodeCategory_t1149_0_0_0;
extern Il2CppType UnicodeCategory_t1149_0_0_0;
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo CategoryUtils_t1051_CategoryUtils_IsCategory_m4392_ParameterInfos[] = 
{
	{"uc", 0, 134218224, &EmptyCustomAttributesCache, &UnicodeCategory_t1149_0_0_0},
	{"c", 1, 134218225, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
MethodInfo CategoryUtils_IsCategory_m4392_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m4392/* method */
	, &CategoryUtils_t1051_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33_Int16_t386/* invoker_method */
	, CategoryUtils_t1051_CategoryUtils_IsCategory_m4392_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CategoryUtils_t1051_MethodInfos[] =
{
	&CategoryUtils_CategoryFromName_m4390_MethodInfo,
	&CategoryUtils_IsCategory_m4391_MethodInfo,
	&CategoryUtils_IsCategory_m4392_MethodInfo,
	NULL
};
static Il2CppMethodReference CategoryUtils_t1051_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool CategoryUtils_t1051_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CategoryUtils_t1051_0_0_0;
extern Il2CppType CategoryUtils_t1051_1_0_0;
struct CategoryUtils_t1051;
const Il2CppTypeDefinitionMetadata CategoryUtils_t1051_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CategoryUtils_t1051_VTable/* vtableMethods */
	, CategoryUtils_t1051_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CategoryUtils_t1051_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CategoryUtils"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, CategoryUtils_t1051_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CategoryUtils_t1051_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CategoryUtils_t1051_0_0_0/* byval_arg */
	, &CategoryUtils_t1051_1_0_0/* this_arg */
	, &CategoryUtils_t1051_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CategoryUtils_t1051)/* instance_size */
	, sizeof (CategoryUtils_t1051)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern TypeInfo LinkRef_t1052_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkRef::.ctor()
MethodInfo LinkRef__ctor_m4393_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkRef__ctor_m4393/* method */
	, &LinkRef_t1052_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkRef_t1052_MethodInfos[] =
{
	&LinkRef__ctor_m4393_MethodInfo,
	NULL
};
static Il2CppMethodReference LinkRef_t1052_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool LinkRef_t1052_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkRef_t1052_0_0_0;
extern Il2CppType LinkRef_t1052_1_0_0;
struct LinkRef_t1052;
const Il2CppTypeDefinitionMetadata LinkRef_t1052_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LinkRef_t1052_VTable/* vtableMethods */
	, LinkRef_t1052_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkRef_t1052_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkRef"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkRef_t1052_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &LinkRef_t1052_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkRef_t1052_0_0_0/* byval_arg */
	, &LinkRef_t1052_1_0_0/* this_arg */
	, &LinkRef_t1052_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkRef_t1052)/* instance_size */
	, sizeof (LinkRef_t1052)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.ICompiler
extern TypeInfo ICompiler_t1078_il2cpp_TypeInfo;
extern Il2CppType IMachineFactory_t1040_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.ICompiler::GetMachineFactory()
MethodInfo ICompiler_GetMachineFactory_m4965_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1040_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFalse()
MethodInfo ICompiler_EmitFalse_m5022_MethodInfo = 
{
	"EmitFalse"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTrue()
MethodInfo ICompiler_EmitTrue_m5009_MethodInfo = 
{
	"EmitTrue"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitCharacter_m5026_ParameterInfos[] = 
{
	{"c", 0, 134218226, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"negate", 1, 134218227, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 2, 134218228, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 3, 134218229, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCharacter_m5026_MethodInfo = 
{
	"EmitCharacter"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitCharacter_m5026_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitCategory_m5033_ParameterInfos[] = 
{
	{"cat", 0, 134218230, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218231, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218232, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCategory_m5033_MethodInfo = 
{
	"EmitCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitCategory_m5033_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitNotCategory_m5034_ParameterInfos[] = 
{
	{"cat", 0, 134218233, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218234, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218235, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitNotCategory_m5034_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitNotCategory_m5034_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitRange_m5032_ParameterInfos[] = 
{
	{"lo", 0, 134218236, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"hi", 1, 134218237, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"negate", 2, 134218238, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 3, 134218239, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 4, 134218240, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_Int16_t386_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitRange_m5032_MethodInfo = 
{
	"EmitRange"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_Int16_t386_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitRange_m5032_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType BitArray_t1058_0_0_0;
extern Il2CppType BitArray_t1058_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitSet_m5031_ParameterInfos[] = 
{
	{"lo", 0, 134218241, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"set", 1, 134218242, &EmptyCustomAttributesCache, &BitArray_t1058_0_0_0},
	{"negate", 2, 134218243, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 3, 134218244, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 4, 134218245, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_Object_t_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitSet_m5031_MethodInfo = 
{
	"EmitSet"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_Object_t_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitSet_m5031_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitString_m5008_ParameterInfos[] = 
{
	{"str", 0, 134218246, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218247, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218248, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitString_m5008_MethodInfo = 
{
	"EmitString"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitString_m5008_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1046_0_0_0;
extern Il2CppType Position_t1046_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitPosition_m5007_ParameterInfos[] = 
{
	{"pos", 0, 134218249, &EmptyCustomAttributesCache, &Position_t1046_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo ICompiler_EmitPosition_m5007_MethodInfo = 
{
	"EmitPosition"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitPosition_m5007_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitOpen_m5011_ParameterInfos[] = 
{
	{"gid", 0, 134218250, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32)
MethodInfo ICompiler_EmitOpen_m5011_MethodInfo = 
{
	"EmitOpen"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitOpen_m5011_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitClose_m5012_ParameterInfos[] = 
{
	{"gid", 0, 134218251, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32)
MethodInfo ICompiler_EmitClose_m5012_MethodInfo = 
{
	"EmitClose"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitClose_m5012_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitBalanceStart_m5013_ParameterInfos[] = 
{
	{"gid", 0, 134218252, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"balance", 1, 134218253, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"capture", 2, 134218254, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"tail", 3, 134218255, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBalanceStart_m5013_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitBalanceStart_m5013_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalance()
MethodInfo ICompiler_EmitBalance_m5014_MethodInfo = 
{
	"EmitBalance"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitReference_m5027_ParameterInfos[] = 
{
	{"gid", 0, 134218256, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"ignore", 1, 134218257, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218258, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitReference_m5027_MethodInfo = 
{
	"EmitReference"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_SByte_t350_SByte_t350/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitReference_m5027_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitIfDefined_m5019_ParameterInfos[] = 
{
	{"gid", 0, 134218259, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"tail", 1, 134218260, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIfDefined_m5019_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitIfDefined_m5019_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitSub_m5015_ParameterInfos[] = 
{
	{"tail", 0, 134218261, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitSub_m5015_MethodInfo = 
{
	"EmitSub"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitSub_m5015_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitTest_m5021_ParameterInfos[] = 
{
	{"yes", 0, 134218262, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
	{"tail", 1, 134218263, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitTest_m5021_MethodInfo = 
{
	"EmitTest"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitTest_m5021_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitBranch_m5023_ParameterInfos[] = 
{
	{"next", 0, 134218264, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBranch_m5023_MethodInfo = 
{
	"EmitBranch"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitBranch_m5023_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitJump_m5020_ParameterInfos[] = 
{
	{"target", 0, 134218265, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitJump_m5020_MethodInfo = 
{
	"EmitJump"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitJump_m5020_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitRepeat_m5016_ParameterInfos[] = 
{
	{"min", 0, 134218266, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 1, 134218267, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 2, 134218268, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"until", 3, 134218269, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitRepeat_m5016_MethodInfo = 
{
	"EmitRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitRepeat_m5016_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitUntil_m5017_ParameterInfos[] = 
{
	{"repeat", 0, 134218270, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitUntil_m5017_MethodInfo = 
{
	"EmitUntil"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitUntil_m5017_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitIn_m5030_ParameterInfos[] = 
{
	{"tail", 0, 134218271, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIn_m5030_MethodInfo = 
{
	"EmitIn"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitIn_m5030_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitInfo_m5004_ParameterInfos[] = 
{
	{"count", 0, 134218272, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"min", 1, 134218273, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 2, 134218274, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo ICompiler_EmitInfo_m5004_MethodInfo = 
{
	"EmitInfo"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Int32_t33/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitInfo_m5004_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitFastRepeat_m5018_ParameterInfos[] = 
{
	{"min", 0, 134218275, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 1, 134218276, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 2, 134218277, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"tail", 3, 134218278, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitFastRepeat_m5018_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitFastRepeat_m5018_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_EmitAnchor_m5006_ParameterInfos[] = 
{
	{"reverse", 0, 134218279, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"offset", 1, 134218280, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"tail", 2, 134218281, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitAnchor_m5006_MethodInfo = 
{
	"EmitAnchor"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350_Int32_t33_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_EmitAnchor_m5006_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd()
MethodInfo ICompiler_EmitBranchEnd_m5024_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd()
MethodInfo ICompiler_EmitAlternationEnd_m5025_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink()
MethodInfo ICompiler_NewLink_m5005_MethodInfo = 
{
	"NewLink"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo ICompiler_t1078_ICompiler_ResolveLink_m5010_ParameterInfos[] = 
{
	{"link", 0, 134218282, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_ResolveLink_m5010_MethodInfo = 
{
	"ResolveLink"/* name */
	, NULL/* method */
	, &ICompiler_t1078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ICompiler_t1078_ICompiler_ResolveLink_m5010_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ICompiler_t1078_MethodInfos[] =
{
	&ICompiler_GetMachineFactory_m4965_MethodInfo,
	&ICompiler_EmitFalse_m5022_MethodInfo,
	&ICompiler_EmitTrue_m5009_MethodInfo,
	&ICompiler_EmitCharacter_m5026_MethodInfo,
	&ICompiler_EmitCategory_m5033_MethodInfo,
	&ICompiler_EmitNotCategory_m5034_MethodInfo,
	&ICompiler_EmitRange_m5032_MethodInfo,
	&ICompiler_EmitSet_m5031_MethodInfo,
	&ICompiler_EmitString_m5008_MethodInfo,
	&ICompiler_EmitPosition_m5007_MethodInfo,
	&ICompiler_EmitOpen_m5011_MethodInfo,
	&ICompiler_EmitClose_m5012_MethodInfo,
	&ICompiler_EmitBalanceStart_m5013_MethodInfo,
	&ICompiler_EmitBalance_m5014_MethodInfo,
	&ICompiler_EmitReference_m5027_MethodInfo,
	&ICompiler_EmitIfDefined_m5019_MethodInfo,
	&ICompiler_EmitSub_m5015_MethodInfo,
	&ICompiler_EmitTest_m5021_MethodInfo,
	&ICompiler_EmitBranch_m5023_MethodInfo,
	&ICompiler_EmitJump_m5020_MethodInfo,
	&ICompiler_EmitRepeat_m5016_MethodInfo,
	&ICompiler_EmitUntil_m5017_MethodInfo,
	&ICompiler_EmitIn_m5030_MethodInfo,
	&ICompiler_EmitInfo_m5004_MethodInfo,
	&ICompiler_EmitFastRepeat_m5018_MethodInfo,
	&ICompiler_EmitAnchor_m5006_MethodInfo,
	&ICompiler_EmitBranchEnd_m5024_MethodInfo,
	&ICompiler_EmitAlternationEnd_m5025_MethodInfo,
	&ICompiler_NewLink_m5005_MethodInfo,
	&ICompiler_ResolveLink_m5010_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType ICompiler_t1078_1_0_0;
struct ICompiler_t1078;
const Il2CppTypeDefinitionMetadata ICompiler_t1078_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ICompiler_t1078_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ICompiler_t1078_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ICompiler_t1078_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICompiler_t1078_0_0_0/* byval_arg */
	, &ICompiler_t1078_1_0_0/* this_arg */
	, &ICompiler_t1078_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 30/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern TypeInfo InterpreterFactory_t1053_il2cpp_TypeInfo;
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t964_0_0_0;
extern Il2CppType UInt16U5BU5D_t964_0_0_0;
static ParameterInfo InterpreterFactory_t1053_InterpreterFactory__ctor_m4394_ParameterInfos[] = 
{
	{"pattern", 0, 134218283, &EmptyCustomAttributesCache, &UInt16U5BU5D_t964_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
MethodInfo InterpreterFactory__ctor_m4394_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InterpreterFactory__ctor_m4394/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, InterpreterFactory_t1053_InterpreterFactory__ctor_m4394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachine_t1036_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
MethodInfo InterpreterFactory_NewInstance_m4395_MethodInfo = 
{
	"NewInstance"/* name */
	, (methodPointerType)&InterpreterFactory_NewInstance_m4395/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1036_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
MethodInfo InterpreterFactory_get_GroupCount_m4396_MethodInfo = 
{
	"get_GroupCount"/* name */
	, (methodPointerType)&InterpreterFactory_get_GroupCount_m4396/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
MethodInfo InterpreterFactory_get_Gap_m4397_MethodInfo = 
{
	"get_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_get_Gap_m4397/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo InterpreterFactory_t1053_InterpreterFactory_set_Gap_m4398_ParameterInfos[] = 
{
	{"value", 0, 134218284, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
MethodInfo InterpreterFactory_set_Gap_m4398_MethodInfo = 
{
	"set_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_set_Gap_m4398/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, InterpreterFactory_t1053_InterpreterFactory_set_Gap_m4398_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t926_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
MethodInfo InterpreterFactory_get_Mapping_m4399_MethodInfo = 
{
	"get_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_Mapping_m4399/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t926_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t926_0_0_0;
extern Il2CppType IDictionary_t926_0_0_0;
static ParameterInfo InterpreterFactory_t1053_InterpreterFactory_set_Mapping_m4400_ParameterInfos[] = 
{
	{"value", 0, 134218285, &EmptyCustomAttributesCache, &IDictionary_t926_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
MethodInfo InterpreterFactory_set_Mapping_m4400_MethodInfo = 
{
	"set_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_Mapping_m4400/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, InterpreterFactory_t1053_InterpreterFactory_set_Mapping_m4400_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
MethodInfo InterpreterFactory_get_NamesMapping_m4401_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_NamesMapping_m4401/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t433_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t433_0_0_0;
extern Il2CppType StringU5BU5D_t433_0_0_0;
static ParameterInfo InterpreterFactory_t1053_InterpreterFactory_set_NamesMapping_m4402_ParameterInfos[] = 
{
	{"value", 0, 134218286, &EmptyCustomAttributesCache, &StringU5BU5D_t433_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
MethodInfo InterpreterFactory_set_NamesMapping_m4402_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_NamesMapping_m4402/* method */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, InterpreterFactory_t1053_InterpreterFactory_set_NamesMapping_m4402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InterpreterFactory_t1053_MethodInfos[] =
{
	&InterpreterFactory__ctor_m4394_MethodInfo,
	&InterpreterFactory_NewInstance_m4395_MethodInfo,
	&InterpreterFactory_get_GroupCount_m4396_MethodInfo,
	&InterpreterFactory_get_Gap_m4397_MethodInfo,
	&InterpreterFactory_set_Gap_m4398_MethodInfo,
	&InterpreterFactory_get_Mapping_m4399_MethodInfo,
	&InterpreterFactory_set_Mapping_m4400_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m4401_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m4402_MethodInfo,
	NULL
};
extern Il2CppType IDictionary_t926_0_0_1;
FieldInfo InterpreterFactory_t1053____mapping_0_FieldInfo = 
{
	"mapping"/* name */
	, &IDictionary_t926_0_0_1/* type */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1053, ___mapping_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UInt16U5BU5D_t964_0_0_1;
FieldInfo InterpreterFactory_t1053____pattern_1_FieldInfo = 
{
	"pattern"/* name */
	, &UInt16U5BU5D_t964_0_0_1/* type */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1053, ___pattern_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t433_0_0_1;
FieldInfo InterpreterFactory_t1053____namesMapping_2_FieldInfo = 
{
	"namesMapping"/* name */
	, &StringU5BU5D_t433_0_0_1/* type */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1053, ___namesMapping_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo InterpreterFactory_t1053____gap_3_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t33_0_0_1/* type */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1053, ___gap_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InterpreterFactory_t1053_FieldInfos[] =
{
	&InterpreterFactory_t1053____mapping_0_FieldInfo,
	&InterpreterFactory_t1053____pattern_1_FieldInfo,
	&InterpreterFactory_t1053____namesMapping_2_FieldInfo,
	&InterpreterFactory_t1053____gap_3_FieldInfo,
	NULL
};
extern MethodInfo InterpreterFactory_get_GroupCount_m4396_MethodInfo;
static PropertyInfo InterpreterFactory_t1053____GroupCount_PropertyInfo = 
{
	&InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &InterpreterFactory_get_GroupCount_m4396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Gap_m4397_MethodInfo;
extern MethodInfo InterpreterFactory_set_Gap_m4398_MethodInfo;
static PropertyInfo InterpreterFactory_t1053____Gap_PropertyInfo = 
{
	&InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &InterpreterFactory_get_Gap_m4397_MethodInfo/* get */
	, &InterpreterFactory_set_Gap_m4398_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Mapping_m4399_MethodInfo;
extern MethodInfo InterpreterFactory_set_Mapping_m4400_MethodInfo;
static PropertyInfo InterpreterFactory_t1053____Mapping_PropertyInfo = 
{
	&InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &InterpreterFactory_get_Mapping_m4399_MethodInfo/* get */
	, &InterpreterFactory_set_Mapping_m4400_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_NamesMapping_m4401_MethodInfo;
extern MethodInfo InterpreterFactory_set_NamesMapping_m4402_MethodInfo;
static PropertyInfo InterpreterFactory_t1053____NamesMapping_PropertyInfo = 
{
	&InterpreterFactory_t1053_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &InterpreterFactory_get_NamesMapping_m4401_MethodInfo/* get */
	, &InterpreterFactory_set_NamesMapping_m4402_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InterpreterFactory_t1053_PropertyInfos[] =
{
	&InterpreterFactory_t1053____GroupCount_PropertyInfo,
	&InterpreterFactory_t1053____Gap_PropertyInfo,
	&InterpreterFactory_t1053____Mapping_PropertyInfo,
	&InterpreterFactory_t1053____NamesMapping_PropertyInfo,
	NULL
};
extern MethodInfo InterpreterFactory_NewInstance_m4395_MethodInfo;
static Il2CppMethodReference InterpreterFactory_t1053_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&InterpreterFactory_NewInstance_m4395_MethodInfo,
	&InterpreterFactory_get_Mapping_m4399_MethodInfo,
	&InterpreterFactory_set_Mapping_m4400_MethodInfo,
	&InterpreterFactory_get_GroupCount_m4396_MethodInfo,
	&InterpreterFactory_get_Gap_m4397_MethodInfo,
	&InterpreterFactory_set_Gap_m4398_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m4401_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m4402_MethodInfo,
};
static bool InterpreterFactory_t1053_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* InterpreterFactory_t1053_InterfacesTypeInfos[] = 
{
	&IMachineFactory_t1040_0_0_0,
};
static Il2CppInterfaceOffsetPair InterpreterFactory_t1053_InterfacesOffsets[] = 
{
	{ &IMachineFactory_t1040_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType InterpreterFactory_t1053_0_0_0;
extern Il2CppType InterpreterFactory_t1053_1_0_0;
struct InterpreterFactory_t1053;
const Il2CppTypeDefinitionMetadata InterpreterFactory_t1053_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, InterpreterFactory_t1053_InterfacesTypeInfos/* implementedInterfaces */
	, InterpreterFactory_t1053_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InterpreterFactory_t1053_VTable/* vtableMethods */
	, InterpreterFactory_t1053_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo InterpreterFactory_t1053_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "InterpreterFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, InterpreterFactory_t1053_MethodInfos/* methods */
	, InterpreterFactory_t1053_PropertyInfos/* properties */
	, InterpreterFactory_t1053_FieldInfos/* fields */
	, NULL/* events */
	, &InterpreterFactory_t1053_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InterpreterFactory_t1053_0_0_0/* byval_arg */
	, &InterpreterFactory_t1053_1_0_0/* this_arg */
	, &InterpreterFactory_t1053_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InterpreterFactory_t1053)/* instance_size */
	, sizeof (InterpreterFactory_t1053)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 4/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern TypeInfo Link_t1054_il2cpp_TypeInfo;
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_PatterMethodDeclarations.h"
static MethodInfo* Link_t1054_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Link_t1054____base_addr_0_FieldInfo = 
{
	"base_addr"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Link_t1054_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1054, ___base_addr_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Link_t1054____offset_addr_1_FieldInfo = 
{
	"offset_addr"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Link_t1054_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1054, ___offset_addr_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Link_t1054_FieldInfos[] =
{
	&Link_t1054____base_addr_0_FieldInfo,
	&Link_t1054____offset_addr_1_FieldInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m2024_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m2025_MethodInfo;
extern MethodInfo ValueType_ToString_m2033_MethodInfo;
static Il2CppMethodReference Link_t1054_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool Link_t1054_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Link_t1054_0_0_0;
extern Il2CppType Link_t1054_1_0_0;
extern Il2CppType ValueType_t370_0_0_0;
extern TypeInfo PatternLinkStack_t1055_il2cpp_TypeInfo;
extern Il2CppType PatternLinkStack_t1055_0_0_0;
const Il2CppTypeDefinitionMetadata Link_t1054_DefinitionMetadata = 
{
	&PatternLinkStack_t1055_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, Link_t1054_VTable/* vtableMethods */
	, Link_t1054_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Link_t1054_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Link"/* name */
	, ""/* namespaze */
	, Link_t1054_MethodInfos/* methods */
	, NULL/* properties */
	, Link_t1054_FieldInfos/* fields */
	, NULL/* events */
	, &Link_t1054_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Link_t1054_0_0_0/* byval_arg */
	, &Link_t1054_1_0_0/* this_arg */
	, &Link_t1054_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Link_t1054)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Link_t1054)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Link_t1054 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
MethodInfo PatternLinkStack__ctor_m4403_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternLinkStack__ctor_m4403/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternLinkStack_t1055_PatternLinkStack_set_BaseAddress_m4404_ParameterInfos[] = 
{
	{"value", 0, 134218357, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
MethodInfo PatternLinkStack_set_BaseAddress_m4404_MethodInfo = 
{
	"set_BaseAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_BaseAddress_m4404/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, PatternLinkStack_t1055_PatternLinkStack_set_BaseAddress_m4404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
MethodInfo PatternLinkStack_get_OffsetAddress_m4405_MethodInfo = 
{
	"get_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_get_OffsetAddress_m4405/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternLinkStack_t1055_PatternLinkStack_set_OffsetAddress_m4406_ParameterInfos[] = 
{
	{"value", 0, 134218358, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
MethodInfo PatternLinkStack_set_OffsetAddress_m4406_MethodInfo = 
{
	"set_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_OffsetAddress_m4406/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, PatternLinkStack_t1055_PatternLinkStack_set_OffsetAddress_m4406_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternLinkStack_t1055_PatternLinkStack_GetOffset_m4407_ParameterInfos[] = 
{
	{"target_addr", 0, 134218359, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
MethodInfo PatternLinkStack_GetOffset_m4407_MethodInfo = 
{
	"GetOffset"/* name */
	, (methodPointerType)&PatternLinkStack_GetOffset_m4407/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32_t33/* invoker_method */
	, PatternLinkStack_t1055_PatternLinkStack_GetOffset_m4407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
MethodInfo PatternLinkStack_GetCurrent_m4408_MethodInfo = 
{
	"GetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_GetCurrent_m4408/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PatternLinkStack_t1055_PatternLinkStack_SetCurrent_m4409_ParameterInfos[] = 
{
	{"l", 0, 134218360, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
MethodInfo PatternLinkStack_SetCurrent_m4409_MethodInfo = 
{
	"SetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_SetCurrent_m4409/* method */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternLinkStack_t1055_PatternLinkStack_SetCurrent_m4409_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternLinkStack_t1055_MethodInfos[] =
{
	&PatternLinkStack__ctor_m4403_MethodInfo,
	&PatternLinkStack_set_BaseAddress_m4404_MethodInfo,
	&PatternLinkStack_get_OffsetAddress_m4405_MethodInfo,
	&PatternLinkStack_set_OffsetAddress_m4406_MethodInfo,
	&PatternLinkStack_GetOffset_m4407_MethodInfo,
	&PatternLinkStack_GetCurrent_m4408_MethodInfo,
	&PatternLinkStack_SetCurrent_m4409_MethodInfo,
	NULL
};
extern Il2CppType Link_t1054_0_0_1;
FieldInfo PatternLinkStack_t1055____link_1_FieldInfo = 
{
	"link"/* name */
	, &Link_t1054_0_0_1/* type */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* parent */
	, offsetof(PatternLinkStack_t1055, ___link_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternLinkStack_t1055_FieldInfos[] =
{
	&PatternLinkStack_t1055____link_1_FieldInfo,
	NULL
};
extern MethodInfo PatternLinkStack_set_BaseAddress_m4404_MethodInfo;
static PropertyInfo PatternLinkStack_t1055____BaseAddress_PropertyInfo = 
{
	&PatternLinkStack_t1055_il2cpp_TypeInfo/* parent */
	, "BaseAddress"/* name */
	, NULL/* get */
	, &PatternLinkStack_set_BaseAddress_m4404_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo PatternLinkStack_get_OffsetAddress_m4405_MethodInfo;
extern MethodInfo PatternLinkStack_set_OffsetAddress_m4406_MethodInfo;
static PropertyInfo PatternLinkStack_t1055____OffsetAddress_PropertyInfo = 
{
	&PatternLinkStack_t1055_il2cpp_TypeInfo/* parent */
	, "OffsetAddress"/* name */
	, &PatternLinkStack_get_OffsetAddress_m4405_MethodInfo/* get */
	, &PatternLinkStack_set_OffsetAddress_m4406_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternLinkStack_t1055_PropertyInfos[] =
{
	&PatternLinkStack_t1055____BaseAddress_PropertyInfo,
	&PatternLinkStack_t1055____OffsetAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternLinkStack_t1055_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Link_t1054_0_0_0,
};
extern MethodInfo PatternLinkStack_GetCurrent_m4408_MethodInfo;
extern MethodInfo PatternLinkStack_SetCurrent_m4409_MethodInfo;
static Il2CppMethodReference PatternLinkStack_t1055_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&PatternLinkStack_GetCurrent_m4408_MethodInfo,
	&PatternLinkStack_SetCurrent_m4409_MethodInfo,
};
static bool PatternLinkStack_t1055_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternLinkStack_t1055_1_0_0;
extern Il2CppType LinkStack_t1056_0_0_0;
extern TypeInfo PatternCompiler_t1057_il2cpp_TypeInfo;
extern Il2CppType PatternCompiler_t1057_0_0_0;
struct PatternLinkStack_t1055;
const Il2CppTypeDefinitionMetadata PatternLinkStack_t1055_DefinitionMetadata = 
{
	&PatternCompiler_t1057_0_0_0/* declaringType */
	, PatternLinkStack_t1055_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkStack_t1056_0_0_0/* parent */
	, PatternLinkStack_t1055_VTable/* vtableMethods */
	, PatternLinkStack_t1055_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternLinkStack_t1055_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternLinkStack"/* name */
	, ""/* namespaze */
	, PatternLinkStack_t1055_MethodInfos/* methods */
	, PatternLinkStack_t1055_PropertyInfos/* properties */
	, PatternLinkStack_t1055_FieldInfos/* fields */
	, NULL/* events */
	, &PatternLinkStack_t1055_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternLinkStack_t1055_0_0_0/* byval_arg */
	, &PatternLinkStack_t1055_1_0_0/* this_arg */
	, &PatternLinkStack_t1055_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternLinkStack_t1055)/* instance_size */
	, sizeof (PatternLinkStack_t1055)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
MethodInfo PatternCompiler__ctor_m4410_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternCompiler__ctor_m4410/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1044_0_0_0;
extern Il2CppType OpCode_t1044_0_0_0;
extern Il2CppType OpFlags_t1045_0_0_0;
extern Il2CppType OpFlags_t1045_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EncodeOp_m4411_ParameterInfos[] = 
{
	{"op", 0, 134218287, &EmptyCustomAttributesCache, &OpCode_t1044_0_0_0},
	{"flags", 1, 134218288, &EmptyCustomAttributesCache, &OpFlags_t1045_0_0_0},
};
extern Il2CppType UInt16_t707_0_0_0;
extern void* RuntimeInvoker_UInt16_t707_UInt16_t707_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_EncodeOp_m4411_MethodInfo = 
{
	"EncodeOp"/* name */
	, (methodPointerType)&PatternCompiler_EncodeOp_m4411/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t707_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t707_UInt16_t707_UInt16_t707/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EncodeOp_m4411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachineFactory_t1040_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
MethodInfo PatternCompiler_GetMachineFactory_m4412_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, (methodPointerType)&PatternCompiler_GetMachineFactory_m4412/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1040_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
MethodInfo PatternCompiler_EmitFalse_m4413_MethodInfo = 
{
	"EmitFalse"/* name */
	, (methodPointerType)&PatternCompiler_EmitFalse_m4413/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
MethodInfo PatternCompiler_EmitTrue_m4414_MethodInfo = 
{
	"EmitTrue"/* name */
	, (methodPointerType)&PatternCompiler_EmitTrue_m4414/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitCount_m4415_ParameterInfos[] = 
{
	{"count", 0, 134218289, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
MethodInfo PatternCompiler_EmitCount_m4415_MethodInfo = 
{
	"EmitCount"/* name */
	, (methodPointerType)&PatternCompiler_EmitCount_m4415/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitCount_m4415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitCharacter_m4416_ParameterInfos[] = 
{
	{"c", 0, 134218290, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"negate", 1, 134218291, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 2, 134218292, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 3, 134218293, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCharacter_m4416_MethodInfo = 
{
	"EmitCharacter"/* name */
	, (methodPointerType)&PatternCompiler_EmitCharacter_m4416/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitCharacter_m4416_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitCategory_m4417_ParameterInfos[] = 
{
	{"cat", 0, 134218294, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218295, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218296, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCategory_m4417_MethodInfo = 
{
	"EmitCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitCategory_m4417/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitCategory_m4417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitNotCategory_m4418_ParameterInfos[] = 
{
	{"cat", 0, 134218297, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218298, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218299, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitNotCategory_m4418_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitNotCategory_m4418/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitNotCategory_m4418_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitRange_m4419_ParameterInfos[] = 
{
	{"lo", 0, 134218300, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"hi", 1, 134218301, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"negate", 2, 134218302, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 3, 134218303, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 4, 134218304, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_Int16_t386_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitRange_m4419_MethodInfo = 
{
	"EmitRange"/* name */
	, (methodPointerType)&PatternCompiler_EmitRange_m4419/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_Int16_t386_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitRange_m4419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType BitArray_t1058_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitSet_m4420_ParameterInfos[] = 
{
	{"lo", 0, 134218305, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"set", 1, 134218306, &EmptyCustomAttributesCache, &BitArray_t1058_0_0_0},
	{"negate", 2, 134218307, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 3, 134218308, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 4, 134218309, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_Object_t_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitSet_m4420_MethodInfo = 
{
	"EmitSet"/* name */
	, (methodPointerType)&PatternCompiler_EmitSet_m4420/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_Object_t_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitSet_m4420_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitString_m4421_ParameterInfos[] = 
{
	{"str", 0, 134218310, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218311, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218312, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitString_m4421_MethodInfo = 
{
	"EmitString"/* name */
	, (methodPointerType)&PatternCompiler_EmitString_m4421/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitString_m4421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1046_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitPosition_m4422_ParameterInfos[] = 
{
	{"pos", 0, 134218313, &EmptyCustomAttributesCache, &Position_t1046_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo PatternCompiler_EmitPosition_m4422_MethodInfo = 
{
	"EmitPosition"/* name */
	, (methodPointerType)&PatternCompiler_EmitPosition_m4422/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitPosition_m4422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitOpen_m4423_ParameterInfos[] = 
{
	{"gid", 0, 134218314, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
MethodInfo PatternCompiler_EmitOpen_m4423_MethodInfo = 
{
	"EmitOpen"/* name */
	, (methodPointerType)&PatternCompiler_EmitOpen_m4423/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitOpen_m4423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitClose_m4424_ParameterInfos[] = 
{
	{"gid", 0, 134218315, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
MethodInfo PatternCompiler_EmitClose_m4424_MethodInfo = 
{
	"EmitClose"/* name */
	, (methodPointerType)&PatternCompiler_EmitClose_m4424/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitClose_m4424_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitBalanceStart_m4425_ParameterInfos[] = 
{
	{"gid", 0, 134218316, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"balance", 1, 134218317, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"capture", 2, 134218318, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"tail", 3, 134218319, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBalanceStart_m4425_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalanceStart_m4425/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitBalanceStart_m4425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
MethodInfo PatternCompiler_EmitBalance_m4426_MethodInfo = 
{
	"EmitBalance"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalance_m4426/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitReference_m4427_ParameterInfos[] = 
{
	{"gid", 0, 134218320, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"ignore", 1, 134218321, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218322, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitReference_m4427_MethodInfo = 
{
	"EmitReference"/* name */
	, (methodPointerType)&PatternCompiler_EmitReference_m4427/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitReference_m4427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitIfDefined_m4428_ParameterInfos[] = 
{
	{"gid", 0, 134218323, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"tail", 1, 134218324, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIfDefined_m4428_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, (methodPointerType)&PatternCompiler_EmitIfDefined_m4428/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitIfDefined_m4428_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitSub_m4429_ParameterInfos[] = 
{
	{"tail", 0, 134218325, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitSub_m4429_MethodInfo = 
{
	"EmitSub"/* name */
	, (methodPointerType)&PatternCompiler_EmitSub_m4429/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitSub_m4429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitTest_m4430_ParameterInfos[] = 
{
	{"yes", 0, 134218326, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
	{"tail", 1, 134218327, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitTest_m4430_MethodInfo = 
{
	"EmitTest"/* name */
	, (methodPointerType)&PatternCompiler_EmitTest_m4430/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitTest_m4430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitBranch_m4431_ParameterInfos[] = 
{
	{"next", 0, 134218328, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBranch_m4431_MethodInfo = 
{
	"EmitBranch"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranch_m4431/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitBranch_m4431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitJump_m4432_ParameterInfos[] = 
{
	{"target", 0, 134218329, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitJump_m4432_MethodInfo = 
{
	"EmitJump"/* name */
	, (methodPointerType)&PatternCompiler_EmitJump_m4432/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitJump_m4432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitRepeat_m4433_ParameterInfos[] = 
{
	{"min", 0, 134218330, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 1, 134218331, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 2, 134218332, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"until", 3, 134218333, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitRepeat_m4433_MethodInfo = 
{
	"EmitRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitRepeat_m4433/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitRepeat_m4433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitUntil_m4434_ParameterInfos[] = 
{
	{"repeat", 0, 134218334, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitUntil_m4434_MethodInfo = 
{
	"EmitUntil"/* name */
	, (methodPointerType)&PatternCompiler_EmitUntil_m4434/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitUntil_m4434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitFastRepeat_m4435_ParameterInfos[] = 
{
	{"min", 0, 134218335, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 1, 134218336, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 2, 134218337, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"tail", 3, 134218338, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitFastRepeat_m4435_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitFastRepeat_m4435/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitFastRepeat_m4435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitIn_m4436_ParameterInfos[] = 
{
	{"tail", 0, 134218339, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIn_m4436_MethodInfo = 
{
	"EmitIn"/* name */
	, (methodPointerType)&PatternCompiler_EmitIn_m4436/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitIn_m4436_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitAnchor_m4437_ParameterInfos[] = 
{
	{"reverse", 0, 134218340, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"offset", 1, 134218341, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"tail", 2, 134218342, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitAnchor_m4437_MethodInfo = 
{
	"EmitAnchor"/* name */
	, (methodPointerType)&PatternCompiler_EmitAnchor_m4437/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350_Int32_t33_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitAnchor_m4437_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitInfo_m4438_ParameterInfos[] = 
{
	{"count", 0, 134218343, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"min", 1, 134218344, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 2, 134218345, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo PatternCompiler_EmitInfo_m4438_MethodInfo = 
{
	"EmitInfo"/* name */
	, (methodPointerType)&PatternCompiler_EmitInfo_m4438/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Int32_t33/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitInfo_m4438_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
MethodInfo PatternCompiler_NewLink_m4439_MethodInfo = 
{
	"NewLink"/* name */
	, (methodPointerType)&PatternCompiler_NewLink_m4439/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_ResolveLink_m4440_ParameterInfos[] = 
{
	{"lref", 0, 134218346, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_ResolveLink_m4440_MethodInfo = 
{
	"ResolveLink"/* name */
	, (methodPointerType)&PatternCompiler_ResolveLink_m4440/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_ResolveLink_m4440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
MethodInfo PatternCompiler_EmitBranchEnd_m4441_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranchEnd_m4441/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
MethodInfo PatternCompiler_EmitAlternationEnd_m4442_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitAlternationEnd_m4442/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_MakeFlags_m4443_ParameterInfos[] = 
{
	{"negate", 0, 134218347, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 1, 134218348, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218349, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"lazy", 3, 134218350, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType OpFlags_t1045_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1045_SByte_t350_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_MakeFlags_m4443_MethodInfo = 
{
	"MakeFlags"/* name */
	, (methodPointerType)&PatternCompiler_MakeFlags_m4443/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1045_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1045_SByte_t350_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_MakeFlags_m4443_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1044_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_Emit_m4444_ParameterInfos[] = 
{
	{"op", 0, 134218351, &EmptyCustomAttributesCache, &OpCode_t1044_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
MethodInfo PatternCompiler_Emit_m4444_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4444/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_Emit_m4444_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1044_0_0_0;
extern Il2CppType OpFlags_t1045_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_Emit_m4445_ParameterInfos[] = 
{
	{"op", 0, 134218352, &EmptyCustomAttributesCache, &OpCode_t1044_0_0_0},
	{"flags", 1, 134218353, &EmptyCustomAttributesCache, &OpFlags_t1045_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_Emit_m4445_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4445/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_UInt16_t707/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_Emit_m4445_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UInt16_t707_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_Emit_m4446_ParameterInfos[] = 
{
	{"word", 0, 134218354, &EmptyCustomAttributesCache, &UInt16_t707_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
MethodInfo PatternCompiler_Emit_m4446_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m4446/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_Emit_m4446_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
MethodInfo PatternCompiler_get_CurrentAddress_m4447_MethodInfo = 
{
	"get_CurrentAddress"/* name */
	, (methodPointerType)&PatternCompiler_get_CurrentAddress_m4447/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_BeginLink_m4448_ParameterInfos[] = 
{
	{"lref", 0, 134218355, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_BeginLink_m4448_MethodInfo = 
{
	"BeginLink"/* name */
	, (methodPointerType)&PatternCompiler_BeginLink_m4448/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_BeginLink_m4448_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1052_0_0_0;
static ParameterInfo PatternCompiler_t1057_PatternCompiler_EmitLink_m4449_ParameterInfos[] = 
{
	{"lref", 0, 134218356, &EmptyCustomAttributesCache, &LinkRef_t1052_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitLink_m4449_MethodInfo = 
{
	"EmitLink"/* name */
	, (methodPointerType)&PatternCompiler_EmitLink_m4449/* method */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, PatternCompiler_t1057_PatternCompiler_EmitLink_m4449_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternCompiler_t1057_MethodInfos[] =
{
	&PatternCompiler__ctor_m4410_MethodInfo,
	&PatternCompiler_EncodeOp_m4411_MethodInfo,
	&PatternCompiler_GetMachineFactory_m4412_MethodInfo,
	&PatternCompiler_EmitFalse_m4413_MethodInfo,
	&PatternCompiler_EmitTrue_m4414_MethodInfo,
	&PatternCompiler_EmitCount_m4415_MethodInfo,
	&PatternCompiler_EmitCharacter_m4416_MethodInfo,
	&PatternCompiler_EmitCategory_m4417_MethodInfo,
	&PatternCompiler_EmitNotCategory_m4418_MethodInfo,
	&PatternCompiler_EmitRange_m4419_MethodInfo,
	&PatternCompiler_EmitSet_m4420_MethodInfo,
	&PatternCompiler_EmitString_m4421_MethodInfo,
	&PatternCompiler_EmitPosition_m4422_MethodInfo,
	&PatternCompiler_EmitOpen_m4423_MethodInfo,
	&PatternCompiler_EmitClose_m4424_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m4425_MethodInfo,
	&PatternCompiler_EmitBalance_m4426_MethodInfo,
	&PatternCompiler_EmitReference_m4427_MethodInfo,
	&PatternCompiler_EmitIfDefined_m4428_MethodInfo,
	&PatternCompiler_EmitSub_m4429_MethodInfo,
	&PatternCompiler_EmitTest_m4430_MethodInfo,
	&PatternCompiler_EmitBranch_m4431_MethodInfo,
	&PatternCompiler_EmitJump_m4432_MethodInfo,
	&PatternCompiler_EmitRepeat_m4433_MethodInfo,
	&PatternCompiler_EmitUntil_m4434_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m4435_MethodInfo,
	&PatternCompiler_EmitIn_m4436_MethodInfo,
	&PatternCompiler_EmitAnchor_m4437_MethodInfo,
	&PatternCompiler_EmitInfo_m4438_MethodInfo,
	&PatternCompiler_NewLink_m4439_MethodInfo,
	&PatternCompiler_ResolveLink_m4440_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m4441_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m4442_MethodInfo,
	&PatternCompiler_MakeFlags_m4443_MethodInfo,
	&PatternCompiler_Emit_m4444_MethodInfo,
	&PatternCompiler_Emit_m4445_MethodInfo,
	&PatternCompiler_Emit_m4446_MethodInfo,
	&PatternCompiler_get_CurrentAddress_m4447_MethodInfo,
	&PatternCompiler_BeginLink_m4448_MethodInfo,
	&PatternCompiler_EmitLink_m4449_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t936_0_0_1;
FieldInfo PatternCompiler_t1057____pgm_0_FieldInfo = 
{
	"pgm"/* name */
	, &ArrayList_t936_0_0_1/* type */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* parent */
	, offsetof(PatternCompiler_t1057, ___pgm_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternCompiler_t1057_FieldInfos[] =
{
	&PatternCompiler_t1057____pgm_0_FieldInfo,
	NULL
};
extern MethodInfo PatternCompiler_get_CurrentAddress_m4447_MethodInfo;
static PropertyInfo PatternCompiler_t1057____CurrentAddress_PropertyInfo = 
{
	&PatternCompiler_t1057_il2cpp_TypeInfo/* parent */
	, "CurrentAddress"/* name */
	, &PatternCompiler_get_CurrentAddress_m4447_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternCompiler_t1057_PropertyInfos[] =
{
	&PatternCompiler_t1057____CurrentAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternCompiler_t1057_il2cpp_TypeInfo__nestedTypes[1] =
{
	&PatternLinkStack_t1055_0_0_0,
};
extern MethodInfo PatternCompiler_GetMachineFactory_m4412_MethodInfo;
extern MethodInfo PatternCompiler_EmitFalse_m4413_MethodInfo;
extern MethodInfo PatternCompiler_EmitTrue_m4414_MethodInfo;
extern MethodInfo PatternCompiler_EmitCharacter_m4416_MethodInfo;
extern MethodInfo PatternCompiler_EmitCategory_m4417_MethodInfo;
extern MethodInfo PatternCompiler_EmitNotCategory_m4418_MethodInfo;
extern MethodInfo PatternCompiler_EmitRange_m4419_MethodInfo;
extern MethodInfo PatternCompiler_EmitSet_m4420_MethodInfo;
extern MethodInfo PatternCompiler_EmitString_m4421_MethodInfo;
extern MethodInfo PatternCompiler_EmitPosition_m4422_MethodInfo;
extern MethodInfo PatternCompiler_EmitOpen_m4423_MethodInfo;
extern MethodInfo PatternCompiler_EmitClose_m4424_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalanceStart_m4425_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalance_m4426_MethodInfo;
extern MethodInfo PatternCompiler_EmitReference_m4427_MethodInfo;
extern MethodInfo PatternCompiler_EmitIfDefined_m4428_MethodInfo;
extern MethodInfo PatternCompiler_EmitSub_m4429_MethodInfo;
extern MethodInfo PatternCompiler_EmitTest_m4430_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranch_m4431_MethodInfo;
extern MethodInfo PatternCompiler_EmitJump_m4432_MethodInfo;
extern MethodInfo PatternCompiler_EmitRepeat_m4433_MethodInfo;
extern MethodInfo PatternCompiler_EmitUntil_m4434_MethodInfo;
extern MethodInfo PatternCompiler_EmitIn_m4436_MethodInfo;
extern MethodInfo PatternCompiler_EmitInfo_m4438_MethodInfo;
extern MethodInfo PatternCompiler_EmitFastRepeat_m4435_MethodInfo;
extern MethodInfo PatternCompiler_EmitAnchor_m4437_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranchEnd_m4441_MethodInfo;
extern MethodInfo PatternCompiler_EmitAlternationEnd_m4442_MethodInfo;
extern MethodInfo PatternCompiler_NewLink_m4439_MethodInfo;
extern MethodInfo PatternCompiler_ResolveLink_m4440_MethodInfo;
static Il2CppMethodReference PatternCompiler_t1057_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&PatternCompiler_GetMachineFactory_m4412_MethodInfo,
	&PatternCompiler_EmitFalse_m4413_MethodInfo,
	&PatternCompiler_EmitTrue_m4414_MethodInfo,
	&PatternCompiler_EmitCharacter_m4416_MethodInfo,
	&PatternCompiler_EmitCategory_m4417_MethodInfo,
	&PatternCompiler_EmitNotCategory_m4418_MethodInfo,
	&PatternCompiler_EmitRange_m4419_MethodInfo,
	&PatternCompiler_EmitSet_m4420_MethodInfo,
	&PatternCompiler_EmitString_m4421_MethodInfo,
	&PatternCompiler_EmitPosition_m4422_MethodInfo,
	&PatternCompiler_EmitOpen_m4423_MethodInfo,
	&PatternCompiler_EmitClose_m4424_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m4425_MethodInfo,
	&PatternCompiler_EmitBalance_m4426_MethodInfo,
	&PatternCompiler_EmitReference_m4427_MethodInfo,
	&PatternCompiler_EmitIfDefined_m4428_MethodInfo,
	&PatternCompiler_EmitSub_m4429_MethodInfo,
	&PatternCompiler_EmitTest_m4430_MethodInfo,
	&PatternCompiler_EmitBranch_m4431_MethodInfo,
	&PatternCompiler_EmitJump_m4432_MethodInfo,
	&PatternCompiler_EmitRepeat_m4433_MethodInfo,
	&PatternCompiler_EmitUntil_m4434_MethodInfo,
	&PatternCompiler_EmitIn_m4436_MethodInfo,
	&PatternCompiler_EmitInfo_m4438_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m4435_MethodInfo,
	&PatternCompiler_EmitAnchor_m4437_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m4441_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m4442_MethodInfo,
	&PatternCompiler_NewLink_m4439_MethodInfo,
	&PatternCompiler_ResolveLink_m4440_MethodInfo,
};
static bool PatternCompiler_t1057_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PatternCompiler_t1057_InterfacesTypeInfos[] = 
{
	&ICompiler_t1078_0_0_0,
};
static Il2CppInterfaceOffsetPair PatternCompiler_t1057_InterfacesOffsets[] = 
{
	{ &ICompiler_t1078_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternCompiler_t1057_1_0_0;
struct PatternCompiler_t1057;
const Il2CppTypeDefinitionMetadata PatternCompiler_t1057_DefinitionMetadata = 
{
	NULL/* declaringType */
	, PatternCompiler_t1057_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, PatternCompiler_t1057_InterfacesTypeInfos/* implementedInterfaces */
	, PatternCompiler_t1057_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PatternCompiler_t1057_VTable/* vtableMethods */
	, PatternCompiler_t1057_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternCompiler_t1057_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternCompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, PatternCompiler_t1057_MethodInfos/* methods */
	, PatternCompiler_t1057_PropertyInfos/* properties */
	, PatternCompiler_t1057_FieldInfos/* fields */
	, NULL/* events */
	, &PatternCompiler_t1057_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternCompiler_t1057_0_0_0/* byval_arg */
	, &PatternCompiler_t1057_1_0_0/* this_arg */
	, &PatternCompiler_t1057_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternCompiler_t1057)/* instance_size */
	, sizeof (PatternCompiler_t1057)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 40/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 34/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern TypeInfo LinkStack_t1056_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
MethodInfo LinkStack__ctor_m4450_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkStack__ctor_m4450/* method */
	, &LinkStack_t1056_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::Push()
MethodInfo LinkStack_Push_m4451_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&LinkStack_Push_m4451/* method */
	, &LinkStack_t1056_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
MethodInfo LinkStack_Pop_m4452_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&LinkStack_Pop_m4452/* method */
	, &LinkStack_t1056_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.LinkStack::GetCurrent()
MethodInfo LinkStack_GetCurrent_m4988_MethodInfo = 
{
	"GetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1056_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo LinkStack_t1056_LinkStack_SetCurrent_m4989_ParameterInfos[] = 
{
	{"l", 0, 134218361, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object)
MethodInfo LinkStack_SetCurrent_m4989_MethodInfo = 
{
	"SetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1056_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, LinkStack_t1056_LinkStack_SetCurrent_m4989_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkStack_t1056_MethodInfos[] =
{
	&LinkStack__ctor_m4450_MethodInfo,
	&LinkStack_Push_m4451_MethodInfo,
	&LinkStack_Pop_m4452_MethodInfo,
	&LinkStack_GetCurrent_m4988_MethodInfo,
	&LinkStack_SetCurrent_m4989_MethodInfo,
	NULL
};
extern Il2CppType Stack_t688_0_0_1;
FieldInfo LinkStack_t1056____stack_0_FieldInfo = 
{
	"stack"/* name */
	, &Stack_t688_0_0_1/* type */
	, &LinkStack_t1056_il2cpp_TypeInfo/* parent */
	, offsetof(LinkStack_t1056, ___stack_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LinkStack_t1056_FieldInfos[] =
{
	&LinkStack_t1056____stack_0_FieldInfo,
	NULL
};
static Il2CppMethodReference LinkStack_t1056_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	NULL,
	NULL,
};
static bool LinkStack_t1056_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkStack_t1056_1_0_0;
struct LinkStack_t1056;
const Il2CppTypeDefinitionMetadata LinkStack_t1056_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkRef_t1052_0_0_0/* parent */
	, LinkStack_t1056_VTable/* vtableMethods */
	, LinkStack_t1056_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkStack_t1056_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkStack"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkStack_t1056_MethodInfos/* methods */
	, NULL/* properties */
	, LinkStack_t1056_FieldInfos/* fields */
	, NULL/* events */
	, &LinkStack_t1056_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkStack_t1056_0_0_0/* byval_arg */
	, &LinkStack_t1056_1_0_0/* this_arg */
	, &LinkStack_t1056_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkStack_t1056)/* instance_size */
	, sizeof (LinkStack_t1056)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Metadata Definition System.Text.RegularExpressions.Mark
extern TypeInfo Mark_t1059_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
MethodInfo Mark_get_IsDefined_m4453_MethodInfo = 
{
	"get_IsDefined"/* name */
	, (methodPointerType)&Mark_get_IsDefined_m4453/* method */
	, &Mark_t1059_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
MethodInfo Mark_get_Index_m4454_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&Mark_get_Index_m4454/* method */
	, &Mark_t1059_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
MethodInfo Mark_get_Length_m4455_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&Mark_get_Length_m4455/* method */
	, &Mark_t1059_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Mark_t1059_MethodInfos[] =
{
	&Mark_get_IsDefined_m4453_MethodInfo,
	&Mark_get_Index_m4454_MethodInfo,
	&Mark_get_Length_m4455_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Mark_t1059____Start_0_FieldInfo = 
{
	"Start"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Mark_t1059_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1059, ___Start_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Mark_t1059____End_1_FieldInfo = 
{
	"End"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Mark_t1059_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1059, ___End_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Mark_t1059____Previous_2_FieldInfo = 
{
	"Previous"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Mark_t1059_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1059, ___Previous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mark_t1059_FieldInfos[] =
{
	&Mark_t1059____Start_0_FieldInfo,
	&Mark_t1059____End_1_FieldInfo,
	&Mark_t1059____Previous_2_FieldInfo,
	NULL
};
extern MethodInfo Mark_get_IsDefined_m4453_MethodInfo;
static PropertyInfo Mark_t1059____IsDefined_PropertyInfo = 
{
	&Mark_t1059_il2cpp_TypeInfo/* parent */
	, "IsDefined"/* name */
	, &Mark_get_IsDefined_m4453_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Index_m4454_MethodInfo;
static PropertyInfo Mark_t1059____Index_PropertyInfo = 
{
	&Mark_t1059_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &Mark_get_Index_m4454_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Length_m4455_MethodInfo;
static PropertyInfo Mark_t1059____Length_PropertyInfo = 
{
	&Mark_t1059_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &Mark_get_Length_m4455_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Mark_t1059_PropertyInfos[] =
{
	&Mark_t1059____IsDefined_PropertyInfo,
	&Mark_t1059____Index_PropertyInfo,
	&Mark_t1059____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference Mark_t1059_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool Mark_t1059_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mark_t1059_0_0_0;
extern Il2CppType Mark_t1059_1_0_0;
const Il2CppTypeDefinitionMetadata Mark_t1059_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, Mark_t1059_VTable/* vtableMethods */
	, Mark_t1059_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mark_t1059_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mark"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Mark_t1059_MethodInfos/* methods */
	, Mark_t1059_PropertyInfos/* properties */
	, Mark_t1059_FieldInfos/* fields */
	, NULL/* events */
	, &Mark_t1059_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mark_t1059_0_0_0/* byval_arg */
	, &Mark_t1059_1_0_0/* this_arg */
	, &Mark_t1059_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mark_t1059)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mark_t1059)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Mark_t1059 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 3/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern TypeInfo IntStack_t1060_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
MethodInfo IntStack_Pop_m4456_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&IntStack_Pop_m4456/* method */
	, &IntStack_t1060_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo IntStack_t1060_IntStack_Push_m4457_ParameterInfos[] = 
{
	{"value", 0, 134218399, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
MethodInfo IntStack_Push_m4457_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&IntStack_Push_m4457/* method */
	, &IntStack_t1060_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, IntStack_t1060_IntStack_Push_m4457_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
MethodInfo IntStack_get_Count_m4458_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntStack_get_Count_m4458/* method */
	, &IntStack_t1060_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo IntStack_t1060_IntStack_set_Count_m4459_ParameterInfos[] = 
{
	{"value", 0, 134218400, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
MethodInfo IntStack_set_Count_m4459_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&IntStack_set_Count_m4459/* method */
	, &IntStack_t1060_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, IntStack_t1060_IntStack_set_Count_m4459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntStack_t1060_MethodInfos[] =
{
	&IntStack_Pop_m4456_MethodInfo,
	&IntStack_Push_m4457_MethodInfo,
	&IntStack_get_Count_m4458_MethodInfo,
	&IntStack_set_Count_m4459_MethodInfo,
	NULL
};
extern Il2CppType Int32U5BU5D_t1041_0_0_1;
FieldInfo IntStack_t1060____values_0_FieldInfo = 
{
	"values"/* name */
	, &Int32U5BU5D_t1041_0_0_1/* type */
	, &IntStack_t1060_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1060, ___values_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo IntStack_t1060____count_1_FieldInfo = 
{
	"count"/* name */
	, &Int32_t33_0_0_1/* type */
	, &IntStack_t1060_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1060, ___count_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntStack_t1060_FieldInfos[] =
{
	&IntStack_t1060____values_0_FieldInfo,
	&IntStack_t1060____count_1_FieldInfo,
	NULL
};
extern MethodInfo IntStack_get_Count_m4458_MethodInfo;
extern MethodInfo IntStack_set_Count_m4459_MethodInfo;
static PropertyInfo IntStack_t1060____Count_PropertyInfo = 
{
	&IntStack_t1060_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntStack_get_Count_m4458_MethodInfo/* get */
	, &IntStack_set_Count_m4459_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntStack_t1060_PropertyInfos[] =
{
	&IntStack_t1060____Count_PropertyInfo,
	NULL
};
static Il2CppMethodReference IntStack_t1060_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool IntStack_t1060_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntStack_t1060_0_0_0;
extern Il2CppType IntStack_t1060_1_0_0;
extern TypeInfo Interpreter_t1065_il2cpp_TypeInfo;
extern Il2CppType Interpreter_t1065_0_0_0;
const Il2CppTypeDefinitionMetadata IntStack_t1060_DefinitionMetadata = 
{
	&Interpreter_t1065_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, IntStack_t1060_VTable/* vtableMethods */
	, IntStack_t1060_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntStack_t1060_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntStack"/* name */
	, ""/* namespaze */
	, IntStack_t1060_MethodInfos/* methods */
	, IntStack_t1060_PropertyInfos/* properties */
	, IntStack_t1060_FieldInfos/* fields */
	, NULL/* events */
	, &IntStack_t1060_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IntStack_t1060_0_0_0/* byval_arg */
	, &IntStack_t1060_1_0_0/* this_arg */
	, &IntStack_t1060_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)IntStack_t1060_marshal/* marshal_to_native_func */
	, (methodPointerType)IntStack_t1060_marshal_back/* marshal_from_native_func */
	, (methodPointerType)IntStack_t1060_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (IntStack_t1060)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (IntStack_t1060)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(IntStack_t1060_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern TypeInfo RepeatContext_t1061_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
extern Il2CppType RepeatContext_t1061_0_0_0;
extern Il2CppType RepeatContext_t1061_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo RepeatContext_t1061_RepeatContext__ctor_m4460_ParameterInfos[] = 
{
	{"previous", 0, 134218401, &EmptyCustomAttributesCache, &RepeatContext_t1061_0_0_0},
	{"min", 1, 134218402, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 2, 134218403, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 3, 134218404, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"expr_pc", 4, 134218405, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_SByte_t350_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo RepeatContext__ctor_m4460_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RepeatContext__ctor_m4460/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_SByte_t350_Int32_t33/* invoker_method */
	, RepeatContext_t1061_RepeatContext__ctor_m4460_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
MethodInfo RepeatContext_get_Count_m4461_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&RepeatContext_get_Count_m4461/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo RepeatContext_t1061_RepeatContext_set_Count_m4462_ParameterInfos[] = 
{
	{"value", 0, 134218406, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
MethodInfo RepeatContext_set_Count_m4462_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&RepeatContext_set_Count_m4462/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, RepeatContext_t1061_RepeatContext_set_Count_m4462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
MethodInfo RepeatContext_get_Start_m4463_MethodInfo = 
{
	"get_Start"/* name */
	, (methodPointerType)&RepeatContext_get_Start_m4463/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo RepeatContext_t1061_RepeatContext_set_Start_m4464_ParameterInfos[] = 
{
	{"value", 0, 134218407, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
MethodInfo RepeatContext_set_Start_m4464_MethodInfo = 
{
	"set_Start"/* name */
	, (methodPointerType)&RepeatContext_set_Start_m4464/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, RepeatContext_t1061_RepeatContext_set_Start_m4464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
MethodInfo RepeatContext_get_IsMinimum_m4465_MethodInfo = 
{
	"get_IsMinimum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMinimum_m4465/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
MethodInfo RepeatContext_get_IsMaximum_m4466_MethodInfo = 
{
	"get_IsMaximum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMaximum_m4466/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
MethodInfo RepeatContext_get_IsLazy_m4467_MethodInfo = 
{
	"get_IsLazy"/* name */
	, (methodPointerType)&RepeatContext_get_IsLazy_m4467/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
MethodInfo RepeatContext_get_Expression_m4468_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&RepeatContext_get_Expression_m4468/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RepeatContext_t1061_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
MethodInfo RepeatContext_get_Previous_m4469_MethodInfo = 
{
	"get_Previous"/* name */
	, (methodPointerType)&RepeatContext_get_Previous_m4469/* method */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* declaring_type */
	, &RepeatContext_t1061_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RepeatContext_t1061_MethodInfos[] =
{
	&RepeatContext__ctor_m4460_MethodInfo,
	&RepeatContext_get_Count_m4461_MethodInfo,
	&RepeatContext_set_Count_m4462_MethodInfo,
	&RepeatContext_get_Start_m4463_MethodInfo,
	&RepeatContext_set_Start_m4464_MethodInfo,
	&RepeatContext_get_IsMinimum_m4465_MethodInfo,
	&RepeatContext_get_IsMaximum_m4466_MethodInfo,
	&RepeatContext_get_IsLazy_m4467_MethodInfo,
	&RepeatContext_get_Expression_m4468_MethodInfo,
	&RepeatContext_get_Previous_m4469_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RepeatContext_t1061____start_0_FieldInfo = 
{
	"start"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___start_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RepeatContext_t1061____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RepeatContext_t1061____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo RepeatContext_t1061____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RepeatContext_t1061____expr_pc_4_FieldInfo = 
{
	"expr_pc"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___expr_pc_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1061_0_0_1;
FieldInfo RepeatContext_t1061____previous_5_FieldInfo = 
{
	"previous"/* name */
	, &RepeatContext_t1061_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___previous_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RepeatContext_t1061____count_6_FieldInfo = 
{
	"count"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1061, ___count_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RepeatContext_t1061_FieldInfos[] =
{
	&RepeatContext_t1061____start_0_FieldInfo,
	&RepeatContext_t1061____min_1_FieldInfo,
	&RepeatContext_t1061____max_2_FieldInfo,
	&RepeatContext_t1061____lazy_3_FieldInfo,
	&RepeatContext_t1061____expr_pc_4_FieldInfo,
	&RepeatContext_t1061____previous_5_FieldInfo,
	&RepeatContext_t1061____count_6_FieldInfo,
	NULL
};
extern MethodInfo RepeatContext_get_Count_m4461_MethodInfo;
extern MethodInfo RepeatContext_set_Count_m4462_MethodInfo;
static PropertyInfo RepeatContext_t1061____Count_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &RepeatContext_get_Count_m4461_MethodInfo/* get */
	, &RepeatContext_set_Count_m4462_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Start_m4463_MethodInfo;
extern MethodInfo RepeatContext_set_Start_m4464_MethodInfo;
static PropertyInfo RepeatContext_t1061____Start_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "Start"/* name */
	, &RepeatContext_get_Start_m4463_MethodInfo/* get */
	, &RepeatContext_set_Start_m4464_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMinimum_m4465_MethodInfo;
static PropertyInfo RepeatContext_t1061____IsMinimum_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "IsMinimum"/* name */
	, &RepeatContext_get_IsMinimum_m4465_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMaximum_m4466_MethodInfo;
static PropertyInfo RepeatContext_t1061____IsMaximum_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "IsMaximum"/* name */
	, &RepeatContext_get_IsMaximum_m4466_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsLazy_m4467_MethodInfo;
static PropertyInfo RepeatContext_t1061____IsLazy_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "IsLazy"/* name */
	, &RepeatContext_get_IsLazy_m4467_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Expression_m4468_MethodInfo;
static PropertyInfo RepeatContext_t1061____Expression_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &RepeatContext_get_Expression_m4468_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Previous_m4469_MethodInfo;
static PropertyInfo RepeatContext_t1061____Previous_PropertyInfo = 
{
	&RepeatContext_t1061_il2cpp_TypeInfo/* parent */
	, "Previous"/* name */
	, &RepeatContext_get_Previous_m4469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RepeatContext_t1061_PropertyInfos[] =
{
	&RepeatContext_t1061____Count_PropertyInfo,
	&RepeatContext_t1061____Start_PropertyInfo,
	&RepeatContext_t1061____IsMinimum_PropertyInfo,
	&RepeatContext_t1061____IsMaximum_PropertyInfo,
	&RepeatContext_t1061____IsLazy_PropertyInfo,
	&RepeatContext_t1061____Expression_PropertyInfo,
	&RepeatContext_t1061____Previous_PropertyInfo,
	NULL
};
static Il2CppMethodReference RepeatContext_t1061_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool RepeatContext_t1061_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RepeatContext_t1061_1_0_0;
struct RepeatContext_t1061;
const Il2CppTypeDefinitionMetadata RepeatContext_t1061_DefinitionMetadata = 
{
	&Interpreter_t1065_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RepeatContext_t1061_VTable/* vtableMethods */
	, RepeatContext_t1061_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RepeatContext_t1061_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RepeatContext"/* name */
	, ""/* namespaze */
	, RepeatContext_t1061_MethodInfos/* methods */
	, RepeatContext_t1061_PropertyInfos/* properties */
	, RepeatContext_t1061_FieldInfos/* fields */
	, NULL/* events */
	, &RepeatContext_t1061_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RepeatContext_t1061_0_0_0/* byval_arg */
	, &RepeatContext_t1061_1_0_0/* this_arg */
	, &RepeatContext_t1061_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RepeatContext_t1061)/* instance_size */
	, sizeof (RepeatContext_t1061)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern TypeInfo Mode_t1062_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
static MethodInfo* Mode_t1062_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t33_0_0_1542;
FieldInfo Mode_t1062____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t33_0_0_1542/* type */
	, &Mode_t1062_il2cpp_TypeInfo/* parent */
	, offsetof(Mode_t1062, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1062_0_0_32854;
FieldInfo Mode_t1062____Search_2_FieldInfo = 
{
	"Search"/* name */
	, &Mode_t1062_0_0_32854/* type */
	, &Mode_t1062_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1062_0_0_32854;
FieldInfo Mode_t1062____Match_3_FieldInfo = 
{
	"Match"/* name */
	, &Mode_t1062_0_0_32854/* type */
	, &Mode_t1062_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1062_0_0_32854;
FieldInfo Mode_t1062____Count_4_FieldInfo = 
{
	"Count"/* name */
	, &Mode_t1062_0_0_32854/* type */
	, &Mode_t1062_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mode_t1062_FieldInfos[] =
{
	&Mode_t1062____value___1_FieldInfo,
	&Mode_t1062____Search_2_FieldInfo,
	&Mode_t1062____Match_3_FieldInfo,
	&Mode_t1062____Count_4_FieldInfo,
	NULL
};
static const int32_t Mode_t1062____Search_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry Mode_t1062____Search_2_DefaultValue = 
{
	&Mode_t1062____Search_2_FieldInfo/* field */
	, { (char*)&Mode_t1062____Search_2_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t Mode_t1062____Match_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Mode_t1062____Match_3_DefaultValue = 
{
	&Mode_t1062____Match_3_FieldInfo/* field */
	, { (char*)&Mode_t1062____Match_3_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t Mode_t1062____Count_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Mode_t1062____Count_4_DefaultValue = 
{
	&Mode_t1062____Count_4_FieldInfo/* field */
	, { (char*)&Mode_t1062____Count_4_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Mode_t1062_FieldDefaultValues[] = 
{
	&Mode_t1062____Search_2_DefaultValue,
	&Mode_t1062____Match_3_DefaultValue,
	&Mode_t1062____Count_4_DefaultValue,
	NULL
};
static Il2CppMethodReference Mode_t1062_VTable[] =
{
	&Enum_Equals_m1967_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Enum_GetHashCode_m1968_MethodInfo,
	&Enum_ToString_m1969_MethodInfo,
	&Enum_ToString_m1970_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1971_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1972_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1973_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1974_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1975_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1976_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1977_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1978_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1979_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1980_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1981_MethodInfo,
	&Enum_ToString_m1982_MethodInfo,
	&Enum_System_IConvertible_ToType_m1983_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1984_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1985_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1986_MethodInfo,
	&Enum_CompareTo_m1987_MethodInfo,
	&Enum_GetTypeCode_m1988_MethodInfo,
};
static bool Mode_t1062_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Mode_t1062_InterfacesOffsets[] = 
{
	{ &IFormattable_t344_0_0_0, 4},
	{ &IConvertible_t345_0_0_0, 5},
	{ &IComparable_t346_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mode_t1062_0_0_0;
extern Il2CppType Mode_t1062_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t33_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Mode_t1062_DefinitionMetadata = 
{
	&Interpreter_t1065_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Mode_t1062_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t348_0_0_0/* parent */
	, Mode_t1062_VTable/* vtableMethods */
	, Mode_t1062_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mode_t1062_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t1062_MethodInfos/* methods */
	, NULL/* properties */
	, Mode_t1062_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t33_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mode_t1062_0_0_0/* byval_arg */
	, &Mode_t1062_1_0_0/* this_arg */
	, &Mode_t1062_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Mode_t1062_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t1062)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mode_t1062)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t964_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter__ctor_m4470_ParameterInfos[] = 
{
	{"program", 0, 134218362, &EmptyCustomAttributesCache, &UInt16U5BU5D_t964_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
MethodInfo Interpreter__ctor_m4470_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interpreter__ctor_m4470/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Interpreter_t1065_Interpreter__ctor_m4470_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_ReadProgramCount_m4471_ParameterInfos[] = 
{
	{"ptr", 0, 134218363, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
MethodInfo Interpreter_ReadProgramCount_m4471_MethodInfo = 
{
	"ReadProgramCount"/* name */
	, (methodPointerType)&Interpreter_ReadProgramCount_m4471/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_ReadProgramCount_m4471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t752_0_0_0;
extern Il2CppType Regex_t752_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Scan_m4472_ParameterInfos[] = 
{
	{"regex", 0, 134218364, &EmptyCustomAttributesCache, &Regex_t752_0_0_0},
	{"text", 1, 134218365, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 2, 134218366, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"end", 3, 134218367, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Match_t1026_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
MethodInfo Interpreter_Scan_m4472_MethodInfo = 
{
	"Scan"/* name */
	, (methodPointerType)&Interpreter_Scan_m4472/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1026_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Scan_m4472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
MethodInfo Interpreter_Reset_m4473_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Interpreter_Reset_m4473/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1062_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Eval_m4474_ParameterInfos[] = 
{
	{"mode", 0, 134218368, &EmptyCustomAttributesCache, &Mode_t1062_0_0_0},
	{"ref_ptr", 1, 134218369, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"pc", 2, 134218370, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33_Int32U26_t387_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
MethodInfo Interpreter_Eval_m4474_MethodInfo = 
{
	"Eval"/* name */
	, (methodPointerType)&Interpreter_Eval_m4474/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33_Int32U26_t387_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Eval_m4474_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1062_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_EvalChar_m4475_ParameterInfos[] = 
{
	{"mode", 0, 134218371, &EmptyCustomAttributesCache, &Mode_t1062_0_0_0},
	{"ptr", 1, 134218372, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"pc", 2, 134218373, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"multi", 3, 134218374, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33_Int32U26_t387_Int32U26_t387_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
MethodInfo Interpreter_EvalChar_m4475_MethodInfo = 
{
	"EvalChar"/* name */
	, (methodPointerType)&Interpreter_EvalChar_m4475/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33_Int32U26_t387_Int32U26_t387_SByte_t350/* invoker_method */
	, Interpreter_t1065_Interpreter_EvalChar_m4475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_TryMatch_m4476_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218375, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"pc", 1, 134218376, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32U26_t387_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
MethodInfo Interpreter_TryMatch_m4476_MethodInfo = 
{
	"TryMatch"/* name */
	, (methodPointerType)&Interpreter_TryMatch_m4476/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32U26_t387_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_TryMatch_m4476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1046_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_IsPosition_m4477_ParameterInfos[] = 
{
	{"pos", 0, 134218377, &EmptyCustomAttributesCache, &Position_t1046_0_0_0},
	{"ptr", 1, 134218378, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_UInt16_t707_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
MethodInfo Interpreter_IsPosition_m4477_MethodInfo = 
{
	"IsPosition"/* name */
	, (methodPointerType)&Interpreter_IsPosition_m4477/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_UInt16_t707_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_IsPosition_m4477_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_IsWordChar_m4478_ParameterInfos[] = 
{
	{"c", 0, 134218379, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
MethodInfo Interpreter_IsWordChar_m4478_MethodInfo = 
{
	"IsWordChar"/* name */
	, (methodPointerType)&Interpreter_IsWordChar_m4478/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int16_t386/* invoker_method */
	, Interpreter_t1065_Interpreter_IsWordChar_m4478_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_GetString_m4479_ParameterInfos[] = 
{
	{"pc", 0, 134218380, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
MethodInfo Interpreter_GetString_m4479_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&Interpreter_GetString_m4479/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_GetString_m4479_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Open_m4480_ParameterInfos[] = 
{
	{"gid", 0, 134218381, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"ptr", 1, 134218382, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
MethodInfo Interpreter_Open_m4480_MethodInfo = 
{
	"Open"/* name */
	, (methodPointerType)&Interpreter_Open_m4480/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Open_m4480_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Close_m4481_ParameterInfos[] = 
{
	{"gid", 0, 134218383, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"ptr", 1, 134218384, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
MethodInfo Interpreter_Close_m4481_MethodInfo = 
{
	"Close"/* name */
	, (methodPointerType)&Interpreter_Close_m4481/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Close_m4481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Balance_m4482_ParameterInfos[] = 
{
	{"gid", 0, 134218385, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"balance_gid", 1, 134218386, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"capture", 2, 134218387, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ptr", 3, 134218388, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33_Int32_t33_SByte_t350_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo Interpreter_Balance_m4482_MethodInfo = 
{
	"Balance"/* name */
	, (methodPointerType)&Interpreter_Balance_m4482/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33_Int32_t33_SByte_t350_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Balance_m4482_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
MethodInfo Interpreter_Checkpoint_m4483_MethodInfo = 
{
	"Checkpoint"/* name */
	, (methodPointerType)&Interpreter_Checkpoint_m4483/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_Backtrack_m4484_ParameterInfos[] = 
{
	{"cp", 0, 134218389, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
MethodInfo Interpreter_Backtrack_m4484_MethodInfo = 
{
	"Backtrack"/* name */
	, (methodPointerType)&Interpreter_Backtrack_m4484/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_Backtrack_m4484_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
MethodInfo Interpreter_ResetGroups_m4485_MethodInfo = 
{
	"ResetGroups"/* name */
	, (methodPointerType)&Interpreter_ResetGroups_m4485/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_GetLastDefined_m4486_ParameterInfos[] = 
{
	{"gid", 0, 134218390, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
MethodInfo Interpreter_GetLastDefined_m4486_MethodInfo = 
{
	"GetLastDefined"/* name */
	, (methodPointerType)&Interpreter_GetLastDefined_m4486/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_GetLastDefined_m4486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_CreateMark_m4487_ParameterInfos[] = 
{
	{"previous", 0, 134218391, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
MethodInfo Interpreter_CreateMark_m4487_MethodInfo = 
{
	"CreateMark"/* name */
	, (methodPointerType)&Interpreter_CreateMark_m4487/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_CreateMark_m4487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Interpreter_t1065_Interpreter_GetGroupInfo_m4488_ParameterInfos[] = 
{
	{"gid", 0, 134218392, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"first_mark_index", 1, 134218393, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"n_caps", 2, 134218394, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
MethodInfo Interpreter_GetGroupInfo_m4488_MethodInfo = 
{
	"GetGroupInfo"/* name */
	, (methodPointerType)&Interpreter_GetGroupInfo_m4488/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Interpreter_t1065_Interpreter_GetGroupInfo_m4488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1033_0_0_0;
extern Il2CppType Group_t1033_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_PopulateGroup_m4489_ParameterInfos[] = 
{
	{"g", 0, 134218395, &EmptyCustomAttributesCache, &Group_t1033_0_0_0},
	{"first_mark_index", 1, 134218396, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"n_caps", 2, 134218397, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
MethodInfo Interpreter_PopulateGroup_m4489_MethodInfo = 
{
	"PopulateGroup"/* name */
	, (methodPointerType)&Interpreter_PopulateGroup_m4489/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33/* invoker_method */
	, Interpreter_t1065_Interpreter_PopulateGroup_m4489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t752_0_0_0;
static ParameterInfo Interpreter_t1065_Interpreter_GenerateMatch_m4490_ParameterInfos[] = 
{
	{"regex", 0, 134218398, &EmptyCustomAttributesCache, &Regex_t752_0_0_0},
};
extern Il2CppType Match_t1026_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
MethodInfo Interpreter_GenerateMatch_m4490_MethodInfo = 
{
	"GenerateMatch"/* name */
	, (methodPointerType)&Interpreter_GenerateMatch_m4490/* method */
	, &Interpreter_t1065_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1026_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Interpreter_t1065_Interpreter_GenerateMatch_m4490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interpreter_t1065_MethodInfos[] =
{
	&Interpreter__ctor_m4470_MethodInfo,
	&Interpreter_ReadProgramCount_m4471_MethodInfo,
	&Interpreter_Scan_m4472_MethodInfo,
	&Interpreter_Reset_m4473_MethodInfo,
	&Interpreter_Eval_m4474_MethodInfo,
	&Interpreter_EvalChar_m4475_MethodInfo,
	&Interpreter_TryMatch_m4476_MethodInfo,
	&Interpreter_IsPosition_m4477_MethodInfo,
	&Interpreter_IsWordChar_m4478_MethodInfo,
	&Interpreter_GetString_m4479_MethodInfo,
	&Interpreter_Open_m4480_MethodInfo,
	&Interpreter_Close_m4481_MethodInfo,
	&Interpreter_Balance_m4482_MethodInfo,
	&Interpreter_Checkpoint_m4483_MethodInfo,
	&Interpreter_Backtrack_m4484_MethodInfo,
	&Interpreter_ResetGroups_m4485_MethodInfo,
	&Interpreter_GetLastDefined_m4486_MethodInfo,
	&Interpreter_CreateMark_m4487_MethodInfo,
	&Interpreter_GetGroupInfo_m4488_MethodInfo,
	&Interpreter_PopulateGroup_m4489_MethodInfo,
	&Interpreter_GenerateMatch_m4490_MethodInfo,
	NULL
};
extern Il2CppType UInt16U5BU5D_t964_0_0_1;
FieldInfo Interpreter_t1065____program_1_FieldInfo = 
{
	"program"/* name */
	, &UInt16U5BU5D_t964_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___program_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____program_start_2_FieldInfo = 
{
	"program_start"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___program_start_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Interpreter_t1065____text_3_FieldInfo = 
{
	"text"/* name */
	, &String_t_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___text_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____text_end_4_FieldInfo = 
{
	"text_end"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___text_end_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____group_count_5_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___group_count_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____match_min_6_FieldInfo = 
{
	"match_min"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___match_min_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType QuickSearch_t1063_0_0_1;
FieldInfo Interpreter_t1065____qs_7_FieldInfo = 
{
	"qs"/* name */
	, &QuickSearch_t1063_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___qs_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____scan_ptr_8_FieldInfo = 
{
	"scan_ptr"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___scan_ptr_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1061_0_0_1;
FieldInfo Interpreter_t1065____repeat_9_FieldInfo = 
{
	"repeat"/* name */
	, &RepeatContext_t1061_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___repeat_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1061_0_0_1;
FieldInfo Interpreter_t1065____fast_10_FieldInfo = 
{
	"fast"/* name */
	, &RepeatContext_t1061_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___fast_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntStack_t1060_0_0_1;
FieldInfo Interpreter_t1065____stack_11_FieldInfo = 
{
	"stack"/* name */
	, &IntStack_t1060_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___stack_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1061_0_0_1;
FieldInfo Interpreter_t1065____deep_12_FieldInfo = 
{
	"deep"/* name */
	, &RepeatContext_t1061_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___deep_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MarkU5BU5D_t1064_0_0_1;
FieldInfo Interpreter_t1065____marks_13_FieldInfo = 
{
	"marks"/* name */
	, &MarkU5BU5D_t1064_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___marks_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____mark_start_14_FieldInfo = 
{
	"mark_start"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___mark_start_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Interpreter_t1065____mark_end_15_FieldInfo = 
{
	"mark_end"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___mark_end_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32U5BU5D_t1041_0_0_1;
FieldInfo Interpreter_t1065____groups_16_FieldInfo = 
{
	"groups"/* name */
	, &Int32U5BU5D_t1041_0_0_1/* type */
	, &Interpreter_t1065_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1065, ___groups_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interpreter_t1065_FieldInfos[] =
{
	&Interpreter_t1065____program_1_FieldInfo,
	&Interpreter_t1065____program_start_2_FieldInfo,
	&Interpreter_t1065____text_3_FieldInfo,
	&Interpreter_t1065____text_end_4_FieldInfo,
	&Interpreter_t1065____group_count_5_FieldInfo,
	&Interpreter_t1065____match_min_6_FieldInfo,
	&Interpreter_t1065____qs_7_FieldInfo,
	&Interpreter_t1065____scan_ptr_8_FieldInfo,
	&Interpreter_t1065____repeat_9_FieldInfo,
	&Interpreter_t1065____fast_10_FieldInfo,
	&Interpreter_t1065____stack_11_FieldInfo,
	&Interpreter_t1065____deep_12_FieldInfo,
	&Interpreter_t1065____marks_13_FieldInfo,
	&Interpreter_t1065____mark_start_14_FieldInfo,
	&Interpreter_t1065____mark_end_15_FieldInfo,
	&Interpreter_t1065____groups_16_FieldInfo,
	NULL
};
static const Il2CppType* Interpreter_t1065_il2cpp_TypeInfo__nestedTypes[3] =
{
	&IntStack_t1060_0_0_0,
	&RepeatContext_t1061_0_0_0,
	&Mode_t1062_0_0_0,
};
extern MethodInfo Interpreter_Scan_m4472_MethodInfo;
extern MethodInfo BaseMachine_Replace_m4297_MethodInfo;
static Il2CppMethodReference Interpreter_t1065_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Interpreter_Scan_m4472_MethodInfo,
	&BaseMachine_Replace_m4297_MethodInfo,
	&BaseMachine_Replace_m4297_MethodInfo,
	&Interpreter_Scan_m4472_MethodInfo,
};
static bool Interpreter_t1065_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IMachine_t1036_0_0_0;
static Il2CppInterfaceOffsetPair Interpreter_t1065_InterfacesOffsets[] = 
{
	{ &IMachine_t1036_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interpreter_t1065_1_0_0;
extern Il2CppType BaseMachine_t1028_0_0_0;
struct Interpreter_t1065;
const Il2CppTypeDefinitionMetadata Interpreter_t1065_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Interpreter_t1065_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Interpreter_t1065_InterfacesOffsets/* interfaceOffsets */
	, &BaseMachine_t1028_0_0_0/* parent */
	, Interpreter_t1065_VTable/* vtableMethods */
	, Interpreter_t1065_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interpreter_t1065_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interpreter"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interpreter_t1065_MethodInfos/* methods */
	, NULL/* properties */
	, Interpreter_t1065_FieldInfos/* fields */
	, NULL/* events */
	, &Interpreter_t1065_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interpreter_t1065_0_0_0/* byval_arg */
	, &Interpreter_t1065_1_0_0/* this_arg */
	, &Interpreter_t1065_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Interpreter_t1065)/* instance_size */
	, sizeof (Interpreter_t1065)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// Metadata Definition System.Text.RegularExpressions.Interval
extern TypeInfo Interval_t1066_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interval_t1066_Interval__ctor_m4491_ParameterInfos[] = 
{
	{"low", 0, 134218408, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"high", 1, 134218409, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
MethodInfo Interval__ctor_m4491_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interval__ctor_m4491/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33/* invoker_method */
	, Interval_t1066_Interval__ctor_m4491_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
extern void* RuntimeInvoker_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
MethodInfo Interval_get_Empty_m4492_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Interval_get_Empty_m4492/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1066_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1066/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
MethodInfo Interval_get_IsDiscontiguous_m4493_MethodInfo = 
{
	"get_IsDiscontiguous"/* name */
	, (methodPointerType)&Interval_get_IsDiscontiguous_m4493/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
MethodInfo Interval_get_IsSingleton_m4494_MethodInfo = 
{
	"get_IsSingleton"/* name */
	, (methodPointerType)&Interval_get_IsSingleton_m4494/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
MethodInfo Interval_get_IsEmpty_m4495_MethodInfo = 
{
	"get_IsEmpty"/* name */
	, (methodPointerType)&Interval_get_IsEmpty_m4495/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
MethodInfo Interval_get_Size_m4496_MethodInfo = 
{
	"get_Size"/* name */
	, (methodPointerType)&Interval_get_Size_m4496/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo Interval_t1066_Interval_IsDisjoint_m4497_ParameterInfos[] = 
{
	{"i", 0, 134218410, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsDisjoint_m4497_MethodInfo = 
{
	"IsDisjoint"/* name */
	, (methodPointerType)&Interval_IsDisjoint_m4497/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Interval_t1066/* invoker_method */
	, Interval_t1066_Interval_IsDisjoint_m4497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo Interval_t1066_Interval_IsAdjacent_m4498_ParameterInfos[] = 
{
	{"i", 0, 134218411, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsAdjacent_m4498_MethodInfo = 
{
	"IsAdjacent"/* name */
	, (methodPointerType)&Interval_IsAdjacent_m4498/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Interval_t1066/* invoker_method */
	, Interval_t1066_Interval_IsAdjacent_m4498_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo Interval_t1066_Interval_Contains_m4499_ParameterInfos[] = 
{
	{"i", 0, 134218412, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Contains_m4499_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m4499/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Interval_t1066/* invoker_method */
	, Interval_t1066_Interval_Contains_m4499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Interval_t1066_Interval_Contains_m4500_ParameterInfos[] = 
{
	{"i", 0, 134218413, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
MethodInfo Interval_Contains_m4500_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m4500/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Interval_t1066_Interval_Contains_m4500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo Interval_t1066_Interval_Intersects_m4501_ParameterInfos[] = 
{
	{"i", 0, 134218414, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Intersects_m4501_MethodInfo = 
{
	"Intersects"/* name */
	, (methodPointerType)&Interval_Intersects_m4501/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Interval_t1066/* invoker_method */
	, Interval_t1066_Interval_Intersects_m4501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo Interval_t1066_Interval_Merge_m4502_ParameterInfos[] = 
{
	{"i", 0, 134218415, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Merge_m4502_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Interval_Merge_m4502/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Interval_t1066/* invoker_method */
	, Interval_t1066_Interval_Merge_m4502_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Interval_t1066_Interval_CompareTo_m4503_ParameterInfos[] = 
{
	{"o", 0, 134218416, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
MethodInfo Interval_CompareTo_m4503_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Interval_CompareTo_m4503/* method */
	, &Interval_t1066_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t/* invoker_method */
	, Interval_t1066_Interval_CompareTo_m4503_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interval_t1066_MethodInfos[] =
{
	&Interval__ctor_m4491_MethodInfo,
	&Interval_get_Empty_m4492_MethodInfo,
	&Interval_get_IsDiscontiguous_m4493_MethodInfo,
	&Interval_get_IsSingleton_m4494_MethodInfo,
	&Interval_get_IsEmpty_m4495_MethodInfo,
	&Interval_get_Size_m4496_MethodInfo,
	&Interval_IsDisjoint_m4497_MethodInfo,
	&Interval_IsAdjacent_m4498_MethodInfo,
	&Interval_Contains_m4499_MethodInfo,
	&Interval_Contains_m4500_MethodInfo,
	&Interval_Intersects_m4501_MethodInfo,
	&Interval_Merge_m4502_MethodInfo,
	&Interval_CompareTo_m4503_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Interval_t1066____low_0_FieldInfo = 
{
	"low"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Interval_t1066_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1066, ___low_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo Interval_t1066____high_1_FieldInfo = 
{
	"high"/* name */
	, &Int32_t33_0_0_6/* type */
	, &Interval_t1066_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1066, ___high_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_6;
FieldInfo Interval_t1066____contiguous_2_FieldInfo = 
{
	"contiguous"/* name */
	, &Boolean_t35_0_0_6/* type */
	, &Interval_t1066_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1066, ___contiguous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interval_t1066_FieldInfos[] =
{
	&Interval_t1066____low_0_FieldInfo,
	&Interval_t1066____high_1_FieldInfo,
	&Interval_t1066____contiguous_2_FieldInfo,
	NULL
};
extern MethodInfo Interval_get_Empty_m4492_MethodInfo;
static PropertyInfo Interval_t1066____Empty_PropertyInfo = 
{
	&Interval_t1066_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Interval_get_Empty_m4492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsDiscontiguous_m4493_MethodInfo;
static PropertyInfo Interval_t1066____IsDiscontiguous_PropertyInfo = 
{
	&Interval_t1066_il2cpp_TypeInfo/* parent */
	, "IsDiscontiguous"/* name */
	, &Interval_get_IsDiscontiguous_m4493_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsSingleton_m4494_MethodInfo;
static PropertyInfo Interval_t1066____IsSingleton_PropertyInfo = 
{
	&Interval_t1066_il2cpp_TypeInfo/* parent */
	, "IsSingleton"/* name */
	, &Interval_get_IsSingleton_m4494_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsEmpty_m4495_MethodInfo;
static PropertyInfo Interval_t1066____IsEmpty_PropertyInfo = 
{
	&Interval_t1066_il2cpp_TypeInfo/* parent */
	, "IsEmpty"/* name */
	, &Interval_get_IsEmpty_m4495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_Size_m4496_MethodInfo;
static PropertyInfo Interval_t1066____Size_PropertyInfo = 
{
	&Interval_t1066_il2cpp_TypeInfo/* parent */
	, "Size"/* name */
	, &Interval_get_Size_m4496_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Interval_t1066_PropertyInfos[] =
{
	&Interval_t1066____Empty_PropertyInfo,
	&Interval_t1066____IsDiscontiguous_PropertyInfo,
	&Interval_t1066____IsSingleton_PropertyInfo,
	&Interval_t1066____IsEmpty_PropertyInfo,
	&Interval_t1066____Size_PropertyInfo,
	NULL
};
extern MethodInfo Interval_CompareTo_m4503_MethodInfo;
static Il2CppMethodReference Interval_t1066_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
	&Interval_CompareTo_m4503_MethodInfo,
};
static bool Interval_t1066_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Interval_t1066_InterfacesTypeInfos[] = 
{
	&IComparable_t346_0_0_0,
};
static Il2CppInterfaceOffsetPair Interval_t1066_InterfacesOffsets[] = 
{
	{ &IComparable_t346_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interval_t1066_1_0_0;
const Il2CppTypeDefinitionMetadata Interval_t1066_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Interval_t1066_InterfacesTypeInfos/* implementedInterfaces */
	, Interval_t1066_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, Interval_t1066_VTable/* vtableMethods */
	, Interval_t1066_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interval_t1066_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interval"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interval_t1066_MethodInfos/* methods */
	, Interval_t1066_PropertyInfos/* properties */
	, Interval_t1066_FieldInfos/* fields */
	, NULL/* events */
	, &Interval_t1066_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interval_t1066_0_0_0/* byval_arg */
	, &Interval_t1066_1_0_0/* this_arg */
	, &Interval_t1066_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)Interval_t1066_marshal/* marshal_to_native_func */
	, (methodPointerType)Interval_t1066_marshal_back/* marshal_from_native_func */
	, (methodPointerType)Interval_t1066_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (Interval_t1066)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Interval_t1066)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Interval_t1066_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 13/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern TypeInfo Enumerator_t1067_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern Il2CppType IList_t808_0_0_0;
extern Il2CppType IList_t808_0_0_0;
static ParameterInfo Enumerator_t1067_Enumerator__ctor_m4504_ParameterInfos[] = 
{
	{"list", 0, 134218426, &EmptyCustomAttributesCache, &IList_t808_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
MethodInfo Enumerator__ctor_m4504_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Enumerator__ctor_m4504/* method */
	, &Enumerator_t1067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Enumerator_t1067_Enumerator__ctor_m4504_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
MethodInfo Enumerator_get_Current_m4505_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&Enumerator_get_Current_m4505/* method */
	, &Enumerator_t1067_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
MethodInfo Enumerator_MoveNext_m4506_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&Enumerator_MoveNext_m4506/* method */
	, &Enumerator_t1067_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
MethodInfo Enumerator_Reset_m4507_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Enumerator_Reset_m4507/* method */
	, &Enumerator_t1067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Enumerator_t1067_MethodInfos[] =
{
	&Enumerator__ctor_m4504_MethodInfo,
	&Enumerator_get_Current_m4505_MethodInfo,
	&Enumerator_MoveNext_m4506_MethodInfo,
	&Enumerator_Reset_m4507_MethodInfo,
	NULL
};
extern Il2CppType IList_t808_0_0_1;
FieldInfo Enumerator_t1067____list_0_FieldInfo = 
{
	"list"/* name */
	, &IList_t808_0_0_1/* type */
	, &Enumerator_t1067_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1067, ___list_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Enumerator_t1067____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Enumerator_t1067_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1067, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Enumerator_t1067_FieldInfos[] =
{
	&Enumerator_t1067____list_0_FieldInfo,
	&Enumerator_t1067____ptr_1_FieldInfo,
	NULL
};
extern MethodInfo Enumerator_get_Current_m4505_MethodInfo;
static PropertyInfo Enumerator_t1067____Current_PropertyInfo = 
{
	&Enumerator_t1067_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &Enumerator_get_Current_m4505_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Enumerator_t1067_PropertyInfos[] =
{
	&Enumerator_t1067____Current_PropertyInfo,
	NULL
};
extern MethodInfo Enumerator_MoveNext_m4506_MethodInfo;
extern MethodInfo Enumerator_Reset_m4507_MethodInfo;
static Il2CppMethodReference Enumerator_t1067_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Enumerator_get_Current_m4505_MethodInfo,
	&Enumerator_MoveNext_m4506_MethodInfo,
	&Enumerator_Reset_m4507_MethodInfo,
};
static bool Enumerator_t1067_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IEnumerator_t13_0_0_0;
static const Il2CppType* Enumerator_t1067_InterfacesTypeInfos[] = 
{
	&IEnumerator_t13_0_0_0,
};
static Il2CppInterfaceOffsetPair Enumerator_t1067_InterfacesOffsets[] = 
{
	{ &IEnumerator_t13_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Enumerator_t1067_0_0_0;
extern Il2CppType Enumerator_t1067_1_0_0;
extern TypeInfo IntervalCollection_t1069_il2cpp_TypeInfo;
extern Il2CppType IntervalCollection_t1069_0_0_0;
struct Enumerator_t1067;
const Il2CppTypeDefinitionMetadata Enumerator_t1067_DefinitionMetadata = 
{
	&IntervalCollection_t1069_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, Enumerator_t1067_InterfacesTypeInfos/* implementedInterfaces */
	, Enumerator_t1067_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Enumerator_t1067_VTable/* vtableMethods */
	, Enumerator_t1067_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Enumerator_t1067_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Enumerator"/* name */
	, ""/* namespaze */
	, Enumerator_t1067_MethodInfos/* methods */
	, Enumerator_t1067_PropertyInfos/* properties */
	, Enumerator_t1067_FieldInfos/* fields */
	, NULL/* events */
	, &Enumerator_t1067_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Enumerator_t1067_0_0_0/* byval_arg */
	, &Enumerator_t1067_1_0_0/* this_arg */
	, &Enumerator_t1067_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Enumerator_t1067)/* instance_size */
	, sizeof (Enumerator_t1067)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern TypeInfo CostDelegate_t1068_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo CostDelegate_t1068_CostDelegate__ctor_m4508_ParameterInfos[] = 
{
	{"object", 0, 134218427, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218428, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
MethodInfo CostDelegate__ctor_m4508_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CostDelegate__ctor_m4508/* method */
	, &CostDelegate_t1068_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_IntPtr_t/* invoker_method */
	, CostDelegate_t1068_CostDelegate__ctor_m4508_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo CostDelegate_t1068_CostDelegate_Invoke_m4509_ParameterInfos[] = 
{
	{"i", 0, 134218429, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Double_t716_0_0_0;
extern void* RuntimeInvoker_Double_t716_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
MethodInfo CostDelegate_Invoke_m4509_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CostDelegate_Invoke_m4509/* method */
	, &CostDelegate_t1068_il2cpp_TypeInfo/* declaring_type */
	, &Double_t716_0_0_0/* return_type */
	, RuntimeInvoker_Double_t716_Interval_t1066/* invoker_method */
	, CostDelegate_t1068_CostDelegate_Invoke_m4509_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
extern Il2CppType AsyncCallback_t189_0_0_0;
extern Il2CppType AsyncCallback_t189_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CostDelegate_t1068_CostDelegate_BeginInvoke_m4510_ParameterInfos[] = 
{
	{"i", 0, 134218430, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
	{"callback", 1, 134218431, &EmptyCustomAttributesCache, &AsyncCallback_t189_0_0_0},
	{"object", 2, 134218432, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t188_0_0_0;
extern void* RuntimeInvoker_Object_t_Interval_t1066_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
MethodInfo CostDelegate_BeginInvoke_m4510_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CostDelegate_BeginInvoke_m4510/* method */
	, &CostDelegate_t1068_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t188_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Interval_t1066_Object_t_Object_t/* invoker_method */
	, CostDelegate_t1068_CostDelegate_BeginInvoke_m4510_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t188_0_0_0;
extern Il2CppType IAsyncResult_t188_0_0_0;
static ParameterInfo CostDelegate_t1068_CostDelegate_EndInvoke_m4511_ParameterInfos[] = 
{
	{"result", 0, 134218433, &EmptyCustomAttributesCache, &IAsyncResult_t188_0_0_0},
};
extern Il2CppType Double_t716_0_0_0;
extern void* RuntimeInvoker_Double_t716_Object_t (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
MethodInfo CostDelegate_EndInvoke_m4511_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CostDelegate_EndInvoke_m4511/* method */
	, &CostDelegate_t1068_il2cpp_TypeInfo/* declaring_type */
	, &Double_t716_0_0_0/* return_type */
	, RuntimeInvoker_Double_t716_Object_t/* invoker_method */
	, CostDelegate_t1068_CostDelegate_EndInvoke_m4511_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CostDelegate_t1068_MethodInfos[] =
{
	&CostDelegate__ctor_m4508_MethodInfo,
	&CostDelegate_Invoke_m4509_MethodInfo,
	&CostDelegate_BeginInvoke_m4510_MethodInfo,
	&CostDelegate_EndInvoke_m4511_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m2004_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m2005_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m2006_MethodInfo;
extern MethodInfo Delegate_Clone_m2007_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m2008_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m2009_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m2010_MethodInfo;
extern MethodInfo CostDelegate_Invoke_m4509_MethodInfo;
extern MethodInfo CostDelegate_BeginInvoke_m4510_MethodInfo;
extern MethodInfo CostDelegate_EndInvoke_m4511_MethodInfo;
static Il2CppMethodReference CostDelegate_t1068_VTable[] =
{
	&MulticastDelegate_Equals_m2004_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&MulticastDelegate_GetHashCode_m2005_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&Delegate_Clone_m2007_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2008_MethodInfo,
	&MulticastDelegate_CombineImpl_m2009_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2010_MethodInfo,
	&CostDelegate_Invoke_m4509_MethodInfo,
	&CostDelegate_BeginInvoke_m4510_MethodInfo,
	&CostDelegate_EndInvoke_m4511_MethodInfo,
};
static bool CostDelegate_t1068_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICloneable_t358_0_0_0;
extern Il2CppType ISerializable_t359_0_0_0;
static Il2CppInterfaceOffsetPair CostDelegate_t1068_InterfacesOffsets[] = 
{
	{ &ICloneable_t358_0_0_0, 4},
	{ &ISerializable_t359_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CostDelegate_t1068_0_0_0;
extern Il2CppType CostDelegate_t1068_1_0_0;
extern Il2CppType MulticastDelegate_t192_0_0_0;
struct CostDelegate_t1068;
const Il2CppTypeDefinitionMetadata CostDelegate_t1068_DefinitionMetadata = 
{
	&IntervalCollection_t1069_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CostDelegate_t1068_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t192_0_0_0/* parent */
	, CostDelegate_t1068_VTable/* vtableMethods */
	, CostDelegate_t1068_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CostDelegate_t1068_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CostDelegate"/* name */
	, ""/* namespaze */
	, CostDelegate_t1068_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CostDelegate_t1068_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CostDelegate_t1068_0_0_0/* byval_arg */
	, &CostDelegate_t1068_1_0_0/* this_arg */
	, &CostDelegate_t1068_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CostDelegate_t1068/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CostDelegate_t1068)/* instance_size */
	, sizeof (CostDelegate_t1068)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
MethodInfo IntervalCollection__ctor_m4512_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IntervalCollection__ctor_m4512/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo IntervalCollection_t1069_IntervalCollection_get_Item_m4513_ParameterInfos[] = 
{
	{"i", 0, 134218417, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Interval_t1066_0_0_0;
extern void* RuntimeInvoker_Interval_t1066_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
MethodInfo IntervalCollection_get_Item_m4513_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&IntervalCollection_get_Item_m4513/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1066_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1066_Int32_t33/* invoker_method */
	, IntervalCollection_t1069_IntervalCollection_get_Item_m4513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo IntervalCollection_t1069_IntervalCollection_Add_m4514_ParameterInfos[] = 
{
	{"i", 0, 134218418, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
MethodInfo IntervalCollection_Add_m4514_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&IntervalCollection_Add_m4514/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Interval_t1066/* invoker_method */
	, IntervalCollection_t1069_IntervalCollection_Add_m4514_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
MethodInfo IntervalCollection_Normalize_m4515_MethodInfo = 
{
	"Normalize"/* name */
	, (methodPointerType)&IntervalCollection_Normalize_m4515/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CostDelegate_t1068_0_0_0;
static ParameterInfo IntervalCollection_t1069_IntervalCollection_GetMetaCollection_m4516_ParameterInfos[] = 
{
	{"cost_del", 0, 134218419, &EmptyCustomAttributesCache, &CostDelegate_t1068_0_0_0},
};
extern Il2CppType IntervalCollection_t1069_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_GetMetaCollection_m4516_MethodInfo = 
{
	"GetMetaCollection"/* name */
	, (methodPointerType)&IntervalCollection_GetMetaCollection_m4516/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &IntervalCollection_t1069_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1069_IntervalCollection_GetMetaCollection_m4516_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType IntervalCollection_t1069_0_0_0;
extern Il2CppType CostDelegate_t1068_0_0_0;
static ParameterInfo IntervalCollection_t1069_IntervalCollection_Optimize_m4517_ParameterInfos[] = 
{
	{"begin", 0, 134218420, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"end", 1, 134218421, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"meta", 2, 134218422, &EmptyCustomAttributesCache, &IntervalCollection_t1069_0_0_0},
	{"cost_del", 3, 134218423, &EmptyCustomAttributesCache, &CostDelegate_t1068_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_Optimize_m4517_MethodInfo = 
{
	"Optimize"/* name */
	, (methodPointerType)&IntervalCollection_Optimize_m4517/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1069_IntervalCollection_Optimize_m4517_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
MethodInfo IntervalCollection_get_Count_m4518_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntervalCollection_get_Count_m4518/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
MethodInfo IntervalCollection_get_IsSynchronized_m4519_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&IntervalCollection_get_IsSynchronized_m4519/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
MethodInfo IntervalCollection_get_SyncRoot_m4520_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&IntervalCollection_get_SyncRoot_m4520/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo IntervalCollection_t1069_IntervalCollection_CopyTo_m4521_ParameterInfos[] = 
{
	{"array", 0, 134218424, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"index", 1, 134218425, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
MethodInfo IntervalCollection_CopyTo_m4521_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&IntervalCollection_CopyTo_m4521/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33/* invoker_method */
	, IntervalCollection_t1069_IntervalCollection_CopyTo_m4521_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t13_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
MethodInfo IntervalCollection_GetEnumerator_m4522_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&IntervalCollection_GetEnumerator_m4522/* method */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t13_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntervalCollection_t1069_MethodInfos[] =
{
	&IntervalCollection__ctor_m4512_MethodInfo,
	&IntervalCollection_get_Item_m4513_MethodInfo,
	&IntervalCollection_Add_m4514_MethodInfo,
	&IntervalCollection_Normalize_m4515_MethodInfo,
	&IntervalCollection_GetMetaCollection_m4516_MethodInfo,
	&IntervalCollection_Optimize_m4517_MethodInfo,
	&IntervalCollection_get_Count_m4518_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m4519_MethodInfo,
	&IntervalCollection_get_SyncRoot_m4520_MethodInfo,
	&IntervalCollection_CopyTo_m4521_MethodInfo,
	&IntervalCollection_GetEnumerator_m4522_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t936_0_0_1;
FieldInfo IntervalCollection_t1069____intervals_0_FieldInfo = 
{
	"intervals"/* name */
	, &ArrayList_t936_0_0_1/* type */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* parent */
	, offsetof(IntervalCollection_t1069, ___intervals_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntervalCollection_t1069_FieldInfos[] =
{
	&IntervalCollection_t1069____intervals_0_FieldInfo,
	NULL
};
extern MethodInfo IntervalCollection_get_Item_m4513_MethodInfo;
static PropertyInfo IntervalCollection_t1069____Item_PropertyInfo = 
{
	&IntervalCollection_t1069_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IntervalCollection_get_Item_m4513_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_Count_m4518_MethodInfo;
static PropertyInfo IntervalCollection_t1069____Count_PropertyInfo = 
{
	&IntervalCollection_t1069_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntervalCollection_get_Count_m4518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_IsSynchronized_m4519_MethodInfo;
static PropertyInfo IntervalCollection_t1069____IsSynchronized_PropertyInfo = 
{
	&IntervalCollection_t1069_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &IntervalCollection_get_IsSynchronized_m4519_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_SyncRoot_m4520_MethodInfo;
static PropertyInfo IntervalCollection_t1069____SyncRoot_PropertyInfo = 
{
	&IntervalCollection_t1069_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &IntervalCollection_get_SyncRoot_m4520_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntervalCollection_t1069_PropertyInfos[] =
{
	&IntervalCollection_t1069____Item_PropertyInfo,
	&IntervalCollection_t1069____Count_PropertyInfo,
	&IntervalCollection_t1069____IsSynchronized_PropertyInfo,
	&IntervalCollection_t1069____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* IntervalCollection_t1069_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Enumerator_t1067_0_0_0,
	&CostDelegate_t1068_0_0_0,
};
extern MethodInfo IntervalCollection_CopyTo_m4521_MethodInfo;
extern MethodInfo IntervalCollection_GetEnumerator_m4522_MethodInfo;
static Il2CppMethodReference IntervalCollection_t1069_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&IntervalCollection_get_Count_m4518_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m4519_MethodInfo,
	&IntervalCollection_get_SyncRoot_m4520_MethodInfo,
	&IntervalCollection_CopyTo_m4521_MethodInfo,
	&IntervalCollection_GetEnumerator_m4522_MethodInfo,
};
static bool IntervalCollection_t1069_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICollection_t807_0_0_0;
extern Il2CppType IEnumerable_t410_0_0_0;
static const Il2CppType* IntervalCollection_t1069_InterfacesTypeInfos[] = 
{
	&ICollection_t807_0_0_0,
	&IEnumerable_t410_0_0_0,
};
static Il2CppInterfaceOffsetPair IntervalCollection_t1069_InterfacesOffsets[] = 
{
	{ &ICollection_t807_0_0_0, 4},
	{ &IEnumerable_t410_0_0_0, 8},
};
extern TypeInfo DefaultMemberAttribute_t411_il2cpp_TypeInfo;
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern MethodInfo DefaultMemberAttribute__ctor_m2108_MethodInfo;
void IntervalCollection_t1069_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t411 * tmp;
		tmp = (DefaultMemberAttribute_t411 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t411_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m2108(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m2108_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache IntervalCollection_t1069__CustomAttributeCache = {
1,
NULL,
&IntervalCollection_t1069_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntervalCollection_t1069_1_0_0;
struct IntervalCollection_t1069;
extern CustomAttributesCache IntervalCollection_t1069__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata IntervalCollection_t1069_DefinitionMetadata = 
{
	NULL/* declaringType */
	, IntervalCollection_t1069_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, IntervalCollection_t1069_InterfacesTypeInfos/* implementedInterfaces */
	, IntervalCollection_t1069_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, IntervalCollection_t1069_VTable/* vtableMethods */
	, IntervalCollection_t1069_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntervalCollection_t1069_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntervalCollection"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IntervalCollection_t1069_MethodInfos/* methods */
	, IntervalCollection_t1069_PropertyInfos/* properties */
	, IntervalCollection_t1069_FieldInfos/* fields */
	, NULL/* events */
	, &IntervalCollection_t1069_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &IntervalCollection_t1069__CustomAttributeCache/* custom_attributes_cache */
	, &IntervalCollection_t1069_0_0_0/* byval_arg */
	, &IntervalCollection_t1069_1_0_0/* this_arg */
	, &IntervalCollection_t1069_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IntervalCollection_t1069)/* instance_size */
	, sizeof (IntervalCollection_t1069)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 4/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern TypeInfo Parser_t1070_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
MethodInfo Parser__ctor_m4523_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Parser__ctor_m4523/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
static ParameterInfo Parser_t1070_Parser_ParseDecimal_m4524_ParameterInfos[] = 
{
	{"str", 0, 134218434, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218435, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
MethodInfo Parser_ParseDecimal_m4524_MethodInfo = 
{
	"ParseDecimal"/* name */
	, (methodPointerType)&Parser_ParseDecimal_m4524/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387/* invoker_method */
	, Parser_t1070_Parser_ParseDecimal_m4524_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
static ParameterInfo Parser_t1070_Parser_ParseOctal_m4525_ParameterInfos[] = 
{
	{"str", 0, 134218436, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218437, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
MethodInfo Parser_ParseOctal_m4525_MethodInfo = 
{
	"ParseOctal"/* name */
	, (methodPointerType)&Parser_ParseOctal_m4525/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387/* invoker_method */
	, Parser_t1070_Parser_ParseOctal_m4525_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseHex_m4526_ParameterInfos[] = 
{
	{"str", 0, 134218438, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218439, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"digits", 2, 134218440, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
MethodInfo Parser_ParseHex_m4526_MethodInfo = 
{
	"ParseHex"/* name */
	, (methodPointerType)&Parser_ParseHex_m4526/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseHex_m4526_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseNumber_m4527_ParameterInfos[] = 
{
	{"str", 0, 134218441, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218442, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"b", 2, 134218443, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"min", 3, 134218444, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 4, 134218445, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387_Int32_t33_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m4527_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m4527/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t_Int32U26_t387_Int32_t33_Int32_t33_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseNumber_m4527_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
static ParameterInfo Parser_t1070_Parser_ParseName_m4528_ParameterInfos[] = 
{
	{"str", 0, 134218446, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218447, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
MethodInfo Parser_ParseName_m4528_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m4528/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t387/* invoker_method */
	, Parser_t1070_Parser_ParseName_m4528_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseRegularExpression_m4529_ParameterInfos[] = 
{
	{"pattern", 0, 134218448, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218449, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType RegularExpression_t1071_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRegularExpression_m4529_MethodInfo = 
{
	"ParseRegularExpression"/* name */
	, (methodPointerType)&Parser_ParseRegularExpression_m4529/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &RegularExpression_t1071_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseRegularExpression_m4529_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t923_0_0_0;
extern Il2CppType Hashtable_t923_0_0_0;
static ParameterInfo Parser_t1070_Parser_GetMapping_m4530_ParameterInfos[] = 
{
	{"mapping", 0, 134218450, &EmptyCustomAttributesCache, &Hashtable_t923_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
MethodInfo Parser_GetMapping_m4530_MethodInfo = 
{
	"GetMapping"/* name */
	, (methodPointerType)&Parser_GetMapping_m4530/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t/* invoker_method */
	, Parser_t1070_Parser_GetMapping_m4530_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1072_0_0_0;
extern Il2CppType Group_t1072_0_0_0;
extern Il2CppType RegexOptions_t1043_0_0_0;
extern Il2CppType Assertion_t1073_0_0_0;
extern Il2CppType Assertion_t1073_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseGroup_m4531_ParameterInfos[] = 
{
	{"group", 0, 134218451, &EmptyCustomAttributesCache, &Group_t1072_0_0_0},
	{"options", 1, 134218452, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
	{"assertion", 2, 134218453, &EmptyCustomAttributesCache, &Assertion_t1073_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
MethodInfo Parser_ParseGroup_m4531_MethodInfo = 
{
	"ParseGroup"/* name */
	, (methodPointerType)&Parser_ParseGroup_m4531/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Object_t/* invoker_method */
	, Parser_t1070_Parser_ParseGroup_m4531_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_1_0_0;
extern Il2CppType RegexOptions_t1043_1_0_0;
static ParameterInfo Parser_t1070_Parser_ParseGroupingConstruct_m4532_ParameterInfos[] = 
{
	{"options", 0, 134218454, &EmptyCustomAttributesCache, &RegexOptions_t1043_1_0_0},
};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t_RegexOptionsU26_t1150 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
MethodInfo Parser_ParseGroupingConstruct_m4532_MethodInfo = 
{
	"ParseGroupingConstruct"/* name */
	, (methodPointerType)&Parser_ParseGroupingConstruct_m4532/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_RegexOptionsU26_t1150/* invoker_method */
	, Parser_t1070_Parser_ParseGroupingConstruct_m4532_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1075_0_0_0;
extern Il2CppType ExpressionAssertion_t1075_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseAssertionType_m4533_ParameterInfos[] = 
{
	{"assertion", 0, 134218455, &EmptyCustomAttributesCache, &ExpressionAssertion_t1075_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
MethodInfo Parser_ParseAssertionType_m4533_MethodInfo = 
{
	"ParseAssertionType"/* name */
	, (methodPointerType)&Parser_ParseAssertionType_m4533/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Parser_t1070_Parser_ParseAssertionType_m4533_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_1_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseOptions_m4534_ParameterInfos[] = 
{
	{"options", 0, 134218456, &EmptyCustomAttributesCache, &RegexOptions_t1043_1_0_0},
	{"negate", 1, 134218457, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_RegexOptionsU26_t1150_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
MethodInfo Parser_ParseOptions_m4534_MethodInfo = 
{
	"ParseOptions"/* name */
	, (methodPointerType)&Parser_ParseOptions_m4534/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_RegexOptionsU26_t1150_SByte_t350/* invoker_method */
	, Parser_t1070_Parser_ParseOptions_m4534_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseCharacterClass_m4535_ParameterInfos[] = 
{
	{"options", 0, 134218458, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseCharacterClass_m4535_MethodInfo = 
{
	"ParseCharacterClass"/* name */
	, (methodPointerType)&Parser_ParseCharacterClass_m4535/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseCharacterClass_m4535_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseRepetitionBounds_m4536_ParameterInfos[] = 
{
	{"min", 0, 134218459, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218460, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"options", 2, 134218461, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32U26_t387_Int32U26_t387_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRepetitionBounds_m4536_MethodInfo = 
{
	"ParseRepetitionBounds"/* name */
	, (methodPointerType)&Parser_ParseRepetitionBounds_m4536/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32U26_t387_Int32U26_t387_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseRepetitionBounds_m4536_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern void* RuntimeInvoker_Category_t1050 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
MethodInfo Parser_ParseUnicodeCategory_m4537_MethodInfo = 
{
	"ParseUnicodeCategory"/* name */
	, (methodPointerType)&Parser_ParseUnicodeCategory_m4537/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1050_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1050/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseSpecial_m4538_ParameterInfos[] = 
{
	{"options", 0, 134218462, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseSpecial_m4538_MethodInfo = 
{
	"ParseSpecial"/* name */
	, (methodPointerType)&Parser_ParseSpecial_m4538/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseSpecial_m4538_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
MethodInfo Parser_ParseEscape_m4539_MethodInfo = 
{
	"ParseEscape"/* name */
	, (methodPointerType)&Parser_ParseEscape_m4539/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
MethodInfo Parser_ParseName_m4540_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m4540/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsNameChar_m4541_ParameterInfos[] = 
{
	{"c", 0, 134218463, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
MethodInfo Parser_IsNameChar_m4541_MethodInfo = 
{
	"IsNameChar"/* name */
	, (methodPointerType)&Parser_IsNameChar_m4541/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int16_t386/* invoker_method */
	, Parser_t1070_Parser_IsNameChar_m4541_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseNumber_m4542_ParameterInfos[] = 
{
	{"b", 0, 134218464, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"min", 1, 134218465, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 2, 134218466, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32_t33_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m4542_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m4542/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32_t33_Int32_t33_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseNumber_m4542_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Parser_t1070_Parser_ParseDigit_m4543_ParameterInfos[] = 
{
	{"c", 0, 134218467, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"b", 1, 134218468, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"n", 2, 134218469, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int16_t386_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
MethodInfo Parser_ParseDigit_m4543_MethodInfo = 
{
	"ParseDigit"/* name */
	, (methodPointerType)&Parser_ParseDigit_m4543/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int16_t386_Int32_t33_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_ParseDigit_m4543_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Parser_t1070_Parser_ConsumeWhitespace_m4544_ParameterInfos[] = 
{
	{"ignore", 0, 134218470, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
MethodInfo Parser_ConsumeWhitespace_m4544_MethodInfo = 
{
	"ConsumeWhitespace"/* name */
	, (methodPointerType)&Parser_ConsumeWhitespace_m4544/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350/* invoker_method */
	, Parser_t1070_Parser_ConsumeWhitespace_m4544_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
MethodInfo Parser_ResolveReferences_m4545_MethodInfo = 
{
	"ResolveReferences"/* name */
	, (methodPointerType)&Parser_ResolveReferences_m4545/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ArrayList_t936_0_0_0;
extern Il2CppType ArrayList_t936_0_0_0;
static ParameterInfo Parser_t1070_Parser_HandleExplicitNumericGroups_m4546_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218471, &EmptyCustomAttributesCache, &ArrayList_t936_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
MethodInfo Parser_HandleExplicitNumericGroups_m4546_MethodInfo = 
{
	"HandleExplicitNumericGroups"/* name */
	, (methodPointerType)&Parser_HandleExplicitNumericGroups_m4546/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Parser_t1070_Parser_HandleExplicitNumericGroups_m4546_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsIgnoreCase_m4547_ParameterInfos[] = 
{
	{"options", 0, 134218472, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnoreCase_m4547_MethodInfo = 
{
	"IsIgnoreCase"/* name */
	, (methodPointerType)&Parser_IsIgnoreCase_m4547/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsIgnoreCase_m4547_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsMultiline_m4548_ParameterInfos[] = 
{
	{"options", 0, 134218473, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsMultiline_m4548_MethodInfo = 
{
	"IsMultiline"/* name */
	, (methodPointerType)&Parser_IsMultiline_m4548/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsMultiline_m4548_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsExplicitCapture_m4549_ParameterInfos[] = 
{
	{"options", 0, 134218474, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsExplicitCapture_m4549_MethodInfo = 
{
	"IsExplicitCapture"/* name */
	, (methodPointerType)&Parser_IsExplicitCapture_m4549/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsExplicitCapture_m4549_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsSingleline_m4550_ParameterInfos[] = 
{
	{"options", 0, 134218475, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsSingleline_m4550_MethodInfo = 
{
	"IsSingleline"/* name */
	, (methodPointerType)&Parser_IsSingleline_m4550/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsSingleline_m4550_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsIgnorePatternWhitespace_m4551_ParameterInfos[] = 
{
	{"options", 0, 134218476, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnorePatternWhitespace_m4551_MethodInfo = 
{
	"IsIgnorePatternWhitespace"/* name */
	, (methodPointerType)&Parser_IsIgnorePatternWhitespace_m4551/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsIgnorePatternWhitespace_m4551_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1043_0_0_0;
static ParameterInfo Parser_t1070_Parser_IsECMAScript_m4552_ParameterInfos[] = 
{
	{"options", 0, 134218477, &EmptyCustomAttributesCache, &RegexOptions_t1043_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsECMAScript_m4552_MethodInfo = 
{
	"IsECMAScript"/* name */
	, (methodPointerType)&Parser_IsECMAScript_m4552/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int32_t33/* invoker_method */
	, Parser_t1070_Parser_IsECMAScript_m4552_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Parser_t1070_Parser_NewParseException_m4553_ParameterInfos[] = 
{
	{"msg", 0, 134218478, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType ArgumentException_t332_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
MethodInfo Parser_NewParseException_m4553_MethodInfo = 
{
	"NewParseException"/* name */
	, (methodPointerType)&Parser_NewParseException_m4553/* method */
	, &Parser_t1070_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentException_t332_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Parser_t1070_Parser_NewParseException_m4553_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Parser_t1070_MethodInfos[] =
{
	&Parser__ctor_m4523_MethodInfo,
	&Parser_ParseDecimal_m4524_MethodInfo,
	&Parser_ParseOctal_m4525_MethodInfo,
	&Parser_ParseHex_m4526_MethodInfo,
	&Parser_ParseNumber_m4527_MethodInfo,
	&Parser_ParseName_m4528_MethodInfo,
	&Parser_ParseRegularExpression_m4529_MethodInfo,
	&Parser_GetMapping_m4530_MethodInfo,
	&Parser_ParseGroup_m4531_MethodInfo,
	&Parser_ParseGroupingConstruct_m4532_MethodInfo,
	&Parser_ParseAssertionType_m4533_MethodInfo,
	&Parser_ParseOptions_m4534_MethodInfo,
	&Parser_ParseCharacterClass_m4535_MethodInfo,
	&Parser_ParseRepetitionBounds_m4536_MethodInfo,
	&Parser_ParseUnicodeCategory_m4537_MethodInfo,
	&Parser_ParseSpecial_m4538_MethodInfo,
	&Parser_ParseEscape_m4539_MethodInfo,
	&Parser_ParseName_m4540_MethodInfo,
	&Parser_IsNameChar_m4541_MethodInfo,
	&Parser_ParseNumber_m4542_MethodInfo,
	&Parser_ParseDigit_m4543_MethodInfo,
	&Parser_ConsumeWhitespace_m4544_MethodInfo,
	&Parser_ResolveReferences_m4545_MethodInfo,
	&Parser_HandleExplicitNumericGroups_m4546_MethodInfo,
	&Parser_IsIgnoreCase_m4547_MethodInfo,
	&Parser_IsMultiline_m4548_MethodInfo,
	&Parser_IsExplicitCapture_m4549_MethodInfo,
	&Parser_IsSingleline_m4550_MethodInfo,
	&Parser_IsIgnorePatternWhitespace_m4551_MethodInfo,
	&Parser_IsECMAScript_m4552_MethodInfo,
	&Parser_NewParseException_m4553_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Parser_t1070____pattern_0_FieldInfo = 
{
	"pattern"/* name */
	, &String_t_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___pattern_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Parser_t1070____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayList_t936_0_0_1;
FieldInfo Parser_t1070____caps_2_FieldInfo = 
{
	"caps"/* name */
	, &ArrayList_t936_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___caps_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t923_0_0_1;
FieldInfo Parser_t1070____refs_3_FieldInfo = 
{
	"refs"/* name */
	, &Hashtable_t923_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___refs_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Parser_t1070____num_groups_4_FieldInfo = 
{
	"num_groups"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___num_groups_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Parser_t1070____gap_5_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Parser_t1070_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1070, ___gap_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Parser_t1070_FieldInfos[] =
{
	&Parser_t1070____pattern_0_FieldInfo,
	&Parser_t1070____ptr_1_FieldInfo,
	&Parser_t1070____caps_2_FieldInfo,
	&Parser_t1070____refs_3_FieldInfo,
	&Parser_t1070____num_groups_4_FieldInfo,
	&Parser_t1070____gap_5_FieldInfo,
	NULL
};
static Il2CppMethodReference Parser_t1070_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool Parser_t1070_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Parser_t1070_0_0_0;
extern Il2CppType Parser_t1070_1_0_0;
struct Parser_t1070;
const Il2CppTypeDefinitionMetadata Parser_t1070_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Parser_t1070_VTable/* vtableMethods */
	, Parser_t1070_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Parser_t1070_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Parser"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Parser_t1070_MethodInfos/* methods */
	, NULL/* properties */
	, Parser_t1070_FieldInfos/* fields */
	, NULL/* events */
	, &Parser_t1070_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Parser_t1070_0_0_0/* byval_arg */
	, &Parser_t1070_1_0_0/* this_arg */
	, &Parser_t1070_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Parser_t1070)/* instance_size */
	, sizeof (Parser_t1070)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 31/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern TypeInfo QuickSearch_t1063_il2cpp_TypeInfo;
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo QuickSearch_t1063_QuickSearch__ctor_m4554_ParameterInfos[] = 
{
	{"str", 0, 134218479, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218480, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 2, 134218481, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
MethodInfo QuickSearch__ctor_m4554_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&QuickSearch__ctor_m4554/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350_SByte_t350/* invoker_method */
	, QuickSearch_t1063_QuickSearch__ctor_m4554_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
MethodInfo QuickSearch__cctor_m4555_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&QuickSearch__cctor_m4555/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
MethodInfo QuickSearch_get_Length_m4556_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&QuickSearch_get_Length_m4556/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo QuickSearch_t1063_QuickSearch_Search_m4557_ParameterInfos[] = 
{
	{"text", 0, 134218482, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 1, 134218483, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"end", 2, 134218484, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
MethodInfo QuickSearch_Search_m4557_MethodInfo = 
{
	"Search"/* name */
	, (methodPointerType)&QuickSearch_Search_m4557/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t_Int32_t33_Int32_t33/* invoker_method */
	, QuickSearch_t1063_QuickSearch_Search_m4557_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
MethodInfo QuickSearch_SetupShiftTable_m4558_MethodInfo = 
{
	"SetupShiftTable"/* name */
	, (methodPointerType)&QuickSearch_SetupShiftTable_m4558/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo QuickSearch_t1063_QuickSearch_GetShiftDistance_m4559_ParameterInfos[] = 
{
	{"c", 0, 134218485, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
MethodInfo QuickSearch_GetShiftDistance_m4559_MethodInfo = 
{
	"GetShiftDistance"/* name */
	, (methodPointerType)&QuickSearch_GetShiftDistance_m4559/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int16_t386/* invoker_method */
	, QuickSearch_t1063_QuickSearch_GetShiftDistance_m4559_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo QuickSearch_t1063_QuickSearch_GetChar_m4560_ParameterInfos[] = 
{
	{"c", 0, 134218486, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Char_t190_0_0_0;
extern void* RuntimeInvoker_Char_t190_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
MethodInfo QuickSearch_GetChar_m4560_MethodInfo = 
{
	"GetChar"/* name */
	, (methodPointerType)&QuickSearch_GetChar_m4560/* method */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* declaring_type */
	, &Char_t190_0_0_0/* return_type */
	, RuntimeInvoker_Char_t190_Int16_t386/* invoker_method */
	, QuickSearch_t1063_QuickSearch_GetChar_m4560_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* QuickSearch_t1063_MethodInfos[] =
{
	&QuickSearch__ctor_m4554_MethodInfo,
	&QuickSearch__cctor_m4555_MethodInfo,
	&QuickSearch_get_Length_m4556_MethodInfo,
	&QuickSearch_Search_m4557_MethodInfo,
	&QuickSearch_SetupShiftTable_m4558_MethodInfo,
	&QuickSearch_GetShiftDistance_m4559_MethodInfo,
	&QuickSearch_GetChar_m4560_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo QuickSearch_t1063____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo QuickSearch_t1063____len_1_FieldInfo = 
{
	"len"/* name */
	, &Int32_t33_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___len_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo QuickSearch_t1063____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo QuickSearch_t1063____reverse_3_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___reverse_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t515_0_0_1;
FieldInfo QuickSearch_t1063____shift_4_FieldInfo = 
{
	"shift"/* name */
	, &ByteU5BU5D_t515_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___shift_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t923_0_0_1;
FieldInfo QuickSearch_t1063____shiftExtended_5_FieldInfo = 
{
	"shiftExtended"/* name */
	, &Hashtable_t923_0_0_1/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063, ___shiftExtended_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_49;
FieldInfo QuickSearch_t1063____THRESHOLD_6_FieldInfo = 
{
	"THRESHOLD"/* name */
	, &Int32_t33_0_0_49/* type */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1063_StaticFields, ___THRESHOLD_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* QuickSearch_t1063_FieldInfos[] =
{
	&QuickSearch_t1063____str_0_FieldInfo,
	&QuickSearch_t1063____len_1_FieldInfo,
	&QuickSearch_t1063____ignore_2_FieldInfo,
	&QuickSearch_t1063____reverse_3_FieldInfo,
	&QuickSearch_t1063____shift_4_FieldInfo,
	&QuickSearch_t1063____shiftExtended_5_FieldInfo,
	&QuickSearch_t1063____THRESHOLD_6_FieldInfo,
	NULL
};
extern MethodInfo QuickSearch_get_Length_m4556_MethodInfo;
static PropertyInfo QuickSearch_t1063____Length_PropertyInfo = 
{
	&QuickSearch_t1063_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &QuickSearch_get_Length_m4556_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* QuickSearch_t1063_PropertyInfos[] =
{
	&QuickSearch_t1063____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference QuickSearch_t1063_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool QuickSearch_t1063_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType QuickSearch_t1063_0_0_0;
extern Il2CppType QuickSearch_t1063_1_0_0;
struct QuickSearch_t1063;
const Il2CppTypeDefinitionMetadata QuickSearch_t1063_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, QuickSearch_t1063_VTable/* vtableMethods */
	, QuickSearch_t1063_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo QuickSearch_t1063_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "QuickSearch"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, QuickSearch_t1063_MethodInfos/* methods */
	, QuickSearch_t1063_PropertyInfos/* properties */
	, QuickSearch_t1063_FieldInfos/* fields */
	, NULL/* events */
	, &QuickSearch_t1063_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &QuickSearch_t1063_0_0_0/* byval_arg */
	, &QuickSearch_t1063_1_0_0/* this_arg */
	, &QuickSearch_t1063_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (QuickSearch_t1063)/* instance_size */
	, sizeof (QuickSearch_t1063)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(QuickSearch_t1063_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 1/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.ReplacementEvaluator
extern TypeInfo ReplacementEvaluator_t1076_il2cpp_TypeInfo;
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"
extern Il2CppType Regex_t752_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator__ctor_m4561_ParameterInfos[] = 
{
	{"regex", 0, 134218487, &EmptyCustomAttributesCache, &Regex_t752_0_0_0},
	{"replacement", 1, 134218488, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
MethodInfo ReplacementEvaluator__ctor_m4561_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ReplacementEvaluator__ctor_m4561/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator__ctor_m4561_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1026_0_0_0;
extern Il2CppType Match_t1026_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_Evaluate_m4562_ParameterInfos[] = 
{
	{"match", 0, 134218489, &EmptyCustomAttributesCache, &Match_t1026_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
MethodInfo ReplacementEvaluator_Evaluate_m4562_MethodInfo = 
{
	"Evaluate"/* name */
	, (methodPointerType)&ReplacementEvaluator_Evaluate_m4562/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_Evaluate_m4562_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1026_0_0_0;
extern Il2CppType StringBuilder_t284_0_0_0;
extern Il2CppType StringBuilder_t284_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_EvaluateAppend_m4563_ParameterInfos[] = 
{
	{"match", 0, 134218490, &EmptyCustomAttributesCache, &Match_t1026_0_0_0},
	{"sb", 1, 134218491, &EmptyCustomAttributesCache, &StringBuilder_t284_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
MethodInfo ReplacementEvaluator_EvaluateAppend_m4563_MethodInfo = 
{
	"EvaluateAppend"/* name */
	, (methodPointerType)&ReplacementEvaluator_EvaluateAppend_m4563/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_EvaluateAppend_m4563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4564_MethodInfo = 
{
	"get_NeedsGroupsOrCaptures"/* name */
	, (methodPointerType)&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4564/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_Ensure_m4565_ParameterInfos[] = 
{
	{"size", 0, 134218492, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
MethodInfo ReplacementEvaluator_Ensure_m4565_MethodInfo = 
{
	"Ensure"/* name */
	, (methodPointerType)&ReplacementEvaluator_Ensure_m4565/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_Ensure_m4565_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_AddFromReplacement_m4566_ParameterInfos[] = 
{
	{"start", 0, 134218493, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"end", 1, 134218494, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
MethodInfo ReplacementEvaluator_AddFromReplacement_m4566_MethodInfo = 
{
	"AddFromReplacement"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddFromReplacement_m4566/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_AddFromReplacement_m4566_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_AddInt_m4567_ParameterInfos[] = 
{
	{"i", 0, 134218495, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
MethodInfo ReplacementEvaluator_AddInt_m4567_MethodInfo = 
{
	"AddInt"/* name */
	, (methodPointerType)&ReplacementEvaluator_AddInt_m4567/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_AddInt_m4567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
MethodInfo ReplacementEvaluator_Compile_m4568_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ReplacementEvaluator_Compile_m4568/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_0;
static ParameterInfo ReplacementEvaluator_t1076_ReplacementEvaluator_CompileTerm_m4569_ParameterInfos[] = 
{
	{"ptr", 0, 134218496, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
MethodInfo ReplacementEvaluator_CompileTerm_m4569_MethodInfo = 
{
	"CompileTerm"/* name */
	, (methodPointerType)&ReplacementEvaluator_CompileTerm_m4569/* method */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int32U26_t387/* invoker_method */
	, ReplacementEvaluator_t1076_ReplacementEvaluator_CompileTerm_m4569_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ReplacementEvaluator_t1076_MethodInfos[] =
{
	&ReplacementEvaluator__ctor_m4561_MethodInfo,
	&ReplacementEvaluator_Evaluate_m4562_MethodInfo,
	&ReplacementEvaluator_EvaluateAppend_m4563_MethodInfo,
	&ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4564_MethodInfo,
	&ReplacementEvaluator_Ensure_m4565_MethodInfo,
	&ReplacementEvaluator_AddFromReplacement_m4566_MethodInfo,
	&ReplacementEvaluator_AddInt_m4567_MethodInfo,
	&ReplacementEvaluator_Compile_m4568_MethodInfo,
	&ReplacementEvaluator_CompileTerm_m4569_MethodInfo,
	NULL
};
extern Il2CppType Regex_t752_0_0_1;
FieldInfo ReplacementEvaluator_t1076____regex_0_FieldInfo = 
{
	"regex"/* name */
	, &Regex_t752_0_0_1/* type */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1076, ___regex_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo ReplacementEvaluator_t1076____n_pieces_1_FieldInfo = 
{
	"n_pieces"/* name */
	, &Int32_t33_0_0_1/* type */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1076, ___n_pieces_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32U5BU5D_t1041_0_0_1;
FieldInfo ReplacementEvaluator_t1076____pieces_2_FieldInfo = 
{
	"pieces"/* name */
	, &Int32U5BU5D_t1041_0_0_1/* type */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1076, ___pieces_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo ReplacementEvaluator_t1076____replacement_3_FieldInfo = 
{
	"replacement"/* name */
	, &String_t_0_0_1/* type */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* parent */
	, offsetof(ReplacementEvaluator_t1076, ___replacement_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ReplacementEvaluator_t1076_FieldInfos[] =
{
	&ReplacementEvaluator_t1076____regex_0_FieldInfo,
	&ReplacementEvaluator_t1076____n_pieces_1_FieldInfo,
	&ReplacementEvaluator_t1076____pieces_2_FieldInfo,
	&ReplacementEvaluator_t1076____replacement_3_FieldInfo,
	NULL
};
extern MethodInfo ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4564_MethodInfo;
static PropertyInfo ReplacementEvaluator_t1076____NeedsGroupsOrCaptures_PropertyInfo = 
{
	&ReplacementEvaluator_t1076_il2cpp_TypeInfo/* parent */
	, "NeedsGroupsOrCaptures"/* name */
	, &ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4564_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ReplacementEvaluator_t1076_PropertyInfos[] =
{
	&ReplacementEvaluator_t1076____NeedsGroupsOrCaptures_PropertyInfo,
	NULL
};
static Il2CppMethodReference ReplacementEvaluator_t1076_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool ReplacementEvaluator_t1076_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ReplacementEvaluator_t1076_0_0_0;
extern Il2CppType ReplacementEvaluator_t1076_1_0_0;
struct ReplacementEvaluator_t1076;
const Il2CppTypeDefinitionMetadata ReplacementEvaluator_t1076_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReplacementEvaluator_t1076_VTable/* vtableMethods */
	, ReplacementEvaluator_t1076_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ReplacementEvaluator_t1076_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReplacementEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ReplacementEvaluator_t1076_MethodInfos/* methods */
	, ReplacementEvaluator_t1076_PropertyInfos/* properties */
	, ReplacementEvaluator_t1076_FieldInfos/* fields */
	, NULL/* events */
	, &ReplacementEvaluator_t1076_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ReplacementEvaluator_t1076_0_0_0/* byval_arg */
	, &ReplacementEvaluator_t1076_1_0_0/* this_arg */
	, &ReplacementEvaluator_t1076_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReplacementEvaluator_t1076)/* instance_size */
	, sizeof (ReplacementEvaluator_t1076)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 1/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
extern TypeInfo ExpressionCollection_t1077_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
MethodInfo ExpressionCollection__ctor_m4570_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionCollection__ctor_m4570/* method */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo ExpressionCollection_t1077_ExpressionCollection_Add_m4571_ParameterInfos[] = 
{
	{"e", 0, 134218497, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_Add_m4571_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ExpressionCollection_Add_m4571/* method */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ExpressionCollection_t1077_ExpressionCollection_Add_m4571_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo ExpressionCollection_t1077_ExpressionCollection_get_Item_m4572_ParameterInfos[] = 
{
	{"i", 0, 134218498, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
MethodInfo ExpressionCollection_get_Item_m4572_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ExpressionCollection_get_Item_m4572/* method */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33/* invoker_method */
	, ExpressionCollection_t1077_ExpressionCollection_get_Item_m4572_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo ExpressionCollection_t1077_ExpressionCollection_set_Item_m4573_ParameterInfos[] = 
{
	{"i", 0, 134218499, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"value", 1, 134218500, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_set_Item_m4573_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ExpressionCollection_set_Item_m4573/* method */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Object_t/* invoker_method */
	, ExpressionCollection_t1077_ExpressionCollection_set_Item_m4573_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ExpressionCollection_t1077_ExpressionCollection_OnValidate_m4574_ParameterInfos[] = 
{
	{"o", 0, 134218501, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
MethodInfo ExpressionCollection_OnValidate_m4574_MethodInfo = 
{
	"OnValidate"/* name */
	, (methodPointerType)&ExpressionCollection_OnValidate_m4574/* method */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ExpressionCollection_t1077_ExpressionCollection_OnValidate_m4574_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionCollection_t1077_MethodInfos[] =
{
	&ExpressionCollection__ctor_m4570_MethodInfo,
	&ExpressionCollection_Add_m4571_MethodInfo,
	&ExpressionCollection_get_Item_m4572_MethodInfo,
	&ExpressionCollection_set_Item_m4573_MethodInfo,
	&ExpressionCollection_OnValidate_m4574_MethodInfo,
	NULL
};
extern MethodInfo ExpressionCollection_get_Item_m4572_MethodInfo;
extern MethodInfo ExpressionCollection_set_Item_m4573_MethodInfo;
static PropertyInfo ExpressionCollection_t1077____Item_PropertyInfo = 
{
	&ExpressionCollection_t1077_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ExpressionCollection_get_Item_m4572_MethodInfo/* get */
	, &ExpressionCollection_set_Item_m4573_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionCollection_t1077_PropertyInfos[] =
{
	&ExpressionCollection_t1077____Item_PropertyInfo,
	NULL
};
extern MethodInfo CollectionBase_GetEnumerator_m4925_MethodInfo;
extern MethodInfo CollectionBase_get_Count_m4886_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5079_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_SyncRoot_m5080_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_CopyTo_m5081_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsFixedSize_m5082_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsReadOnly_m5083_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_Item_m5084_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_set_Item_m5085_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Add_m5086_MethodInfo;
extern MethodInfo CollectionBase_Clear_m4939_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Contains_m5087_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_IndexOf_m5088_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Insert_m5089_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Remove_m5090_MethodInfo;
extern MethodInfo CollectionBase_RemoveAt_m5091_MethodInfo;
extern MethodInfo CollectionBase_OnClear_m5092_MethodInfo;
extern MethodInfo CollectionBase_OnClearComplete_m5093_MethodInfo;
extern MethodInfo CollectionBase_OnInsert_m5094_MethodInfo;
extern MethodInfo CollectionBase_OnInsertComplete_m5095_MethodInfo;
extern MethodInfo CollectionBase_OnRemove_m5096_MethodInfo;
extern MethodInfo CollectionBase_OnRemoveComplete_m5097_MethodInfo;
extern MethodInfo CollectionBase_OnSet_m5098_MethodInfo;
extern MethodInfo CollectionBase_OnSetComplete_m5099_MethodInfo;
extern MethodInfo ExpressionCollection_OnValidate_m4574_MethodInfo;
static Il2CppMethodReference ExpressionCollection_t1077_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&CollectionBase_GetEnumerator_m4925_MethodInfo,
	&CollectionBase_get_Count_m4886_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_IsSynchronized_m5079_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_SyncRoot_m5080_MethodInfo,
	&CollectionBase_System_Collections_ICollection_CopyTo_m5081_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsFixedSize_m5082_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsReadOnly_m5083_MethodInfo,
	&CollectionBase_System_Collections_IList_get_Item_m5084_MethodInfo,
	&CollectionBase_System_Collections_IList_set_Item_m5085_MethodInfo,
	&CollectionBase_System_Collections_IList_Add_m5086_MethodInfo,
	&CollectionBase_Clear_m4939_MethodInfo,
	&CollectionBase_System_Collections_IList_Contains_m5087_MethodInfo,
	&CollectionBase_System_Collections_IList_IndexOf_m5088_MethodInfo,
	&CollectionBase_System_Collections_IList_Insert_m5089_MethodInfo,
	&CollectionBase_System_Collections_IList_Remove_m5090_MethodInfo,
	&CollectionBase_RemoveAt_m5091_MethodInfo,
	&CollectionBase_OnClear_m5092_MethodInfo,
	&CollectionBase_OnClearComplete_m5093_MethodInfo,
	&CollectionBase_OnInsert_m5094_MethodInfo,
	&CollectionBase_OnInsertComplete_m5095_MethodInfo,
	&CollectionBase_OnRemove_m5096_MethodInfo,
	&CollectionBase_OnRemoveComplete_m5097_MethodInfo,
	&CollectionBase_OnSet_m5098_MethodInfo,
	&CollectionBase_OnSetComplete_m5099_MethodInfo,
	&ExpressionCollection_OnValidate_m4574_MethodInfo,
};
static bool ExpressionCollection_t1077_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExpressionCollection_t1077_InterfacesOffsets[] = 
{
	{ &IEnumerable_t410_0_0_0, 4},
	{ &ICollection_t807_0_0_0, 5},
	{ &IList_t808_0_0_0, 9},
};
void ExpressionCollection_t1077_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t411 * tmp;
		tmp = (DefaultMemberAttribute_t411 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t411_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m2108(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m2108_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExpressionCollection_t1077__CustomAttributeCache = {
1,
NULL,
&ExpressionCollection_t1077_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionCollection_t1077_0_0_0;
extern Il2CppType ExpressionCollection_t1077_1_0_0;
extern Il2CppType CollectionBase_t996_0_0_0;
struct ExpressionCollection_t1077;
extern CustomAttributesCache ExpressionCollection_t1077__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata ExpressionCollection_t1077_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExpressionCollection_t1077_InterfacesOffsets/* interfaceOffsets */
	, &CollectionBase_t996_0_0_0/* parent */
	, ExpressionCollection_t1077_VTable/* vtableMethods */
	, ExpressionCollection_t1077_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionCollection_t1077_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionCollection"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionCollection_t1077_MethodInfos/* methods */
	, ExpressionCollection_t1077_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ExpressionCollection_t1077_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &ExpressionCollection_t1077__CustomAttributeCache/* custom_attributes_cache */
	, &ExpressionCollection_t1077_0_0_0/* byval_arg */
	, &ExpressionCollection_t1077_1_0_0/* this_arg */
	, &ExpressionCollection_t1077_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionCollection_t1077)/* instance_size */
	, sizeof (ExpressionCollection_t1077)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 29/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern TypeInfo Expression_t1074_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
MethodInfo Expression__ctor_m4575_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Expression__ctor_m4575/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Expression_t1074_Expression_Compile_m5001_ParameterInfos[] = 
{
	{"cmp", 0, 134218502, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218503, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Expression_Compile_m5001_MethodInfo = 
{
	"Compile"/* name */
	, NULL/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Expression_t1074_Expression_Compile_m5001_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Expression_t1074_Expression_GetWidth_m4999_ParameterInfos[] = 
{
	{"min", 0, 134218504, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218505, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
MethodInfo Expression_GetWidth_m4999_MethodInfo = 
{
	"GetWidth"/* name */
	, NULL/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Expression_t1074_Expression_GetWidth_m4999_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
MethodInfo Expression_GetFixedWidth_m4576_MethodInfo = 
{
	"GetFixedWidth"/* name */
	, (methodPointerType)&Expression_GetFixedWidth_m4576/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Expression_t1074_Expression_GetAnchorInfo_m4577_ParameterInfos[] = 
{
	{"reverse", 0, 134218506, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
MethodInfo Expression_GetAnchorInfo_m4577_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Expression_GetAnchorInfo_m4577/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1079_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t350/* invoker_method */
	, Expression_t1074_Expression_GetAnchorInfo_m4577_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
MethodInfo Expression_IsComplex_m5000_MethodInfo = 
{
	"IsComplex"/* name */
	, NULL/* method */
	, &Expression_t1074_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Expression_t1074_MethodInfos[] =
{
	&Expression__ctor_m4575_MethodInfo,
	&Expression_Compile_m5001_MethodInfo,
	&Expression_GetWidth_m4999_MethodInfo,
	&Expression_GetFixedWidth_m4576_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&Expression_IsComplex_m5000_MethodInfo,
	NULL
};
extern MethodInfo Expression_GetAnchorInfo_m4577_MethodInfo;
static Il2CppMethodReference Expression_t1074_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	NULL,
};
static bool Expression_t1074_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Expression_t1074_1_0_0;
struct Expression_t1074;
const Il2CppTypeDefinitionMetadata Expression_t1074_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Expression_t1074_VTable/* vtableMethods */
	, Expression_t1074_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Expression_t1074_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Expression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Expression_t1074_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Expression_t1074_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Expression_t1074_0_0_0/* byval_arg */
	, &Expression_t1074_1_0_0/* this_arg */
	, &Expression_t1074_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Expression_t1074)/* instance_size */
	, sizeof (Expression_t1074)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern TypeInfo CompositeExpression_t1080_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
MethodInfo CompositeExpression__ctor_m4578_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CompositeExpression__ctor_m4578/* method */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1077_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
MethodInfo CompositeExpression_get_Expressions_m4579_MethodInfo = 
{
	"get_Expressions"/* name */
	, (methodPointerType)&CompositeExpression_get_Expressions_m4579/* method */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1077_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2180/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo CompositeExpression_t1080_CompositeExpression_GetWidth_m4580_ParameterInfos[] = 
{
	{"min", 0, 134218507, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218508, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"count", 2, 134218509, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
MethodInfo CompositeExpression_GetWidth_m4580_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CompositeExpression_GetWidth_m4580/* method */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387_Int32_t33/* invoker_method */
	, CompositeExpression_t1080_CompositeExpression_GetWidth_m4580_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
MethodInfo CompositeExpression_IsComplex_m4581_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CompositeExpression_IsComplex_m4581/* method */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CompositeExpression_t1080_MethodInfos[] =
{
	&CompositeExpression__ctor_m4578_MethodInfo,
	&CompositeExpression_get_Expressions_m4579_MethodInfo,
	&CompositeExpression_GetWidth_m4580_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
	NULL
};
extern Il2CppType ExpressionCollection_t1077_0_0_1;
FieldInfo CompositeExpression_t1080____expressions_0_FieldInfo = 
{
	"expressions"/* name */
	, &ExpressionCollection_t1077_0_0_1/* type */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* parent */
	, offsetof(CompositeExpression_t1080, ___expressions_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CompositeExpression_t1080_FieldInfos[] =
{
	&CompositeExpression_t1080____expressions_0_FieldInfo,
	NULL
};
extern MethodInfo CompositeExpression_get_Expressions_m4579_MethodInfo;
static PropertyInfo CompositeExpression_t1080____Expressions_PropertyInfo = 
{
	&CompositeExpression_t1080_il2cpp_TypeInfo/* parent */
	, "Expressions"/* name */
	, &CompositeExpression_get_Expressions_m4579_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CompositeExpression_t1080_PropertyInfos[] =
{
	&CompositeExpression_t1080____Expressions_PropertyInfo,
	NULL
};
extern MethodInfo CompositeExpression_IsComplex_m4581_MethodInfo;
static Il2CppMethodReference CompositeExpression_t1080_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool CompositeExpression_t1080_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CompositeExpression_t1080_0_0_0;
extern Il2CppType CompositeExpression_t1080_1_0_0;
struct CompositeExpression_t1080;
const Il2CppTypeDefinitionMetadata CompositeExpression_t1080_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1074_0_0_0/* parent */
	, CompositeExpression_t1080_VTable/* vtableMethods */
	, CompositeExpression_t1080_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CompositeExpression_t1080_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CompositeExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CompositeExpression_t1080_MethodInfos/* methods */
	, CompositeExpression_t1080_PropertyInfos/* properties */
	, CompositeExpression_t1080_FieldInfos/* fields */
	, NULL/* events */
	, &CompositeExpression_t1080_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CompositeExpression_t1080_0_0_0/* byval_arg */
	, &CompositeExpression_t1080_1_0_0/* this_arg */
	, &CompositeExpression_t1080_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CompositeExpression_t1080)/* instance_size */
	, sizeof (CompositeExpression_t1080)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern TypeInfo Group_t1072_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
MethodInfo Group__ctor_m4582_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Group__ctor_m4582/* method */
	, &Group_t1072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo Group_t1072_Group_AppendExpression_m4583_ParameterInfos[] = 
{
	{"e", 0, 134218510, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Group_AppendExpression_m4583_MethodInfo = 
{
	"AppendExpression"/* name */
	, (methodPointerType)&Group_AppendExpression_m4583/* method */
	, &Group_t1072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Group_t1072_Group_AppendExpression_m4583_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Group_t1072_Group_Compile_m4584_ParameterInfos[] = 
{
	{"cmp", 0, 134218511, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218512, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Group_Compile_m4584_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Group_Compile_m4584/* method */
	, &Group_t1072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Group_t1072_Group_Compile_m4584_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Group_t1072_Group_GetWidth_m4585_ParameterInfos[] = 
{
	{"min", 0, 134218513, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218514, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
MethodInfo Group_GetWidth_m4585_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Group_GetWidth_m4585/* method */
	, &Group_t1072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Group_t1072_Group_GetWidth_m4585_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Group_t1072_Group_GetAnchorInfo_m4586_ParameterInfos[] = 
{
	{"reverse", 0, 134218515, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
MethodInfo Group_GetAnchorInfo_m4586_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Group_GetAnchorInfo_m4586/* method */
	, &Group_t1072_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1079_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t350/* invoker_method */
	, Group_t1072_Group_GetAnchorInfo_m4586_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Group_t1072_MethodInfos[] =
{
	&Group__ctor_m4582_MethodInfo,
	&Group_AppendExpression_m4583_MethodInfo,
	&Group_Compile_m4584_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	NULL
};
extern MethodInfo Group_Compile_m4584_MethodInfo;
extern MethodInfo Group_GetWidth_m4585_MethodInfo;
extern MethodInfo Group_GetAnchorInfo_m4586_MethodInfo;
static Il2CppMethodReference Group_t1072_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Group_Compile_m4584_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool Group_t1072_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Group_t1072_1_0_0;
struct Group_t1072;
const Il2CppTypeDefinitionMetadata Group_t1072_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1080_0_0_0/* parent */
	, Group_t1072_VTable/* vtableMethods */
	, Group_t1072_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Group_t1072_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Group"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Group_t1072_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Group_t1072_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Group_t1072_0_0_0/* byval_arg */
	, &Group_t1072_1_0_0/* this_arg */
	, &Group_t1072_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Group_t1072)/* instance_size */
	, sizeof (Group_t1072)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern TypeInfo RegularExpression_t1071_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
MethodInfo RegularExpression__ctor_m4587_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RegularExpression__ctor_m4587/* method */
	, &RegularExpression_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo RegularExpression_t1071_RegularExpression_set_GroupCount_m4588_ParameterInfos[] = 
{
	{"value", 0, 134218516, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
MethodInfo RegularExpression_set_GroupCount_m4588_MethodInfo = 
{
	"set_GroupCount"/* name */
	, (methodPointerType)&RegularExpression_set_GroupCount_m4588/* method */
	, &RegularExpression_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, RegularExpression_t1071_RegularExpression_set_GroupCount_m4588_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo RegularExpression_t1071_RegularExpression_Compile_m4589_ParameterInfos[] = 
{
	{"cmp", 0, 134218517, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218518, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo RegularExpression_Compile_m4589_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&RegularExpression_Compile_m4589/* method */
	, &RegularExpression_t1071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, RegularExpression_t1071_RegularExpression_Compile_m4589_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RegularExpression_t1071_MethodInfos[] =
{
	&RegularExpression__ctor_m4587_MethodInfo,
	&RegularExpression_set_GroupCount_m4588_MethodInfo,
	&RegularExpression_Compile_m4589_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo RegularExpression_t1071____group_count_1_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t33_0_0_1/* type */
	, &RegularExpression_t1071_il2cpp_TypeInfo/* parent */
	, offsetof(RegularExpression_t1071, ___group_count_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RegularExpression_t1071_FieldInfos[] =
{
	&RegularExpression_t1071____group_count_1_FieldInfo,
	NULL
};
extern MethodInfo RegularExpression_set_GroupCount_m4588_MethodInfo;
static PropertyInfo RegularExpression_t1071____GroupCount_PropertyInfo = 
{
	&RegularExpression_t1071_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, NULL/* get */
	, &RegularExpression_set_GroupCount_m4588_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RegularExpression_t1071_PropertyInfos[] =
{
	&RegularExpression_t1071____GroupCount_PropertyInfo,
	NULL
};
extern MethodInfo RegularExpression_Compile_m4589_MethodInfo;
static Il2CppMethodReference RegularExpression_t1071_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&RegularExpression_Compile_m4589_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool RegularExpression_t1071_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RegularExpression_t1071_0_0_0;
extern Il2CppType RegularExpression_t1071_1_0_0;
struct RegularExpression_t1071;
const Il2CppTypeDefinitionMetadata RegularExpression_t1071_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1072_0_0_0/* parent */
	, RegularExpression_t1071_VTable/* vtableMethods */
	, RegularExpression_t1071_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RegularExpression_t1071_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RegularExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, RegularExpression_t1071_MethodInfos/* methods */
	, RegularExpression_t1071_PropertyInfos/* properties */
	, RegularExpression_t1071_FieldInfos/* fields */
	, NULL/* events */
	, &RegularExpression_t1071_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RegularExpression_t1071_0_0_0/* byval_arg */
	, &RegularExpression_t1071_1_0_0/* this_arg */
	, &RegularExpression_t1071_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RegularExpression_t1071)/* instance_size */
	, sizeof (RegularExpression_t1071)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern TypeInfo CapturingGroup_t1081_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
MethodInfo CapturingGroup__ctor_m4590_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CapturingGroup__ctor_m4590/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
MethodInfo CapturingGroup_get_Index_m4591_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&CapturingGroup_get_Index_m4591/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo CapturingGroup_t1081_CapturingGroup_set_Index_m4592_ParameterInfos[] = 
{
	{"value", 0, 134218519, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
MethodInfo CapturingGroup_set_Index_m4592_MethodInfo = 
{
	"set_Index"/* name */
	, (methodPointerType)&CapturingGroup_set_Index_m4592/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, CapturingGroup_t1081_CapturingGroup_set_Index_m4592_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
MethodInfo CapturingGroup_get_Name_m4593_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&CapturingGroup_get_Name_m4593/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo CapturingGroup_t1081_CapturingGroup_set_Name_m4594_ParameterInfos[] = 
{
	{"value", 0, 134218520, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
MethodInfo CapturingGroup_set_Name_m4594_MethodInfo = 
{
	"set_Name"/* name */
	, (methodPointerType)&CapturingGroup_set_Name_m4594/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, CapturingGroup_t1081_CapturingGroup_set_Name_m4594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
MethodInfo CapturingGroup_get_IsNamed_m4595_MethodInfo = 
{
	"get_IsNamed"/* name */
	, (methodPointerType)&CapturingGroup_get_IsNamed_m4595/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CapturingGroup_t1081_CapturingGroup_Compile_m4596_ParameterInfos[] = 
{
	{"cmp", 0, 134218521, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218522, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CapturingGroup_Compile_m4596_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CapturingGroup_Compile_m4596/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, CapturingGroup_t1081_CapturingGroup_Compile_m4596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
MethodInfo CapturingGroup_IsComplex_m4597_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CapturingGroup_IsComplex_m4597/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CapturingGroup_t1081_CapturingGroup_CompareTo_m4598_ParameterInfos[] = 
{
	{"other", 0, 134218523, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
MethodInfo CapturingGroup_CompareTo_m4598_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&CapturingGroup_CompareTo_m4598/* method */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t/* invoker_method */
	, CapturingGroup_t1081_CapturingGroup_CompareTo_m4598_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CapturingGroup_t1081_MethodInfos[] =
{
	&CapturingGroup__ctor_m4590_MethodInfo,
	&CapturingGroup_get_Index_m4591_MethodInfo,
	&CapturingGroup_set_Index_m4592_MethodInfo,
	&CapturingGroup_get_Name_m4593_MethodInfo,
	&CapturingGroup_set_Name_m4594_MethodInfo,
	&CapturingGroup_get_IsNamed_m4595_MethodInfo,
	&CapturingGroup_Compile_m4596_MethodInfo,
	&CapturingGroup_IsComplex_m4597_MethodInfo,
	&CapturingGroup_CompareTo_m4598_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo CapturingGroup_t1081____gid_1_FieldInfo = 
{
	"gid"/* name */
	, &Int32_t33_0_0_1/* type */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1081, ___gid_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo CapturingGroup_t1081____name_2_FieldInfo = 
{
	"name"/* name */
	, &String_t_0_0_1/* type */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1081, ___name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CapturingGroup_t1081_FieldInfos[] =
{
	&CapturingGroup_t1081____gid_1_FieldInfo,
	&CapturingGroup_t1081____name_2_FieldInfo,
	NULL
};
extern MethodInfo CapturingGroup_get_Index_m4591_MethodInfo;
extern MethodInfo CapturingGroup_set_Index_m4592_MethodInfo;
static PropertyInfo CapturingGroup_t1081____Index_PropertyInfo = 
{
	&CapturingGroup_t1081_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &CapturingGroup_get_Index_m4591_MethodInfo/* get */
	, &CapturingGroup_set_Index_m4592_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_Name_m4593_MethodInfo;
extern MethodInfo CapturingGroup_set_Name_m4594_MethodInfo;
static PropertyInfo CapturingGroup_t1081____Name_PropertyInfo = 
{
	&CapturingGroup_t1081_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &CapturingGroup_get_Name_m4593_MethodInfo/* get */
	, &CapturingGroup_set_Name_m4594_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_IsNamed_m4595_MethodInfo;
static PropertyInfo CapturingGroup_t1081____IsNamed_PropertyInfo = 
{
	&CapturingGroup_t1081_il2cpp_TypeInfo/* parent */
	, "IsNamed"/* name */
	, &CapturingGroup_get_IsNamed_m4595_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CapturingGroup_t1081_PropertyInfos[] =
{
	&CapturingGroup_t1081____Index_PropertyInfo,
	&CapturingGroup_t1081____Name_PropertyInfo,
	&CapturingGroup_t1081____IsNamed_PropertyInfo,
	NULL
};
extern MethodInfo CapturingGroup_Compile_m4596_MethodInfo;
extern MethodInfo CapturingGroup_IsComplex_m4597_MethodInfo;
extern MethodInfo CapturingGroup_CompareTo_m4598_MethodInfo;
static Il2CppMethodReference CapturingGroup_t1081_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&CapturingGroup_Compile_m4596_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	&CapturingGroup_IsComplex_m4597_MethodInfo,
	&CapturingGroup_CompareTo_m4598_MethodInfo,
};
static bool CapturingGroup_t1081_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CapturingGroup_t1081_InterfacesTypeInfos[] = 
{
	&IComparable_t346_0_0_0,
};
static Il2CppInterfaceOffsetPair CapturingGroup_t1081_InterfacesOffsets[] = 
{
	{ &IComparable_t346_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CapturingGroup_t1081_0_0_0;
extern Il2CppType CapturingGroup_t1081_1_0_0;
struct CapturingGroup_t1081;
const Il2CppTypeDefinitionMetadata CapturingGroup_t1081_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CapturingGroup_t1081_InterfacesTypeInfos/* implementedInterfaces */
	, CapturingGroup_t1081_InterfacesOffsets/* interfaceOffsets */
	, &Group_t1072_0_0_0/* parent */
	, CapturingGroup_t1081_VTable/* vtableMethods */
	, CapturingGroup_t1081_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CapturingGroup_t1081_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CapturingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CapturingGroup_t1081_MethodInfos/* methods */
	, CapturingGroup_t1081_PropertyInfos/* properties */
	, CapturingGroup_t1081_FieldInfos/* fields */
	, NULL/* events */
	, &CapturingGroup_t1081_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CapturingGroup_t1081_0_0_0/* byval_arg */
	, &CapturingGroup_t1081_1_0_0/* this_arg */
	, &CapturingGroup_t1081_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CapturingGroup_t1081)/* instance_size */
	, sizeof (CapturingGroup_t1081)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern TypeInfo BalancingGroup_t1082_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
MethodInfo BalancingGroup__ctor_m4599_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BalancingGroup__ctor_m4599/* method */
	, &BalancingGroup_t1082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1081_0_0_0;
static ParameterInfo BalancingGroup_t1082_BalancingGroup_set_Balance_m4600_ParameterInfos[] = 
{
	{"value", 0, 134218524, &EmptyCustomAttributesCache, &CapturingGroup_t1081_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo BalancingGroup_set_Balance_m4600_MethodInfo = 
{
	"set_Balance"/* name */
	, (methodPointerType)&BalancingGroup_set_Balance_m4600/* method */
	, &BalancingGroup_t1082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, BalancingGroup_t1082_BalancingGroup_set_Balance_m4600_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo BalancingGroup_t1082_BalancingGroup_Compile_m4601_ParameterInfos[] = 
{
	{"cmp", 0, 134218525, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218526, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BalancingGroup_Compile_m4601_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BalancingGroup_Compile_m4601/* method */
	, &BalancingGroup_t1082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, BalancingGroup_t1082_BalancingGroup_Compile_m4601_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BalancingGroup_t1082_MethodInfos[] =
{
	&BalancingGroup__ctor_m4599_MethodInfo,
	&BalancingGroup_set_Balance_m4600_MethodInfo,
	&BalancingGroup_Compile_m4601_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1081_0_0_1;
FieldInfo BalancingGroup_t1082____balance_3_FieldInfo = 
{
	"balance"/* name */
	, &CapturingGroup_t1081_0_0_1/* type */
	, &BalancingGroup_t1082_il2cpp_TypeInfo/* parent */
	, offsetof(BalancingGroup_t1082, ___balance_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BalancingGroup_t1082_FieldInfos[] =
{
	&BalancingGroup_t1082____balance_3_FieldInfo,
	NULL
};
extern MethodInfo BalancingGroup_set_Balance_m4600_MethodInfo;
static PropertyInfo BalancingGroup_t1082____Balance_PropertyInfo = 
{
	&BalancingGroup_t1082_il2cpp_TypeInfo/* parent */
	, "Balance"/* name */
	, NULL/* get */
	, &BalancingGroup_set_Balance_m4600_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* BalancingGroup_t1082_PropertyInfos[] =
{
	&BalancingGroup_t1082____Balance_PropertyInfo,
	NULL
};
extern MethodInfo BalancingGroup_Compile_m4601_MethodInfo;
static Il2CppMethodReference BalancingGroup_t1082_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&BalancingGroup_Compile_m4601_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	&CapturingGroup_IsComplex_m4597_MethodInfo,
	&CapturingGroup_CompareTo_m4598_MethodInfo,
};
static bool BalancingGroup_t1082_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BalancingGroup_t1082_InterfacesOffsets[] = 
{
	{ &IComparable_t346_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BalancingGroup_t1082_0_0_0;
extern Il2CppType BalancingGroup_t1082_1_0_0;
struct BalancingGroup_t1082;
const Il2CppTypeDefinitionMetadata BalancingGroup_t1082_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BalancingGroup_t1082_InterfacesOffsets/* interfaceOffsets */
	, &CapturingGroup_t1081_0_0_0/* parent */
	, BalancingGroup_t1082_VTable/* vtableMethods */
	, BalancingGroup_t1082_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BalancingGroup_t1082_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BalancingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BalancingGroup_t1082_MethodInfos/* methods */
	, BalancingGroup_t1082_PropertyInfos/* properties */
	, BalancingGroup_t1082_FieldInfos/* fields */
	, NULL/* events */
	, &BalancingGroup_t1082_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BalancingGroup_t1082_0_0_0/* byval_arg */
	, &BalancingGroup_t1082_1_0_0/* this_arg */
	, &BalancingGroup_t1082_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BalancingGroup_t1082)/* instance_size */
	, sizeof (BalancingGroup_t1082)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern TypeInfo NonBacktrackingGroup_t1083_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
MethodInfo NonBacktrackingGroup__ctor_m4602_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonBacktrackingGroup__ctor_m4602/* method */
	, &NonBacktrackingGroup_t1083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo NonBacktrackingGroup_t1083_NonBacktrackingGroup_Compile_m4603_ParameterInfos[] = 
{
	{"cmp", 0, 134218527, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218528, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo NonBacktrackingGroup_Compile_m4603_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&NonBacktrackingGroup_Compile_m4603/* method */
	, &NonBacktrackingGroup_t1083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, NonBacktrackingGroup_t1083_NonBacktrackingGroup_Compile_m4603_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
MethodInfo NonBacktrackingGroup_IsComplex_m4604_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&NonBacktrackingGroup_IsComplex_m4604/* method */
	, &NonBacktrackingGroup_t1083_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* NonBacktrackingGroup_t1083_MethodInfos[] =
{
	&NonBacktrackingGroup__ctor_m4602_MethodInfo,
	&NonBacktrackingGroup_Compile_m4603_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m4604_MethodInfo,
	NULL
};
extern MethodInfo NonBacktrackingGroup_Compile_m4603_MethodInfo;
extern MethodInfo NonBacktrackingGroup_IsComplex_m4604_MethodInfo;
static Il2CppMethodReference NonBacktrackingGroup_t1083_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&NonBacktrackingGroup_Compile_m4603_MethodInfo,
	&Group_GetWidth_m4585_MethodInfo,
	&Group_GetAnchorInfo_m4586_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m4604_MethodInfo,
};
static bool NonBacktrackingGroup_t1083_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType NonBacktrackingGroup_t1083_0_0_0;
extern Il2CppType NonBacktrackingGroup_t1083_1_0_0;
struct NonBacktrackingGroup_t1083;
const Il2CppTypeDefinitionMetadata NonBacktrackingGroup_t1083_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1072_0_0_0/* parent */
	, NonBacktrackingGroup_t1083_VTable/* vtableMethods */
	, NonBacktrackingGroup_t1083_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo NonBacktrackingGroup_t1083_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonBacktrackingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, NonBacktrackingGroup_t1083_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &NonBacktrackingGroup_t1083_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &NonBacktrackingGroup_t1083_0_0_0/* byval_arg */
	, &NonBacktrackingGroup_t1083_1_0_0/* this_arg */
	, &NonBacktrackingGroup_t1083_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonBacktrackingGroup_t1083)/* instance_size */
	, sizeof (NonBacktrackingGroup_t1083)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern TypeInfo Repetition_t1084_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Repetition_t1084_Repetition__ctor_m4605_ParameterInfos[] = 
{
	{"min", 0, 134218529, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"max", 1, 134218530, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"lazy", 2, 134218531, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
MethodInfo Repetition__ctor_m4605_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Repetition__ctor_m4605/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Int32_t33_SByte_t350/* invoker_method */
	, Repetition_t1084_Repetition__ctor_m4605_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
MethodInfo Repetition_get_Expression_m4606_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&Repetition_get_Expression_m4606/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo Repetition_t1084_Repetition_set_Expression_m4607_ParameterInfos[] = 
{
	{"value", 0, 134218532, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Repetition_set_Expression_m4607_MethodInfo = 
{
	"set_Expression"/* name */
	, (methodPointerType)&Repetition_set_Expression_m4607/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Repetition_t1084_Repetition_set_Expression_m4607_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
MethodInfo Repetition_get_Minimum_m4608_MethodInfo = 
{
	"get_Minimum"/* name */
	, (methodPointerType)&Repetition_get_Minimum_m4608/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Repetition_t1084_Repetition_Compile_m4609_ParameterInfos[] = 
{
	{"cmp", 0, 134218533, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218534, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Repetition_Compile_m4609_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Repetition_Compile_m4609/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Repetition_t1084_Repetition_Compile_m4609_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Repetition_t1084_Repetition_GetWidth_m4610_ParameterInfos[] = 
{
	{"min", 0, 134218535, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218536, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
MethodInfo Repetition_GetWidth_m4610_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Repetition_GetWidth_m4610/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Repetition_t1084_Repetition_GetWidth_m4610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Repetition_t1084_Repetition_GetAnchorInfo_m4611_ParameterInfos[] = 
{
	{"reverse", 0, 134218537, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
MethodInfo Repetition_GetAnchorInfo_m4611_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Repetition_GetAnchorInfo_m4611/* method */
	, &Repetition_t1084_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1079_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t350/* invoker_method */
	, Repetition_t1084_Repetition_GetAnchorInfo_m4611_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Repetition_t1084_MethodInfos[] =
{
	&Repetition__ctor_m4605_MethodInfo,
	&Repetition_get_Expression_m4606_MethodInfo,
	&Repetition_set_Expression_m4607_MethodInfo,
	&Repetition_get_Minimum_m4608_MethodInfo,
	&Repetition_Compile_m4609_MethodInfo,
	&Repetition_GetWidth_m4610_MethodInfo,
	&Repetition_GetAnchorInfo_m4611_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Repetition_t1084____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Repetition_t1084_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1084, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Repetition_t1084____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Repetition_t1084_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1084, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Repetition_t1084____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Repetition_t1084_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1084, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Repetition_t1084_FieldInfos[] =
{
	&Repetition_t1084____min_1_FieldInfo,
	&Repetition_t1084____max_2_FieldInfo,
	&Repetition_t1084____lazy_3_FieldInfo,
	NULL
};
extern MethodInfo Repetition_get_Expression_m4606_MethodInfo;
extern MethodInfo Repetition_set_Expression_m4607_MethodInfo;
static PropertyInfo Repetition_t1084____Expression_PropertyInfo = 
{
	&Repetition_t1084_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &Repetition_get_Expression_m4606_MethodInfo/* get */
	, &Repetition_set_Expression_m4607_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Repetition_get_Minimum_m4608_MethodInfo;
static PropertyInfo Repetition_t1084____Minimum_PropertyInfo = 
{
	&Repetition_t1084_il2cpp_TypeInfo/* parent */
	, "Minimum"/* name */
	, &Repetition_get_Minimum_m4608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Repetition_t1084_PropertyInfos[] =
{
	&Repetition_t1084____Expression_PropertyInfo,
	&Repetition_t1084____Minimum_PropertyInfo,
	NULL
};
extern MethodInfo Repetition_Compile_m4609_MethodInfo;
extern MethodInfo Repetition_GetWidth_m4610_MethodInfo;
extern MethodInfo Repetition_GetAnchorInfo_m4611_MethodInfo;
static Il2CppMethodReference Repetition_t1084_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Repetition_Compile_m4609_MethodInfo,
	&Repetition_GetWidth_m4610_MethodInfo,
	&Repetition_GetAnchorInfo_m4611_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool Repetition_t1084_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Repetition_t1084_0_0_0;
extern Il2CppType Repetition_t1084_1_0_0;
struct Repetition_t1084;
const Il2CppTypeDefinitionMetadata Repetition_t1084_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1080_0_0_0/* parent */
	, Repetition_t1084_VTable/* vtableMethods */
	, Repetition_t1084_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Repetition_t1084_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Repetition"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Repetition_t1084_MethodInfos/* methods */
	, Repetition_t1084_PropertyInfos/* properties */
	, Repetition_t1084_FieldInfos/* fields */
	, NULL/* events */
	, &Repetition_t1084_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Repetition_t1084_0_0_0/* byval_arg */
	, &Repetition_t1084_1_0_0/* this_arg */
	, &Repetition_t1084_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Repetition_t1084)/* instance_size */
	, sizeof (Repetition_t1084)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
extern TypeInfo Assertion_t1073_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
MethodInfo Assertion__ctor_m4612_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Assertion__ctor_m4612/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
MethodInfo Assertion_get_TrueExpression_m4613_MethodInfo = 
{
	"get_TrueExpression"/* name */
	, (methodPointerType)&Assertion_get_TrueExpression_m4613/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo Assertion_t1073_Assertion_set_TrueExpression_m4614_ParameterInfos[] = 
{
	{"value", 0, 134218538, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_TrueExpression_m4614_MethodInfo = 
{
	"set_TrueExpression"/* name */
	, (methodPointerType)&Assertion_set_TrueExpression_m4614/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Assertion_t1073_Assertion_set_TrueExpression_m4614_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
MethodInfo Assertion_get_FalseExpression_m4615_MethodInfo = 
{
	"get_FalseExpression"/* name */
	, (methodPointerType)&Assertion_get_FalseExpression_m4615/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo Assertion_t1073_Assertion_set_FalseExpression_m4616_ParameterInfos[] = 
{
	{"value", 0, 134218539, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_FalseExpression_m4616_MethodInfo = 
{
	"set_FalseExpression"/* name */
	, (methodPointerType)&Assertion_set_FalseExpression_m4616/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Assertion_t1073_Assertion_set_FalseExpression_m4616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Assertion_t1073_Assertion_GetWidth_m4617_ParameterInfos[] = 
{
	{"min", 0, 134218540, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218541, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo Assertion_GetWidth_m4617_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Assertion_GetWidth_m4617/* method */
	, &Assertion_t1073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Assertion_t1073_Assertion_GetWidth_m4617_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Assertion_t1073_MethodInfos[] =
{
	&Assertion__ctor_m4612_MethodInfo,
	&Assertion_get_TrueExpression_m4613_MethodInfo,
	&Assertion_set_TrueExpression_m4614_MethodInfo,
	&Assertion_get_FalseExpression_m4615_MethodInfo,
	&Assertion_set_FalseExpression_m4616_MethodInfo,
	&Assertion_GetWidth_m4617_MethodInfo,
	NULL
};
extern MethodInfo Assertion_get_TrueExpression_m4613_MethodInfo;
extern MethodInfo Assertion_set_TrueExpression_m4614_MethodInfo;
static PropertyInfo Assertion_t1073____TrueExpression_PropertyInfo = 
{
	&Assertion_t1073_il2cpp_TypeInfo/* parent */
	, "TrueExpression"/* name */
	, &Assertion_get_TrueExpression_m4613_MethodInfo/* get */
	, &Assertion_set_TrueExpression_m4614_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Assertion_get_FalseExpression_m4615_MethodInfo;
extern MethodInfo Assertion_set_FalseExpression_m4616_MethodInfo;
static PropertyInfo Assertion_t1073____FalseExpression_PropertyInfo = 
{
	&Assertion_t1073_il2cpp_TypeInfo/* parent */
	, "FalseExpression"/* name */
	, &Assertion_get_FalseExpression_m4615_MethodInfo/* get */
	, &Assertion_set_FalseExpression_m4616_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Assertion_t1073_PropertyInfos[] =
{
	&Assertion_t1073____TrueExpression_PropertyInfo,
	&Assertion_t1073____FalseExpression_PropertyInfo,
	NULL
};
extern MethodInfo Assertion_GetWidth_m4617_MethodInfo;
static Il2CppMethodReference Assertion_t1073_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	NULL,
	&Assertion_GetWidth_m4617_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool Assertion_t1073_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Assertion_t1073_1_0_0;
struct Assertion_t1073;
const Il2CppTypeDefinitionMetadata Assertion_t1073_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1080_0_0_0/* parent */
	, Assertion_t1073_VTable/* vtableMethods */
	, Assertion_t1073_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Assertion_t1073_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Assertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Assertion_t1073_MethodInfos/* methods */
	, Assertion_t1073_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Assertion_t1073_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Assertion_t1073_0_0_0/* byval_arg */
	, &Assertion_t1073_1_0_0/* this_arg */
	, &Assertion_t1073_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Assertion_t1073)/* instance_size */
	, sizeof (Assertion_t1073)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern TypeInfo CaptureAssertion_t1086_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern Il2CppType Literal_t1085_0_0_0;
extern Il2CppType Literal_t1085_0_0_0;
static ParameterInfo CaptureAssertion_t1086_CaptureAssertion__ctor_m4618_ParameterInfos[] = 
{
	{"l", 0, 134218542, &EmptyCustomAttributesCache, &Literal_t1085_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
MethodInfo CaptureAssertion__ctor_m4618_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CaptureAssertion__ctor_m4618/* method */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, CaptureAssertion_t1086_CaptureAssertion__ctor_m4618_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1081_0_0_0;
static ParameterInfo CaptureAssertion_t1086_CaptureAssertion_set_CapturingGroup_m4619_ParameterInfos[] = 
{
	{"value", 0, 134218543, &EmptyCustomAttributesCache, &CapturingGroup_t1081_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo CaptureAssertion_set_CapturingGroup_m4619_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&CaptureAssertion_set_CapturingGroup_m4619/* method */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, CaptureAssertion_t1086_CaptureAssertion_set_CapturingGroup_m4619_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CaptureAssertion_t1086_CaptureAssertion_Compile_m4620_ParameterInfos[] = 
{
	{"cmp", 0, 134218544, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218545, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CaptureAssertion_Compile_m4620_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CaptureAssertion_Compile_m4620/* method */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, CaptureAssertion_t1086_CaptureAssertion_Compile_m4620_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
MethodInfo CaptureAssertion_IsComplex_m4621_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CaptureAssertion_IsComplex_m4621/* method */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1075_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
MethodInfo CaptureAssertion_get_Alternate_m4622_MethodInfo = 
{
	"get_Alternate"/* name */
	, (methodPointerType)&CaptureAssertion_get_Alternate_m4622/* method */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionAssertion_t1075_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CaptureAssertion_t1086_MethodInfos[] =
{
	&CaptureAssertion__ctor_m4618_MethodInfo,
	&CaptureAssertion_set_CapturingGroup_m4619_MethodInfo,
	&CaptureAssertion_Compile_m4620_MethodInfo,
	&CaptureAssertion_IsComplex_m4621_MethodInfo,
	&CaptureAssertion_get_Alternate_m4622_MethodInfo,
	NULL
};
extern Il2CppType ExpressionAssertion_t1075_0_0_1;
FieldInfo CaptureAssertion_t1086____alternate_1_FieldInfo = 
{
	"alternate"/* name */
	, &ExpressionAssertion_t1075_0_0_1/* type */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1086, ___alternate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CapturingGroup_t1081_0_0_1;
FieldInfo CaptureAssertion_t1086____group_2_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1081_0_0_1/* type */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1086, ___group_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Literal_t1085_0_0_1;
FieldInfo CaptureAssertion_t1086____literal_3_FieldInfo = 
{
	"literal"/* name */
	, &Literal_t1085_0_0_1/* type */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1086, ___literal_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CaptureAssertion_t1086_FieldInfos[] =
{
	&CaptureAssertion_t1086____alternate_1_FieldInfo,
	&CaptureAssertion_t1086____group_2_FieldInfo,
	&CaptureAssertion_t1086____literal_3_FieldInfo,
	NULL
};
extern MethodInfo CaptureAssertion_set_CapturingGroup_m4619_MethodInfo;
static PropertyInfo CaptureAssertion_t1086____CapturingGroup_PropertyInfo = 
{
	&CaptureAssertion_t1086_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, NULL/* get */
	, &CaptureAssertion_set_CapturingGroup_m4619_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CaptureAssertion_get_Alternate_m4622_MethodInfo;
static PropertyInfo CaptureAssertion_t1086____Alternate_PropertyInfo = 
{
	&CaptureAssertion_t1086_il2cpp_TypeInfo/* parent */
	, "Alternate"/* name */
	, &CaptureAssertion_get_Alternate_m4622_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CaptureAssertion_t1086_PropertyInfos[] =
{
	&CaptureAssertion_t1086____CapturingGroup_PropertyInfo,
	&CaptureAssertion_t1086____Alternate_PropertyInfo,
	NULL
};
extern MethodInfo CaptureAssertion_Compile_m4620_MethodInfo;
extern MethodInfo CaptureAssertion_IsComplex_m4621_MethodInfo;
static Il2CppMethodReference CaptureAssertion_t1086_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&CaptureAssertion_Compile_m4620_MethodInfo,
	&Assertion_GetWidth_m4617_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&CaptureAssertion_IsComplex_m4621_MethodInfo,
};
static bool CaptureAssertion_t1086_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CaptureAssertion_t1086_0_0_0;
extern Il2CppType CaptureAssertion_t1086_1_0_0;
struct CaptureAssertion_t1086;
const Il2CppTypeDefinitionMetadata CaptureAssertion_t1086_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1073_0_0_0/* parent */
	, CaptureAssertion_t1086_VTable/* vtableMethods */
	, CaptureAssertion_t1086_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CaptureAssertion_t1086_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CaptureAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CaptureAssertion_t1086_MethodInfos/* methods */
	, CaptureAssertion_t1086_PropertyInfos/* properties */
	, CaptureAssertion_t1086_FieldInfos/* fields */
	, NULL/* events */
	, &CaptureAssertion_t1086_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CaptureAssertion_t1086_0_0_0/* byval_arg */
	, &CaptureAssertion_t1086_1_0_0/* this_arg */
	, &CaptureAssertion_t1086_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CaptureAssertion_t1086)/* instance_size */
	, sizeof (CaptureAssertion_t1086)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern TypeInfo ExpressionAssertion_t1075_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
MethodInfo ExpressionAssertion__ctor_m4623_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionAssertion__ctor_m4623/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ExpressionAssertion_t1075_ExpressionAssertion_set_Reverse_m4624_ParameterInfos[] = 
{
	{"value", 0, 134218546, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
MethodInfo ExpressionAssertion_set_Reverse_m4624_MethodInfo = 
{
	"set_Reverse"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Reverse_m4624/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350/* invoker_method */
	, ExpressionAssertion_t1075_ExpressionAssertion_set_Reverse_m4624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ExpressionAssertion_t1075_ExpressionAssertion_set_Negate_m4625_ParameterInfos[] = 
{
	{"value", 0, 134218547, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
MethodInfo ExpressionAssertion_set_Negate_m4625_MethodInfo = 
{
	"set_Negate"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Negate_m4625/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350/* invoker_method */
	, ExpressionAssertion_t1075_ExpressionAssertion_set_Negate_m4625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
MethodInfo ExpressionAssertion_get_TestExpression_m4626_MethodInfo = 
{
	"get_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_get_TestExpression_m4626/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo ExpressionAssertion_t1075_ExpressionAssertion_set_TestExpression_m4627_ParameterInfos[] = 
{
	{"value", 0, 134218548, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionAssertion_set_TestExpression_m4627_MethodInfo = 
{
	"set_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_set_TestExpression_m4627/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, ExpressionAssertion_t1075_ExpressionAssertion_set_TestExpression_m4627_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo ExpressionAssertion_t1075_ExpressionAssertion_Compile_m4628_ParameterInfos[] = 
{
	{"cmp", 0, 134218549, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218550, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo ExpressionAssertion_Compile_m4628_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ExpressionAssertion_Compile_m4628/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, ExpressionAssertion_t1075_ExpressionAssertion_Compile_m4628_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
MethodInfo ExpressionAssertion_IsComplex_m4629_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&ExpressionAssertion_IsComplex_m4629/* method */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionAssertion_t1075_MethodInfos[] =
{
	&ExpressionAssertion__ctor_m4623_MethodInfo,
	&ExpressionAssertion_set_Reverse_m4624_MethodInfo,
	&ExpressionAssertion_set_Negate_m4625_MethodInfo,
	&ExpressionAssertion_get_TestExpression_m4626_MethodInfo,
	&ExpressionAssertion_set_TestExpression_m4627_MethodInfo,
	&ExpressionAssertion_Compile_m4628_MethodInfo,
	&ExpressionAssertion_IsComplex_m4629_MethodInfo,
	NULL
};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo ExpressionAssertion_t1075____reverse_1_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1075, ___reverse_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo ExpressionAssertion_t1075____negate_2_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1075, ___negate_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExpressionAssertion_t1075_FieldInfos[] =
{
	&ExpressionAssertion_t1075____reverse_1_FieldInfo,
	&ExpressionAssertion_t1075____negate_2_FieldInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_set_Reverse_m4624_MethodInfo;
static PropertyInfo ExpressionAssertion_t1075____Reverse_PropertyInfo = 
{
	&ExpressionAssertion_t1075_il2cpp_TypeInfo/* parent */
	, "Reverse"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Reverse_m4624_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_set_Negate_m4625_MethodInfo;
static PropertyInfo ExpressionAssertion_t1075____Negate_PropertyInfo = 
{
	&ExpressionAssertion_t1075_il2cpp_TypeInfo/* parent */
	, "Negate"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Negate_m4625_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_get_TestExpression_m4626_MethodInfo;
extern MethodInfo ExpressionAssertion_set_TestExpression_m4627_MethodInfo;
static PropertyInfo ExpressionAssertion_t1075____TestExpression_PropertyInfo = 
{
	&ExpressionAssertion_t1075_il2cpp_TypeInfo/* parent */
	, "TestExpression"/* name */
	, &ExpressionAssertion_get_TestExpression_m4626_MethodInfo/* get */
	, &ExpressionAssertion_set_TestExpression_m4627_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionAssertion_t1075_PropertyInfos[] =
{
	&ExpressionAssertion_t1075____Reverse_PropertyInfo,
	&ExpressionAssertion_t1075____Negate_PropertyInfo,
	&ExpressionAssertion_t1075____TestExpression_PropertyInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_Compile_m4628_MethodInfo;
extern MethodInfo ExpressionAssertion_IsComplex_m4629_MethodInfo;
static Il2CppMethodReference ExpressionAssertion_t1075_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&ExpressionAssertion_Compile_m4628_MethodInfo,
	&Assertion_GetWidth_m4617_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&ExpressionAssertion_IsComplex_m4629_MethodInfo,
};
static bool ExpressionAssertion_t1075_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionAssertion_t1075_1_0_0;
struct ExpressionAssertion_t1075;
const Il2CppTypeDefinitionMetadata ExpressionAssertion_t1075_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1073_0_0_0/* parent */
	, ExpressionAssertion_t1075_VTable/* vtableMethods */
	, ExpressionAssertion_t1075_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionAssertion_t1075_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionAssertion_t1075_MethodInfos/* methods */
	, ExpressionAssertion_t1075_PropertyInfos/* properties */
	, ExpressionAssertion_t1075_FieldInfos/* fields */
	, NULL/* events */
	, &ExpressionAssertion_t1075_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExpressionAssertion_t1075_0_0_0/* byval_arg */
	, &ExpressionAssertion_t1075_1_0_0/* this_arg */
	, &ExpressionAssertion_t1075_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionAssertion_t1075)/* instance_size */
	, sizeof (ExpressionAssertion_t1075)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
extern TypeInfo Alternation_t1087_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
MethodInfo Alternation__ctor_m4630_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Alternation__ctor_m4630/* method */
	, &Alternation_t1087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1077_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
MethodInfo Alternation_get_Alternatives_m4631_MethodInfo = 
{
	"get_Alternatives"/* name */
	, (methodPointerType)&Alternation_get_Alternatives_m4631/* method */
	, &Alternation_t1087_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1077_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
static ParameterInfo Alternation_t1087_Alternation_AddAlternative_m4632_ParameterInfos[] = 
{
	{"e", 0, 134218551, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Alternation_AddAlternative_m4632_MethodInfo = 
{
	"AddAlternative"/* name */
	, (methodPointerType)&Alternation_AddAlternative_m4632/* method */
	, &Alternation_t1087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Alternation_t1087_Alternation_AddAlternative_m4632_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Alternation_t1087_Alternation_Compile_m4633_ParameterInfos[] = 
{
	{"cmp", 0, 134218552, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218553, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Alternation_Compile_m4633_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Alternation_Compile_m4633/* method */
	, &Alternation_t1087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Alternation_t1087_Alternation_Compile_m4633_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Alternation_t1087_Alternation_GetWidth_m4634_ParameterInfos[] = 
{
	{"min", 0, 134218554, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218555, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
MethodInfo Alternation_GetWidth_m4634_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Alternation_GetWidth_m4634/* method */
	, &Alternation_t1087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Alternation_t1087_Alternation_GetWidth_m4634_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Alternation_t1087_MethodInfos[] =
{
	&Alternation__ctor_m4630_MethodInfo,
	&Alternation_get_Alternatives_m4631_MethodInfo,
	&Alternation_AddAlternative_m4632_MethodInfo,
	&Alternation_Compile_m4633_MethodInfo,
	&Alternation_GetWidth_m4634_MethodInfo,
	NULL
};
extern MethodInfo Alternation_get_Alternatives_m4631_MethodInfo;
static PropertyInfo Alternation_t1087____Alternatives_PropertyInfo = 
{
	&Alternation_t1087_il2cpp_TypeInfo/* parent */
	, "Alternatives"/* name */
	, &Alternation_get_Alternatives_m4631_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Alternation_t1087_PropertyInfos[] =
{
	&Alternation_t1087____Alternatives_PropertyInfo,
	NULL
};
extern MethodInfo Alternation_Compile_m4633_MethodInfo;
extern MethodInfo Alternation_GetWidth_m4634_MethodInfo;
static Il2CppMethodReference Alternation_t1087_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Alternation_Compile_m4633_MethodInfo,
	&Alternation_GetWidth_m4634_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&CompositeExpression_IsComplex_m4581_MethodInfo,
};
static bool Alternation_t1087_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Alternation_t1087_0_0_0;
extern Il2CppType Alternation_t1087_1_0_0;
struct Alternation_t1087;
const Il2CppTypeDefinitionMetadata Alternation_t1087_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1080_0_0_0/* parent */
	, Alternation_t1087_VTable/* vtableMethods */
	, Alternation_t1087_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Alternation_t1087_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Alternation"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Alternation_t1087_MethodInfos/* methods */
	, Alternation_t1087_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Alternation_t1087_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Alternation_t1087_0_0_0/* byval_arg */
	, &Alternation_t1087_1_0_0/* this_arg */
	, &Alternation_t1087_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Alternation_t1087)/* instance_size */
	, sizeof (Alternation_t1087)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern TypeInfo Literal_t1085_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Literal_t1085_Literal__ctor_m4635_ParameterInfos[] = 
{
	{"str", 0, 134218556, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218557, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
MethodInfo Literal__ctor_m4635_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Literal__ctor_m4635/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Literal_t1085_Literal__ctor_m4635_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Literal_t1085_Literal_CompileLiteral_m4636_ParameterInfos[] = 
{
	{"str", 0, 134218558, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"cmp", 1, 134218559, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"ignore", 2, 134218560, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"reverse", 3, 134218561, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
MethodInfo Literal_CompileLiteral_m4636_MethodInfo = 
{
	"CompileLiteral"/* name */
	, (methodPointerType)&Literal_CompileLiteral_m4636/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t_SByte_t350_SByte_t350/* invoker_method */
	, Literal_t1085_Literal_CompileLiteral_m4636_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Literal_t1085_Literal_Compile_m4637_ParameterInfos[] = 
{
	{"cmp", 0, 134218562, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218563, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Literal_Compile_m4637_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Literal_Compile_m4637/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Literal_t1085_Literal_Compile_m4637_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Literal_t1085_Literal_GetWidth_m4638_ParameterInfos[] = 
{
	{"min", 0, 134218564, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218565, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
MethodInfo Literal_GetWidth_m4638_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Literal_GetWidth_m4638/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Literal_t1085_Literal_GetWidth_m4638_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Literal_t1085_Literal_GetAnchorInfo_m4639_ParameterInfos[] = 
{
	{"reverse", 0, 134218566, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
MethodInfo Literal_GetAnchorInfo_m4639_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Literal_GetAnchorInfo_m4639/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1079_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t350/* invoker_method */
	, Literal_t1085_Literal_GetAnchorInfo_m4639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
MethodInfo Literal_IsComplex_m4640_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Literal_IsComplex_m4640/* method */
	, &Literal_t1085_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Literal_t1085_MethodInfos[] =
{
	&Literal__ctor_m4635_MethodInfo,
	&Literal_CompileLiteral_m4636_MethodInfo,
	&Literal_Compile_m4637_MethodInfo,
	&Literal_GetWidth_m4638_MethodInfo,
	&Literal_GetAnchorInfo_m4639_MethodInfo,
	&Literal_IsComplex_m4640_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Literal_t1085____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &Literal_t1085_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1085, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Literal_t1085____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Literal_t1085_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1085, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Literal_t1085_FieldInfos[] =
{
	&Literal_t1085____str_0_FieldInfo,
	&Literal_t1085____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Literal_Compile_m4637_MethodInfo;
extern MethodInfo Literal_GetWidth_m4638_MethodInfo;
extern MethodInfo Literal_GetAnchorInfo_m4639_MethodInfo;
extern MethodInfo Literal_IsComplex_m4640_MethodInfo;
static Il2CppMethodReference Literal_t1085_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Literal_Compile_m4637_MethodInfo,
	&Literal_GetWidth_m4638_MethodInfo,
	&Literal_GetAnchorInfo_m4639_MethodInfo,
	&Literal_IsComplex_m4640_MethodInfo,
};
static bool Literal_t1085_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Literal_t1085_1_0_0;
struct Literal_t1085;
const Il2CppTypeDefinitionMetadata Literal_t1085_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1074_0_0_0/* parent */
	, Literal_t1085_VTable/* vtableMethods */
	, Literal_t1085_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Literal_t1085_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Literal"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Literal_t1085_MethodInfos/* methods */
	, NULL/* properties */
	, Literal_t1085_FieldInfos/* fields */
	, NULL/* events */
	, &Literal_t1085_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Literal_t1085_0_0_0/* byval_arg */
	, &Literal_t1085_1_0_0/* this_arg */
	, &Literal_t1085_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Literal_t1085)/* instance_size */
	, sizeof (Literal_t1085)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern TypeInfo PositionAssertion_t1088_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
extern Il2CppType Position_t1046_0_0_0;
static ParameterInfo PositionAssertion_t1088_PositionAssertion__ctor_m4641_ParameterInfos[] = 
{
	{"pos", 0, 134218567, &EmptyCustomAttributesCache, &Position_t1046_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
MethodInfo PositionAssertion__ctor_m4641_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PositionAssertion__ctor_m4641/* method */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707/* invoker_method */
	, PositionAssertion_t1088_PositionAssertion__ctor_m4641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PositionAssertion_t1088_PositionAssertion_Compile_m4642_ParameterInfos[] = 
{
	{"cmp", 0, 134218568, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218569, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo PositionAssertion_Compile_m4642_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&PositionAssertion_Compile_m4642/* method */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, PositionAssertion_t1088_PositionAssertion_Compile_m4642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo PositionAssertion_t1088_PositionAssertion_GetWidth_m4643_ParameterInfos[] = 
{
	{"min", 0, 134218570, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218571, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo PositionAssertion_GetWidth_m4643_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&PositionAssertion_GetWidth_m4643/* method */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, PositionAssertion_t1088_PositionAssertion_GetWidth_m4643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
MethodInfo PositionAssertion_IsComplex_m4644_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&PositionAssertion_IsComplex_m4644/* method */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo PositionAssertion_t1088_PositionAssertion_GetAnchorInfo_m4645_ParameterInfos[] = 
{
	{"revers", 0, 134218572, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
MethodInfo PositionAssertion_GetAnchorInfo_m4645_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&PositionAssertion_GetAnchorInfo_m4645/* method */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1079_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t350/* invoker_method */
	, PositionAssertion_t1088_PositionAssertion_GetAnchorInfo_m4645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PositionAssertion_t1088_MethodInfos[] =
{
	&PositionAssertion__ctor_m4641_MethodInfo,
	&PositionAssertion_Compile_m4642_MethodInfo,
	&PositionAssertion_GetWidth_m4643_MethodInfo,
	&PositionAssertion_IsComplex_m4644_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m4645_MethodInfo,
	NULL
};
extern Il2CppType Position_t1046_0_0_1;
FieldInfo PositionAssertion_t1088____pos_0_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1046_0_0_1/* type */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* parent */
	, offsetof(PositionAssertion_t1088, ___pos_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PositionAssertion_t1088_FieldInfos[] =
{
	&PositionAssertion_t1088____pos_0_FieldInfo,
	NULL
};
extern MethodInfo PositionAssertion_Compile_m4642_MethodInfo;
extern MethodInfo PositionAssertion_GetWidth_m4643_MethodInfo;
extern MethodInfo PositionAssertion_GetAnchorInfo_m4645_MethodInfo;
extern MethodInfo PositionAssertion_IsComplex_m4644_MethodInfo;
static Il2CppMethodReference PositionAssertion_t1088_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&PositionAssertion_Compile_m4642_MethodInfo,
	&PositionAssertion_GetWidth_m4643_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m4645_MethodInfo,
	&PositionAssertion_IsComplex_m4644_MethodInfo,
};
static bool PositionAssertion_t1088_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PositionAssertion_t1088_0_0_0;
extern Il2CppType PositionAssertion_t1088_1_0_0;
struct PositionAssertion_t1088;
const Il2CppTypeDefinitionMetadata PositionAssertion_t1088_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1074_0_0_0/* parent */
	, PositionAssertion_t1088_VTable/* vtableMethods */
	, PositionAssertion_t1088_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PositionAssertion_t1088_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PositionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, PositionAssertion_t1088_MethodInfos/* methods */
	, NULL/* properties */
	, PositionAssertion_t1088_FieldInfos/* fields */
	, NULL/* events */
	, &PositionAssertion_t1088_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PositionAssertion_t1088_0_0_0/* byval_arg */
	, &PositionAssertion_t1088_1_0_0/* this_arg */
	, &PositionAssertion_t1088_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PositionAssertion_t1088)/* instance_size */
	, sizeof (PositionAssertion_t1088)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern TypeInfo Reference_t1089_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Reference_t1089_Reference__ctor_m4646_ParameterInfos[] = 
{
	{"ignore", 0, 134218573, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
MethodInfo Reference__ctor_m4646_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Reference__ctor_m4646/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350/* invoker_method */
	, Reference_t1089_Reference__ctor_m4646_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1081_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
MethodInfo Reference_get_CapturingGroup_m4647_MethodInfo = 
{
	"get_CapturingGroup"/* name */
	, (methodPointerType)&Reference_get_CapturingGroup_m4647/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &CapturingGroup_t1081_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1081_0_0_0;
static ParameterInfo Reference_t1089_Reference_set_CapturingGroup_m4648_ParameterInfos[] = 
{
	{"value", 0, 134218574, &EmptyCustomAttributesCache, &CapturingGroup_t1081_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo Reference_set_CapturingGroup_m4648_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&Reference_set_CapturingGroup_m4648/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Reference_t1089_Reference_set_CapturingGroup_m4648_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
MethodInfo Reference_get_IgnoreCase_m4649_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&Reference_get_IgnoreCase_m4649/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Reference_t1089_Reference_Compile_m4650_ParameterInfos[] = 
{
	{"cmp", 0, 134218575, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218576, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Reference_Compile_m4650_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Reference_Compile_m4650/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Reference_t1089_Reference_Compile_m4650_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo Reference_t1089_Reference_GetWidth_m4651_ParameterInfos[] = 
{
	{"min", 0, 134218577, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218578, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
MethodInfo Reference_GetWidth_m4651_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Reference_GetWidth_m4651/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, Reference_t1089_Reference_GetWidth_m4651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
MethodInfo Reference_IsComplex_m4652_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Reference_IsComplex_m4652/* method */
	, &Reference_t1089_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Reference_t1089_MethodInfos[] =
{
	&Reference__ctor_m4646_MethodInfo,
	&Reference_get_CapturingGroup_m4647_MethodInfo,
	&Reference_set_CapturingGroup_m4648_MethodInfo,
	&Reference_get_IgnoreCase_m4649_MethodInfo,
	&Reference_Compile_m4650_MethodInfo,
	&Reference_GetWidth_m4651_MethodInfo,
	&Reference_IsComplex_m4652_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1081_0_0_1;
FieldInfo Reference_t1089____group_0_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1081_0_0_1/* type */
	, &Reference_t1089_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1089, ___group_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Reference_t1089____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Reference_t1089_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1089, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Reference_t1089_FieldInfos[] =
{
	&Reference_t1089____group_0_FieldInfo,
	&Reference_t1089____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Reference_get_CapturingGroup_m4647_MethodInfo;
extern MethodInfo Reference_set_CapturingGroup_m4648_MethodInfo;
static PropertyInfo Reference_t1089____CapturingGroup_PropertyInfo = 
{
	&Reference_t1089_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, &Reference_get_CapturingGroup_m4647_MethodInfo/* get */
	, &Reference_set_CapturingGroup_m4648_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Reference_get_IgnoreCase_m4649_MethodInfo;
static PropertyInfo Reference_t1089____IgnoreCase_PropertyInfo = 
{
	&Reference_t1089_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &Reference_get_IgnoreCase_m4649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Reference_t1089_PropertyInfos[] =
{
	&Reference_t1089____CapturingGroup_PropertyInfo,
	&Reference_t1089____IgnoreCase_PropertyInfo,
	NULL
};
extern MethodInfo Reference_Compile_m4650_MethodInfo;
extern MethodInfo Reference_GetWidth_m4651_MethodInfo;
extern MethodInfo Reference_IsComplex_m4652_MethodInfo;
static Il2CppMethodReference Reference_t1089_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&Reference_Compile_m4650_MethodInfo,
	&Reference_GetWidth_m4651_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&Reference_IsComplex_m4652_MethodInfo,
};
static bool Reference_t1089_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Reference_t1089_0_0_0;
extern Il2CppType Reference_t1089_1_0_0;
struct Reference_t1089;
const Il2CppTypeDefinitionMetadata Reference_t1089_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1074_0_0_0/* parent */
	, Reference_t1089_VTable/* vtableMethods */
	, Reference_t1089_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Reference_t1089_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Reference"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Reference_t1089_MethodInfos/* methods */
	, Reference_t1089_PropertyInfos/* properties */
	, Reference_t1089_FieldInfos/* fields */
	, NULL/* events */
	, &Reference_t1089_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Reference_t1089_0_0_0/* byval_arg */
	, &Reference_t1089_1_0_0/* this_arg */
	, &Reference_t1089_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Reference_t1089)/* instance_size */
	, sizeof (Reference_t1089)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern TypeInfo BackslashNumber_t1090_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo BackslashNumber_t1090_BackslashNumber__ctor_m4653_ParameterInfos[] = 
{
	{"ignore", 0, 134218579, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ecma", 1, 134218580, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
MethodInfo BackslashNumber__ctor_m4653_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BackslashNumber__ctor_m4653/* method */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350_SByte_t350/* invoker_method */
	, BackslashNumber_t1090_BackslashNumber__ctor_m4653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Hashtable_t923_0_0_0;
static ParameterInfo BackslashNumber_t1090_BackslashNumber_ResolveReference_m4654_ParameterInfos[] = 
{
	{"num_str", 0, 134218581, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"groups", 1, 134218582, &EmptyCustomAttributesCache, &Hashtable_t923_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
MethodInfo BackslashNumber_ResolveReference_m4654_MethodInfo = 
{
	"ResolveReference"/* name */
	, (methodPointerType)&BackslashNumber_ResolveReference_m4654/* method */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t_Object_t/* invoker_method */
	, BackslashNumber_t1090_BackslashNumber_ResolveReference_m4654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo BackslashNumber_t1090_BackslashNumber_Compile_m4655_ParameterInfos[] = 
{
	{"cmp", 0, 134218583, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218584, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BackslashNumber_Compile_m4655_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BackslashNumber_Compile_m4655/* method */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, BackslashNumber_t1090_BackslashNumber_Compile_m4655_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BackslashNumber_t1090_MethodInfos[] =
{
	&BackslashNumber__ctor_m4653_MethodInfo,
	&BackslashNumber_ResolveReference_m4654_MethodInfo,
	&BackslashNumber_Compile_m4655_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo BackslashNumber_t1090____literal_2_FieldInfo = 
{
	"literal"/* name */
	, &String_t_0_0_1/* type */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1090, ___literal_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo BackslashNumber_t1090____ecma_3_FieldInfo = 
{
	"ecma"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1090, ___ecma_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BackslashNumber_t1090_FieldInfos[] =
{
	&BackslashNumber_t1090____literal_2_FieldInfo,
	&BackslashNumber_t1090____ecma_3_FieldInfo,
	NULL
};
extern MethodInfo BackslashNumber_Compile_m4655_MethodInfo;
static Il2CppMethodReference BackslashNumber_t1090_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&BackslashNumber_Compile_m4655_MethodInfo,
	&Reference_GetWidth_m4651_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&Reference_IsComplex_m4652_MethodInfo,
};
static bool BackslashNumber_t1090_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BackslashNumber_t1090_0_0_0;
extern Il2CppType BackslashNumber_t1090_1_0_0;
struct BackslashNumber_t1090;
const Il2CppTypeDefinitionMetadata BackslashNumber_t1090_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Reference_t1089_0_0_0/* parent */
	, BackslashNumber_t1090_VTable/* vtableMethods */
	, BackslashNumber_t1090_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BackslashNumber_t1090_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BackslashNumber"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BackslashNumber_t1090_MethodInfos/* methods */
	, NULL/* properties */
	, BackslashNumber_t1090_FieldInfos/* fields */
	, NULL/* events */
	, &BackslashNumber_t1090_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BackslashNumber_t1090_0_0_0/* byval_arg */
	, &BackslashNumber_t1090_1_0_0/* this_arg */
	, &BackslashNumber_t1090_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BackslashNumber_t1090)/* instance_size */
	, sizeof (BackslashNumber_t1090)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern TypeInfo CharacterClass_t1091_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass__ctor_m4656_ParameterInfos[] = 
{
	{"negate", 0, 134218585, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"ignore", 1, 134218586, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
MethodInfo CharacterClass__ctor_m4656_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m4656/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_SByte_t350_SByte_t350/* invoker_method */
	, CharacterClass_t1091_CharacterClass__ctor_m4656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass__ctor_m4657_ParameterInfos[] = 
{
	{"cat", 0, 134218587, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218588, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass__ctor_m4657_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m4657/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350/* invoker_method */
	, CharacterClass_t1091_CharacterClass__ctor_m4657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
MethodInfo CharacterClass__cctor_m4658_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CharacterClass__cctor_m4658/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1050_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass_AddCategory_m4659_ParameterInfos[] = 
{
	{"cat", 0, 134218589, &EmptyCustomAttributesCache, &Category_t1050_0_0_0},
	{"negate", 1, 134218590, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass_AddCategory_m4659_MethodInfo = 
{
	"AddCategory"/* name */
	, (methodPointerType)&CharacterClass_AddCategory_m4659/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_UInt16_t707_SByte_t350/* invoker_method */
	, CharacterClass_t1091_CharacterClass_AddCategory_m4659_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass_AddCharacter_m4660_ParameterInfos[] = 
{
	{"c", 0, 134218591, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
MethodInfo CharacterClass_AddCharacter_m4660_MethodInfo = 
{
	"AddCharacter"/* name */
	, (methodPointerType)&CharacterClass_AddCharacter_m4660/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386/* invoker_method */
	, CharacterClass_t1091_CharacterClass_AddCharacter_m4660_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass_AddRange_m4661_ParameterInfos[] = 
{
	{"lo", 0, 134218592, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
	{"hi", 1, 134218593, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int16_t386_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
MethodInfo CharacterClass_AddRange_m4661_MethodInfo = 
{
	"AddRange"/* name */
	, (methodPointerType)&CharacterClass_AddRange_m4661/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int16_t386_Int16_t386/* invoker_method */
	, CharacterClass_t1091_CharacterClass_AddRange_m4661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1078_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass_Compile_m4662_ParameterInfos[] = 
{
	{"cmp", 0, 134218594, &EmptyCustomAttributesCache, &ICompiler_t1078_0_0_0},
	{"reverse", 1, 134218595, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CharacterClass_Compile_m4662_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CharacterClass_Compile_m4662/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, CharacterClass_t1091_CharacterClass_Compile_m4662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_1_0_2;
extern Il2CppType Int32_t33_1_0_2;
static ParameterInfo CharacterClass_t1091_CharacterClass_GetWidth_m4663_ParameterInfos[] = 
{
	{"min", 0, 134218596, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
	{"max", 1, 134218597, &EmptyCustomAttributesCache, &Int32_t33_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
MethodInfo CharacterClass_GetWidth_m4663_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CharacterClass_GetWidth_m4663/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32U26_t387_Int32U26_t387/* invoker_method */
	, CharacterClass_t1091_CharacterClass_GetWidth_m4663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
MethodInfo CharacterClass_IsComplex_m4664_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CharacterClass_IsComplex_m4664/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1066_0_0_0;
static ParameterInfo CharacterClass_t1091_CharacterClass_GetIntervalCost_m4665_ParameterInfos[] = 
{
	{"i", 0, 134218598, &EmptyCustomAttributesCache, &Interval_t1066_0_0_0},
};
extern Il2CppType Double_t716_0_0_0;
extern void* RuntimeInvoker_Double_t716_Interval_t1066 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
MethodInfo CharacterClass_GetIntervalCost_m4665_MethodInfo = 
{
	"GetIntervalCost"/* name */
	, (methodPointerType)&CharacterClass_GetIntervalCost_m4665/* method */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* declaring_type */
	, &Double_t716_0_0_0/* return_type */
	, RuntimeInvoker_Double_t716_Interval_t1066/* invoker_method */
	, CharacterClass_t1091_CharacterClass_GetIntervalCost_m4665_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CharacterClass_t1091_MethodInfos[] =
{
	&CharacterClass__ctor_m4656_MethodInfo,
	&CharacterClass__ctor_m4657_MethodInfo,
	&CharacterClass__cctor_m4658_MethodInfo,
	&CharacterClass_AddCategory_m4659_MethodInfo,
	&CharacterClass_AddCharacter_m4660_MethodInfo,
	&CharacterClass_AddRange_m4661_MethodInfo,
	&CharacterClass_Compile_m4662_MethodInfo,
	&CharacterClass_GetWidth_m4663_MethodInfo,
	&CharacterClass_IsComplex_m4664_MethodInfo,
	&CharacterClass_GetIntervalCost_m4665_MethodInfo,
	NULL
};
extern Il2CppType Interval_t1066_0_0_17;
FieldInfo CharacterClass_t1091____upper_case_characters_0_FieldInfo = 
{
	"upper_case_characters"/* name */
	, &Interval_t1066_0_0_17/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091_StaticFields, ___upper_case_characters_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo CharacterClass_t1091____negate_1_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091, ___negate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo CharacterClass_t1091____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1058_0_0_1;
FieldInfo CharacterClass_t1091____pos_cats_3_FieldInfo = 
{
	"pos_cats"/* name */
	, &BitArray_t1058_0_0_1/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091, ___pos_cats_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1058_0_0_1;
FieldInfo CharacterClass_t1091____neg_cats_4_FieldInfo = 
{
	"neg_cats"/* name */
	, &BitArray_t1058_0_0_1/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091, ___neg_cats_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntervalCollection_t1069_0_0_1;
FieldInfo CharacterClass_t1091____intervals_5_FieldInfo = 
{
	"intervals"/* name */
	, &IntervalCollection_t1069_0_0_1/* type */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1091, ___intervals_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CharacterClass_t1091_FieldInfos[] =
{
	&CharacterClass_t1091____upper_case_characters_0_FieldInfo,
	&CharacterClass_t1091____negate_1_FieldInfo,
	&CharacterClass_t1091____ignore_2_FieldInfo,
	&CharacterClass_t1091____pos_cats_3_FieldInfo,
	&CharacterClass_t1091____neg_cats_4_FieldInfo,
	&CharacterClass_t1091____intervals_5_FieldInfo,
	NULL
};
extern MethodInfo CharacterClass_Compile_m4662_MethodInfo;
extern MethodInfo CharacterClass_GetWidth_m4663_MethodInfo;
extern MethodInfo CharacterClass_IsComplex_m4664_MethodInfo;
static Il2CppMethodReference CharacterClass_t1091_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&CharacterClass_Compile_m4662_MethodInfo,
	&CharacterClass_GetWidth_m4663_MethodInfo,
	&Expression_GetAnchorInfo_m4577_MethodInfo,
	&CharacterClass_IsComplex_m4664_MethodInfo,
};
static bool CharacterClass_t1091_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CharacterClass_t1091_0_0_0;
extern Il2CppType CharacterClass_t1091_1_0_0;
struct CharacterClass_t1091;
const Il2CppTypeDefinitionMetadata CharacterClass_t1091_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1074_0_0_0/* parent */
	, CharacterClass_t1091_VTable/* vtableMethods */
	, CharacterClass_t1091_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CharacterClass_t1091_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterClass"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CharacterClass_t1091_MethodInfos/* methods */
	, NULL/* properties */
	, CharacterClass_t1091_FieldInfos/* fields */
	, NULL/* events */
	, &CharacterClass_t1091_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CharacterClass_t1091_0_0_0/* byval_arg */
	, &CharacterClass_t1091_1_0_0/* this_arg */
	, &CharacterClass_t1091_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CharacterClass_t1091)/* instance_size */
	, sizeof (CharacterClass_t1091)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CharacterClass_t1091_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern TypeInfo AnchorInfo_t1079_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern Il2CppType Expression_t1074_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo AnchorInfo_t1079_AnchorInfo__ctor_m4666_ParameterInfos[] = 
{
	{"expr", 0, 134218599, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
	{"width", 1, 134218600, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
MethodInfo AnchorInfo__ctor_m4666_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4666/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33/* invoker_method */
	, AnchorInfo_t1079_AnchorInfo__ctor_m4666_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo AnchorInfo_t1079_AnchorInfo__ctor_m4667_ParameterInfos[] = 
{
	{"expr", 0, 134218601, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
	{"offset", 1, 134218602, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"width", 2, 134218603, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"str", 3, 134218604, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 4, 134218605, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
MethodInfo AnchorInfo__ctor_m4667_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4667/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_Object_t_SByte_t350/* invoker_method */
	, AnchorInfo_t1079_AnchorInfo__ctor_m4667_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1074_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
extern Il2CppType Position_t1046_0_0_0;
static ParameterInfo AnchorInfo_t1079_AnchorInfo__ctor_m4668_ParameterInfos[] = 
{
	{"expr", 0, 134218606, &EmptyCustomAttributesCache, &Expression_t1074_0_0_0},
	{"offset", 1, 134218607, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"width", 2, 134218608, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
	{"pos", 3, 134218609, &EmptyCustomAttributesCache, &Position_t1046_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_UInt16_t707 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
MethodInfo AnchorInfo__ctor_m4668_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m4668/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33_Int32_t33_UInt16_t707/* invoker_method */
	, AnchorInfo_t1079_AnchorInfo__ctor_m4668_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
MethodInfo AnchorInfo_get_Offset_m4669_MethodInfo = 
{
	"get_Offset"/* name */
	, (methodPointerType)&AnchorInfo_get_Offset_m4669/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
MethodInfo AnchorInfo_get_Width_m4670_MethodInfo = 
{
	"get_Width"/* name */
	, (methodPointerType)&AnchorInfo_get_Width_m4670/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
MethodInfo AnchorInfo_get_Length_m4671_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&AnchorInfo_get_Length_m4671/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
MethodInfo AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo = 
{
	"get_IsUnknownWidth"/* name */
	, (methodPointerType)&AnchorInfo_get_IsUnknownWidth_m4672/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
MethodInfo AnchorInfo_get_IsComplete_m4673_MethodInfo = 
{
	"get_IsComplete"/* name */
	, (methodPointerType)&AnchorInfo_get_IsComplete_m4673/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
MethodInfo AnchorInfo_get_Substring_m4674_MethodInfo = 
{
	"get_Substring"/* name */
	, (methodPointerType)&AnchorInfo_get_Substring_m4674/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
MethodInfo AnchorInfo_get_IgnoreCase_m4675_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&AnchorInfo_get_IgnoreCase_m4675/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1046_0_0_0;
extern void* RuntimeInvoker_Position_t1046 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
MethodInfo AnchorInfo_get_Position_m4676_MethodInfo = 
{
	"get_Position"/* name */
	, (methodPointerType)&AnchorInfo_get_Position_m4676/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1046_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1046/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
MethodInfo AnchorInfo_get_IsSubstring_m4677_MethodInfo = 
{
	"get_IsSubstring"/* name */
	, (methodPointerType)&AnchorInfo_get_IsSubstring_m4677/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
MethodInfo AnchorInfo_get_IsPosition_m4678_MethodInfo = 
{
	"get_IsPosition"/* name */
	, (methodPointerType)&AnchorInfo_get_IsPosition_m4678/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo AnchorInfo_t1079_AnchorInfo_GetInterval_m4679_ParameterInfos[] = 
{
	{"start", 0, 134218610, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Interval_t1066_0_0_0;
extern void* RuntimeInvoker_Interval_t1066_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
MethodInfo AnchorInfo_GetInterval_m4679_MethodInfo = 
{
	"GetInterval"/* name */
	, (methodPointerType)&AnchorInfo_GetInterval_m4679/* method */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1066_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1066_Int32_t33/* invoker_method */
	, AnchorInfo_t1079_AnchorInfo_GetInterval_m4679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AnchorInfo_t1079_MethodInfos[] =
{
	&AnchorInfo__ctor_m4666_MethodInfo,
	&AnchorInfo__ctor_m4667_MethodInfo,
	&AnchorInfo__ctor_m4668_MethodInfo,
	&AnchorInfo_get_Offset_m4669_MethodInfo,
	&AnchorInfo_get_Width_m4670_MethodInfo,
	&AnchorInfo_get_Length_m4671_MethodInfo,
	&AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo,
	&AnchorInfo_get_IsComplete_m4673_MethodInfo,
	&AnchorInfo_get_Substring_m4674_MethodInfo,
	&AnchorInfo_get_IgnoreCase_m4675_MethodInfo,
	&AnchorInfo_get_Position_m4676_MethodInfo,
	&AnchorInfo_get_IsSubstring_m4677_MethodInfo,
	&AnchorInfo_get_IsPosition_m4678_MethodInfo,
	&AnchorInfo_GetInterval_m4679_MethodInfo,
	NULL
};
extern Il2CppType Expression_t1074_0_0_1;
FieldInfo AnchorInfo_t1079____expr_0_FieldInfo = 
{
	"expr"/* name */
	, &Expression_t1074_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___expr_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Position_t1046_0_0_1;
FieldInfo AnchorInfo_t1079____pos_1_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1046_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___pos_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo AnchorInfo_t1079____offset_2_FieldInfo = 
{
	"offset"/* name */
	, &Int32_t33_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___offset_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo AnchorInfo_t1079____str_3_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___str_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo AnchorInfo_t1079____width_4_FieldInfo = 
{
	"width"/* name */
	, &Int32_t33_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___width_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo AnchorInfo_t1079____ignore_5_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1079, ___ignore_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* AnchorInfo_t1079_FieldInfos[] =
{
	&AnchorInfo_t1079____expr_0_FieldInfo,
	&AnchorInfo_t1079____pos_1_FieldInfo,
	&AnchorInfo_t1079____offset_2_FieldInfo,
	&AnchorInfo_t1079____str_3_FieldInfo,
	&AnchorInfo_t1079____width_4_FieldInfo,
	&AnchorInfo_t1079____ignore_5_FieldInfo,
	NULL
};
extern MethodInfo AnchorInfo_get_Offset_m4669_MethodInfo;
static PropertyInfo AnchorInfo_t1079____Offset_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "Offset"/* name */
	, &AnchorInfo_get_Offset_m4669_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Width_m4670_MethodInfo;
static PropertyInfo AnchorInfo_t1079____Width_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "Width"/* name */
	, &AnchorInfo_get_Width_m4670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Length_m4671_MethodInfo;
static PropertyInfo AnchorInfo_t1079____Length_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &AnchorInfo_get_Length_m4671_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo;
static PropertyInfo AnchorInfo_t1079____IsUnknownWidth_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "IsUnknownWidth"/* name */
	, &AnchorInfo_get_IsUnknownWidth_m4672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsComplete_m4673_MethodInfo;
static PropertyInfo AnchorInfo_t1079____IsComplete_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "IsComplete"/* name */
	, &AnchorInfo_get_IsComplete_m4673_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Substring_m4674_MethodInfo;
static PropertyInfo AnchorInfo_t1079____Substring_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "Substring"/* name */
	, &AnchorInfo_get_Substring_m4674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IgnoreCase_m4675_MethodInfo;
static PropertyInfo AnchorInfo_t1079____IgnoreCase_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &AnchorInfo_get_IgnoreCase_m4675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Position_m4676_MethodInfo;
static PropertyInfo AnchorInfo_t1079____Position_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "Position"/* name */
	, &AnchorInfo_get_Position_m4676_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsSubstring_m4677_MethodInfo;
static PropertyInfo AnchorInfo_t1079____IsSubstring_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "IsSubstring"/* name */
	, &AnchorInfo_get_IsSubstring_m4677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsPosition_m4678_MethodInfo;
static PropertyInfo AnchorInfo_t1079____IsPosition_PropertyInfo = 
{
	&AnchorInfo_t1079_il2cpp_TypeInfo/* parent */
	, "IsPosition"/* name */
	, &AnchorInfo_get_IsPosition_m4678_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* AnchorInfo_t1079_PropertyInfos[] =
{
	&AnchorInfo_t1079____Offset_PropertyInfo,
	&AnchorInfo_t1079____Width_PropertyInfo,
	&AnchorInfo_t1079____Length_PropertyInfo,
	&AnchorInfo_t1079____IsUnknownWidth_PropertyInfo,
	&AnchorInfo_t1079____IsComplete_PropertyInfo,
	&AnchorInfo_t1079____Substring_PropertyInfo,
	&AnchorInfo_t1079____IgnoreCase_PropertyInfo,
	&AnchorInfo_t1079____Position_PropertyInfo,
	&AnchorInfo_t1079____IsSubstring_PropertyInfo,
	&AnchorInfo_t1079____IsPosition_PropertyInfo,
	NULL
};
static Il2CppMethodReference AnchorInfo_t1079_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool AnchorInfo_t1079_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType AnchorInfo_t1079_0_0_0;
extern Il2CppType AnchorInfo_t1079_1_0_0;
struct AnchorInfo_t1079;
const Il2CppTypeDefinitionMetadata AnchorInfo_t1079_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnchorInfo_t1079_VTable/* vtableMethods */
	, AnchorInfo_t1079_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo AnchorInfo_t1079_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnchorInfo"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, AnchorInfo_t1079_MethodInfos/* methods */
	, AnchorInfo_t1079_PropertyInfos/* properties */
	, AnchorInfo_t1079_FieldInfos/* fields */
	, NULL/* events */
	, &AnchorInfo_t1079_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AnchorInfo_t1079_0_0_0/* byval_arg */
	, &AnchorInfo_t1079_1_0_0/* this_arg */
	, &AnchorInfo_t1079_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnchorInfo_t1079)/* instance_size */
	, sizeof (AnchorInfo_t1079)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 10/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// Metadata Definition System.DefaultUriParser
extern TypeInfo DefaultUriParser_t1092_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor()
MethodInfo DefaultUriParser__ctor_m4680_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m4680/* method */
	, &DefaultUriParser_t1092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo DefaultUriParser_t1092_DefaultUriParser__ctor_m4681_ParameterInfos[] = 
{
	{"scheme", 0, 134218611, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor(System.String)
MethodInfo DefaultUriParser__ctor_m4681_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m4681/* method */
	, &DefaultUriParser_t1092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, DefaultUriParser_t1092_DefaultUriParser__ctor_m4681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DefaultUriParser_t1092_MethodInfos[] =
{
	&DefaultUriParser__ctor_m4680_MethodInfo,
	&DefaultUriParser__ctor_m4681_MethodInfo,
	NULL
};
extern MethodInfo UriParser_InitializeAndValidate_m4736_MethodInfo;
extern MethodInfo UriParser_OnRegister_m4737_MethodInfo;
static Il2CppMethodReference DefaultUriParser_t1092_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&UriParser_InitializeAndValidate_m4736_MethodInfo,
	&UriParser_OnRegister_m4737_MethodInfo,
};
static bool DefaultUriParser_t1092_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType DefaultUriParser_t1092_0_0_0;
extern Il2CppType DefaultUriParser_t1092_1_0_0;
extern Il2CppType UriParser_t1093_0_0_0;
struct DefaultUriParser_t1092;
const Il2CppTypeDefinitionMetadata DefaultUriParser_t1092_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1093_0_0_0/* parent */
	, DefaultUriParser_t1092_VTable/* vtableMethods */
	, DefaultUriParser_t1092_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo DefaultUriParser_t1092_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultUriParser"/* name */
	, "System"/* namespaze */
	, DefaultUriParser_t1092_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &DefaultUriParser_t1092_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultUriParser_t1092_0_0_0/* byval_arg */
	, &DefaultUriParser_t1092_1_0_0/* this_arg */
	, &DefaultUriParser_t1092_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultUriParser_t1092)/* instance_size */
	, sizeof (DefaultUriParser_t1092)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// Metadata Definition System.GenericUriParser
extern TypeInfo GenericUriParser_t1094_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
static MethodInfo* GenericUriParser_t1094_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference GenericUriParser_t1094_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&UriParser_InitializeAndValidate_m4736_MethodInfo,
	&UriParser_OnRegister_m4737_MethodInfo,
};
static bool GenericUriParser_t1094_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType GenericUriParser_t1094_0_0_0;
extern Il2CppType GenericUriParser_t1094_1_0_0;
struct GenericUriParser_t1094;
const Il2CppTypeDefinitionMetadata GenericUriParser_t1094_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1093_0_0_0/* parent */
	, GenericUriParser_t1094_VTable/* vtableMethods */
	, GenericUriParser_t1094_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo GenericUriParser_t1094_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericUriParser"/* name */
	, "System"/* namespaze */
	, GenericUriParser_t1094_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &GenericUriParser_t1094_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericUriParser_t1094_0_0_0/* byval_arg */
	, &GenericUriParser_t1094_1_0_0/* this_arg */
	, &GenericUriParser_t1094_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericUriParser_t1094)/* instance_size */
	, sizeof (GenericUriParser_t1094)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Metadata Definition System.Uri/UriScheme
extern TypeInfo UriScheme_t1095_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo UriScheme_t1095_UriScheme__ctor_m4682_ParameterInfos[] = 
{
	{"s", 0, 134218664, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"d", 1, 134218665, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"p", 2, 134218666, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
MethodInfo UriScheme__ctor_m4682_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriScheme__ctor_m4682/* method */
	, &UriScheme_t1095_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t_Int32_t33/* invoker_method */
	, UriScheme_t1095_UriScheme__ctor_m4682_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriScheme_t1095_MethodInfos[] =
{
	&UriScheme__ctor_m4682_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1095____scheme_0_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1095_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1095, ___scheme_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1095____delimiter_1_FieldInfo = 
{
	"delimiter"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1095_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1095, ___delimiter_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_6;
FieldInfo UriScheme_t1095____defaultPort_2_FieldInfo = 
{
	"defaultPort"/* name */
	, &Int32_t33_0_0_6/* type */
	, &UriScheme_t1095_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1095, ___defaultPort_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriScheme_t1095_FieldInfos[] =
{
	&UriScheme_t1095____scheme_0_FieldInfo,
	&UriScheme_t1095____delimiter_1_FieldInfo,
	&UriScheme_t1095____defaultPort_2_FieldInfo,
	NULL
};
static Il2CppMethodReference UriScheme_t1095_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool UriScheme_t1095_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriScheme_t1095_0_0_0;
extern Il2CppType UriScheme_t1095_1_0_0;
extern TypeInfo Uri_t598_il2cpp_TypeInfo;
extern Il2CppType Uri_t598_0_0_0;
const Il2CppTypeDefinitionMetadata UriScheme_t1095_DefinitionMetadata = 
{
	&Uri_t598_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, UriScheme_t1095_VTable/* vtableMethods */
	, UriScheme_t1095_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriScheme_t1095_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriScheme"/* name */
	, ""/* namespaze */
	, UriScheme_t1095_MethodInfos/* methods */
	, NULL/* properties */
	, UriScheme_t1095_FieldInfos/* fields */
	, NULL/* events */
	, &UriScheme_t1095_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriScheme_t1095_0_0_0/* byval_arg */
	, &UriScheme_t1095_1_0_0/* this_arg */
	, &UriScheme_t1095_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)UriScheme_t1095_marshal/* marshal_to_native_func */
	, (methodPointerType)UriScheme_t1095_marshal_back/* marshal_from_native_func */
	, (methodPointerType)UriScheme_t1095_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (UriScheme_t1095)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriScheme_t1095)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UriScheme_t1095_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri
#include "System_System_Uri.h"
// Metadata Definition System.Uri
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri__ctor_m3459_ParameterInfos[] = 
{
	{"uriString", 0, 134218612, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String)
MethodInfo Uri__ctor_m3459_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m3459/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Uri_t598_Uri__ctor_m3459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t665_0_0_0;
extern Il2CppType SerializationInfo_t665_0_0_0;
extern Il2CppType StreamingContext_t666_0_0_0;
extern Il2CppType StreamingContext_t666_0_0_0;
static ParameterInfo Uri_t598_Uri__ctor_m4683_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218613, &EmptyCustomAttributesCache, &SerializationInfo_t665_0_0_0},
	{"streamingContext", 1, 134218614, &EmptyCustomAttributesCache, &StreamingContext_t666_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri__ctor_m4683_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4683/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666/* invoker_method */
	, Uri_t598_Uri__ctor_m4683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Uri_t598_Uri__ctor_m4684_ParameterInfos[] = 
{
	{"uriString", 0, 134218615, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"dontEscape", 1, 134218616, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri__ctor_m4684;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
MethodInfo Uri__ctor_m4684_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m4684/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_SByte_t350/* invoker_method */
	, Uri_t598_Uri__ctor_m4684_ParameterInfos/* parameters */
	, &Uri_t598__CustomAttributeCache_Uri__ctor_m4684/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t598_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri__ctor_m3461_ParameterInfos[] = 
{
	{"baseUri", 0, 134218617, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
	{"relativeUri", 1, 134218618, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Uri,System.String)
MethodInfo Uri__ctor_m3461_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m3461/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri__ctor_m3461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.cctor()
MethodInfo Uri__cctor_m4685_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Uri__cctor_m4685/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t665_0_0_0;
extern Il2CppType StreamingContext_t666_0_0_0;
static ParameterInfo Uri_t598_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_ParameterInfos[] = 
{
	{"info", 0, 134218619, &EmptyCustomAttributesCache, &SerializationInfo_t665_0_0_0},
	{"context", 1, 134218620, &EmptyCustomAttributesCache, &StreamingContext_t666_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666/* invoker_method */
	, Uri_t598_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t598_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_Merge_m4687_ParameterInfos[] = 
{
	{"baseUri", 0, 134218621, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
	{"relativeUri", 1, 134218622, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Merge(System.Uri,System.String)
MethodInfo Uri_Merge_m4687_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Uri_Merge_m4687/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_Merge_m4687_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_AbsoluteUri()
MethodInfo Uri_get_AbsoluteUri_m4688_MethodInfo = 
{
	"get_AbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_AbsoluteUri_m4688/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Authority()
MethodInfo Uri_get_Authority_m4689_MethodInfo = 
{
	"get_Authority"/* name */
	, (methodPointerType)&Uri_get_Authority_m4689/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Host()
MethodInfo Uri_get_Host_m4690_MethodInfo = 
{
	"get_Host"/* name */
	, (methodPointerType)&Uri_get_Host_m4690/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsFile()
MethodInfo Uri_get_IsFile_m4691_MethodInfo = 
{
	"get_IsFile"/* name */
	, (methodPointerType)&Uri_get_IsFile_m4691/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsLoopback()
MethodInfo Uri_get_IsLoopback_m4692_MethodInfo = 
{
	"get_IsLoopback"/* name */
	, (methodPointerType)&Uri_get_IsLoopback_m4692/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsUnc()
MethodInfo Uri_get_IsUnc_m4693_MethodInfo = 
{
	"get_IsUnc"/* name */
	, (methodPointerType)&Uri_get_IsUnc_m4693/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Scheme()
MethodInfo Uri_get_Scheme_m4694_MethodInfo = 
{
	"get_Scheme"/* name */
	, (methodPointerType)&Uri_get_Scheme_m4694/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsAbsoluteUri()
MethodInfo Uri_get_IsAbsoluteUri_m4695_MethodInfo = 
{
	"get_IsAbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_IsAbsoluteUri_m4695/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_CheckHostName_m4696_ParameterInfos[] = 
{
	{"name", 0, 134218623, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriHostNameType_t1098_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1098_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
MethodInfo Uri_CheckHostName_m4696_MethodInfo = 
{
	"CheckHostName"/* name */
	, (methodPointerType)&Uri_CheckHostName_m4696/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1098_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1098_Object_t/* invoker_method */
	, Uri_t598_Uri_CheckHostName_m4696_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_IsIPv4Address_m4697_ParameterInfos[] = 
{
	{"name", 0, 134218624, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsIPv4Address(System.String)
MethodInfo Uri_IsIPv4Address_m4697_MethodInfo = 
{
	"IsIPv4Address"/* name */
	, (methodPointerType)&Uri_IsIPv4Address_m4697/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_IsIPv4Address_m4697_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_IsDomainAddress_m4698_ParameterInfos[] = 
{
	{"name", 0, 134218625, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsDomainAddress(System.String)
MethodInfo Uri_IsDomainAddress_m4698_MethodInfo = 
{
	"IsDomainAddress"/* name */
	, (methodPointerType)&Uri_IsDomainAddress_m4698/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_IsDomainAddress_m4698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_CheckSchemeName_m4699_ParameterInfos[] = 
{
	{"schemeName", 0, 134218626, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CheckSchemeName(System.String)
MethodInfo Uri_CheckSchemeName_m4699_MethodInfo = 
{
	"CheckSchemeName"/* name */
	, (methodPointerType)&Uri_CheckSchemeName_m4699/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_CheckSchemeName_m4699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Uri_t598_Uri_IsAlpha_m4700_ParameterInfos[] = 
{
	{"c", 0, 134218627, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsAlpha(System.Char)
MethodInfo Uri_IsAlpha_m4700_MethodInfo = 
{
	"IsAlpha"/* name */
	, (methodPointerType)&Uri_IsAlpha_m4700/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int16_t386/* invoker_method */
	, Uri_t598_Uri_IsAlpha_m4700_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Uri_t598_Uri_Equals_m4701_ParameterInfos[] = 
{
	{"comparant", 0, 134218628, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::Equals(System.Object)
MethodInfo Uri_Equals_m4701_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Uri_Equals_m4701/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_Equals_m4701_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t598_0_0_0;
static ParameterInfo Uri_t598_Uri_InternalEquals_m4702_ParameterInfos[] = 
{
	{"uri", 0, 134218629, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::InternalEquals(System.Uri)
MethodInfo Uri_InternalEquals_m4702_MethodInfo = 
{
	"InternalEquals"/* name */
	, (methodPointerType)&Uri_InternalEquals_m4702/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_InternalEquals_m4702_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetHashCode()
MethodInfo Uri_GetHashCode_m4703_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Uri_GetHashCode_m4703/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriPartial_t1100_0_0_0;
extern Il2CppType UriPartial_t1100_0_0_0;
static ParameterInfo Uri_t598_Uri_GetLeftPart_m4704_ParameterInfos[] = 
{
	{"part", 0, 134218630, &EmptyCustomAttributesCache, &UriPartial_t1100_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetLeftPart(System.UriPartial)
MethodInfo Uri_GetLeftPart_m4704_MethodInfo = 
{
	"GetLeftPart"/* name */
	, (methodPointerType)&Uri_GetLeftPart_m4704/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33/* invoker_method */
	, Uri_t598_Uri_GetLeftPart_m4704_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Uri_t598_Uri_FromHex_m4705_ParameterInfos[] = 
{
	{"digit", 0, 134218631, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::FromHex(System.Char)
MethodInfo Uri_FromHex_m4705_MethodInfo = 
{
	"FromHex"/* name */
	, (methodPointerType)&Uri_FromHex_m4705/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Int16_t386/* invoker_method */
	, Uri_t598_Uri_FromHex_m4705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Uri_t598_Uri_HexEscape_m4706_ParameterInfos[] = 
{
	{"character", 0, 134218632, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::HexEscape(System.Char)
MethodInfo Uri_HexEscape_m4706_MethodInfo = 
{
	"HexEscape"/* name */
	, (methodPointerType)&Uri_HexEscape_m4706/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int16_t386/* invoker_method */
	, Uri_t598_Uri_HexEscape_m4706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t190_0_0_0;
static ParameterInfo Uri_t598_Uri_IsHexDigit_m4707_ParameterInfos[] = 
{
	{"digit", 0, 134218633, &EmptyCustomAttributesCache, &Char_t190_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Int16_t386 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexDigit(System.Char)
MethodInfo Uri_IsHexDigit_m4707_MethodInfo = 
{
	"IsHexDigit"/* name */
	, (methodPointerType)&Uri_IsHexDigit_m4707/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Int16_t386/* invoker_method */
	, Uri_t598_Uri_IsHexDigit_m4707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo Uri_t598_Uri_IsHexEncoding_m4708_ParameterInfos[] = 
{
	{"pattern", 0, 134218634, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218635, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
MethodInfo Uri_IsHexEncoding_m4708_MethodInfo = 
{
	"IsHexEncoding"/* name */
	, (methodPointerType)&Uri_IsHexEncoding_m4708/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t_Int32_t33/* invoker_method */
	, Uri_t598_Uri_IsHexEncoding_m4708_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_1_0_0;
extern Il2CppType String_t_1_0_0;
static ParameterInfo Uri_t598_Uri_AppendQueryAndFragment_m4709_ParameterInfos[] = 
{
	{"result", 0, 134218636, &EmptyCustomAttributesCache, &String_t_1_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_StringU26_t836 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
MethodInfo Uri_AppendQueryAndFragment_m4709_MethodInfo = 
{
	"AppendQueryAndFragment"/* name */
	, (methodPointerType)&Uri_AppendQueryAndFragment_m4709/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_StringU26_t836/* invoker_method */
	, Uri_t598_Uri_AppendQueryAndFragment_m4709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ToString()
MethodInfo Uri_ToString_m3464_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Uri_ToString_m3464/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_EscapeString_m4710_ParameterInfos[] = 
{
	{"str", 0, 134218637, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_EscapeString_m4710;
// System.String System.Uri::EscapeString(System.String)
MethodInfo Uri_EscapeString_m4710_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m4710/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_EscapeString_m4710_ParameterInfos/* parameters */
	, &Uri_t598__CustomAttributeCache_Uri_EscapeString_m4710/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Uri_t598_Uri_EscapeString_m4711_ParameterInfos[] = 
{
	{"str", 0, 134218638, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"escapeReserved", 1, 134218639, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"escapeHex", 2, 134218640, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
	{"escapeBrackets", 3, 134218641, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t350_SByte_t350_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
MethodInfo Uri_EscapeString_m4711_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m4711/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t350_SByte_t350_SByte_t350/* invoker_method */
	, Uri_t598_Uri_EscapeString_m4711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1099_0_0_0;
extern Il2CppType UriKind_t1099_0_0_0;
static ParameterInfo Uri_t598_Uri_ParseUri_m4712_ParameterInfos[] = 
{
	{"kind", 0, 134218642, &EmptyCustomAttributesCache, &UriKind_t1099_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseUri(System.UriKind)
MethodInfo Uri_ParseUri_m4712_MethodInfo = 
{
	"ParseUri"/* name */
	, (methodPointerType)&Uri_ParseUri_m4712/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, Uri_t598_Uri_ParseUri_m4712_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_Unescape_m4713_ParameterInfos[] = 
{
	{"str", 0, 134218643, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_Unescape_m4713;
// System.String System.Uri::Unescape(System.String)
MethodInfo Uri_Unescape_m4713_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m4713/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_Unescape_m4713_ParameterInfos/* parameters */
	, &Uri_t598__CustomAttributeCache_Uri_Unescape_m4713/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Uri_t598_Uri_Unescape_m4714_ParameterInfos[] = 
{
	{"str", 0, 134218644, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"excludeSpecial", 1, 134218645, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String,System.Boolean)
MethodInfo Uri_Unescape_m4714_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m4714/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t350/* invoker_method */
	, Uri_t598_Uri_Unescape_m4714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_ParseAsWindowsUNC_m4715_ParameterInfos[] = 
{
	{"uriString", 0, 134218646, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
MethodInfo Uri_ParseAsWindowsUNC_m4715_MethodInfo = 
{
	"ParseAsWindowsUNC"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsUNC_m4715/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Uri_t598_Uri_ParseAsWindowsUNC_m4715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_ParseAsWindowsAbsoluteFilePath_m4716_ParameterInfos[] = 
{
	{"uriString", 0, 134218647, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m4716_MethodInfo = 
{
	"ParseAsWindowsAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsAbsoluteFilePath_m4716/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_ParseAsWindowsAbsoluteFilePath_m4716_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_ParseAsUnixAbsoluteFilePath_m4717_ParameterInfos[] = 
{
	{"uriString", 0, 134218648, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m4717_MethodInfo = 
{
	"ParseAsUnixAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsUnixAbsoluteFilePath_m4717/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, Uri_t598_Uri_ParseAsUnixAbsoluteFilePath_m4717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1099_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_Parse_m4718_ParameterInfos[] = 
{
	{"kind", 0, 134218649, &EmptyCustomAttributesCache, &UriKind_t1099_0_0_0},
	{"uriString", 1, 134218650, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Parse(System.UriKind,System.String)
MethodInfo Uri_Parse_m4718_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Uri_Parse_m4718/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33_Object_t/* invoker_method */
	, Uri_t598_Uri_Parse_m4718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1099_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_ParseNoExceptions_m4719_ParameterInfos[] = 
{
	{"kind", 0, 134218651, &EmptyCustomAttributesCache, &UriKind_t1099_0_0_0},
	{"uriString", 1, 134218652, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
MethodInfo Uri_ParseNoExceptions_m4719_MethodInfo = 
{
	"ParseNoExceptions"/* name */
	, (methodPointerType)&Uri_ParseNoExceptions_m4719/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t33_Object_t/* invoker_method */
	, Uri_t598_Uri_ParseNoExceptions_m4719_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_CompactEscaped_m4720_ParameterInfos[] = 
{
	{"scheme", 0, 134218653, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CompactEscaped(System.String)
MethodInfo Uri_CompactEscaped_m4720_MethodInfo = 
{
	"CompactEscaped"/* name */
	, (methodPointerType)&Uri_CompactEscaped_m4720/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_CompactEscaped_m4720_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t35_0_0_0;
static ParameterInfo Uri_t598_Uri_Reduce_m4721_ParameterInfos[] = 
{
	{"path", 0, 134218654, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"compact_escaped", 1, 134218655, &EmptyCustomAttributesCache, &Boolean_t35_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t350 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Reduce(System.String,System.Boolean)
MethodInfo Uri_Reduce_m4721_MethodInfo = 
{
	"Reduce"/* name */
	, (methodPointerType)&Uri_Reduce_m4721/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t350/* invoker_method */
	, Uri_t598_Uri_Reduce_m4721_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_1_0_0;
extern Il2CppType Char_t190_1_0_2;
extern Il2CppType Char_t190_1_0_0;
static ParameterInfo Uri_t598_Uri_HexUnescapeMultiByte_m4722_ParameterInfos[] = 
{
	{"pattern", 0, 134218656, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218657, &EmptyCustomAttributesCache, &Int32_t33_1_0_0},
	{"surrogate", 2, 134218658, &EmptyCustomAttributesCache, &Char_t190_1_0_2},
};
extern Il2CppType Char_t190_0_0_0;
extern void* RuntimeInvoker_Char_t190_Object_t_Int32U26_t387_CharU26_t1151 (MethodInfo* method, void* obj, void** args);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
MethodInfo Uri_HexUnescapeMultiByte_m4722_MethodInfo = 
{
	"HexUnescapeMultiByte"/* name */
	, (methodPointerType)&Uri_HexUnescapeMultiByte_m4722/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Char_t190_0_0_0/* return_type */
	, RuntimeInvoker_Char_t190_Object_t_Int32U26_t387_CharU26_t1151/* invoker_method */
	, Uri_t598_Uri_HexUnescapeMultiByte_m4722_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_GetSchemeDelimiter_m4723_ParameterInfos[] = 
{
	{"scheme", 0, 134218659, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetSchemeDelimiter(System.String)
MethodInfo Uri_GetSchemeDelimiter_m4723_MethodInfo = 
{
	"GetSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetSchemeDelimiter_m4723/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_GetSchemeDelimiter_m4723_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_GetDefaultPort_m4724_ParameterInfos[] = 
{
	{"scheme", 0, 134218660, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetDefaultPort(System.String)
MethodInfo Uri_GetDefaultPort_m4724_MethodInfo = 
{
	"GetDefaultPort"/* name */
	, (methodPointerType)&Uri_GetDefaultPort_m4724/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33_Object_t/* invoker_method */
	, Uri_t598_Uri_GetDefaultPort_m4724_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m4725_MethodInfo = 
{
	"GetOpaqueWiseSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetOpaqueWiseSchemeDelimiter_m4725/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t598_Uri_IsPredefinedScheme_m4726_ParameterInfos[] = 
{
	{"scheme", 0, 134218661, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
MethodInfo Uri_IsPredefinedScheme_m4726_MethodInfo = 
{
	"IsPredefinedScheme"/* name */
	, (methodPointerType)&Uri_IsPredefinedScheme_m4726/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, Uri_t598_Uri_IsPredefinedScheme_m4726_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriParser_t1093_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.Uri::get_Parser()
MethodInfo Uri_get_Parser_m4727_MethodInfo = 
{
	"get_Parser"/* name */
	, (methodPointerType)&Uri_get_Parser_m4727/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::EnsureAbsoluteUri()
MethodInfo Uri_EnsureAbsoluteUri_m4728_MethodInfo = 
{
	"EnsureAbsoluteUri"/* name */
	, (methodPointerType)&Uri_EnsureAbsoluteUri_m4728/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t598_0_0_0;
extern Il2CppType Uri_t598_0_0_0;
static ParameterInfo Uri_t598_Uri_op_Equality_m4729_ParameterInfos[] = 
{
	{"u1", 0, 134218662, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
	{"u2", 1, 134218663, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
MethodInfo Uri_op_Equality_m4729_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Uri_op_Equality_m4729/* method */
	, &Uri_t598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t_Object_t/* invoker_method */
	, Uri_t598_Uri_op_Equality_m4729_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Uri_t598_MethodInfos[] =
{
	&Uri__ctor_m3459_MethodInfo,
	&Uri__ctor_m4683_MethodInfo,
	&Uri__ctor_m4684_MethodInfo,
	&Uri__ctor_m3461_MethodInfo,
	&Uri__cctor_m4685_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_MethodInfo,
	&Uri_Merge_m4687_MethodInfo,
	&Uri_get_AbsoluteUri_m4688_MethodInfo,
	&Uri_get_Authority_m4689_MethodInfo,
	&Uri_get_Host_m4690_MethodInfo,
	&Uri_get_IsFile_m4691_MethodInfo,
	&Uri_get_IsLoopback_m4692_MethodInfo,
	&Uri_get_IsUnc_m4693_MethodInfo,
	&Uri_get_Scheme_m4694_MethodInfo,
	&Uri_get_IsAbsoluteUri_m4695_MethodInfo,
	&Uri_CheckHostName_m4696_MethodInfo,
	&Uri_IsIPv4Address_m4697_MethodInfo,
	&Uri_IsDomainAddress_m4698_MethodInfo,
	&Uri_CheckSchemeName_m4699_MethodInfo,
	&Uri_IsAlpha_m4700_MethodInfo,
	&Uri_Equals_m4701_MethodInfo,
	&Uri_InternalEquals_m4702_MethodInfo,
	&Uri_GetHashCode_m4703_MethodInfo,
	&Uri_GetLeftPart_m4704_MethodInfo,
	&Uri_FromHex_m4705_MethodInfo,
	&Uri_HexEscape_m4706_MethodInfo,
	&Uri_IsHexDigit_m4707_MethodInfo,
	&Uri_IsHexEncoding_m4708_MethodInfo,
	&Uri_AppendQueryAndFragment_m4709_MethodInfo,
	&Uri_ToString_m3464_MethodInfo,
	&Uri_EscapeString_m4710_MethodInfo,
	&Uri_EscapeString_m4711_MethodInfo,
	&Uri_ParseUri_m4712_MethodInfo,
	&Uri_Unescape_m4713_MethodInfo,
	&Uri_Unescape_m4714_MethodInfo,
	&Uri_ParseAsWindowsUNC_m4715_MethodInfo,
	&Uri_ParseAsWindowsAbsoluteFilePath_m4716_MethodInfo,
	&Uri_ParseAsUnixAbsoluteFilePath_m4717_MethodInfo,
	&Uri_Parse_m4718_MethodInfo,
	&Uri_ParseNoExceptions_m4719_MethodInfo,
	&Uri_CompactEscaped_m4720_MethodInfo,
	&Uri_Reduce_m4721_MethodInfo,
	&Uri_HexUnescapeMultiByte_m4722_MethodInfo,
	&Uri_GetSchemeDelimiter_m4723_MethodInfo,
	&Uri_GetDefaultPort_m4724_MethodInfo,
	&Uri_GetOpaqueWiseSchemeDelimiter_m4725_MethodInfo,
	&Uri_IsPredefinedScheme_m4726_MethodInfo,
	&Uri_get_Parser_m4727_MethodInfo,
	&Uri_EnsureAbsoluteUri_m4728_MethodInfo,
	&Uri_op_Equality_m4729_MethodInfo,
	NULL
};
extern Il2CppType Int32_t33_0_0_32849;
FieldInfo Uri_t598____MaxUriLength_0_FieldInfo = 
{
	"MaxUriLength"/* name */
	, &Int32_t33_0_0_32849/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Uri_t598____isUnixFilePath_1_FieldInfo = 
{
	"isUnixFilePath"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___isUnixFilePath_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____source_2_FieldInfo = 
{
	"source"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___source_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____scheme_3_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___scheme_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____host_4_FieldInfo = 
{
	"host"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___host_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Uri_t598____port_5_FieldInfo = 
{
	"port"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___port_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____path_6_FieldInfo = 
{
	"path"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___path_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____query_7_FieldInfo = 
{
	"query"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___query_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____fragment_8_FieldInfo = 
{
	"fragment"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___fragment_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____userinfo_9_FieldInfo = 
{
	"userinfo"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___userinfo_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Uri_t598____isUnc_10_FieldInfo = 
{
	"isUnc"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___isUnc_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Uri_t598____isOpaquePart_11_FieldInfo = 
{
	"isOpaquePart"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___isOpaquePart_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Uri_t598____isAbsoluteUri_12_FieldInfo = 
{
	"isAbsoluteUri"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___isAbsoluteUri_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t433_0_0_1;
FieldInfo Uri_t598____segments_13_FieldInfo = 
{
	"segments"/* name */
	, &StringU5BU5D_t433_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___segments_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t35_0_0_1;
FieldInfo Uri_t598____userEscaped_14_FieldInfo = 
{
	"userEscaped"/* name */
	, &Boolean_t35_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___userEscaped_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____cachedAbsoluteUri_15_FieldInfo = 
{
	"cachedAbsoluteUri"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___cachedAbsoluteUri_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____cachedToString_16_FieldInfo = 
{
	"cachedToString"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___cachedToString_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t598____cachedLocalPath_17_FieldInfo = 
{
	"cachedLocalPath"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___cachedLocalPath_17)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo Uri_t598____cachedHashCode_18_FieldInfo = 
{
	"cachedHashCode"/* name */
	, &Int32_t33_0_0_1/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___cachedHashCode_18)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_49;
FieldInfo Uri_t598____hexUpperChars_19_FieldInfo = 
{
	"hexUpperChars"/* name */
	, &String_t_0_0_49/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___hexUpperChars_19)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____SchemeDelimiter_20_FieldInfo = 
{
	"SchemeDelimiter"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___SchemeDelimiter_20)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeFile_21_FieldInfo = 
{
	"UriSchemeFile"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeFile_21)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeFtp_22_FieldInfo = 
{
	"UriSchemeFtp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeFtp_22)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeGopher_23_FieldInfo = 
{
	"UriSchemeGopher"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeGopher_23)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeHttp_24_FieldInfo = 
{
	"UriSchemeHttp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeHttp_24)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeHttps_25_FieldInfo = 
{
	"UriSchemeHttps"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeHttps_25)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeMailto_26_FieldInfo = 
{
	"UriSchemeMailto"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeMailto_26)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeNews_27_FieldInfo = 
{
	"UriSchemeNews"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeNews_27)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeNntp_28_FieldInfo = 
{
	"UriSchemeNntp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeNntp_28)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeNetPipe_29_FieldInfo = 
{
	"UriSchemeNetPipe"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeNetPipe_29)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t598____UriSchemeNetTcp_30_FieldInfo = 
{
	"UriSchemeNetTcp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___UriSchemeNetTcp_30)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriSchemeU5BU5D_t1096_0_0_17;
FieldInfo Uri_t598____schemes_31_FieldInfo = 
{
	"schemes"/* name */
	, &UriSchemeU5BU5D_t1096_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___schemes_31)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriParser_t1093_0_0_129;
FieldInfo Uri_t598____parser_32_FieldInfo = 
{
	"parser"/* name */
	, &UriParser_t1093_0_0_129/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598, ___parser_32)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t497_0_0_17;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map12;
FieldInfo Uri_t598____U3CU3Ef__switch$map12_33_FieldInfo = 
{
	"<>f__switch$map12"/* name */
	, &Dictionary_2_t497_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___U3CU3Ef__switch$map12_33)/* offset */
	, &Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map12/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t497_0_0_17;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map13;
FieldInfo Uri_t598____U3CU3Ef__switch$map13_34_FieldInfo = 
{
	"<>f__switch$map13"/* name */
	, &Dictionary_2_t497_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___U3CU3Ef__switch$map13_34)/* offset */
	, &Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map13/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t497_0_0_17;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map14;
FieldInfo Uri_t598____U3CU3Ef__switch$map14_35_FieldInfo = 
{
	"<>f__switch$map14"/* name */
	, &Dictionary_2_t497_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___U3CU3Ef__switch$map14_35)/* offset */
	, &Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map14/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t497_0_0_17;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map15;
FieldInfo Uri_t598____U3CU3Ef__switch$map15_36_FieldInfo = 
{
	"<>f__switch$map15"/* name */
	, &Dictionary_2_t497_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___U3CU3Ef__switch$map15_36)/* offset */
	, &Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map15/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t497_0_0_17;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map16;
FieldInfo Uri_t598____U3CU3Ef__switch$map16_37_FieldInfo = 
{
	"<>f__switch$map16"/* name */
	, &Dictionary_2_t497_0_0_17/* type */
	, &Uri_t598_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t598_StaticFields, ___U3CU3Ef__switch$map16_37)/* offset */
	, &Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map16/* custom_attributes_cache */

};
static FieldInfo* Uri_t598_FieldInfos[] =
{
	&Uri_t598____MaxUriLength_0_FieldInfo,
	&Uri_t598____isUnixFilePath_1_FieldInfo,
	&Uri_t598____source_2_FieldInfo,
	&Uri_t598____scheme_3_FieldInfo,
	&Uri_t598____host_4_FieldInfo,
	&Uri_t598____port_5_FieldInfo,
	&Uri_t598____path_6_FieldInfo,
	&Uri_t598____query_7_FieldInfo,
	&Uri_t598____fragment_8_FieldInfo,
	&Uri_t598____userinfo_9_FieldInfo,
	&Uri_t598____isUnc_10_FieldInfo,
	&Uri_t598____isOpaquePart_11_FieldInfo,
	&Uri_t598____isAbsoluteUri_12_FieldInfo,
	&Uri_t598____segments_13_FieldInfo,
	&Uri_t598____userEscaped_14_FieldInfo,
	&Uri_t598____cachedAbsoluteUri_15_FieldInfo,
	&Uri_t598____cachedToString_16_FieldInfo,
	&Uri_t598____cachedLocalPath_17_FieldInfo,
	&Uri_t598____cachedHashCode_18_FieldInfo,
	&Uri_t598____hexUpperChars_19_FieldInfo,
	&Uri_t598____SchemeDelimiter_20_FieldInfo,
	&Uri_t598____UriSchemeFile_21_FieldInfo,
	&Uri_t598____UriSchemeFtp_22_FieldInfo,
	&Uri_t598____UriSchemeGopher_23_FieldInfo,
	&Uri_t598____UriSchemeHttp_24_FieldInfo,
	&Uri_t598____UriSchemeHttps_25_FieldInfo,
	&Uri_t598____UriSchemeMailto_26_FieldInfo,
	&Uri_t598____UriSchemeNews_27_FieldInfo,
	&Uri_t598____UriSchemeNntp_28_FieldInfo,
	&Uri_t598____UriSchemeNetPipe_29_FieldInfo,
	&Uri_t598____UriSchemeNetTcp_30_FieldInfo,
	&Uri_t598____schemes_31_FieldInfo,
	&Uri_t598____parser_32_FieldInfo,
	&Uri_t598____U3CU3Ef__switch$map12_33_FieldInfo,
	&Uri_t598____U3CU3Ef__switch$map13_34_FieldInfo,
	&Uri_t598____U3CU3Ef__switch$map14_35_FieldInfo,
	&Uri_t598____U3CU3Ef__switch$map15_36_FieldInfo,
	&Uri_t598____U3CU3Ef__switch$map16_37_FieldInfo,
	NULL
};
static const int32_t Uri_t598____MaxUriLength_0_DefaultValueData = 32766;
static Il2CppFieldDefaultValueEntry Uri_t598____MaxUriLength_0_DefaultValue = 
{
	&Uri_t598____MaxUriLength_0_FieldInfo/* field */
	, { (char*)&Uri_t598____MaxUriLength_0_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Uri_t598_FieldDefaultValues[] = 
{
	&Uri_t598____MaxUriLength_0_DefaultValue,
	NULL
};
extern MethodInfo Uri_get_AbsoluteUri_m4688_MethodInfo;
static PropertyInfo Uri_t598____AbsoluteUri_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "AbsoluteUri"/* name */
	, &Uri_get_AbsoluteUri_m4688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Authority_m4689_MethodInfo;
static PropertyInfo Uri_t598____Authority_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "Authority"/* name */
	, &Uri_get_Authority_m4689_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Host_m4690_MethodInfo;
static PropertyInfo Uri_t598____Host_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "Host"/* name */
	, &Uri_get_Host_m4690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsFile_m4691_MethodInfo;
static PropertyInfo Uri_t598____IsFile_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "IsFile"/* name */
	, &Uri_get_IsFile_m4691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsLoopback_m4692_MethodInfo;
static PropertyInfo Uri_t598____IsLoopback_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "IsLoopback"/* name */
	, &Uri_get_IsLoopback_m4692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsUnc_m4693_MethodInfo;
static PropertyInfo Uri_t598____IsUnc_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "IsUnc"/* name */
	, &Uri_get_IsUnc_m4693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Scheme_m4694_MethodInfo;
static PropertyInfo Uri_t598____Scheme_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "Scheme"/* name */
	, &Uri_get_Scheme_m4694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsAbsoluteUri_m4695_MethodInfo;
static PropertyInfo Uri_t598____IsAbsoluteUri_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "IsAbsoluteUri"/* name */
	, &Uri_get_IsAbsoluteUri_m4695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Parser_m4727_MethodInfo;
static PropertyInfo Uri_t598____Parser_PropertyInfo = 
{
	&Uri_t598_il2cpp_TypeInfo/* parent */
	, "Parser"/* name */
	, &Uri_get_Parser_m4727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Uri_t598_PropertyInfos[] =
{
	&Uri_t598____AbsoluteUri_PropertyInfo,
	&Uri_t598____Authority_PropertyInfo,
	&Uri_t598____Host_PropertyInfo,
	&Uri_t598____IsFile_PropertyInfo,
	&Uri_t598____IsLoopback_PropertyInfo,
	&Uri_t598____IsUnc_PropertyInfo,
	&Uri_t598____Scheme_PropertyInfo,
	&Uri_t598____IsAbsoluteUri_PropertyInfo,
	&Uri_t598____Parser_PropertyInfo,
	NULL
};
static const Il2CppType* Uri_t598_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UriScheme_t1095_0_0_0,
};
extern MethodInfo Uri_Equals_m4701_MethodInfo;
extern MethodInfo Uri_GetHashCode_m4703_MethodInfo;
extern MethodInfo Uri_ToString_m3464_MethodInfo;
extern MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_MethodInfo;
extern MethodInfo Uri_Unescape_m4713_MethodInfo;
static Il2CppMethodReference Uri_t598_VTable[] =
{
	&Uri_Equals_m4701_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Uri_GetHashCode_m4703_MethodInfo,
	&Uri_ToString_m3464_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m4686_MethodInfo,
	&Uri_Unescape_m4713_MethodInfo,
};
static bool Uri_t598_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Uri_t598_InterfacesTypeInfos[] = 
{
	&ISerializable_t359_0_0_0,
};
static Il2CppInterfaceOffsetPair Uri_t598_InterfacesOffsets[] = 
{
	{ &ISerializable_t359_0_0_0, 4},
};
extern TypeInfo TypeConverterAttribute_t942_il2cpp_TypeInfo;
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"
extern MethodInfo TypeConverterAttribute__ctor_m3942_MethodInfo;
extern TypeInfo UriTypeConverter_t1101_il2cpp_TypeInfo;
extern Il2CppType UriTypeConverter_t1101_0_0_0;
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
void Uri_t598_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeConverterAttribute_t942 * tmp;
		tmp = (TypeConverterAttribute_t942 *)il2cpp_codegen_object_new (&TypeConverterAttribute_t942_il2cpp_TypeInfo);
		TypeConverterAttribute__ctor_m3942(tmp, il2cpp_codegen_type_get_object(&UriTypeConverter_t1101_0_0_0), &TypeConverterAttribute__ctor_m3942_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo CompilerGeneratedAttribute_t42_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m109_MethodInfo;
void Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map12(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map13(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo ObsoleteAttribute_t354_il2cpp_TypeInfo;
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern MethodInfo ObsoleteAttribute__ctor_m5101_MethodInfo;
void Uri_t598_CustomAttributesCacheGenerator_Uri__ctor_m4684(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t354 * tmp;
		tmp = (ObsoleteAttribute_t354 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t354_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m5101(tmp, &ObsoleteAttribute__ctor_m5101_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_Uri_EscapeString_m4710(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t354 * tmp;
		tmp = (ObsoleteAttribute_t354 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t354_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m5101(tmp, &ObsoleteAttribute__ctor_m5101_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t598_CustomAttributesCacheGenerator_Uri_Unescape_m4713(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t354 * tmp;
		tmp = (ObsoleteAttribute_t354 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t354_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m5101(tmp, &ObsoleteAttribute__ctor_m5101_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Uri_t598__CustomAttributeCache = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator
};
CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map12 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map12
};
CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map13 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map13
};
CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map14 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14
};
CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map15 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15
};
CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map16 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16
};
CustomAttributesCache Uri_t598__CustomAttributeCache_Uri__ctor_m4684 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_Uri__ctor_m4684
};
CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_EscapeString_m4710 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_Uri_EscapeString_m4710
};
CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_Unescape_m4713 = {
1,
NULL,
&Uri_t598_CustomAttributesCacheGenerator_Uri_Unescape_m4713
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Uri_t598_1_0_0;
struct Uri_t598;
extern CustomAttributesCache Uri_t598__CustomAttributeCache;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map12;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map13;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map14;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map15;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_U3CU3Ef__switch$map16;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri__ctor_m4684;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_EscapeString_m4710;
extern CustomAttributesCache Uri_t598__CustomAttributeCache_Uri_Unescape_m4713;
const Il2CppTypeDefinitionMetadata Uri_t598_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Uri_t598_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Uri_t598_InterfacesTypeInfos/* implementedInterfaces */
	, Uri_t598_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Uri_t598_VTable/* vtableMethods */
	, Uri_t598_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Uri_t598_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Uri"/* name */
	, "System"/* namespaze */
	, Uri_t598_MethodInfos/* methods */
	, Uri_t598_PropertyInfos/* properties */
	, Uri_t598_FieldInfos/* fields */
	, NULL/* events */
	, &Uri_t598_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &Uri_t598__CustomAttributeCache/* custom_attributes_cache */
	, &Uri_t598_0_0_0/* byval_arg */
	, &Uri_t598_1_0_0/* this_arg */
	, &Uri_t598_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Uri_t598_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Uri_t598)/* instance_size */
	, sizeof (Uri_t598)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Uri_t598_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 50/* method_count */
	, 9/* property_count */
	, 38/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.UriFormatException
#include "System_System_UriFormatException.h"
// Metadata Definition System.UriFormatException
extern TypeInfo UriFormatException_t1097_il2cpp_TypeInfo;
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor()
MethodInfo UriFormatException__ctor_m4730_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4730/* method */
	, &UriFormatException_t1097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriFormatException_t1097_UriFormatException__ctor_m4731_ParameterInfos[] = 
{
	{"message", 0, 134218667, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.String)
MethodInfo UriFormatException__ctor_m4731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4731/* method */
	, &UriFormatException_t1097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, UriFormatException_t1097_UriFormatException__ctor_m4731_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t665_0_0_0;
extern Il2CppType StreamingContext_t666_0_0_0;
static ParameterInfo UriFormatException_t1097_UriFormatException__ctor_m4732_ParameterInfos[] = 
{
	{"info", 0, 134218668, &EmptyCustomAttributesCache, &SerializationInfo_t665_0_0_0},
	{"context", 1, 134218669, &EmptyCustomAttributesCache, &StreamingContext_t666_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException__ctor_m4732_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m4732/* method */
	, &UriFormatException_t1097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666/* invoker_method */
	, UriFormatException_t1097_UriFormatException__ctor_m4732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t665_0_0_0;
extern Il2CppType StreamingContext_t666_0_0_0;
static ParameterInfo UriFormatException_t1097_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_ParameterInfos[] = 
{
	{"info", 0, 134218670, &EmptyCustomAttributesCache, &SerializationInfo_t665_0_0_0},
	{"context", 1, 134218671, &EmptyCustomAttributesCache, &StreamingContext_t666_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733/* method */
	, &UriFormatException_t1097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_StreamingContext_t666/* invoker_method */
	, UriFormatException_t1097_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriFormatException_t1097_MethodInfos[] =
{
	&UriFormatException__ctor_m4730_MethodInfo,
	&UriFormatException__ctor_m4731_MethodInfo,
	&UriFormatException__ctor_m4732_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_MethodInfo,
	NULL
};
extern MethodInfo Exception_ToString_m3638_MethodInfo;
extern MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3372_MethodInfo;
extern MethodInfo Exception_get_Message_m1648_MethodInfo;
extern MethodInfo Exception_get_Source_m3640_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m3581_MethodInfo;
extern MethodInfo Exception_GetObjectData_m3639_MethodInfo;
extern MethodInfo Exception_GetType_m3582_MethodInfo;
static Il2CppMethodReference UriFormatException_t1097_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Exception_ToString_m3638_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m4733_MethodInfo,
	&Exception_get_InnerException_m3372_MethodInfo,
	&Exception_get_Message_m1648_MethodInfo,
	&Exception_get_Source_m3640_MethodInfo,
	&Exception_get_StackTrace_m3581_MethodInfo,
	&Exception_GetObjectData_m3639_MethodInfo,
	&Exception_GetType_m3582_MethodInfo,
};
static bool UriFormatException_t1097_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UriFormatException_t1097_InterfacesTypeInfos[] = 
{
	&ISerializable_t359_0_0_0,
};
extern Il2CppType _Exception_t765_0_0_0;
static Il2CppInterfaceOffsetPair UriFormatException_t1097_InterfacesOffsets[] = 
{
	{ &ISerializable_t359_0_0_0, 4},
	{ &_Exception_t765_0_0_0, 5},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriFormatException_t1097_0_0_0;
extern Il2CppType UriFormatException_t1097_1_0_0;
extern Il2CppType FormatException_t708_0_0_0;
struct UriFormatException_t1097;
const Il2CppTypeDefinitionMetadata UriFormatException_t1097_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UriFormatException_t1097_InterfacesTypeInfos/* implementedInterfaces */
	, UriFormatException_t1097_InterfacesOffsets/* interfaceOffsets */
	, &FormatException_t708_0_0_0/* parent */
	, UriFormatException_t1097_VTable/* vtableMethods */
	, UriFormatException_t1097_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriFormatException_t1097_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriFormatException"/* name */
	, "System"/* namespaze */
	, UriFormatException_t1097_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriFormatException_t1097_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriFormatException_t1097_0_0_0/* byval_arg */
	, &UriFormatException_t1097_1_0_0/* this_arg */
	, &UriFormatException_t1097_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriFormatException_t1097)/* instance_size */
	, sizeof (UriFormatException_t1097)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// Metadata Definition System.UriHostNameType
extern TypeInfo UriHostNameType_t1098_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
static MethodInfo* UriHostNameType_t1098_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t33_0_0_1542;
FieldInfo UriHostNameType_t1098____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t33_0_0_1542/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, offsetof(UriHostNameType_t1098, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1098_0_0_32854;
FieldInfo UriHostNameType_t1098____Unknown_2_FieldInfo = 
{
	"Unknown"/* name */
	, &UriHostNameType_t1098_0_0_32854/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1098_0_0_32854;
FieldInfo UriHostNameType_t1098____Basic_3_FieldInfo = 
{
	"Basic"/* name */
	, &UriHostNameType_t1098_0_0_32854/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1098_0_0_32854;
FieldInfo UriHostNameType_t1098____Dns_4_FieldInfo = 
{
	"Dns"/* name */
	, &UriHostNameType_t1098_0_0_32854/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1098_0_0_32854;
FieldInfo UriHostNameType_t1098____IPv4_5_FieldInfo = 
{
	"IPv4"/* name */
	, &UriHostNameType_t1098_0_0_32854/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1098_0_0_32854;
FieldInfo UriHostNameType_t1098____IPv6_6_FieldInfo = 
{
	"IPv6"/* name */
	, &UriHostNameType_t1098_0_0_32854/* type */
	, &UriHostNameType_t1098_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriHostNameType_t1098_FieldInfos[] =
{
	&UriHostNameType_t1098____value___1_FieldInfo,
	&UriHostNameType_t1098____Unknown_2_FieldInfo,
	&UriHostNameType_t1098____Basic_3_FieldInfo,
	&UriHostNameType_t1098____Dns_4_FieldInfo,
	&UriHostNameType_t1098____IPv4_5_FieldInfo,
	&UriHostNameType_t1098____IPv6_6_FieldInfo,
	NULL
};
static const int32_t UriHostNameType_t1098____Unknown_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1098____Unknown_2_DefaultValue = 
{
	&UriHostNameType_t1098____Unknown_2_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1098____Unknown_2_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1098____Basic_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1098____Basic_3_DefaultValue = 
{
	&UriHostNameType_t1098____Basic_3_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1098____Basic_3_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1098____Dns_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1098____Dns_4_DefaultValue = 
{
	&UriHostNameType_t1098____Dns_4_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1098____Dns_4_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1098____IPv4_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1098____IPv4_5_DefaultValue = 
{
	&UriHostNameType_t1098____IPv4_5_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1098____IPv4_5_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1098____IPv6_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1098____IPv6_6_DefaultValue = 
{
	&UriHostNameType_t1098____IPv6_6_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1098____IPv6_6_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriHostNameType_t1098_FieldDefaultValues[] = 
{
	&UriHostNameType_t1098____Unknown_2_DefaultValue,
	&UriHostNameType_t1098____Basic_3_DefaultValue,
	&UriHostNameType_t1098____Dns_4_DefaultValue,
	&UriHostNameType_t1098____IPv4_5_DefaultValue,
	&UriHostNameType_t1098____IPv6_6_DefaultValue,
	NULL
};
static Il2CppMethodReference UriHostNameType_t1098_VTable[] =
{
	&Enum_Equals_m1967_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Enum_GetHashCode_m1968_MethodInfo,
	&Enum_ToString_m1969_MethodInfo,
	&Enum_ToString_m1970_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1971_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1972_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1973_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1974_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1975_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1976_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1977_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1978_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1979_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1980_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1981_MethodInfo,
	&Enum_ToString_m1982_MethodInfo,
	&Enum_System_IConvertible_ToType_m1983_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1984_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1985_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1986_MethodInfo,
	&Enum_CompareTo_m1987_MethodInfo,
	&Enum_GetTypeCode_m1988_MethodInfo,
};
static bool UriHostNameType_t1098_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriHostNameType_t1098_InterfacesOffsets[] = 
{
	{ &IFormattable_t344_0_0_0, 4},
	{ &IConvertible_t345_0_0_0, 5},
	{ &IComparable_t346_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriHostNameType_t1098_0_0_0;
extern Il2CppType UriHostNameType_t1098_1_0_0;
const Il2CppTypeDefinitionMetadata UriHostNameType_t1098_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriHostNameType_t1098_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t348_0_0_0/* parent */
	, UriHostNameType_t1098_VTable/* vtableMethods */
	, UriHostNameType_t1098_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriHostNameType_t1098_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriHostNameType"/* name */
	, "System"/* namespaze */
	, UriHostNameType_t1098_MethodInfos/* methods */
	, NULL/* properties */
	, UriHostNameType_t1098_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t33_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriHostNameType_t1098_0_0_0/* byval_arg */
	, &UriHostNameType_t1098_1_0_0/* this_arg */
	, &UriHostNameType_t1098_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriHostNameType_t1098_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriHostNameType_t1098)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriHostNameType_t1098)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriKind
#include "System_System_UriKind.h"
// Metadata Definition System.UriKind
extern TypeInfo UriKind_t1099_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
static MethodInfo* UriKind_t1099_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t33_0_0_1542;
FieldInfo UriKind_t1099____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t33_0_0_1542/* type */
	, &UriKind_t1099_il2cpp_TypeInfo/* parent */
	, offsetof(UriKind_t1099, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1099_0_0_32854;
FieldInfo UriKind_t1099____RelativeOrAbsolute_2_FieldInfo = 
{
	"RelativeOrAbsolute"/* name */
	, &UriKind_t1099_0_0_32854/* type */
	, &UriKind_t1099_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1099_0_0_32854;
FieldInfo UriKind_t1099____Absolute_3_FieldInfo = 
{
	"Absolute"/* name */
	, &UriKind_t1099_0_0_32854/* type */
	, &UriKind_t1099_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1099_0_0_32854;
FieldInfo UriKind_t1099____Relative_4_FieldInfo = 
{
	"Relative"/* name */
	, &UriKind_t1099_0_0_32854/* type */
	, &UriKind_t1099_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriKind_t1099_FieldInfos[] =
{
	&UriKind_t1099____value___1_FieldInfo,
	&UriKind_t1099____RelativeOrAbsolute_2_FieldInfo,
	&UriKind_t1099____Absolute_3_FieldInfo,
	&UriKind_t1099____Relative_4_FieldInfo,
	NULL
};
static const int32_t UriKind_t1099____RelativeOrAbsolute_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriKind_t1099____RelativeOrAbsolute_2_DefaultValue = 
{
	&UriKind_t1099____RelativeOrAbsolute_2_FieldInfo/* field */
	, { (char*)&UriKind_t1099____RelativeOrAbsolute_2_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriKind_t1099____Absolute_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriKind_t1099____Absolute_3_DefaultValue = 
{
	&UriKind_t1099____Absolute_3_FieldInfo/* field */
	, { (char*)&UriKind_t1099____Absolute_3_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriKind_t1099____Relative_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriKind_t1099____Relative_4_DefaultValue = 
{
	&UriKind_t1099____Relative_4_FieldInfo/* field */
	, { (char*)&UriKind_t1099____Relative_4_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriKind_t1099_FieldDefaultValues[] = 
{
	&UriKind_t1099____RelativeOrAbsolute_2_DefaultValue,
	&UriKind_t1099____Absolute_3_DefaultValue,
	&UriKind_t1099____Relative_4_DefaultValue,
	NULL
};
static Il2CppMethodReference UriKind_t1099_VTable[] =
{
	&Enum_Equals_m1967_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Enum_GetHashCode_m1968_MethodInfo,
	&Enum_ToString_m1969_MethodInfo,
	&Enum_ToString_m1970_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1971_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1972_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1973_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1974_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1975_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1976_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1977_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1978_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1979_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1980_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1981_MethodInfo,
	&Enum_ToString_m1982_MethodInfo,
	&Enum_System_IConvertible_ToType_m1983_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1984_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1985_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1986_MethodInfo,
	&Enum_CompareTo_m1987_MethodInfo,
	&Enum_GetTypeCode_m1988_MethodInfo,
};
static bool UriKind_t1099_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriKind_t1099_InterfacesOffsets[] = 
{
	{ &IFormattable_t344_0_0_0, 4},
	{ &IConvertible_t345_0_0_0, 5},
	{ &IComparable_t346_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriKind_t1099_1_0_0;
const Il2CppTypeDefinitionMetadata UriKind_t1099_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriKind_t1099_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t348_0_0_0/* parent */
	, UriKind_t1099_VTable/* vtableMethods */
	, UriKind_t1099_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriKind_t1099_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriKind"/* name */
	, "System"/* namespaze */
	, UriKind_t1099_MethodInfos/* methods */
	, NULL/* properties */
	, UriKind_t1099_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t33_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriKind_t1099_0_0_0/* byval_arg */
	, &UriKind_t1099_1_0_0/* this_arg */
	, &UriKind_t1099_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriKind_t1099_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriKind_t1099)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriKind_t1099)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriParser
#include "System_System_UriParser.h"
// Metadata Definition System.UriParser
extern TypeInfo UriParser_t1093_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
MethodInfo UriParser__ctor_m4734_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m4734/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
MethodInfo UriParser__cctor_m4735_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m4735/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t598_0_0_0;
extern Il2CppType UriFormatException_t1097_1_0_2;
static ParameterInfo UriParser_t1093_UriParser_InitializeAndValidate_m4736_ParameterInfos[] = 
{
	{"uri", 0, 134218672, &EmptyCustomAttributesCache, &Uri_t598_0_0_0},
	{"parsingError", 1, 134218673, &EmptyCustomAttributesCache, &UriFormatException_t1097_1_0_2},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_UriFormatExceptionU26_t1152 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
MethodInfo UriParser_InitializeAndValidate_m4736_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m4736/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_UriFormatExceptionU26_t1152/* invoker_method */
	, UriParser_t1093_UriParser_InitializeAndValidate_m4736_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo UriParser_t1093_UriParser_OnRegister_m4737_ParameterInfos[] = 
{
	{"schemeName", 0, 134218674, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 1, 134218675, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache UriParser_t1093__CustomAttributeCache_UriParser_OnRegister_m4737;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
MethodInfo UriParser_OnRegister_m4737_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m4737/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Int32_t33/* invoker_method */
	, UriParser_t1093_UriParser_OnRegister_m4737_ParameterInfos/* parameters */
	, &UriParser_t1093__CustomAttributeCache_UriParser_OnRegister_m4737/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1093_UriParser_set_SchemeName_m4738_ParameterInfos[] = 
{
	{"value", 0, 134218676, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
MethodInfo UriParser_set_SchemeName_m4738_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m4738/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t/* invoker_method */
	, UriParser_t1093_UriParser_set_SchemeName_m4738_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
extern void* RuntimeInvoker_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
MethodInfo UriParser_get_DefaultPort_m4739_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m4739/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t33_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t33/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo UriParser_t1093_UriParser_set_DefaultPort_m4740_ParameterInfos[] = 
{
	{"value", 0, 134218677, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
MethodInfo UriParser_set_DefaultPort_m4740_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m4740/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Int32_t33/* invoker_method */
	, UriParser_t1093_UriParser_set_DefaultPort_m4740_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
MethodInfo UriParser_CreateDefaults_m4741_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m4741/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t923_0_0_0;
extern Il2CppType UriParser_t1093_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t33_0_0_0;
static ParameterInfo UriParser_t1093_UriParser_InternalRegister_m4742_ParameterInfos[] = 
{
	{"table", 0, 134218678, &EmptyCustomAttributesCache, &Hashtable_t923_0_0_0},
	{"uriParser", 1, 134218679, &EmptyCustomAttributesCache, &UriParser_t1093_0_0_0},
	{"schemeName", 2, 134218680, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 3, 134218681, &EmptyCustomAttributesCache, &Int32_t33_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_Object_t_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
MethodInfo UriParser_InternalRegister_m4742_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m4742/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_Object_t_Object_t_Int32_t33/* invoker_method */
	, UriParser_t1093_UriParser_InternalRegister_m4742_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1093_UriParser_GetParser_m4743_ParameterInfos[] = 
{
	{"schemeName", 0, 134218682, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriParser_t1093_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
MethodInfo UriParser_GetParser_m4743_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m4743/* method */
	, &UriParser_t1093_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t1093_UriParser_GetParser_m4743_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriParser_t1093_MethodInfos[] =
{
	&UriParser__ctor_m4734_MethodInfo,
	&UriParser__cctor_m4735_MethodInfo,
	&UriParser_InitializeAndValidate_m4736_MethodInfo,
	&UriParser_OnRegister_m4737_MethodInfo,
	&UriParser_set_SchemeName_m4738_MethodInfo,
	&UriParser_get_DefaultPort_m4739_MethodInfo,
	&UriParser_set_DefaultPort_m4740_MethodInfo,
	&UriParser_CreateDefaults_m4741_MethodInfo,
	&UriParser_InternalRegister_m4742_MethodInfo,
	&UriParser_GetParser_m4743_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_17;
FieldInfo UriParser_t1093____lock_object_0_FieldInfo = 
{
	"lock_object"/* name */
	, &Object_t_0_0_17/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093_StaticFields, ___lock_object_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t923_0_0_17;
FieldInfo UriParser_t1093____table_1_FieldInfo = 
{
	"table"/* name */
	, &Hashtable_t923_0_0_17/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093_StaticFields, ___table_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_3;
FieldInfo UriParser_t1093____scheme_name_2_FieldInfo = 
{
	"scheme_name"/* name */
	, &String_t_0_0_3/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093, ___scheme_name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t33_0_0_1;
FieldInfo UriParser_t1093____default_port_3_FieldInfo = 
{
	"default_port"/* name */
	, &Int32_t33_0_0_1/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093, ___default_port_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t752_0_0_49;
FieldInfo UriParser_t1093____uri_regex_4_FieldInfo = 
{
	"uri_regex"/* name */
	, &Regex_t752_0_0_49/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093_StaticFields, ___uri_regex_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t752_0_0_49;
FieldInfo UriParser_t1093____auth_regex_5_FieldInfo = 
{
	"auth_regex"/* name */
	, &Regex_t752_0_0_49/* type */
	, &UriParser_t1093_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1093_StaticFields, ___auth_regex_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriParser_t1093_FieldInfos[] =
{
	&UriParser_t1093____lock_object_0_FieldInfo,
	&UriParser_t1093____table_1_FieldInfo,
	&UriParser_t1093____scheme_name_2_FieldInfo,
	&UriParser_t1093____default_port_3_FieldInfo,
	&UriParser_t1093____uri_regex_4_FieldInfo,
	&UriParser_t1093____auth_regex_5_FieldInfo,
	NULL
};
extern MethodInfo UriParser_set_SchemeName_m4738_MethodInfo;
static PropertyInfo UriParser_t1093____SchemeName_PropertyInfo = 
{
	&UriParser_t1093_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m4738_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo UriParser_get_DefaultPort_m4739_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m4740_MethodInfo;
static PropertyInfo UriParser_t1093____DefaultPort_PropertyInfo = 
{
	&UriParser_t1093_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m4739_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m4740_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* UriParser_t1093_PropertyInfos[] =
{
	&UriParser_t1093____SchemeName_PropertyInfo,
	&UriParser_t1093____DefaultPort_PropertyInfo,
	NULL
};
static Il2CppMethodReference UriParser_t1093_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&UriParser_InitializeAndValidate_m4736_MethodInfo,
	&UriParser_OnRegister_m4737_MethodInfo,
};
static bool UriParser_t1093_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern TypeInfo MonoTODOAttribute_t922_il2cpp_TypeInfo;
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttributeMethodDeclarations.h"
extern MethodInfo MonoTODOAttribute__ctor_m3856_MethodInfo;
void UriParser_t1093_CustomAttributesCacheGenerator_UriParser_OnRegister_m4737(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		MonoTODOAttribute_t922 * tmp;
		tmp = (MonoTODOAttribute_t922 *)il2cpp_codegen_object_new (&MonoTODOAttribute_t922_il2cpp_TypeInfo);
		MonoTODOAttribute__ctor_m3856(tmp, &MonoTODOAttribute__ctor_m3856_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UriParser_t1093__CustomAttributeCache_UriParser_OnRegister_m4737 = {
1,
NULL,
&UriParser_t1093_CustomAttributesCacheGenerator_UriParser_OnRegister_m4737
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriParser_t1093_1_0_0;
struct UriParser_t1093;
extern CustomAttributesCache UriParser_t1093__CustomAttributeCache_UriParser_OnRegister_m4737;
const Il2CppTypeDefinitionMetadata UriParser_t1093_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UriParser_t1093_VTable/* vtableMethods */
	, UriParser_t1093_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriParser_t1093_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t1093_MethodInfos/* methods */
	, UriParser_t1093_PropertyInfos/* properties */
	, UriParser_t1093_FieldInfos/* fields */
	, NULL/* events */
	, &UriParser_t1093_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriParser_t1093_0_0_0/* byval_arg */
	, &UriParser_t1093_1_0_0/* this_arg */
	, &UriParser_t1093_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t1093)/* instance_size */
	, sizeof (UriParser_t1093)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t1093_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
// Metadata Definition System.UriPartial
extern TypeInfo UriPartial_t1100_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
static MethodInfo* UriPartial_t1100_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t33_0_0_1542;
FieldInfo UriPartial_t1100____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t33_0_0_1542/* type */
	, &UriPartial_t1100_il2cpp_TypeInfo/* parent */
	, offsetof(UriPartial_t1100, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1100_0_0_32854;
FieldInfo UriPartial_t1100____Scheme_2_FieldInfo = 
{
	"Scheme"/* name */
	, &UriPartial_t1100_0_0_32854/* type */
	, &UriPartial_t1100_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1100_0_0_32854;
FieldInfo UriPartial_t1100____Authority_3_FieldInfo = 
{
	"Authority"/* name */
	, &UriPartial_t1100_0_0_32854/* type */
	, &UriPartial_t1100_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1100_0_0_32854;
FieldInfo UriPartial_t1100____Path_4_FieldInfo = 
{
	"Path"/* name */
	, &UriPartial_t1100_0_0_32854/* type */
	, &UriPartial_t1100_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1100_0_0_32854;
FieldInfo UriPartial_t1100____Query_5_FieldInfo = 
{
	"Query"/* name */
	, &UriPartial_t1100_0_0_32854/* type */
	, &UriPartial_t1100_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriPartial_t1100_FieldInfos[] =
{
	&UriPartial_t1100____value___1_FieldInfo,
	&UriPartial_t1100____Scheme_2_FieldInfo,
	&UriPartial_t1100____Authority_3_FieldInfo,
	&UriPartial_t1100____Path_4_FieldInfo,
	&UriPartial_t1100____Query_5_FieldInfo,
	NULL
};
static const int32_t UriPartial_t1100____Scheme_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriPartial_t1100____Scheme_2_DefaultValue = 
{
	&UriPartial_t1100____Scheme_2_FieldInfo/* field */
	, { (char*)&UriPartial_t1100____Scheme_2_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriPartial_t1100____Authority_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriPartial_t1100____Authority_3_DefaultValue = 
{
	&UriPartial_t1100____Authority_3_FieldInfo/* field */
	, { (char*)&UriPartial_t1100____Authority_3_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriPartial_t1100____Path_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriPartial_t1100____Path_4_DefaultValue = 
{
	&UriPartial_t1100____Path_4_FieldInfo/* field */
	, { (char*)&UriPartial_t1100____Path_4_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static const int32_t UriPartial_t1100____Query_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriPartial_t1100____Query_5_DefaultValue = 
{
	&UriPartial_t1100____Query_5_FieldInfo/* field */
	, { (char*)&UriPartial_t1100____Query_5_DefaultValueData, &Int32_t33_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriPartial_t1100_FieldDefaultValues[] = 
{
	&UriPartial_t1100____Scheme_2_DefaultValue,
	&UriPartial_t1100____Authority_3_DefaultValue,
	&UriPartial_t1100____Path_4_DefaultValue,
	&UriPartial_t1100____Query_5_DefaultValue,
	NULL
};
static Il2CppMethodReference UriPartial_t1100_VTable[] =
{
	&Enum_Equals_m1967_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Enum_GetHashCode_m1968_MethodInfo,
	&Enum_ToString_m1969_MethodInfo,
	&Enum_ToString_m1970_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1971_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1972_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1973_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1974_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1975_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1976_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1977_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1978_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1979_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1980_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1981_MethodInfo,
	&Enum_ToString_m1982_MethodInfo,
	&Enum_System_IConvertible_ToType_m1983_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1984_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1985_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1986_MethodInfo,
	&Enum_CompareTo_m1987_MethodInfo,
	&Enum_GetTypeCode_m1988_MethodInfo,
};
static bool UriPartial_t1100_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriPartial_t1100_InterfacesOffsets[] = 
{
	{ &IFormattable_t344_0_0_0, 4},
	{ &IConvertible_t345_0_0_0, 5},
	{ &IComparable_t346_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriPartial_t1100_1_0_0;
const Il2CppTypeDefinitionMetadata UriPartial_t1100_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriPartial_t1100_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t348_0_0_0/* parent */
	, UriPartial_t1100_VTable/* vtableMethods */
	, UriPartial_t1100_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriPartial_t1100_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t1100_MethodInfos/* methods */
	, NULL/* properties */
	, UriPartial_t1100_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t33_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriPartial_t1100_0_0_0/* byval_arg */
	, &UriPartial_t1100_1_0_0/* this_arg */
	, &UriPartial_t1100_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriPartial_t1100_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t1100)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriPartial_t1100)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// Metadata Definition System.UriTypeConverter
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
static MethodInfo* UriTypeConverter_t1101_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference UriTypeConverter_t1101_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool UriTypeConverter_t1101_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriTypeConverter_t1101_1_0_0;
extern Il2CppType TypeConverter_t941_0_0_0;
struct UriTypeConverter_t1101;
const Il2CppTypeDefinitionMetadata UriTypeConverter_t1101_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TypeConverter_t941_0_0_0/* parent */
	, UriTypeConverter_t1101_VTable/* vtableMethods */
	, UriTypeConverter_t1101_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriTypeConverter_t1101_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t1101_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriTypeConverter_t1101_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriTypeConverter_t1101_0_0_0/* byval_arg */
	, &UriTypeConverter_t1101_1_0_0/* this_arg */
	, &UriTypeConverter_t1101_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t1101)/* instance_size */
	, sizeof (UriTypeConverter_t1101)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern TypeInfo RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback__ctor_m4744_ParameterInfos[] = 
{
	{"object", 0, 134218683, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218684, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo RemoteCertificateValidationCallback__ctor_m4744_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback__ctor_m4744/* method */
	, &RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_IntPtr_t/* invoker_method */
	, RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback__ctor_m4744_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t948_0_0_0;
extern Il2CppType X509Certificate_t948_0_0_0;
extern Il2CppType X509Chain_t957_0_0_0;
extern Il2CppType X509Chain_t957_0_0_0;
extern Il2CppType SslPolicyErrors_t944_0_0_0;
extern Il2CppType SslPolicyErrors_t944_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_Invoke_m4745_ParameterInfos[] = 
{
	{"sender", 0, 134218685, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218686, &EmptyCustomAttributesCache, &X509Certificate_t948_0_0_0},
	{"chain", 2, 134218687, &EmptyCustomAttributesCache, &X509Chain_t957_0_0_0},
	{"sslPolicyErrors", 3, 134218688, &EmptyCustomAttributesCache, &SslPolicyErrors_t944_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t_Object_t_Object_t_Int32_t33 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
MethodInfo RemoteCertificateValidationCallback_Invoke_m4745_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_Invoke_m4745/* method */
	, &RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t_Object_t_Object_t_Int32_t33/* invoker_method */
	, RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_Invoke_m4745_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t948_0_0_0;
extern Il2CppType X509Chain_t957_0_0_0;
extern Il2CppType SslPolicyErrors_t944_0_0_0;
extern Il2CppType AsyncCallback_t189_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_BeginInvoke_m4746_ParameterInfos[] = 
{
	{"sender", 0, 134218689, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218690, &EmptyCustomAttributesCache, &X509Certificate_t948_0_0_0},
	{"chain", 2, 134218691, &EmptyCustomAttributesCache, &X509Chain_t957_0_0_0},
	{"sslPolicyErrors", 3, 134218692, &EmptyCustomAttributesCache, &SslPolicyErrors_t944_0_0_0},
	{"callback", 4, 134218693, &EmptyCustomAttributesCache, &AsyncCallback_t189_0_0_0},
	{"object", 5, 134218694, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t188_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t33_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m4746_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_BeginInvoke_m4746/* method */
	, &RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t188_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t33_Object_t_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_BeginInvoke_m4746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t188_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_EndInvoke_m4747_ParameterInfos[] = 
{
	{"result", 0, 134218695, &EmptyCustomAttributesCache, &IAsyncResult_t188_0_0_0},
};
extern Il2CppType Boolean_t35_0_0_0;
extern void* RuntimeInvoker_Boolean_t35_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo RemoteCertificateValidationCallback_EndInvoke_m4747_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_EndInvoke_m4747/* method */
	, &RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t35_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t35_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t955_RemoteCertificateValidationCallback_EndInvoke_m4747_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RemoteCertificateValidationCallback_t955_MethodInfos[] =
{
	&RemoteCertificateValidationCallback__ctor_m4744_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m4745_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m4746_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m4747_MethodInfo,
	NULL
};
extern MethodInfo RemoteCertificateValidationCallback_Invoke_m4745_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m4746_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_EndInvoke_m4747_MethodInfo;
static Il2CppMethodReference RemoteCertificateValidationCallback_t955_VTable[] =
{
	&MulticastDelegate_Equals_m2004_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&MulticastDelegate_GetHashCode_m2005_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&Delegate_Clone_m2007_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2008_MethodInfo,
	&MulticastDelegate_CombineImpl_m2009_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2010_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m4745_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m4746_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m4747_MethodInfo,
};
static bool RemoteCertificateValidationCallback_t955_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RemoteCertificateValidationCallback_t955_InterfacesOffsets[] = 
{
	{ &ICloneable_t358_0_0_0, 4},
	{ &ISerializable_t359_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RemoteCertificateValidationCallback_t955_0_0_0;
extern Il2CppType RemoteCertificateValidationCallback_t955_1_0_0;
struct RemoteCertificateValidationCallback_t955;
const Il2CppTypeDefinitionMetadata RemoteCertificateValidationCallback_t955_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RemoteCertificateValidationCallback_t955_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t192_0_0_0/* parent */
	, RemoteCertificateValidationCallback_t955_VTable/* vtableMethods */
	, RemoteCertificateValidationCallback_t955_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemoteCertificateValidationCallback"/* name */
	, "System.Net.Security"/* namespaze */
	, RemoteCertificateValidationCallback_t955_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &RemoteCertificateValidationCallback_t955_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RemoteCertificateValidationCallback_t955_0_0_0/* byval_arg */
	, &RemoteCertificateValidationCallback_t955_1_0_0/* this_arg */
	, &RemoteCertificateValidationCallback_t955_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t955/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemoteCertificateValidationCallback_t955)/* instance_size */
	, sizeof (RemoteCertificateValidationCallback_t955)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// Metadata Definition System.Text.RegularExpressions.MatchEvaluator
extern TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator__ctor_m4748_ParameterInfos[] = 
{
	{"object", 0, 134218696, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218697, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t34_0_0_0;
extern void* RuntimeInvoker_Void_t34_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
MethodInfo MatchEvaluator__ctor_m4748_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchEvaluator__ctor_m4748/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &Void_t34_0_0_0/* return_type */
	, RuntimeInvoker_Void_t34_Object_t_IntPtr_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator__ctor_m4748_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1026_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_Invoke_m4749_ParameterInfos[] = 
{
	{"match", 0, 134218698, &EmptyCustomAttributesCache, &Match_t1026_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
MethodInfo MatchEvaluator_Invoke_m4749_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&MatchEvaluator_Invoke_m4749/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_Invoke_m4749_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Match_t1026_0_0_0;
extern Il2CppType AsyncCallback_t189_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_BeginInvoke_m4750_ParameterInfos[] = 
{
	{"match", 0, 134218699, &EmptyCustomAttributesCache, &Match_t1026_0_0_0},
	{"callback", 1, 134218700, &EmptyCustomAttributesCache, &AsyncCallback_t189_0_0_0},
	{"object", 2, 134218701, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t188_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
MethodInfo MatchEvaluator_BeginInvoke_m4750_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_BeginInvoke_m4750/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t188_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_BeginInvoke_m4750_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t188_0_0_0;
static ParameterInfo MatchEvaluator_t1029_MatchEvaluator_EndInvoke_m4751_ParameterInfos[] = 
{
	{"result", 0, 134218702, &EmptyCustomAttributesCache, &IAsyncResult_t188_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
MethodInfo MatchEvaluator_EndInvoke_m4751_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&MatchEvaluator_EndInvoke_m4751/* method */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, MatchEvaluator_t1029_MatchEvaluator_EndInvoke_m4751_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MatchEvaluator_t1029_MethodInfos[] =
{
	&MatchEvaluator__ctor_m4748_MethodInfo,
	&MatchEvaluator_Invoke_m4749_MethodInfo,
	&MatchEvaluator_BeginInvoke_m4750_MethodInfo,
	&MatchEvaluator_EndInvoke_m4751_MethodInfo,
	NULL
};
extern MethodInfo MatchEvaluator_Invoke_m4749_MethodInfo;
extern MethodInfo MatchEvaluator_BeginInvoke_m4750_MethodInfo;
extern MethodInfo MatchEvaluator_EndInvoke_m4751_MethodInfo;
static Il2CppMethodReference MatchEvaluator_t1029_VTable[] =
{
	&MulticastDelegate_Equals_m2004_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&MulticastDelegate_GetHashCode_m2005_MethodInfo,
	&Object_ToString_m108_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&Delegate_Clone_m2007_MethodInfo,
	&MulticastDelegate_GetObjectData_m2006_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2008_MethodInfo,
	&MulticastDelegate_CombineImpl_m2009_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2010_MethodInfo,
	&MatchEvaluator_Invoke_m4749_MethodInfo,
	&MatchEvaluator_BeginInvoke_m4750_MethodInfo,
	&MatchEvaluator_EndInvoke_m4751_MethodInfo,
};
static bool MatchEvaluator_t1029_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair MatchEvaluator_t1029_InterfacesOffsets[] = 
{
	{ &ICloneable_t358_0_0_0, 4},
	{ &ISerializable_t359_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MatchEvaluator_t1029_0_0_0;
extern Il2CppType MatchEvaluator_t1029_1_0_0;
struct MatchEvaluator_t1029;
const Il2CppTypeDefinitionMetadata MatchEvaluator_t1029_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, MatchEvaluator_t1029_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t192_0_0_0/* parent */
	, MatchEvaluator_t1029_VTable/* vtableMethods */
	, MatchEvaluator_t1029_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo MatchEvaluator_t1029_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchEvaluator"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MatchEvaluator_t1029_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MatchEvaluator_t1029_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MatchEvaluator_t1029_0_0_0/* byval_arg */
	, &MatchEvaluator_t1029_1_0_0/* this_arg */
	, &MatchEvaluator_t1029_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_MatchEvaluator_t1029/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchEvaluator_t1029)/* instance_size */
	, sizeof (MatchEvaluator_t1029)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo $ArrayType$128_t1102_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128MethodDeclarations.h"
static MethodInfo* $ArrayType$128_t1102_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$128_t1102_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool $ArrayType$128_t1102_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$128_t1102_0_0_0;
extern Il2CppType $ArrayType$128_t1102_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1104_0_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$128_t1102_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1104_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, $ArrayType$128_t1102_VTable/* vtableMethods */
	, $ArrayType$128_t1102_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$128_t1102_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, $ArrayType$128_t1102_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$128_t1102_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$128_t1102_0_0_0/* byval_arg */
	, &$ArrayType$128_t1102_1_0_0/* this_arg */
	, &$ArrayType$128_t1102_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$128_t1102_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$128_t1102_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$128_t1102_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$128_t1102)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$128_t1102)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$128_t1102_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo $ArrayType$12_t1103_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12MethodDeclarations.h"
static MethodInfo* $ArrayType$12_t1103_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$12_t1103_VTable[] =
{
	&ValueType_Equals_m2024_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&ValueType_GetHashCode_m2025_MethodInfo,
	&ValueType_ToString_m2033_MethodInfo,
};
static bool $ArrayType$12_t1103_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$12_t1103_0_0_0;
extern Il2CppType $ArrayType$12_t1103_1_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$12_t1103_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1104_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t370_0_0_0/* parent */
	, $ArrayType$12_t1103_VTable/* vtableMethods */
	, $ArrayType$12_t1103_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$12_t1103_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t1103_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$12_t1103_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t1103_0_0_0/* byval_arg */
	, &$ArrayType$12_t1103_1_0_0/* this_arg */
	, &$ArrayType$12_t1103_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$12_t1103_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$12_t1103_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$12_t1103_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t1103)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$12_t1103)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$12_t1103_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static MethodInfo* U3CPrivateImplementationDetailsU3E_t1104_MethodInfos[] =
{
	NULL
};
extern Il2CppType $ArrayType$128_t1102_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_FieldInfo = 
{
	"$$field-2"/* name */
	, &$ArrayType$128_t1102_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1104_StaticFields, ___$$fieldU2D2_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1103_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_FieldInfo = 
{
	"$$field-3"/* name */
	, &$ArrayType$12_t1103_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1104_StaticFields, ___$$fieldU2D3_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1103_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_FieldInfo = 
{
	"$$field-4"/* name */
	, &$ArrayType$12_t1103_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1104_StaticFields, ___$$fieldU2D4_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t1104_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_DefaultValueData[] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_DefaultValueData, &$ArrayType$128_t1102_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_DefaultValueData, &$ArrayType$12_t1103_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x7, 0x2, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_DefaultValueData, &$ArrayType$12_t1103_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t1104_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D2_0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D3_1_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1104____$$fieldU2D4_2_DefaultValue,
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo__nestedTypes[2] =
{
	&$ArrayType$128_t1102_0_0_0,
	&$ArrayType$12_t1103_0_0_0,
};
static Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1104_VTable[] =
{
	&Object_Equals_m106_MethodInfo,
	&Object_Finalize_m103_MethodInfo,
	&Object_GetHashCode_m107_MethodInfo,
	&Object_ToString_m108_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1104_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
void U3CPrivateImplementationDetailsU3E_t1104_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t42 * tmp;
		tmp = (CompilerGeneratedAttribute_t42 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t42_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m109(tmp, &CompilerGeneratedAttribute__ctor_m109_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1104__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t1104_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1104_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1104;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1104__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1104_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1104_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1104_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1104_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t1104_FieldInfos/* fields */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1104_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t1104__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1104_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1104_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1104_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t1104_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1104)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1104)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1104_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
