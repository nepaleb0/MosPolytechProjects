#include <iostream>
using namespace std;
int PowerA3(int& a, int& b){
	b = a*a*a;
	return b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int t=0;
	while (t < 5){
		t=t+1;
		cout<<"¬ведите число: ";
		int a,b;
		cin >>a;
		b = PowerA3(a,b);
		cout <<b<<endl;
	}
}
