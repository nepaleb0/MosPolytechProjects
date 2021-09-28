#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите стороны треугольника: ";
	int a,b,c;
	cin >>a>>b>>c;
	if ((a*a) + (b*b) == c*c || (a*a) + (c*c) == b*b || (c*c) + (b*b) == a*a){
		cout <<"Треугольник прямоугольный";
	}else{
		cout <<"Треугольник не прямоугольный";
	}
}
