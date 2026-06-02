//ИПБ-25 Скворцов С.А. 3.12 2
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
    double av=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        av += x;
        l.emplace_back(x);
    }
    av /= n;
    for (int cur:l)
    {
        if (cur < av)
            l2.emplace_back(cur);
        else
            l1.emplace_back(cur);
    }
    for (int cur : l1)
        cout << cur << " ";
    cout << endl;
    for (int cur : l2)
        cout << cur << " ";


    system("PAUSE");
    return 0;
}