#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� �������� ������� � ������� ����������: ";
	int v1,v2, s, t;
	cin >>v1>>v2;
	cout <<"������� ���������� ����� ������������: ";
	cin >>s;
	cout <<"������� �����: ";
	cin >>t;
	cout <<"����� "<<t<<" ����� ���������� ����� �� ���������� "<<((v1+v2)*t)+s<<" ���� �� �����";
}
