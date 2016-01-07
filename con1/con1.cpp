#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
HWND myconsole = GetConsoleWindow();
HDC mydc = GetDC(myconsole);
COLORREF kolor = RGB(0, 255, 0);

class punkt 
{
public:
	int x, y;
	punkt(int xx, int yy) :x(xx), y(yy) { rysuj(); };
	void rysuj()
	{
		SetPixel(mydc, x, y, kolor);
	};
};

int main()
{
		for (int y = 0; y < 400;y++)
			for (int x = 0; x < 1000; x++)
			{
				kolor = RGB(x, y , rand());
				punkt(x, y);
			}









	system("pause");
	ReleaseDC(myconsole, mydc);
	return 0;
}