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
	if (a%2 == 0){
		cout <<"Четное ";
	}else{
		cout <<"Нечетное ";
	}
	if (a >= 100){
		cout <<"трехзначное ";
	}else if (a >= 10){
		cout <<"двузначное ";
	}else{
		cout <<"однозначное ";
	}
	cout <<"число";
}
