#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� 3 �����: ";
	int a,b,c;
	cin >>a>>b>>c;
	int m = min(abs(b-a), abs(c-a));
	if (m == abs(b-a)){
		cout <<"b "<<m;	
	}else{
		cout <<"c "<<m;
	}
}
