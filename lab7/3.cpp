#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ��� ������: ";
	int x,a;
	cin >>x;
	cout <<"������� ���� �� "<<x<<"�� ������: ";
	cin >>a;
	cout <<"1�� ������ ����� "<<a/x<<endl;
	cout <<"������� Y�� ������: ";
	int y;
	cin >>y;
	cout <<y<<"�� ������ �����: "<< (a/x)*y;
}
