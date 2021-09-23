#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"y = 4*(x-3)^6 - 7*(x-3)^3 + 2"<<endl<<"¬ведите X: ";
	int x;
	cin >>x;
	cout <<"y = "<<(4*pow(x-3,6))-(7*pow(x-3,3))+2;
}
