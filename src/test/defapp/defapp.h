#pragma once

#ifndef DEFAPP_H_
#define DEFAPP_H_

#include "resource.h"
#include "framework.h"

// Sensible default
#define MAX_LOADSTRING 100

// Global Variables:
extern HINSTANCE hInst;  // current instance

static TCHAR szTitle[MAX_LOADSTRING];  // The title bar text

static TCHAR szWindowClass[MAX_LOADSTRING];  // the main window class name

static FILE* fDummyFile;  // Dummy file pointer for console output

#endif  // DEFAPP_H_
