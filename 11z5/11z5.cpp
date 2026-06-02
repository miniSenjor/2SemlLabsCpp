//ИПБ-25 Скворцов С.А. 3.11 5
/*Дана последовательность целых чисел,  за которой следует число 0. Удалить из нее все числа, кратные заданному числу k.
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
    int x, k;
    cout << "Введите k ";
    cin >> k;
    cin >> x;
    while (x)
    {
        v.push_back(x);
        cin >> x;
    }

    for (auto cur = v.begin(); cur != v.end();)
    {
        if (!k || *cur % k)
        {
            cout << *cur << " ";
            cur++;
        }
        else
            cur = v.erase(cur);
    }

    system("PAUSE");
    return 0;
}