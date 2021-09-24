#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<"Введите размер файла в байтах: ";
	int a;
	cin >>a;
	cout <<"Размер файла в килобайтах = "<<a/1024;
}