//ИПБ-25 Скворцов С.А. 3.12 3
/*Реализовать программу, которая добавляет в конец  линейного однонаправленного списка L1 все элементы L2.
Замечание: использовать контейнеры типа list и/или forward_list*/

#include <iostream>
#include <forward_list>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    int n;
    cout << "Введите размер списка ";
    cin >> n;
    forward_list<int> l1, l2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l1.emplace_front(x);
    }
    cout << "Введите размер списка ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l2.emplace_front(x);
    }
    l2.reverse();
    for (int cur : l2)
        l1.emplace_front(cur);
    
    l1.reverse();
    for (int cur : l1)
        cout << cur << " ";
    
    system("PAUSE");
    return 0;
}