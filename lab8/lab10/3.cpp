#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите число: ";
	int a;
	cin >>a;
	if (a >= 10 && a <= 99 && a%2 == 0){
		cout <<"Число двузначное четное";
	}else{
		cout <<"Число не двузначное четное";
	}
}