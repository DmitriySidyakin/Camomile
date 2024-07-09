#pragma once
#include "framework.h"
#include "dll.h"
//#include <windows.h>
#include <objidl.h>

#include <gdiplus.h>

#ifdef BUILD_MYAPI
#    define MY_API1 __declspec(dllexport)
#else
#    define MY_API1 __declspec(dllimport)
#endif

using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

class __declspec(dllexport) MainWindow
{
    private:
        const WCHAR* helloMessage;;
    protected: // Variables
        HWND hWnd;
    public:
        MainWindow(HWND hWnd);
        ~MainWindow();
        LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
        VOID Test();
        Status OnPaint(HDC hdc);
};

