//ИПБ-25 Скворцов С.А. 3.4 8
/*С клавиатуры вводится строка. Найти количество вхождений заданной подстроки в эту строку.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string s, sub;
    int count = 0;
    cout << "Введите строку ";
    getline(cin, s);
    cout << "Введите подстроку ";
    getline(cin, sub);
    for (int i = 0; i < s.length(); i++)
        if (s.substr(i, sub.length()) == sub)
        {
            count++;
            i += sub.length() - 1;
        }
    cout << "Кол-во подстрок " << count;
    system("PAUSE");
    return 0;
}