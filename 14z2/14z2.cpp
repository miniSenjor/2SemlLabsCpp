//ИПБ-25 Скворцов С.А. 3.14 2
/*Реализовать функцию, которая добавляет в конец очереди Ord1 все элементы другой очереди Ord2.*/

#include <iostream>
#include <queue>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void addToEnd(queue<int> &ord1, queue<int> &ord2)
{
    while (!ord2.empty())
    {
        ord1.push(ord2.front());
        ord2.pop();
    }
}

int main()
{
    //setRusLocale();
    int n;
    cout << "Введите размер очереди ";
    cin >> n;
    queue<int> q1, q2;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q1.push(x);
    }
    cout << "Введите размер очереди ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q2.push(x);
    }
    addToEnd(q1, q2);
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    
    system("PAUSE");
    return 0;
}