#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number = -1;
    while (number != 0){
        cout <<"Введите номер задания (0 = остановить): ";
        cin >>number;
        if (number == 1){
            cout <<"Задание №1: удалить из массива все соседние одиноковые элементы оставив первые вхождения\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int a[n];
            for (int i = 0; i < n; i++){
                cin >>a[i];
            }
            
            int t=-1, s=0;
            while (t < n-1-s){
                t++;
                if (a[t] == a[t+1]){
                    s=s+1;
                    int d=t;
                    while (d < n-1){
                        d++;
                        a[d] = a[d+1];
                    }
                }
            }
            
            for (int i = 0; i < n-s; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 2){
            cout <<"Задание №2: удалить элементы встерчающие ровно 2 раза, вывести размер массива и содержимое\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int a[n];
            for (int i = 0; i < n; i++){
                cin >>a[i];
            }
            
            
            int s = 0;
            int t = 0;
            int num = 0;
            while (t < n-1-s){
                t=t+1;
                int k = -1;
                int j = 0;
                while (k < n-1-s){
                    k=k+1;
                    if (a[k] == a[t]){
                        j = j + 1;
                    }
                }
                
                if (j == 2){
                    num = a[t];
                    k = -1;
                    while (k < n-1-s){
                        k=k+1;
                        if (a[k] == num){
                            int d=k-1;
                            s=s+1;
                            while (d < n-1-s){
                                d=d+1;
                                a[d] = a[d+1];
                            }
                            k=-1;
                        }
                    }
                }
            }
            
            cout <<n-s<<"элементов в массиве\n";
            for (int i = 0; i < n-s; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 3){
            cout <<"Задание №3: вставить нулевое значение перед минимальным и после максимального элемента\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            n=n+2;
            int a[n];
            for (int i = 1; i < n-1; i++){
                cin >>a[i];
            }
            
            int maxelem = a[1], minelem = a[1];
            int maxid = 1, minid = 1;
            int t = 0;
            while (t < n-1){
                t=t+1;
                if (a[t] > maxelem){
                    maxelem = a[t];
                    maxid = t;
                }
                if (a[t] < minelem){
                    minelem = a[t];
                    minid = t;
                }
            }
            
            cout <<maxid<<" "<<maxelem<<" "<<minid<<" "<<minelem<<endl;
            
            t = -1;
            while (t < minid-1){
                t=t+1;
                a[t] = a[t+1];
            }
            a[minid-1] = 0;
            
            
            t = n;
            while (t > maxid+1){
                t=t-1;
                a[t] = a[t-1];
            }
            a[maxid+1] = 0;
            
            
            for (int i = 0; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 4){
            cout <<"Задание №4: после каждого отрицательного элемента вставить нулевой элемент\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            n=n*2;
            int a[n];
            for (int i = n/2; i < n; i ++){
                cin >>a[i];
            }
            
            int s = 0;
            int t = n/2-1;
            while (t < n-1){
                t=t+1;
                if (a[t] < 0){
                    int d=-1;
                    while (d < t){
                        d=d+1;
                        a[d] = a[d+1];
                    }
                    a[t] = 0;
                    s=s+1;
                }
            }
            
            for (int i = n/2-s; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 5){
            cout <<"Задание №5: перед каждым положительным элементом вставить нулевой\nВведите кол-во элементво и заполните массив:";
            int n;
            cin >>n;
            n=n*2;
            int a[n];
            for (int i = n/2; i < n; i ++){
                cin >>a[i];
            }
            
            int s = 0;
            int t = n/2-1;
            while (t < n-1){
                t=t+1;
                if (a[t] > 0){
                    int d=-1;
                    while (d < t-1){
                        d=d+1;
                        a[d] = a[d+1];
                    }
                    a[t-1] = 0;
                    s=s+1;
                }
            }
            
            for (int i = n/2-s; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }
    }
}
