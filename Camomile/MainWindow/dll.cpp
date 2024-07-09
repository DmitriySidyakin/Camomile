#include "dll.h"
#include "MainWindow.h"

MY_API1 MainWindow* mw;

MY_API1 int InitializeDllWithMainWindow(HWND hWnd) {
	mw = new MainWindow(hWnd);

	return (int) mw;
};

MY_API1 void DestroyDllWithMainWindow() {
	delete mw;
};