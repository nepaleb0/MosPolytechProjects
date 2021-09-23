#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите A: ";
	int a;
	cin >>a;
	a = a*a; // 2
	a = a*a; // 4
	a = a*a; // 8
	cout <<"A^8 = "<<a;
}
