#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Алгоритм Евклида"<<endl<<"Введите числа A и B: ";
	int a,b;
	cin >>a>>b;
	if (a < b){
		swap(a,b);
	}
	while (a%b != 0){
		int t = a%b;
		a = b;
		b = t;
	}
	cout <<"НОД равен "<<b;
}
