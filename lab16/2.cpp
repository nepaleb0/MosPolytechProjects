#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите кол-во элементов массива: ";
    int n,a,d;
    cin >>n;
    cout <<"Введите первый член геометрической последовательности: ";
    cin >>a;
    cout <<"Введите знаменатель геометрической прогресси: ";
    cin >>d;
    int m[n], t=-1;
    while (t < n-1){
        t=t+1;
        m[t] = a * pow(d,t);
    }
    t=-1;
    while (t < n-1){
        t=t+1;
        cout <<m[t]<<"\t";
    }
}