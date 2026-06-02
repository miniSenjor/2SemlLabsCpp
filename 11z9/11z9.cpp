//ИПБ-25 Скворцов С.А. 3.11 9
/*Дана последовательность целых чисел,  за которой следует число 0. Вывести в обратном порядке все числа, которые не меньше первого числа и не больше последнего.
Замечание: использовать контейнеры типа vector и/или deque и итераторы*/

#include <iostream>
#include <vector>
#include "rus_io.h"
#include "conio2.h"
using namespace std;


int main()
{
    setRusLocale();
    vector<int> v;
    int x;
    cin >> x;
    while (x)
    {
        v.push_back(x);
        cin >> x;
    }
    
    bool haveAvNum = false;
    auto cur = v.end();
    do
    {
        cur--;
        if (*cur >= *v.begin() && *cur <= *(--v.end()))
        {
            cout << *cur << " ";
            haveAvNum = true;
        }
    } while (cur != v.begin());
    if (!haveAvNum)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}