//ИПБ-25 Скворцов С.А. 3.11 7
/*Задан текст из n строк. Вывести строки, длина которых превосходит длину первой строки.
Замечание: использовать контейнеры типа vector и/или deque и итераторы*/

#include <iostream>
#include <vector>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    vector<string> v;
    int n;
    cout << "Введите n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }

    for (string s : v)
    {
        if (s.size() > (*v.begin()).size())
            cout << s << endl;
    }

    system("PAUSE");
    return 0;
}