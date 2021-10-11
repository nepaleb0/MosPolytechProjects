#include <iostream>
using namespace std;
int Quarter(int& x, int& y){
	if (x > 0 && y > 0){
		return 1;
	}else if (x < 0 && y > 0){
		return 2;
	}else if (x < 0 && y < 0){
		return 3;
	}else{
		return 4;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int t=0;
	while (t < 3){
		t=t+1;
		cout <<"Введите координаты: ";
		int x,y;
		cin >>x>>y;
		cout <<"Номер координатной четверти для этих координат: "<<Quarter(x,y)<<endl;
	}
}
