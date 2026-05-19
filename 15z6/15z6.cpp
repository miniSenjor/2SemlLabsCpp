//ИПБ-25 Скворцов С.А. 3.15 6
/*Дано натуральное число n. С помощью рекурсивной функции выведите все числа от 1 до n в порядке возрастания.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void print(int n)
{
    if (n == 1)
        cout << "1 ";
    if (n < 1)
    {
        cout << n << " ";
        print(n + 1);
    }
    if (n > 1)
    {
        print(n - 1);
        cout << n << " ";
    }
}
int main()
{
    //setRusLocale();
    cout << "Введите n ";
    int n;
    cin >> n;
    print(n);
    system("PAUSE");
    return 0;
}