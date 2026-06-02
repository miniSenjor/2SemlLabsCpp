//ИПБ-25 Скворцов С.А. 3.12 4
/*Реализовать программу, которая в линейном однонаправленном списке L из каждой группы подряд идущих одинаковых элементов оставляет только одного представителя.
Замечание: использовать контейнеры типа list и/или forward_list*/

#include <iostream>
#include <list>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    int n;
    cout << "Введите размер списка ";
    cin >> n;
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.emplace_back(x);
    }
    for (auto next=l.begin(); next!=l.end();)
    {
        auto cur = next;
        if (++next != l.end() && *cur == *next)
            next = l.erase(next);
    }
    for (auto cur = l.begin(); cur != l.end();cur++)
    {
        cout << *cur << " ";
    }
    system("PAUSE");
    return 0;
}