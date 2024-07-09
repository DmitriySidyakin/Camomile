#pragma once
#include "MainWindow.h"
#include "framework.h"
#include "dll.h"
#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

class MainWindow
{
	protected: // Variables
		HWND hWnd;
	public:
		MainWindow(HWND hWnd);
		~MainWindow();
		LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
		VOID Test();
		Status OnPaint(HDC hdc);
};

