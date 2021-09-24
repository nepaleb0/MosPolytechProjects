#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "Введите a : ";
	cin >>a
	cout << "Введите b: ";
	cin >>b;
	int t=a;
	a=b;
	b=t;
	cout <<"a = "<<a<<endl
		<<"b = "<<b;
}