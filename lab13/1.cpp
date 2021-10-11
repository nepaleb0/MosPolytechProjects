#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"Введите цену за 1кг конфет: ";
	cin >>n;
	int t = 0;
	while (t < 10){
		t=t+1;
		cout <<((double)n/10)*t<<endl;
	}
}
