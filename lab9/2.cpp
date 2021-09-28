#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	cout <<"Введите номер дня в году: ";
	int t;
	cin >>t;
	if (t%7 == 1){
		cout <<"Понедельник";
	}else if (t%7 == 2){
		cout <<"Вторник";
	}else if (t%7 == 3){
		cout <<"Среда";
	}else if (t%7 == 4){
		cout <<"Четверг";
	}else if (t%7 == 5){
		cout <<"Пятница";
	}else if (t%7 == 6){
		cout <<"Суббота";
	}else if (t%7 == 0){
		cout <<"Воскресенье";
	}
}