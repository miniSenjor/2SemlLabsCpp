//ИПБ-25 Скворцов С.А. 3.11 3
/*Дана последовательность целых чисел, за которой следует число 0, вывести все числа в обратном порядке.
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
    auto cur = v.end();
    do
    {
        cur--;
        cout << *cur << " ";
    }
    while (cur != v.begin());
    system("PAUSE");
    return 0;
}