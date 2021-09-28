#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите номер года: ";
	int year;
	cin >> year;
	if (year%10 == 0 && (year/10)%10 == 0 ){
		cout <<year/100<< " столетие";
	}else{
		cout<<(year/100) + 1<<" столетие";
	}
}