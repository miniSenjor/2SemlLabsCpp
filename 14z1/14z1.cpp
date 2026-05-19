//ИПБ-25 Скворцов С.А. 3.14 1
/*Дана последовательность n целых чисел. Вывести сначала все положительные числа, затем отрицательные.
Замечание: Для решения поставленной задачи определить две очереди.*/

#include <iostream>
#include <queue>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    int n;
    cout << "Введите n ";
    cin >> n;
    queue<int> pos, neg;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            pos.push(x);
        else if (x < 0)
            neg.push(x);
    }
    while (!pos.empty())
    {
        cout << pos.front()<<" ";
        pos.pop();
    }
    while (!neg.empty())
    {
        cout << neg.front()<<" ";
        neg.pop();
    }
    system("PAUSE");
    return 0;
}