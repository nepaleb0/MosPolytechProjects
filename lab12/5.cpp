#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� ���: ";
	int n;
	cin >>n;
	cout <<"��� ";
	int t = 0, f = -1, f1 = 0;
	while (t < n){
		t = t + 12;
		f = f + 1;
		if (f == 5){
			f = 0;
			f1 = f1 + 1;
			if (f1 == 11){
				f1 = 0;
			}
		}
		if (t >= n){
			if (f == 0){
				cout <<"������� ";
			}else if (f == 1){
				cout <<"������� ";
			}else if (f == 2){
				cout <<"������ ";
			}else if (f == 3){
				cout <<"����� ";
			}else if (f == 4){
				cout <<"������ ";
			}
			if (f1 == 0){
				cout << "�����";
			}else if (f1 == 1){
				cout <<"������";
			}else if (f1 == 2){
				cout <<"�����";
			}else if (f1 == 3){
				cout <<"�����";
			}else if (f1 == 4){
				cout <<"�������";
			}else if (f1 == 5){
				cout <<"����";
			}else if (f1 == 6){
				cout <<"������";
			}else if (f1 == 7){
				cout <<"����";
			}else if (f1 == 8){
				cout <<"��������";
			}else if (f1 == 9){
				cout <<"������";
			}else if (f1 == 10){
				cout <<"������";
			}else if (f1 == 11){
				cout <<"������";
			}
		}
	}
}
