#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите число: ";
	int a;
	cin >>a;
	if (a == 0){
		cout <<"Число нулевое";
	}
	if(a > 0){
		cout <<"Положительное";
	}else{
		cout <<"Отрицательное";
	}
	if(a%2 == 0){
		cout <<" четное";
	}else{
		cout <<" нечетное";
	}
	cout <<" число";
}
