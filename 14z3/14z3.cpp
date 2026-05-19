//ИПБ-25 Скворцов С.А. 3.14 3
/*Реализовать функцию слияния двух упорядоченных по возрастанию очередей в одну упорядоченную по возрастанию очередь.*/

#include <iostream>
#include <queue>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void merge(queue<int>& q1, queue<int>& q2, queue<int>& out)
{
    while (!q1.empty() && !q2.empty())
    {
        if (q1.front() < q2.front())
        {
            out.push(q1.front());
            q1.pop();
        }
        else
        {
            out.push(q2.front());
            q2.pop();
        }
    }
    while(!q1.empty())
    {
        out.push(q1.front());
        q1.pop();
    }
    while(!q2.empty())
    {
        out.push(q2.front());
        q2.pop();
    }
}

int main()
{
    //setRusLocale();
    int n;
    cout << "Введите размер очереди ";
    cin >> n;
    queue<int> q1, q2, out;
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
    merge(q1, q2, out);
    while (!out.empty())
    {
        cout << out.front() << " ";
        out.pop();
    }

    system("PAUSE");
    return 0;
}