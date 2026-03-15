//ИПБ-25 Скворцов С.А. 3.5 5
/*Написать программу нахождения наибольшего общего делителя двух целых чисел, оформив алгоритм нахождения НОД в виде функции.*/

#include <iostream>
using namespace std;

int nod(int a, int b)
{
    if (a < b)
    {
        int tem = a;
        a = b;
        b = tem;
    }
    if (!b)
        return a;
    while (a % b != 0)
    {
        int tem = a % b;
        a = b;
        b = tem;
    }
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nod(a, b);
    system("PAUSE");
    return 0;
}

