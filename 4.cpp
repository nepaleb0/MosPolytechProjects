#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите скорость первого и второго автомобил€: ";
	int v1,v2, s, t;
	cin >>v1>>v2;
	cout <<"¬ведите рассто€ние между автомобил€ми: ";
	cin >>s;
	cout <<"¬ведите врем€: ";
	cin >>t;
	cout <<"„ерез "<<t<<" часов автомобили будут на рассто€нии "<<((v1+v2)*t)+s<<" друг от друга";
}
