#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите A: ";
	int a, b;
	cin >>a;
	b=a;
	a = a*a; // 2
	a = a*a; // 4
	a = a*b; // 5
	a = a*a*a; //15
	cout <<"A = "<<a;
}