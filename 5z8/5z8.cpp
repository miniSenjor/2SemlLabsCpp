//ИПБ-25 Скворцов С.А. 3.5 8
/*Определить, является ли строка палиндромом, описав булеву функцию идентификации палиндрома.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

bool IsPalindrom(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    setRusLocale();
    string s;
    cout << "Введите строку ";
    getline(cin, s);
    if (IsPalindrom(s))
        cout << "Да";
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}