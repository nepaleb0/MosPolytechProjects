#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три точки: ";
	cin >> a >> b >> c;
	int ac, bc;
	if (c > a) {
		ac = c - a;
	}
	else {
		ac = a - c;
	}
	if (c > b) {
		bc = c - b;
	}
	else {
		bc = b - c;
	}
	cout << "Произведение длин отрезков  равно: " << ac * bc;
}