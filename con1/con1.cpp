#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
int main()
{
	HWND myconsole = GetConsoleWindow();
	HDC mydc = GetDC(myconsole);
	COLORREF COLOR = RGB(0, 255, 0);

	for (float x = 0; x < 28; x += .001)
	{
		SetPixel(mydc, x * 20, 20 * tan(x) + 100, COLOR);
		cout << x << "\r";
	}

	system("pause");
	ReleaseDC(myconsole, mydc);
	return 0;
}