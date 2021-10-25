#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number =-1;
    while (number != 0){
        cout <<"Введите номер задания (0 - остановить): ";
        cin >>number;
        if (number == 1){
            cout <<"Поменять местами элементы массивов\nВведите кол-во элементов и заполните массив A: ";
            int n;
            cin >>n;
            int a[n], b[n];
            for (int i=0; i < n; i++){
                cin >>a[i];
            }
            cout <<"\nЗаполните массив B: ";
            for (int i=0; i < n; i++){
                cin >>b[i];
            }
            
            for(int i=0; i < n; i++){
                swap(a[i], b[i]);
            }
            
            cout <<"Массив A: ";
            for (int i=0; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\nМассив B: ";
            for (int i=0; i < n; i++){
                cout <<b[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 2){
            cout <<"Сформировать новый массив\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            double a[n], b[n];
            for (int i=0; i < n; i++){
                cin >>a[i];
            }
            
            int j=0;
            for (int i=1; i-1 < n; i++){
                j=j+a[i-1];
                b[i-1] = j/i;
            }
            
            for (int i=0; i < n; i++){
                cout <<b[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 3){
            cout <<"Увеличение четных чисел массива\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int a[n];
            for (int i=0; i < n; i++){
                cin >>a[i];
            }
            
            int f=1, j=0;
            for (int i=n-1; f == 1 && i > -1; i--){
                if (a[i] % 2 != 0){
                    f=0;
                    j=a[i];
                }
            }
            cout <<j<<endl;
            if (f==0){
                for (int i=0; i < n; i++){
                    if (a[i]%2==0){
                        a[i] = a[i] + j;
                    }
                }
            }else{
                
            }
            for (int i=0; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 4){
            cout <<"Обнуление элементов\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int a[n], t=-1;
            while (t < n-1){
                t=t+1;
                cin >>a[t];
            }
            
            int maxelem = a[0], minelem = a[0], mink = 0, maxk = 0;
            t=-1;
            while (t < n-1){
                t=t+1;
                if (maxelem < a[t]){
                    maxelem = a[t];
                    maxk = t;
                }
                if (minelem > a[t]){
                    minelem = a[t];
                    mink = t;
                }
            }
            
            while (mink < maxk-1){
                mink++;
                a[mink] = 0;
            }
            
            for (int i=0; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }else if (number == 5){
            cout <<"Сортировка массива\nВведите кол-во элементов и заполните массив: ";
            int n;
            cin >>n;
            int a[n];
            for (int i=0; i < n; i++){
                cin >>a[i];
            }
            
            int j = a[0], t=0;
            while (a[t] <= j ){
                t=t+1;
            }
            int d=-1;
            while (d < t-1){
                d=d+1;
                a[d] = a[d+1];
            }
            a[t-1] = j;
            
            for (int i=0; i < n; i++){
                cout <<a[i]<<"\t";
            }
            cout <<"\n\n\n";
        }
    }
}