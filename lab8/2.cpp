#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout <<"Введите длину отрезков A и B: ";
	cin >>a>>b;
	cout <<"В отрезок A помещается "<<(int)a/b<<" отрезков B";
}