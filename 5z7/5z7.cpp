//ИПБ-25 Скворцов С.А. 3.5 7
/*Дано n групп чисел, в каждую из которых входит 10 целых чисел. Найти порядковый номер группы чисел с наибольшей разностью между максимальным и минимальным числами в группе. Алгоритмы поиска максимального и минимального элементов оформить как функции.*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int Max(int a[])
{
    int max = a[0];
    for (int i = 1; i < 10; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int Min(int a[])
{
    int min = a[0];
    for (int i = 1; i < 10; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

int main()
{
    setRusLocale();
    int n, ans = 0, diffAns = 0, max, min;
    cout << "Введите n ";
    cin >> n;
    int ar[10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
            cin >> ar[j];
        max = Max(ar);
        min = Min(ar);
        if (max - min > diffAns)
        {
            diffAns = max - min;
            ans = i + 1;
        }
    }
    cout << ans;
    system("PAUSE");
    return 0;
}