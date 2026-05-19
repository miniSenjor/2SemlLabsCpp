//ИПБ-25 Скворцов С.А. 3.15 8
/*Определить, является ли вводимая строка палиндромом, используя рекурсивную функцию, распознающую палиндром.*/

#include <iostream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

bool isPalindrom(string &s, int pos)
{
    if (pos == s.size() / 2)
        return true;
    if (s[pos] == s[s.size() - pos - 1])
        return isPalindrom(s, pos + 1);
    else
        return false;
}
int main()
{
    //setRusLocale();
    string s;
    cout << "Введите строку ";
    getline(cin, s);
    if (isPalindrom(s, 0))
        cout << "Да";
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}