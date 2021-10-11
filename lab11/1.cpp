#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите 2 числа: ";
	int a,b;
	cin >>a>>b;
	if (a != b){
		a = max(a,b);
		b = a;
	}else{
		a = 0;
		b = 0;
	}
	cout <<"a = "<<a<<endl<<
		<<"b = "<<b;
}
