#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Russian");
	cout <<"Введите кол-во секунд: ";
	int t;
	cin >>t;
	t = t-((t/60)*60);
	cout <<"С последней минуты прошло "<<t<<" секунд";
}