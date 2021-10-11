#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"1+2+...+K"<<endl<<"¬ведите число N: ";
	int n;
	cin >>n;
	int sum = 0, t=0;
	while(sum < n){
		t=t+1;
		sum = sum + t;
	}
	cout<<t;
}
