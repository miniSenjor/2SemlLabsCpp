//ИПБ-25 Скворцов С.А. 3.11 2
/*Дана последовательность целых чисел,  за которой следует число 0. Вывести на экран все числа, большие среднего арифметического чисел всей последовательности.
Замечание: использовать контейнеры типа vector и/или deque и итераторы*/

#include <iostream>
#include <vector>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    vector<int> v;
    int x;
    cin >> x;
    double av = 0;
    while (x)
    {
        v.push_back(x);
        av += x;
        cin >> x;
    }
    av /= v.size();
    bool haveGreat = false;
    for (int cur : v)
    {
        if (cur > av)
        {
            cout << cur<<" ";
            haveGreat = true;
        }
    }
    if (!haveGreat)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}