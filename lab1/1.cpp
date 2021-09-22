#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Введите стороны прямоугольника:\n";
	cin >> a >> b;
	int s, p;
	s = a * b;
	p = 2 * (a + b);
	cout << "\nПлощадь равна:" << s << "\nПериметр равен:" << p;
}