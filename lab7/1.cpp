#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите значение угла: ";
	int a;
	cin >>a;
	cout <<"Угол равен "<<((double)a/180)*3.14<<" радиан";
}