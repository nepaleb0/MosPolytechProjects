#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout <<"Введите стороны прямоугольника и сторону квадрата: ";
	cin >>a>>b>>c;
	int s = a*b, s1, s2;
	s1 = a/c;
	s2 = b/c;
	s1 = s1*s2;
	cout <<"Максимальное количество квадратов которые поместятся в данный прямоугольник: "<<s1<<endl
		<<"Площадь не занятой части прямоугольника равна: "<<s-(s1*(c*c));
}