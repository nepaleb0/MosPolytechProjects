#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите значение угла: ";
	int a;
	cin >>a;
	cout <<"”гол равен "<<((double)a/180)*3.14<<" радиан";
}
