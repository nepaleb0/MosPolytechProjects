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
        }else if (number == 3){
            //
            cout <<"Задание №3: найти минимальный элемент из элементов массива с четными номерами\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int m[n];
            for (int i=0; i < n; i++){
                cin >>m[i];
            }
            int minnumber = m[1];
            for (int i = 1; i < n; i=i+2){
                if (m[i] < minnumber){
                    minnumber = m[i];
                }
            }
            cout <<minnumber<<"\n\n\n";
        }else if (number == 4){
            //
            cout <<"Задание №4: найти локальный максимум в массиве\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int m[n];
            for (int i = 0; i < n; i++){
                cin >>m[i];
            }
            
            int maxelem = m[n-1], f=0, t=n-1;
            while (t > 1 && f == 0){
                t--;
                if (m[t] > m[t+1] && m[t] > m[t-1]){
                    maxelem = m[t];
                    f=1;
                }
            }
            if (m[0] > m[1] && m[0] > maxelem){
                cout <<m[0]<<"\n\n\n";
            }else {
                cout <<maxelem<<"\n\n\n";
            }
        }else if (number == 5){
            //
            cout <<"Задание №5: найти номера 2х одинаковых элементов\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int m[n];
            for (int i = 0; i < n; i++){
                cin >>m[i];
            }
            int t=-1, f=1;
            while (f == 1 && t < n-1){
                t=t+1;
                int d=t;
                while (d < n-1){
                    d=d+1;
                    if (m[t] == m[d]){
                        cout <<t+1<<" "<<d+1<<"\n\n\n";
                    }
                }
            }
        }
    }
}