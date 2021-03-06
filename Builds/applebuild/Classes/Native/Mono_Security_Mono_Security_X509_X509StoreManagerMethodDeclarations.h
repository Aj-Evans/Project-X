﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t1197;
// Mono.Security.X509.X509Stores
struct X509Stores_t1020;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1124;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" X509Stores_t1020 * X509StoreManager_get_CurrentUser_m4940 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" X509Stores_t1020 * X509StoreManager_get_LocalMachine_m4941 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" X509CertificateCollection_t1124 * X509StoreManager_get_TrustedRootCertificates_m5373 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
