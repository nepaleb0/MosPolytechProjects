#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите количество радиан: ";
	double a;
	cin >>a;
	cout <<"Равно "<<a/3.14*180<<" радиан";
}
