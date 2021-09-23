#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите координаты 3х вершин: ";
	int x1,x2,x3,y1,y2,y3;
	cin >>x1>>y1>>x2>>y2>>x3>>y3;
	double p, s;
	double ab,ac,bc;
	ab = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	ac = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
	bc = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2));
	p = ab+bc+ac;
	cout <<"Периметр равен: "<<p<<endl;
	p = p / 2;
	s = sqrt(p* (p-ab) * (p-ac) * (p-bc));
	cout <<"Площадь равна: "<<s;
}
