//ИПБ-25 Скворцов С.А. 3.14 5
/*Вводится последовательность чисел. Вывести все числа последовательности в обратном порядке.*/

#include <iostream>
#include <stack>
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
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    system("PAUSE");
    return 0;
}