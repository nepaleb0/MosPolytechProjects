#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"������� ����� 100-999: ";
	cin >>n;
	if (n >= 100 && n < 200){
		cout <<"��� ";
	}else if (n >= 200 && n < 300){
		cout <<"������ ";
	}else if (n >= 300 && n < 400){
		cout <<"������ ";
	}else if (n >= 400 && n < 500){
		cout <<"��������� ";
	}else if (n >= 500 && n < 600){
		cout <<"������� ";
	}else if (n >= 600 && n < 700){
		cout <<"�������� ";
	}else if (n >= 700 && n < 800){
		cout <<"c������ ";
	}else if (n >= 800 && n < 900){
		cout <<"��������� ";
	}else if (n >= 900 && n <= 999){
		cout <<"��������� ";
	}
	
	n = n%100;
	if (n >= 10 && n < 20){
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
	}else{
		if (n >= 20 && n < 30){
			cout <<"�������� ";
		}else if (n >= 30 && n < 40){
			cout <<"�������� ";
		}else if (n >= 40 && n < 50){
			cout <<"����� ";
		}else if (n >= 50 && n < 60){
			cout <<"��������� ";
		}else if (n >= 60 && n < 70){
			cout <<"���������� ";
		}else if (n >= 70 && n < 80){
			cout <<"�������� ";
		}else if (n >= 80 && n < 90){
			cout <<"���������� ";
		}else if (n >= 90){
			cout <<"��������� ";
		}
		n=n%10;
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
}
