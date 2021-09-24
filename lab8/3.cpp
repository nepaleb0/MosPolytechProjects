#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout <<"Введите длину отрезков A и B: ";
	cin >>a>>b;
	cout <<"Не занятая часть отрезка A равна "<<a-(b*(a/b));
}