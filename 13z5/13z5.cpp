//ИПБ-25 Скворцов С.А. 3.13 5
/*С клавиатуры вводится последовательность целых чисел, за которой следует число 0. Найти число, встречающееся в последовательности чаще всего, и количество его вхождений. Если таких чисел несколько, выведите любое из них.*/

#include <iostream>
#include <map>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    int x;
    cout << "Введите последовательность ";
    cin >> x;
    map<int, int> map;
    while (x)
    {
        map[x] += 1;
        cin >> x;
    }
    int maxCount = 0, val;
    for (auto v : map)
    {
        if (maxCount < v.second)
        {
            maxCount = v.second;
            val = v.first;
        }
    }
    cout << val << " " << maxCount;
    system("PAUSE");
    return 0;
}