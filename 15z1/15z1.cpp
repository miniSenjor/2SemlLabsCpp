//ИПБ-25 Скворцов С.А. 3.15 1
/*Дано натуральное число n. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами. При этом нельзя использовать строки, списки, массивы и циклы. Разрешена только рекурсия и целочисленная арифметика*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void printNumbers(long long n)
{
    cout << n % 10<<" ";
    if (n / 10)
        printNumbers(n / 10);
}
int main()
{
    //setRusLocale();
    cout << "Введите n ";
    long long n;
    cin >> n;
    printNumbers(n);
    system("PAUSE");
    return 0;
}