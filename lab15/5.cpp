#include <iostream>
using namespace std;
int Fact2(int &n)
{
	int sum=1;
	if (n % 2 != 0){
		int t=-1;
		while (t != n){
			t=t+2;
			sum = sum * t;
		}
		return sum;
	}else{
		int t=0;
		while (t != n){
			t=t+2;
			sum = sum * t;
		}
	}
	return sum;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"N!!"<<endl<<"¬ведите число N: ";
	int n;
	cin >>n;
	cout <<Fact2(n);
}
