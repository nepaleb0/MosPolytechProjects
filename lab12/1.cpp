#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout <<"¬ведите день и мес€ц: ";
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
			cout <<"п€тое ";
		}else if(a == 6){
			cout <<"шестое ";
		}else if(a == 7){
			cout <<"седьмое ";
		}else if(a == 8){
			cout <<"восьмое ";
		}else if(a == 9){
			cout <<"дев€тое ";
		}
	}else if(a == 10){
		cout <<"дес€тое ";
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
			cout <<"п€т";
		}else if(a == 6){
			cout <<"шест";
		}else if(a == 7){
			cout <<"сем";
		}else if(a == 8){
			cout <<"восем";
		}else if(a == 9){
			cout <<"дев€т";
		}
		cout <<"надцатое ";
	}else if (a == 20){
		cout <<"двадцатое";
	}else if (a == 30){
		cout <<"тридцатое";
	}
	if (b == 1){
		cout <<"€нвар€";
	}else if (b == 2){
		cout <<"феврал€";
	}else if (b == 3){
		cout <<"марта";
	}else if (b == 4){
		cout <<"апрел€";
	}else if (b == 5){
		cout <<"ма€";
	}else if (b == 6){
		cout <<"июн€";
	}else if (b == 7){
		cout <<"июл€";
	}else if (b == 8){
		cout <<"августа";
	}else if (b == 9){
		cout <<"сент€бр€";
	}else if (b == 10){
		cout <<"окт€бр€";
	}else if (b == 11){
		cout <<"но€бр€";
	}else if (b == 12){
		cout <<"декабр€";
	}
}
