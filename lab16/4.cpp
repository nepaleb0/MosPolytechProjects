#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите кол-во элементов массива: ";
    int n;
    cin >>n;
    cout <<"Заполните массив: ";
    int t=-1, m[n];
    while (t < n-1){
        t=t+1;
        cin >>m[t];
    }
    
    t=-1;
    while (t < (n-1)/2){
       t=t+1;
        cout <<m[t]<<"\t"<<m[n-1-t]<<"\t";
    }
}