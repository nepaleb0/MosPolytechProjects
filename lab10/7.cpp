#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите стороный треугольника: ";
	int a,b,c;
	cin >>a>>b>>c;
	if (a + b > c && b + c > a && a + c > b ){
		cout <<"Треугольник может существовать";
	}else{
		cout <<"Треугольник не может существовать";
	}
}