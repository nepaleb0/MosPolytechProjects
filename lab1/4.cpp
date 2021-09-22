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
		cout << "Сумма квадратов чисел равна: " << pow(a, 2) + pow(b, 2) << endl
			<< "Разность квадратов равна: " << pow(a, 2) - pow(b, 2) << endl
			<< "Произведение квадратов равно: " << pow(a, 2) * pow(b, 2) << endl
			<< "Частное квадратов равно: " << pow(a, 2) / pow(b, 2);
	}
}