//ИПБ-25 Скворцов С.А. 3.12 8
/*Реализовать программу, осуществляющую циклический сдвиг элементов линейного двунаправленного списка на k позиций вправо.
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
    int k;
    cin >> k;
    k %= l.size();
    while (k)
    {
        k--;
        int x = *(--l.end());
        l.emplace_front(x);
        l.erase(--l.end());
    }
    for (auto cur = l.begin(); cur != l.end(); cur++)
    {
        cout << *cur << " ";
    }
    system("PAUSE");
    return 0;
}