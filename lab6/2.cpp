#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите переменные A, B и C: ";
	int a,b,c;
	cin >>a>>b>>c;
	int t;
	t=a;
	a=c;
	c=b;
	b=t;
	cout <<"a = "<<a<<endl
		<<"b = "<<b<<endl
		<<"c = "<<c;
}
