#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите 3 точки: ";
	int a, b, c;
	cin >>a>>b>>c;
	int ac, bc;
	ac = c-a;
	bc = c-b;
	cout <<"AC равно: "<<ac<<endl
		<<"BC равно: "<<bc;
}
