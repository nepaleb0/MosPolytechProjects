#include <iostream>
#include <cmath>
using namespace std;
int RingS(int& a, int& b){
	double s1, s2;
	s1 = 3.14*a*a;
	s2 = 3.14*b*b;
	return abs(s1-s2);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int t=0;
	while (t < 3){
		t=t+1;
		cout <<"������� ������� 2� ������: ";
		int a,b;
		cin >>a>>b;
		cout <<"������� ������ ����� ����� ������� ����� "<<RingS(a,b)<<endl;
	}
}
