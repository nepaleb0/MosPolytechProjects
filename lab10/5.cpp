#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите число: ";
	int a;
	cin >>a;
	if(a%10 == a/1000 && (a/10)%10 == (a/100)%10 ){
		cout <<"Данное число читаетс¤ одинаково слева направо и справа налево";
	}else{
		cout <<"Данное число не читаетс¤ одинаково слева направо и справа налево";
	}
}
