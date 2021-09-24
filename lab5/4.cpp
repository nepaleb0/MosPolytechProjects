#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1,x2,y1,y2, a, b;
	cout << "Введите координаты двух противоположных вершин прямоугольника:";
	cin >> x1 >> y1 >> x2 >> y2;
	if (x2 > x1){
		a = x2 - x1;
	}else{
		a = x1 - x2;
	}
	if (y2 > y1){
		b = y2 - y1;
	}else{
		b = y1 - y2;
	}
	cout <<"Площадь прямоугольника равна: " << a*b << endl
		<< "Периметр прямоугольника равен: " << 2*(a+b);
}