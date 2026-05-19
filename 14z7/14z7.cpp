//ИПБ-25 Скворцов С.А. 3.14 7
/*Вводится n чисел, из которых первые k чисел записываются в первую очередь, остальные во вторую; обе очереди выводятся на экран.
Затем заданное число ищется сначала в первой затем во второй, выводится номер очереди  если число в ней найдено.*/

#include <iostream>
#include <queue>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

bool searchInQ(queue<int>& q, int x, int num)
{
    while (!q.empty())
    {
        if (q.front() == x)
        {
            cout << num<<" ";
            return true;
        }
        q.pop();
    }
    return false;
}

int main()
{
    //setRusLocale();
    int n, k;
    cout << "Введите n ";
    cin >> n;
    cout << "Введите k ";
    cin >> k;
    queue<int> q1, q2;
    for (int i = 0; i < k; i++)
    {
        int c;
        cin >> c;
        q1.push(c);
    }
    for (int i = k; i < n; i++)
    {
        int c;
        cin >> c;
        q2.push(c);
    }

    int x;
    cout << "Введите x ";
    cin >> x;
    if (!(searchInQ(q1, x, 1) || searchInQ(q2, x, 2)))
        cout << -1;
    system("PAUSE");
    return 0;
}