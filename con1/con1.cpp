#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
HWND myconsole = GetConsoleWindow();
HDC mydc = GetDC(myconsole);
COLORREF COLOR = RGB(0, 255, 0);

class punkt 
{
public:
	int x, y;
	void rysuj(int x, int y)
	{
		SetPixel(mydc, x*20, 20*y+100, COLOR);
	};
};

int main()
{
	for (int x = 0; x < 28; x++)
	{
		punkt;
		cout << x << "\r";
	}

	system("pause");
	ReleaseDC(myconsole, mydc);
	return 0;
}