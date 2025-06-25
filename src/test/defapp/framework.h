#pragma once

#ifndef FRAMEWORK_H_
#define FRAMEWORK_H_

#include "targetver.h"

// Exclude rarely-used stuff from Windows headers
#ifdef _CONSOLE
 #define WIN32_LEAN_AND_MEAN
#endif  // _CONSOLE

// To allow std::min and std::max
// instead of MIN/MAX macros
#ifndef NOMINMAX
 #define NOMINMAX
#endif  // NOMINMAX

// Allow old C++ standards and insecure functions
#ifndef _CRT_SECURE_NO_WARNINGS
 #define _CRT_SECURE_NO_WARNINGS
#endif  // _CRT_SECURE_NO_WARNINGS

// To use Microsoft specific preprocessor math constant macros
#ifndef _USE_MATH_DEFINES
 #define _USE_MATH_DEFINES
#endif
#ifdef _USE_MATH_DEFINES
 #include <math.h>
 #include <cmath>
#endif  // _USE_MATH_DEFINES

// Must include this before windows.h for deprecated converters
#include <codecvt>
#include <locale>

// Windows Header Files
// Fail early if _WINDOWS isn't defined, since this is a GUI Win32 app
#ifdef _WINDOWS // Test to make sure we compiled this as a GUI app
 #include <windows.h>
#endif  // _WINDOWS

// C Runtime Header Files
#include <errno.h>
#include <float.h>
#include <malloc.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <time.h>

#endif  // FRAMEWORK_H_
