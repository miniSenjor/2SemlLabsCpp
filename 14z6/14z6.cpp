//ИПБ-25 Скворцов С.А. 3.14 6
/*Вводится последовательность чисел. Вывести сначала все четные числа, а затем нечетные в обратном порядке.*/

#include <iostream>
#include <stack>
#include <queue>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    int n;
    cout << "Введите длинну последовательности ";
    cin >> n;
    int x;
    stack<int> s;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2)
            s.push(x);
        else
            q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    system("PAUSE");
    return 0;
}