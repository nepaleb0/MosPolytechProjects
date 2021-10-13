#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите число N(кол-во элементов массива): ";
    int n;
    cin >>n;
    int m[n], t=-1, f = -1;
    while (t < n-1){
        t=t+1;
        f=f+2;
        m[t] = f;
    }
    t=-1;
    while (t < n-1){
        t=t+1;
        cout <<m[t]<<"\t";
    }
}