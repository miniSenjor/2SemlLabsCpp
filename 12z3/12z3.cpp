//ИПБ-25 Скворцов С.А. 3.12 3
/*Реализовать программу создания по линейному однонаправленному списку L двух новых списков L1 и L2. В L1 записать элементы списка L, которые не меньше среднего арифметического, а в L2 – элементы списка L, которые меньше среднего арифметического элементов L

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
    list<int> l, l1, l2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l1.emplace_back(x);
    }
    cout << "Введите размер списка ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l2.emplace_back(x);
    }
    l = l1;
    for (int cur : l2)
    {
        l.emplace_back(cur);
        cout << cur << " ";
    }
    
    system("PAUSE");
    return 0;
}