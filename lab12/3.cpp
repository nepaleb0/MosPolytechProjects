#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"������� ����� �� 10 �� 40: ";
	cin >>n;
	if (n < 20){
		n = n % 10;
		if (n == 1){
			cout <<"����";
		}else if (n == 2){
			cout <<"���";
		}else if (n == 3){
			cout <<"���";
		}else if (n == 4){
			cout <<"�����";
		}else if (n == 5){
			cout <<"���";
		}else if (n == 6){
			cout <<"����";
		}else if (n == 7){
			cout <<"���";
		}else if (n == 8){
			cout <<"�����";
		}else if (n == 9){
			cout <<"�����";
		}
		if (n == 0){
			cout <<"������ ";
		}else{
			cout <<"������� ";
		}
	}else if (n >= 20){
		if (n < 30){
			cout <<"�������� ";
		}else if (n >= 30 && n < 40){
			cout <<"�������� ";
		}else if (n == 40){
			cout <<"����� ";
		}
		n = n%10;
		if (n == 1){
			cout <<"����";
		}else if (n == 2){
			cout <<"���";
		}else if (n == 3){
			cout <<"���";
		}else if (n == 4){
			cout <<"������";
		}else if (n == 5){
			cout <<"����";
		}else if (n == 6){
			cout <<"�����";
		}else if (n == 7){
			cout <<"����";
		}else if (n == 8){
			cout <<"������";
		}else if (n == 9){
			cout <<"������";
		}
	}
	cout <<" ������� �������";
}
