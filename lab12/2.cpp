#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� �����������(1 �����; 2 �����; 3 ��; 4 ������ ): ";
	int a;
	cin >>a;
	int r;
	cout <<"������� ������� (1 ������; -1 �������; 0 ���������� ��������): ";
	cin >>r;
	a = a + r;
	if (a == 5){
		a == 1;
	}if (a == 0){
		a == 4;
	}
	if (a == 1){
		cout <<"�����";
	}else if (a == 4){
		cout <<"������";
	}else if (a == 3){
		cout <<"��";
	}else if (a == 2){
		cout <<"�����";
	}
//	cout <<r;
//		�
//	�		�
//		�
	
}
