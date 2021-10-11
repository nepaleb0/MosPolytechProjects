#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"1 - A + A^2 - A^3 + ... A^n"<<endl<<"¬ведите числа A и N: ";
	int a,n;
	cin >>a>>n;
	int t = 0, sum = 1, f=1;
	while (t < n){
		t = t+1;
		f = f * a * -1;
		sum = sum + f; 
	}
	cout <<sum;
}
