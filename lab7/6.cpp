#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "A1*x + B1*y = C1" << endl;
	cout << "A2*x + B1*y = C2" << endl;
	cout << "Введите коэфиценты A, B и С для двух уравнений ";
	float a1, a2, b1, b2, c1, c2, c, x, y;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	c = a1 * b2 - b1 * a2;
	x = c1 * b2 - b1 * c2;
	y = a1 * c2 - a2 * c1;
	if (c == 0){
	    return 0;
	}else{
    	x = x/c;
    	y = y/c;
    	cout << "x = " << x;
    	cout << "\ny = " << y;

	}	
}
