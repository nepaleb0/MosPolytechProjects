#include <iostream>
using namespace std;
int PowerA3(int& a, int& b){
	b = a*a*a;
	return b;
}
int Sign(int &x){
	if (x < 0){
		return -1;
	}else if (x == 0){
		return 0;
	}else if (x > 0){
		return 1;
	}
}
int RingS(int& a, int& b){
	double s1, s2;
	s1 = 3.14*a*a;
	s2 = 3.14*b*b;
	return abs(s1-s2);
}
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
int Fact2(int &n)
{
	int sum=1;
	if (n % 2 != 0){
		int t=-1;
		while (t != n){
			t=t+2;
			sum = sum * t;
		}
		return sum;
	}else{
		int t=0;
		while (t != n){
			t=t+2;
			sum = sum * t;
		}
	}
	return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int number = -1;
    while (number != 0){
        cout <<"Введите номер задания (0 = остановить): ";
        cin >>number;
        if (number == 1){
            //
            int t=0;
        	while (t < 5){
        		t=t+1;
        		cout<<"Введите число: ";
        		int a,b;
        		cin >>a;
        		b = PowerA3(a,b);
        		cout <<b<<endl;
        	}
        	cout <<"\n\n\n";
        }else if (number == 2){
            //
            cout <<"Введите числа A и B: ";
        	int a, b;
        	cin >>a>>b;
        	cout <<Sign(a)+Sign(b)<<"\n\n\n";
        }else if (number == 3){
            //
        	int t=0;
        	while (t < 3){
        		t=t+1;
        		cout <<"Введите радиусы 2х окружностей: ";
        		int a,b;
        		cin >>a>>b;
        		cout <<"Площадь кольца заключенного между двумя окружностей "<<RingS(a,b)<<"\n";
        	}
        	cout <<"\n\n";
        }else if (number == 4){
            //
            int t=0;
        	while (t < 3){
        		t=t+1;
        		cout <<"Введите координаты: ";
        		int x,y;
        		cin >>x>>y;
        		cout <<"номер четверти: "<<Quarter(x,y)<<endl;
        	}
        	cout <<"\n\n";
        }else if (number == 5){
            //
            cout <<"N!!"<<endl<<"Введите N: ";
        	int n;
        	cin >>n;
        	cout <<Fact2(n);
        }
    }
}