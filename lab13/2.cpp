#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"¬ведите число N: ";
	cin >>n;
	int t=0;
	double pr = 1, a = 1.0;
	while (t < n){
		t=t+1;
		a = a + 0.1;
		pr = pr * a;
	}
	cout <<pr;
}
