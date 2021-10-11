#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите числа A и B: ";
	int a,b;
	cin >>a>>b;
	int t=0;
	a=a-1;
	while (a < b){
		a = a+1;
		t = 0;
		while (t<a){
			t=t+1;
			cout <<a;
		}
		cout<<endl;
	}
}
