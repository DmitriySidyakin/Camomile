#include "MainWindow.h"

using namespace Gdiplus;

MainWindow::MainWindow(HWND hWnd)
{
	this->hWnd = hWnd;
	this->helloMessage = L"Привет! Вы в игре!";
}

MainWindow::~MainWindow()
{
	int i = 0;
	delete helloMessage;
}

LRESULT MainWindow::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return LRESULT();
}

VOID MainWindow::Test()
{
	int i = 0;
}

Status MainWindow::OnPaint(HDC hdc)
{
	Graphics    graphics(hdc);
	FontFamily  fontFamily(L"Times New Roman");
	Font        font(&fontFamily, 24, FontStyleRegular, UnitPixel);
	PointF      pointF(30.0f, 10.0f);
	SolidBrush  solidBrush(Color(255, 255, 255, 255));

	Status status = GenericError;

	status = graphics.DrawString(this->helloMessage, -1, &font, pointF, &solidBrush);

	return graphics.GetLastStatus();
}
