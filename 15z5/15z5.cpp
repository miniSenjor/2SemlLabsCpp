//ИПБ-25 Скворцов С.А. 3.15 5
/*Даны целые числа m и n, причем m<n. С помощью рекурсивной функции вывести все целые числа из промежутка [m, n] в порядке убывания.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void printNToM(int m, int n)
{
    cout << n << " ";
    if (n > m)
        printNToM(m, n - 1);
}
int main()
{
    //setRusLocale();
    int n,m;
    cout << "Введите m ";
    cin >> m;
    cout << "Введите n ";
    cin >> n;
    printNToM(m, n);
    system("PAUSE");
    return 0;
}