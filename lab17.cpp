#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number = 100;
    while (number != 0){
        //
        cout <<"Введите номер задания (0 = остановить): ";
        cin >>number;
        if (number == 1){
            cout <<"Задание №1: Среднее арифметическое в массиве от K до L\n\n"
            <<"Введите размер массива и заполните его: ";
            int n;
            cin >>n;
            int t=-1, m[n];
            while (t < n-1){
                t=t+1;
                cin >>m[t];
            }
            cout <<"Введите K и L: ";
            double k, l, f=0;
            cin >>k>>l;
            t=k-1;
            k = 0;
            while (t < l-2){
                t=t+1;
                f=f+1;
                k = k + m[t];
            }
            cout <<"Среднее арифметическое равно: "<<k/f<<"\n\n\n";
        }else if (number == 2){
            //
            cout <<"Задание №2: проверка на арифметичскую прогрессию\n\n"
                <<"Введите размер массива и заполните его: ";
            int n;
            cin >>n;
            int t=-1, m[n];
            while (t < n-1){
                t=t+1;
                cin >>m[n];
            }
            t=-1;
            int f=1;
            while (t < n-3){
                t=t+1;
                if (m[t]-m[t+1] == m[t+1]-m[t+2]){
                    f=0;
                }
            }
            cout <<f<<endl;
        }
    }
}
