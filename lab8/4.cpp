#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите двузначное число: ";
	int a,b;
	cin >>a;
	b = a%10;
	b = b*10;
	b = b+(a/10);
	cout <<b;
}