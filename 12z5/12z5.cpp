//ИПБ-25 Скворцов С.А. 3.12 5
/*Реализовать программу, которая в линейном однонаправленном списке L переносит первый элемент в конец списка
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
    int x = *l.begin();
    l.emplace_back(x);
    l.erase(l.begin());
    for (auto cur = l.begin(); cur != l.end(); cur++)
    {
        cout << *cur << " ";
    }
    system("PAUSE");
    return 0;
}