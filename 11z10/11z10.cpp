//ИПБ-25 Скворцов С.А. 3.11 10
/*Дана последовательность n целых чисел. Вывести на экран последовательность, в которой сначала идут все нечетные числа заданной последовательности в обратном порядке, а затем все четные в прямом.
Замечание: использовать контейнеры типа deque и итераторы*/

#include <iostream>
#include <deque>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    deque<int> v;
    int n;
    cout << "Введите n ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    auto cur = v.end();
    do
    {
        cur--;
        if (*cur%2)
            cout << *cur << " ";
    } while (cur != v.begin());
    for (int x : v)
    {
        if (!(x % 2))
            cout << x << " ";
    }

    system("PAUSE");
    return 0;
}