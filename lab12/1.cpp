#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout <<"������� ���� � �����: ";
	cin >>a>>b;
	if (a < 10 || (a > 20 && a < 30) || a > 30){
		if (a > 20 && a < 30){
			cout <<"�������� ";
			a = a%10;
		}else if (a > 30){
			cout <<"�������� ";
			a = a%10;
		}
		if (a == 1){
			cout <<"������ ";
		}else if(a == 2){
			cout <<"������ ";
		}else if(a == 3){
			cout <<"������ ";
		}else if(a == 4){
			cout <<"��������� ";
		}else if(a == 5){
			cout <<"����� ";
		}else if(a == 6){
			cout <<"������ ";
		}else if(a == 7){
			cout <<"������� ";
		}else if(a == 8){
			cout <<"������� ";
		}else if(a == 9){
			cout <<"������� ";
		}
	}else if(a == 10){
		cout <<"������� ";
	}else if(a > 10 && a < 20){
		a = a%10;
		if (a == 1){
			cout <<"����";
		}else if(a == 2){
			cout <<"���";
		}else if(a == 3){
			cout <<"���";
		}else if(a == 4){
			cout <<"�����";
		}else if(a == 5){
			cout <<"���";
		}else if(a == 6){
			cout <<"����";
		}else if(a == 7){
			cout <<"���";
		}else if(a == 8){
			cout <<"�����";
		}else if(a == 9){
			cout <<"�����";
		}
		cout <<"�������� ";
	}else if (a == 20){
		cout <<"���������";
	}else if (a == 30){
		cout <<"���������";
	}
	if (b == 1){
		cout <<"������";
	}else if (b == 2){
		cout <<"�������";
	}else if (b == 3){
		cout <<"�����";
	}else if (b == 4){
		cout <<"������";
	}else if (b == 5){
		cout <<"���";
	}else if (b == 6){
		cout <<"����";
	}else if (b == 7){
		cout <<"����";
	}else if (b == 8){
		cout <<"�������";
	}else if (b == 9){
		cout <<"��������";
	}else if (b == 10){
		cout <<"�������";
	}else if (b == 11){
		cout <<"������";
	}else if (b == 12){
		cout <<"�������";
	}
}
