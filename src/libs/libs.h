/*
 *  Copyright (c) 2020-2022 Thakee Nathees
 *  Copyright (c) 2021-2022 Pocketlang Contributors
 *  Distributed Under The MIT License
 */

#pragma once

#include <pocketlang.h>

#include <errno.h>
#include <stdio.h>
#include <string.h>

#ifndef PK_LIB_MATH
#define PK_LIB_MATH  1
#endif
#ifndef PK_LIB_TYPES
#define PK_LIB_TYPES 1
#endif
#ifndef PK_LIB_TIME
#define PK_LIB_TIME  1
#endif
#ifndef PK_LIB_IO
#define PK_LIB_IO    1
#endif
#ifndef PK_LIB_PATH
#define PK_LIB_PATH  1
#endif
#ifndef PK_LIB_OS
#define PK_LIB_OS    1
#endif
#ifndef PK_LIB_JSON
#define PK_LIB_JSON  1
#endif
#ifndef PK_LIB_TERM
#define PK_LIB_TERM  1
#endif

// FIXME:
// Since this are part of the "standard" pocketlang libraries, we can include
// pocketlang internals here using the relative path, however it'll make these
// libraries less "portable" in a sence that these files cannot be just drag
// and dropped into another embedded application where is cannot find the
// relative include.
//
#include "../core/common.h"

#include <errno.h>

#define REPORT_ERRNO(fn) \
  pkSetRuntimeErrorFmt(vm, "C." #fn " errno:%i - %s.", errno, strerror(errno))

#define REGISTER_FN(module, name, fn, argc) \
  pkModuleAddFunction(vm, module, name, fn, argc, PK_DOCS(fn))

#define ADD_METHOD(cls, name, fn, argc) \
  pkClassAddMethod(vm, cls, name, fn, argc, PK_DOCS(fn));

/*****************************************************************************/
/* SHARED FUNCTIONS                                                          */
/*****************************************************************************/

// These are "public" module functions that can be shared. Since each source
// files in this modules doesn't have their own headers we're using this as
// a common header for every one.

// Register all the the libraries to the PKVM.
void registerLibs(PKVM* vm);

// Cleanup registered libraries call this only if the libraries were registered
// with registerLibs() function.
void cleanupLibs(PKVM* vm);

// The pocketlang's import statement path resolving function. This
// implementation is required by pockelang from it's hosting application
// inorder to use the import statements.
char* pathResolveImport(PKVM * vm, const char* from, const char* path);

#ifndef PK_NO_DL

// Loads the platform dependent dynamic library and returns the handle.
void* osLoadDL(PKVM* vm, const char* path);

// Import the module from the dynamic library handle which was loaded from os.
PkHandle* osImportDL(PKVM* vm, void* handle);

// Release the dynamic library.
void osUnloadDL(PKVM* vm, void* handle);

#endif

// Write the executable's path to the buffer and return true, if it failed
// it'll return false.
bool osGetExeFilePath(char* buff, int size);
