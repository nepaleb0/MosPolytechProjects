#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"A*x+B=0"<<endl<<"Введите коэфиценты A и B: ";
	double a, b;
	cin >>a>>b;
	if (a == 0){
		"Уравнение не имеет решения";
	}else{
		cout <<"x = "<<(b*-1)/a;
	}
}