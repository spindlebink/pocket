/*
 *  Copyright (c) 2020-2022 Thakee Nathees
 *  Copyright (c) 2021-2022 Pocketlang Contributors
 *  Distributed Under The MIT License
 */

#include <pocketlang.h>


// !! THIS FILE IS GENERATED DO NOT EDIT !!

typedef PkConfiguration (*pkNewConfiguration_t)();
typedef PKVM* (*pkNewVM_t)(PkConfiguration*);
typedef void (*pkFreeVM_t)(PKVM*);
typedef void (*pkSetUserData_t)(PKVM*, void*);
typedef void* (*pkGetUserData_t)(const PKVM*);
typedef void (*pkRegisterBuiltinFn_t)(PKVM*, const char*, pkNativeFn, int, const char*);
typedef void (*pkAddSearchPath_t)(PKVM*, const char*);
typedef void* (*pkRealloc_t)(PKVM*, void*, size_t);
typedef void (*pkReleaseHandle_t)(PKVM*, PkHandle*);
typedef PkHandle* (*pkNewModule_t)(PKVM*, const char*);
typedef void (*pkRegisterModule_t)(PKVM*, PkHandle*);
typedef void (*pkModuleAddFunction_t)(PKVM*, PkHandle*, const char*, pkNativeFn, int, const char*);
typedef bool (*pkModuleFindClass_t)(PKVM*, PkHandle*, const char*, int);
typedef void (*pkModuleSetPath_t)(PKVM*, PkHandle*, const char*);
typedef PkHandle* (*pkNewClass_t)(PKVM*, const char*, PkHandle*, PkHandle*, pkNewInstanceFn, pkDeleteInstanceFn, const char*);
typedef void (*pkClassAddMethod_t)(PKVM*, PkHandle*, const char*, pkNativeFn, int, const char*);
typedef void (*pkModuleAddSource_t)(PKVM*, PkHandle*, const char*);
typedef PkResult (*pkRunModule_t)(PKVM*, PkHandle*);
typedef PkResult (*pkRunStringWithPath_t)(PKVM*, const char*, const char*);
typedef PkResult (*pkRunString_t)(PKVM*, const char*);
typedef PkResult (*pkRunFile_t)(PKVM*, const char*);
typedef PkResult (*pkRunREPL_t)(PKVM*);
typedef void (*pkClearRuntimeError_t)(PKVM*);
typedef void (*pkSetRuntimeError_t)(PKVM*, const char*);
typedef const char* (*pkGetRuntimeError_t)(PKVM*);
typedef bool (*pkHasRuntimeError_t)(PKVM*);
typedef void* (*pkGetSelf_t)(const PKVM*);
typedef int (*pkGetArgc_t)(const PKVM*);
typedef bool (*pkCheckArgcRange_t)(PKVM*, int, int, int);
typedef bool (*pkValidateSlotBool_t)(PKVM*, int, bool*);
typedef bool (*pkValidateSlotNumber_t)(PKVM*, int, double*);
typedef bool (*pkValidateSlotInteger_t)(PKVM*, int, int32_t*);
typedef bool (*pkValidateSlotString_t)(PKVM*, int, const char**, uint32_t*);
typedef bool (*pkValidateSlotType_t)(PKVM*, int, PkVarType);
typedef bool (*pkValidateSlotInstanceOf_t)(PKVM*, int, int);
typedef bool (*pkIsSlotInstanceOf_t)(PKVM*, int, int, bool*);
typedef bool (*pkIsSlotBool_t)(PKVM*, int);
typedef bool (*pkIsSlotNumber_t)(PKVM*, int);
typedef bool (*pkIsSlotString_t)(PKVM*, int);
typedef bool (*pkIsSlotNull_t)(PKVM*, int);
typedef bool (*pkIsSlotMap_t)(PKVM*, int);
typedef bool (*pkIsSlotList_t)(PKVM*, int);
typedef void (*pkReserveSlots_t)(PKVM*, int);
typedef int (*pkGetSlotsCount_t)(PKVM*);
typedef PkVarType (*pkGetSlotType_t)(PKVM*, int);
typedef bool (*pkGetSlotBool_t)(PKVM*, int);
typedef double (*pkGetSlotNumber_t)(PKVM*, int);
typedef const char* (*pkGetSlotString_t)(PKVM*, int, uint32_t*);
typedef PkHandle* (*pkGetSlotHandle_t)(PKVM*, int);
typedef void* (*pkGetSlotNativeInstance_t)(PKVM*, int);
typedef void (*pkSetSlotNull_t)(PKVM*, int);
typedef void (*pkSetSlotBool_t)(PKVM*, int, bool);
typedef void (*pkSetSlotNumber_t)(PKVM*, int, double);
typedef void (*pkSetSlotString_t)(PKVM*, int, const char*);
typedef void (*pkSetSlotStringLength_t)(PKVM*, int, const char*, uint32_t);
typedef void (*pkSetSlotHandle_t)(PKVM*, int, PkHandle*);
typedef uint32_t (*pkGetSlotHash_t)(PKVM*, int);
typedef void (*pkPlaceSelf_t)(PKVM*, int);
typedef void (*pkGetClass_t)(PKVM*, int, int);
typedef bool (*pkNewInstance_t)(PKVM*, int, int, int, int);
typedef void (*pkNewRange_t)(PKVM*, int, double, double);
typedef void (*pkNewList_t)(PKVM*, int);
typedef void (*pkNewMap_t)(PKVM*, int);
typedef bool (*pkMapGet_t)(PKVM*, int, int, int);
typedef bool (*pkMapStackStringGet_t)(PKVM*, int, const char*, int);
typedef bool (*pkMapSet_t)(PKVM*, int, int, int);
typedef bool (*pkMapStackStringSet_t)(PKVM*, int, const char*, int);
typedef bool (*pkListInsert_t)(PKVM*, int, int32_t, int);
typedef bool (*pkListPop_t)(PKVM*, int, int32_t, int);
typedef uint32_t (*pkListLength_t)(PKVM*, int);
typedef bool (*pkCallFunction_t)(PKVM*, int, int, int, int);
typedef bool (*pkCallMethod_t)(PKVM*, int, const char*, int, int, int);
typedef bool (*pkGetMethod_t)(PKVM*, int, const char*, int);
typedef bool (*pkGetAttribute_t)(PKVM*, int, const char*, int);
typedef bool (*pkSetAttribute_t)(PKVM*, int, const char*, int);
typedef bool (*pkImportModule_t)(PKVM*, const char*, int);

typedef struct {
  pkNewConfiguration_t pkNewConfiguration_ptr;
  pkNewVM_t pkNewVM_ptr;
  pkFreeVM_t pkFreeVM_ptr;
  pkSetUserData_t pkSetUserData_ptr;
  pkGetUserData_t pkGetUserData_ptr;
  pkRegisterBuiltinFn_t pkRegisterBuiltinFn_ptr;
  pkAddSearchPath_t pkAddSearchPath_ptr;
  pkRealloc_t pkRealloc_ptr;
  pkReleaseHandle_t pkReleaseHandle_ptr;
  pkNewModule_t pkNewModule_ptr;
  pkRegisterModule_t pkRegisterModule_ptr;
  pkModuleAddFunction_t pkModuleAddFunction_ptr;
  pkModuleFindClass_t pkModuleFindClass_ptr;
  pkModuleSetPath_t pkModuleSetPath_ptr;
  pkNewClass_t pkNewClass_ptr;
  pkClassAddMethod_t pkClassAddMethod_ptr;
  pkModuleAddSource_t pkModuleAddSource_ptr;
  pkRunModule_t pkRunModule_ptr;
  pkRunStringWithPath_t pkRunStringWithPath_ptr;
  pkRunString_t pkRunString_ptr;
  pkRunFile_t pkRunFile_ptr;
  pkRunREPL_t pkRunREPL_ptr;
  pkClearRuntimeError_t pkClearRuntimeError_ptr;
  pkSetRuntimeError_t pkSetRuntimeError_ptr;
  pkGetRuntimeError_t pkGetRuntimeError_ptr;
  pkHasRuntimeError_t pkHasRuntimeError_ptr;
  pkGetSelf_t pkGetSelf_ptr;
  pkGetArgc_t pkGetArgc_ptr;
  pkCheckArgcRange_t pkCheckArgcRange_ptr;
  pkValidateSlotBool_t pkValidateSlotBool_ptr;
  pkValidateSlotNumber_t pkValidateSlotNumber_ptr;
  pkValidateSlotInteger_t pkValidateSlotInteger_ptr;
  pkValidateSlotString_t pkValidateSlotString_ptr;
  pkValidateSlotType_t pkValidateSlotType_ptr;
  pkValidateSlotInstanceOf_t pkValidateSlotInstanceOf_ptr;
  pkIsSlotInstanceOf_t pkIsSlotInstanceOf_ptr;
  pkIsSlotBool_t pkIsSlotBool_ptr;
  pkIsSlotNumber_t pkIsSlotNumber_ptr;
  pkIsSlotString_t pkIsSlotString_ptr;
  pkIsSlotNull_t pkIsSlotNull_ptr;
  pkIsSlotMap_t pkIsSlotMap_ptr;
  pkIsSlotList_t pkIsSlotList_ptr;
  pkReserveSlots_t pkReserveSlots_ptr;
  pkGetSlotsCount_t pkGetSlotsCount_ptr;
  pkGetSlotType_t pkGetSlotType_ptr;
  pkGetSlotBool_t pkGetSlotBool_ptr;
  pkGetSlotNumber_t pkGetSlotNumber_ptr;
  pkGetSlotString_t pkGetSlotString_ptr;
  pkGetSlotHandle_t pkGetSlotHandle_ptr;
  pkGetSlotNativeInstance_t pkGetSlotNativeInstance_ptr;
  pkSetSlotNull_t pkSetSlotNull_ptr;
  pkSetSlotBool_t pkSetSlotBool_ptr;
  pkSetSlotNumber_t pkSetSlotNumber_ptr;
  pkSetSlotString_t pkSetSlotString_ptr;
  pkSetSlotStringLength_t pkSetSlotStringLength_ptr;
  pkSetSlotHandle_t pkSetSlotHandle_ptr;
  pkGetSlotHash_t pkGetSlotHash_ptr;
  pkPlaceSelf_t pkPlaceSelf_ptr;
  pkGetClass_t pkGetClass_ptr;
  pkNewInstance_t pkNewInstance_ptr;
  pkNewRange_t pkNewRange_ptr;
  pkNewList_t pkNewList_ptr;
  pkNewMap_t pkNewMap_ptr;
  pkMapGet_t pkMapGet_ptr;
  pkMapStackStringGet_t pkMapStackStringGet_ptr;
  pkMapSet_t pkMapSet_ptr;
  pkMapStackStringSet_t pkMapStackStringSet_ptr;
  pkListInsert_t pkListInsert_ptr;
  pkListPop_t pkListPop_ptr;
  pkListLength_t pkListLength_ptr;
  pkCallFunction_t pkCallFunction_ptr;
  pkCallMethod_t pkCallMethod_ptr;
  pkGetMethod_t pkGetMethod_ptr;
  pkGetAttribute_t pkGetAttribute_ptr;
  pkSetAttribute_t pkSetAttribute_ptr;
  pkImportModule_t pkImportModule_ptr;
} PkNativeApi;

#define PK_API_INIT_FN_NAME "pkInitApi" 
#define PK_EXPORT_FN_NAME "pkExportModule" 

#define PK_CLEANUP_FN_NAME "pkCleanupModule" 

typedef void (*pkInitApiFn)(PkNativeApi*);
typedef PkHandle* (*pkExportModuleFn)(PKVM*);

#ifdef PK_DL_IMPLEMENT

PkNativeApi pkMakeNativeAPI() {

  PkNativeApi api;

  api.pkNewConfiguration_ptr = pkNewConfiguration;
  api.pkNewVM_ptr = pkNewVM;
  api.pkFreeVM_ptr = pkFreeVM;
  api.pkSetUserData_ptr = pkSetUserData;
  api.pkGetUserData_ptr = pkGetUserData;
  api.pkRegisterBuiltinFn_ptr = pkRegisterBuiltinFn;
  api.pkAddSearchPath_ptr = pkAddSearchPath;
  api.pkRealloc_ptr = pkRealloc;
  api.pkReleaseHandle_ptr = pkReleaseHandle;
  api.pkNewModule_ptr = pkNewModule;
  api.pkRegisterModule_ptr = pkRegisterModule;
  api.pkModuleAddFunction_ptr = pkModuleAddFunction;
  api.pkModuleFindClass_ptr = pkModuleFindClass;
  api.pkModuleSetPath_ptr = pkModuleSetPath;
  api.pkNewClass_ptr = pkNewClass;
  api.pkClassAddMethod_ptr = pkClassAddMethod;
  api.pkModuleAddSource_ptr = pkModuleAddSource;
  api.pkRunModule_ptr = pkRunModule;
  api.pkRunStringWithPath_ptr = pkRunStringWithPath;
  api.pkRunString_ptr = pkRunString;
  api.pkRunFile_ptr = pkRunFile;
  api.pkRunREPL_ptr = pkRunREPL;
  api.pkClearRuntimeError_ptr = pkClearRuntimeError;
  api.pkSetRuntimeError_ptr = pkSetRuntimeError;
  api.pkGetRuntimeError_ptr = pkGetRuntimeError;
  api.pkHasRuntimeError_ptr = pkHasRuntimeError;
  api.pkGetSelf_ptr = pkGetSelf;
  api.pkGetArgc_ptr = pkGetArgc;
  api.pkCheckArgcRange_ptr = pkCheckArgcRange;
  api.pkValidateSlotBool_ptr = pkValidateSlotBool;
  api.pkValidateSlotNumber_ptr = pkValidateSlotNumber;
  api.pkValidateSlotInteger_ptr = pkValidateSlotInteger;
  api.pkValidateSlotString_ptr = pkValidateSlotString;
  api.pkValidateSlotType_ptr = pkValidateSlotType;
  api.pkValidateSlotInstanceOf_ptr = pkValidateSlotInstanceOf;
  api.pkIsSlotInstanceOf_ptr = pkIsSlotInstanceOf;
  api.pkIsSlotBool_ptr = pkIsSlotBool;
  api.pkIsSlotNumber_ptr = pkIsSlotNumber;
  api.pkIsSlotString_ptr = pkIsSlotString;
  api.pkIsSlotNull_ptr = pkIsSlotNull;
  api.pkIsSlotMap_ptr = pkIsSlotMap;
  api.pkIsSlotList_ptr = pkIsSlotList;
  api.pkReserveSlots_ptr = pkReserveSlots;
  api.pkGetSlotsCount_ptr = pkGetSlotsCount;
  api.pkGetSlotType_ptr = pkGetSlotType;
  api.pkGetSlotBool_ptr = pkGetSlotBool;
  api.pkGetSlotNumber_ptr = pkGetSlotNumber;
  api.pkGetSlotString_ptr = pkGetSlotString;
  api.pkGetSlotHandle_ptr = pkGetSlotHandle;
  api.pkGetSlotNativeInstance_ptr = pkGetSlotNativeInstance;
  api.pkSetSlotNull_ptr = pkSetSlotNull;
  api.pkSetSlotBool_ptr = pkSetSlotBool;
  api.pkSetSlotNumber_ptr = pkSetSlotNumber;
  api.pkSetSlotString_ptr = pkSetSlotString;
  api.pkSetSlotStringLength_ptr = pkSetSlotStringLength;
  api.pkSetSlotHandle_ptr = pkSetSlotHandle;
  api.pkGetSlotHash_ptr = pkGetSlotHash;
  api.pkPlaceSelf_ptr = pkPlaceSelf;
  api.pkGetClass_ptr = pkGetClass;
  api.pkNewInstance_ptr = pkNewInstance;
  api.pkNewRange_ptr = pkNewRange;
  api.pkNewList_ptr = pkNewList;
  api.pkNewMap_ptr = pkNewMap;
  api.pkMapGet_ptr = pkMapGet;
  api.pkMapStackStringGet_ptr = pkMapStackStringGet;
  api.pkMapSet_ptr = pkMapSet;
  api.pkMapStackStringSet_ptr = pkMapStackStringSet;
  api.pkListInsert_ptr = pkListInsert;
  api.pkListPop_ptr = pkListPop;
  api.pkListLength_ptr = pkListLength;
  api.pkCallFunction_ptr = pkCallFunction;
  api.pkCallMethod_ptr = pkCallMethod;
  api.pkGetMethod_ptr = pkGetMethod;
  api.pkGetAttribute_ptr = pkGetAttribute;
  api.pkSetAttribute_ptr = pkSetAttribute;
  api.pkImportModule_ptr = pkImportModule;

  return api;
}

#endif // PK_DL_IMPLEMENT
