#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1,x2,y1,y2, a, b;
	cout << "������� ���������� ���� ��������������� ������ ��������������:";
	cin >> x1 >> y1 >> x2 >> y2;
	if (x2 > x1){
		a = x2 - x1;
	}else{
		a = x1 - x2;
	}
	if (y2 > y1){
		b = y2 - y1;
	}else{
		b = y1 - y2;
	}
	cout <<"������� �������������� �����: " << a*b << endl
		<< "�������� �������������� �����: " << 2*(a+b);
}
