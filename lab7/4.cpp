#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите скорость первого и второго автомобиля: ";
	int v1,v2, s, t;
	cin >>v1>>v2;
	cout <<"Введите расстояние между автомобилями: ";
	cin >>s;
	cout <<"Введите время: ";
	cin >>t;
	cout <<"Через "<<t<<" часов автомобили будут на расстоянии "<<((v1+v2)*t)+s<<" друг от друга";
}