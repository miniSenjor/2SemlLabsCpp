//ИПБ-25 Скворцов С.А. 3.12 10
/*Реализовать подпрограмму, которая вставляет в линейный двунаправленный список L новый элемент F перед каждым вхождением элемента Е.
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
    cout << "Введите F и E\n";
    int f, e;
    cin >> f>>e;
    for (auto cur = l.begin(); cur != l.end(); cur++)
    {
        if (*cur == e)
        {
            l.insert(cur, f);
        }
    }
    for (auto cur = l.begin(); cur != l.end(); cur++)
    {
        cout << *cur << " ";
    }
    system("PAUSE");
    return 0;
}