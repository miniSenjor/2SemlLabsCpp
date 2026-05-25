//ИПБ-25 Скворцов С.А. 3.12 1
/*Составить программу, которая удаляет из линейного однонаправленного списка L все отрицательные элементы.

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
    for (auto cur=l.begin(); cur!=l.end();)
    {
        if (*cur < 0)
            cur = l.erase(cur);
        else
            cout << *cur++ << " ";
    }

    system("PAUSE");
    return 0;
}