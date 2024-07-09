#pragma once

#include "MainWindow.h"

#define MY_API __declspec(dllimport)

__declspec(dllimport) int InitializeDllWithMainWindow(HWND hWnd);

__declspec(dllimport) void DestroyDllWithMainWindow();