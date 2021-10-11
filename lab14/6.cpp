#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Числа Фибоначчи"<<endl<<"Введите число N: ";
	int n;
	cin >>n;
	int a=0, b=1, sum = 0, t =0;
	while (sum != n){
		t=t+1;
		sum = a + b;
		a = b;
		b = sum;
	}
	cout <<t;
}
