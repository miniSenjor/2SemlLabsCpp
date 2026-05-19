//ИПБ-25 Скворцов С.А. 3.13 4
/*С клавиатуры вводится последовательность различных по величине целых чисел, за которой следует число 0. Затем вводится число k. Вывести числа последовательности, превышающие k, в порядке убывания.*/

#include <iostream>
#include <set>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    int x;
    cout << "Введите последовательность ";
    cin >> x;
    set<int> set;
    while (x)
    {
        set.insert(x);
        cin >> x;
    }
    cout << "Введите к ";
    int k;
    cin >> k;
    bool hasGreater = false;
    for (auto c = set.rbegin(); c != set.rend(); c++)
    {
        if (*c > k)
        {
            cout << *c << " ";
            hasGreater = true;
        }
        else
            break;
    }
    if (!hasGreater)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}