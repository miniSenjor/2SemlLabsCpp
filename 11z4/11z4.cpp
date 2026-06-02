//ИПБ-25 Скворцов С.А. 3.11 4
/*Дана последовательность целых чисел,  за которой следует число 0. Вывести числа последовательности, превышающие заданное число k, в обратном порядке.
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
    
    bool haveGreat = false;
    auto cur = v.end();
    do
    {
        cur--;
        if (*cur > k)
        {
            haveGreat = true;
            cout << *cur << " ";
        }
        cout << *cur << " ";
    } while (cur != v.begin());
    
    if (!haveGreat)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}