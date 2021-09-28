#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите числа A, B и С: ";
	int a,b,c;
	cin >>a>>b>>c;
	if (a < b && b < c){
		cout <<"Высказывание истино";
	}else{
		cout <<"Высказывание ложно";
	}
}