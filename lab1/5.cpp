#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	if (a == 0 || b == 0) {
		cout << "Введен 0";
	}
	else {
		cout << "Сумма модулей равна: " << abs(a) + abs(b) << endl
			<< "Разность модулей равна: " << abs(a) - abs(b) << endl
			<< "Произведение модулей равно: " << abs(a) * abs(b) << endl
			<< "Частное модулей равно: " << abs(a) / abs(b);
	}
}