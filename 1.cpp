#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� �������� ����: ";
	int a;
	cin >>a;
	cout <<"���� ����� "<<((double)a/180)*3.14<<" ������";
}
