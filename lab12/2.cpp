#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите направление(1 север; 2 запад; 3 юг; 4 восток ): ";
	int a;
	cin >>a;
	int r;
	cout <<"Введите команду (1 налево; -1 направо; 0 продолжить движение): ";
	cin >>r;
	a = a + r;
	if (a == 5){
		a == 1;
	}if (a == 0){
		a == 4;
	}
	if (a == 1){
		cout <<"Север";
	}else if (a == 4){
		cout <<"Восток";
	}else if (a == 3){
		cout <<"Юг";
	}else if (a == 2){
		cout <<"Запад";
	}
//	cout <<r;
//		С
//	З		В
//		Ю
	
}
