#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"A^n"<<endl<<"¬ведите числа A и N: ";
	int a,n;
	cin >>a>>n;
	int t=-1, sum=0;
	while (t < n){
		t=t+1;
		sum = sum + pow(a,t);
	}
	cout <<sum;
}
