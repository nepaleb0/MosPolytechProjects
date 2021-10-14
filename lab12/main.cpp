#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number = 0;
    while (number < 5){
        number ++;
        if (number == 1){
            
            int a,b;
        	cout <<"Введите день и месяц: ";
        	cin >>a>>b;
        	if (a < 10 || (a > 20 && a < 30) || a > 30){
        		if (a > 20 && a < 30){
        			cout <<"двадцать ";
        			a = a%10;
        		}else if (a > 30){
        			cout <<"тридцать ";
        			a = a%10;
        		}
        		if (a == 1){
        			cout <<"первое ";
        		}else if(a == 2){
        			cout <<"второе ";
        		}else if(a == 3){
        			cout <<"третье ";
        		}else if(a == 4){
        			cout <<"четвертое ";
        		}else if(a == 5){
        			cout <<"пятое ";
        		}else if(a == 6){
        			cout <<"шестое ";
        		}else if(a == 7){
        			cout <<"седьмое ";
        		}else if(a == 8){
        			cout <<"восьмое ";
        		}else if(a == 9){
        			cout <<"девятое ";
        		}
        	}else if(a == 10){
        		cout <<"десятое ";
        	}else if(a > 10 && a < 20){
        		a = a%10;
        		if (a == 1){
        			cout <<"один";
        		}else if(a == 2){
        			cout <<"две";
        		}else if(a == 3){
        			cout <<"три";
        		}else if(a == 4){
        			cout <<"четыр";
        		}else if(a == 5){
        			cout <<"пят";
        		}else if(a == 6){
        			cout <<"шест";
        		}else if(a == 7){
        			cout <<"сем";
        		}else if(a == 8){
        			cout <<"восем";
        		}else if(a == 9){
        			cout <<"девят";
        		}
        		cout <<"надцатое ";
        	}else if (a == 20){
        		cout <<"двадцатое";
        	}else if (a == 30){
        		cout <<"тридцатое";
        	}
        	if (b == 1){
        		cout <<"января";
        	}else if (b == 2){
        		cout <<"февраля";
        	}else if (b == 3){
        		cout <<"марта";
        	}else if (b == 4){
        		cout <<"апреля";
        	}else if (b == 5){
        		cout <<"мая";
        	}else if (b == 6){
        		cout <<"июня";
        	}else if (b == 7){
        		cout <<"июля";
        	}else if (b == 8){
        		cout <<"августа";
        	}else if (b == 9){
        		cout <<"сентября";
        	}else if (b == 10){
        		cout <<"октября";
        	}else if (b == 11){
        		cout <<"ноября";
        	}else if (b == 12){
        		cout <<"декабря";
        	}
        	cout <<"\n\n\n";
        }else if (number == 2){
            
            cout <<"Введите направление(1 север; 2 запад; 3 юг; 4 восток ): ";
        	int a;
        	cin >>a;
        	int r;
        	cout <<"Введите команду (1 налево; -1 направо; 0 продолжить движение): ";
        	cin >>r;
        	a = a + r;
        	if (a == 5){
        		a == 1;
        	}if (a == 0){
        		a == 4;
        	}
        	if (a == 1){
        		cout <<"Север";
        	}else if (a == 4){
        		cout <<"Восток";
        	}else if (a == 3){
        		cout <<"Юг";
        	}else if (a == 2){
        		cout <<"Запад";
        	}
        	cout <<"\n\n\n";
        }else if (number == 3){
            
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
        	cout <<" учебных задания\n\n\n";
        }else if (number == 4){
            
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
        	cout <<"\n\n\n";
        }else if (number == 5){
            
            cout <<"Введите год: ";
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
        				cout <<"обезьяны";
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
    }
}