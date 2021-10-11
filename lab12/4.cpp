#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"Введите число 100-999: ";
	cin >>n;
	if (n >= 100 && n < 200){
		cout <<"сто ";
	}else if (n >= 200 && n < 300){
		cout <<"двести ";
	}else if (n >= 300 && n < 400){
		cout <<"триста ";
	}else if (n >= 400 && n < 500){
		cout <<"четыреста ";
	}else if (n >= 500 && n < 600){
		cout <<"пятьсот ";
	}else if (n >= 600 && n < 700){
		cout <<"шестьсот ";
	}else if (n >= 700 && n < 800){
		cout <<"cемьсот ";
	}else if (n >= 800 && n < 900){
		cout <<"восемьсот ";
	}else if (n >= 900 && n <= 999){
		cout <<"девятьсот ";
	}
	
	n = n%100;
	if (n >= 10 && n < 20){
		n = n % 10;
		if (n == 1){
			cout <<"один";
		}else if (n == 2){
			cout <<"две";
		}else if (n == 3){
			cout <<"три";
		}else if (n == 4){
			cout <<"четыр";
		}else if (n == 5){
			cout <<"пят";
		}else if (n == 6){
			cout <<"шест";
		}else if (n == 7){
			cout <<"сем";
		}else if (n == 8){
			cout <<"восем";
		}else if (n == 9){
			cout <<"девят";
		}
		if (n == 0){
			cout <<"десять ";
		}else{
			cout <<"надцать ";
		}
	}else{
		if (n >= 20 && n < 30){
			cout <<"двадцать ";
		}else if (n >= 30 && n < 40){
			cout <<"тридцать ";
		}else if (n >= 40 && n < 50){
			cout <<"сорок ";
		}else if (n >= 50 && n < 60){
			cout <<"пятьдесят ";
		}else if (n >= 60 && n < 70){
			cout <<"шестьдесят ";
		}else if (n >= 70 && n < 80){
			cout <<"семдесят ";
		}else if (n >= 80 && n < 90){
			cout <<"восемдесят ";
		}else if (n >= 90){
			cout <<"девяносто ";
		}
		n=n%10;
		if (n == 1){
			cout <<"один";
		}else if (n == 2){
			cout <<"два";
		}else if (n == 3){
			cout <<"три";
		}else if (n == 4){
			cout <<"четыре";
		}else if (n == 5){
			cout <<"пять";
		}else if (n == 6){
			cout <<"шесть";
		}else if (n == 7){
			cout <<"семь";
		}else if (n == 8){
			cout <<"восемь";
		}else if (n == 9){
			cout <<"девять";
		}
	}
}
