#pragma once

#include "MainWindow.h"

__declspec(dllexport) int InitializeDllWithMainWindow(HWND hWnd);
__declspec(dllexport) void DestroyDllWithMainWindow();