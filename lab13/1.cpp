#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"������� ���� �� 1�� ������: ";
	cin >>n;
	int t = 0;
	while (t < 10){
		t=t+1;
		cout <<((double)n/10)*t<<endl;
	}
}
