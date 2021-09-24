#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"A1*x + B1*y = C1"<<endl
		<<"A2*x + B1*y = C2"<<endl
		<<"Введите коэфиценты A, B и С для двух уравнений";
	int a1,b1,c1,a2,b2,c3;
	cin >>a>>b>>c;
	cout <<"x = "<<(c2-(b2*c1))/((b1*a2)-a1)<<endl		//ax+by=c --> y=(c-ax)/b
		<<"y = "<<(c1-(a1*x))/b1
}