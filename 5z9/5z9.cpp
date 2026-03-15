//ИПБ-25 Скворцов С.А. 3.5 9
/*Определить, является ли заданный целочисленный массив, упорядоченным по возрастанию, упорядоченным по убыванию, не упорядоченным или массивом равных значений. Оформить алгоритм анализа данных в массиве в виде функции.*/

#include <iostream>
#include <string>
#include <windows.h>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

string WhatArray(int a[], int size)
{
    bool isEqual = true, isInc = true, isDec = true;
    for (int i = 1; i < size; i++)
    {
        if (a[i] > a[i - 1])
        {
            isDec = false;
            isEqual = false;
        }
        else if (a[i] < a[i - 1])
        {
            isInc = false;
            isEqual = false;
        }
        else
        {
            isDec = false;
            isInc = false;
        }
    }
    if (isEqual)
        return "Равные";
    else if (isInc)
        return "Возрастание";
    else if (isDec)
        return "Убывание";
    else
        return "Не упорядочено";
}

int main()
{
    //setRusLocale();

    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    int n;
    cout << "Введите n ";
    cin >> n;
    int ar[100];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << WhatArray(ar, n);
    system("PAUSE");
    return 0;
}