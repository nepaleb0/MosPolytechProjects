#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"Введите число от 10 до 40: ";
	cin >>n;
	if (n < 20){
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
	}else if (n >= 20){
		if (n < 30){
			cout <<"двадцать ";
		}else if (n >= 30 && n < 40){
			cout <<"тридцать ";
		}else if (n == 40){
			cout <<"сорок ";
		}
		n = n%10;
		if (n == 1){
			cout <<"одно";
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
	cout <<" учебных задания";
}
