#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"¬ведите год: ";
	int n;
	cin >>n;
	cout <<"год ";
	int t = 0, f = -1, f1 = 0;
	while (t < n){
		t = t + 12;
		f = f + 1;
		if (f == 5){
			f = 0;
			f1 = f1 + 1;
			if (f1 == 11){
				f1 = 0;
			}
		}
		if (t >= n){
			if (f == 0){
				cout <<"зеленой ";
			}else if (f == 1){
				cout <<"красной ";
			}else if (f == 2){
				cout <<"желтой ";
			}else if (f == 3){
				cout <<"белой ";
			}else if (f == 4){
				cout <<"черной ";
			}
			if (f1 == 0){
				cout << "крысы";
			}else if (f1 == 1){
				cout <<"коровы";
			}else if (f1 == 2){
				cout <<"тигра";
			}else if (f1 == 3){
				cout <<"зайца";
			}else if (f1 == 4){
				cout <<"дракона";
			}else if (f1 == 5){
				cout <<"змеи";
			}else if (f1 == 6){
				cout <<"лошади";
			}else if (f1 == 7){
				cout <<"овцы";
			}else if (f1 == 8){
				cout <<"обезь€ны";
			}else if (f1 == 9){
				cout <<"курицы";
			}else if (f1 == 10){
				cout <<"собаки";
			}else if (f1 == 11){
				cout <<"свиньи";
			}
		}
	}
}
