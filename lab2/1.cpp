#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, x2, y1, y2;
	cout << "Введите координаты точек: ";
	cin >> x1 >> y1 >> x2 >> y2;
	int rast;
	rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Расстояние между точками равно: " << rast;
}