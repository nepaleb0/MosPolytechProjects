#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� ����� A � B: ";
	int a,b;
	cin >>a>>b;
	while (a >= b){
		a=a-b;
	}
	cout <<a;
}
