#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	int x1,x2,y1,y2;
	cout <<"������� ���������� �����: ";
	cin >>x1>>y1>>x2>>y2;
	cout <<"���������� �����: "<<sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
}
