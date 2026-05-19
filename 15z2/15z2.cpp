//ИПБ-25 Скворцов С.А. 3.15 2
/*С помощью рекурсивной функции найти сумму чисел от 1 до n.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int sumToN(int n)
{
    if (n == 1)
        return 1;
    if (n<1)
        return n + sumToN(n + 1);
    else
        return n + sumToN(n - 1);
}
int main()
{
    //setRusLocale();
    cout << "Введите n ";
    int n;
    cin >> n;
    cout<<sumToN(n);
    system("PAUSE");
    return 0;
}