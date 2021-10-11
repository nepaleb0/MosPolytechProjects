#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double money = 1000, percent;
	cout <<"Введите процент: ";
	cin >>percent;
	int t=0;
	while (money <= 1100){
		t=t+1;
		money = money + ((money/100)*percent);
	}
	cout <<"Размер вклада привысит 1100 через "<<t<<" месяцев"<<endl
		<<"Итоговый размер вклада равен "<<money;
}
