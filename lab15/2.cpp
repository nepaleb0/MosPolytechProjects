#include <iostream>
using namespace std;
int Sign(int &x){
	if (x < 0){
		return -1;
	}else if (x == 0){
		return 0;
	}else if (x > 0){
		return 1;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� ����� A � B: ";
	int a, b;
	cin >>a>>b;
	cout <<Sign(a)+Sign(b);
}
