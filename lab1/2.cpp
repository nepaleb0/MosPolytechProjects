#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите диаметр окружности: ";
	int d;
	cin >> d;
	double l, pi = 3.14;
	l = pi * d;
	cout << "\nДлина окружности равна: " << l;
}