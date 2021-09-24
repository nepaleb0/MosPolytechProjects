#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите Хкг конфет: ";
	int x,a;
	cin >>x;
	cout <<"Введите цену за "<<x<<"кг конфет: ";
	cin >>a;
	cout <<"1кг конфет стоит "<<a/x<<endl;
	cout <<"Введите Yкг конфет: ";
	int y;
	cin >>y;
	cout <<y<<"кг конфет стоит: "<< (a/x)*y;
}
