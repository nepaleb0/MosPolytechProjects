#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите A, B и C: ";
	int a,b,c;
	cin >>a>>b>>c;
	int t=a;
	a=b;
	b=c;
	c=t;
	cout <<"a = "<<a<<endl
		<<"b = "<<b<<endl
		<<"c = "<<c;
}