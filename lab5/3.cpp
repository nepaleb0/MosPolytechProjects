#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout <<"¬ведите 3 точки: ";
	cin >>a>>b>>c;
	int ac, bc;
	if (c > a){
		ac = c - a;
		bc = b - c;
	}else{
		ac = a - c;
		bc = c - b;
	}
	cout << "AC равно: "<<ac<<endl
		<<"BC равно: "<<bc;
}
