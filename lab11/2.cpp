#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите 3 числа: ";
	int a,b,c;
	cin >>a>>b>>c;
	int m;
	if (a > b && a > c){
		if (b > c){
			m = a + b;
		}else{
			m = a + c;
		}
	}else if (b > a && b > c){
		if (a > c){
			m = b + a;
		}else{
			m = b + c;
		}
	}else if (c > a && c > b){
		if (a > b){
			m = c + a;
		}else{
			m = c + b;
		}
	}
	cout <<"—умма двух максимальных чисел будет: "<<m;
}
