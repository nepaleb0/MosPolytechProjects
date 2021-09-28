#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"A > 2 è B <= 3"<<endl
        <<"Введите числа A и B: ";
    int a,b;
    cin >>a>>b;
    if (a > 2 && b <= 3){
        cout <<"Высказывание истино";
    }else{
        cout <<"Высказывание ложно";
    }
}