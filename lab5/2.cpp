#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"������� 3 �����: ";
	int a, b, c;
	cin >>a>>b>>c;
	int ac, bc;
	ac = c-a;
	bc = c-b;
	cout <<"AC �����: "<<ac<<endl
		<<"BC �����: "<<bc;
}
