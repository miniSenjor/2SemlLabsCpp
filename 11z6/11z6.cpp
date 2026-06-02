//ИПБ-25 Скворцов С.А. 3.11 6
/*Дана последовательность целых чисел,  за которой следует число 0. Удалить из нее все числа, расположенные между первым минимальным и последним максимальным значениями.
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
    while (x)
    {
        v.push_back(x);
        cin >> x;
    }

    auto pMax = v.begin(), pMin = v.begin();
    for (auto cur = v.begin(); cur != v.end();cur++)
    {
        if (*cur < *pMin)
            pMin = cur;
        if (*cur >= *pMax)
            pMax = cur;
    }
    if (pMin!=pMax)
        v.erase(++pMin, pMax);
    bool isBeginErase = false, isEndErase = false;
    for (auto cur = v.begin(); cur != v.end();cur++)
    {
        cout << *cur<<" ";
    }

    system("PAUSE");
    return 0;
}