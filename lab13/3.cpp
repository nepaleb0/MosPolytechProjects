#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите число N: ";
	int t = -1,n, sum=0;
	cin >>n;
	while (t < 2*n-1){
		t=t+2;
		sum = sum + t;
		cout <<sum<<endl;
	}
}
