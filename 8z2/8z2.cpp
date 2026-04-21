//ИПБ-25 Скворцов С.А. 3.8 2
/*Включить в  список упорядоченных по возрастанию целых чисел   произвольное  новое  число  без  нарушения  упорядоченности и  исключите  другое  указанное  число (если такое число имеется в списке)*/

#include <iostream>
#include <forward_list>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    cout << "Вводите числа\n";
    forward_list<int> l;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        l.push_front(cur);
    }
    int addNum, delNum;
    bool isAdd = false, isDel = false;
    cin >> addNum >> delNum;
    auto prev = l.before_begin();
    auto cur = l.begin();
    auto end = l.end();
    if (addNum > *cur)
    {
        l.insert_after(prev, addNum);
        isAdd = true;
    }
    prev++;
    cur++;
    while(cur!=end)
    {
        if (!isAdd && *prev >= addNum && addNum > *cur)
        {
            l.insert_after(cur, addNum);
            isAdd = true;
        }
        if (*cur == delNum)
        {

        }
        prev++;
        cur++;
    }
    system("PAUSE");
    return 0;
}