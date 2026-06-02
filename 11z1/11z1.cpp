//ИПБ-25 Скворцов С.А. 3.11 1
/*Дана последовательность целых чисел,  за которой следует число 0, Вывести на экран подпоследовательность из чисел, расположенных после первого отрицательного числа.
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
    bool haveNeg = false;
    while (x)
    {
        if (haveNeg)
            v.push_back(x);
        haveNeg = haveNeg || x<0;
        cin >> x;
    }
    for (int cur : v)
        cout << cur<<" ";
    if (v.size() == 0)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}