//ИПБ-25 Скворцов С.А. 3.12 6
/*Реализовать программу, удаляющую k последних элементов линейного двунаправленного списка.
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
    while (k>0)
    {
        k--;
        l.erase(--l.end());
        if (l.empty())
        {
            cout << "Список L пуст";
            system("PAUSE");
            return 0;
        }
    }
    for (auto cur = l.begin(); cur != l.end(); cur++)
    {
        cout << *cur << " ";
    }
    system("PAUSE");
    return 0;
}