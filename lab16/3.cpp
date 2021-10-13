#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Введите кол-во элементов: ";
    int n,a,b;
    cin >>n;
    cout <<"Введите первые 2 элемента: ";
    cin >>a>>b;
    int m[n];
    m[0] = a;
    m[1] = b;
    int t=1;
    while (t < n-1){
        t=t+1;
        int sum=0, d=-1;
        while (d < t-1){
            d=d+1;
            sum = sum + m[d];
        }
        m[t] = sum;
    }
    t=-1;
    while (t < n-1){
        t=t+1;
        cout <<m[t]<<"\t";
    }
}