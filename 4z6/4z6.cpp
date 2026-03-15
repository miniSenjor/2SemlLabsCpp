//ИПБ-25 Скворцов С.А. 3.4 6
/*С клавиатуры вводится  строка. Определить с какой позиции в этой строке начинается заданная подстрока, или указать, что такой подстроки в строке нет.*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    string s, sub;
    getline(cin, s);
    getline(cin, sub);
    for (int i = 0; i < s.length() - sub.length()+1; i++)
    {
        string s2 = s.substr(i, sub.length());
        if (s2 == sub)
        {
            cout << i;
            return 0;
        }
    }
    cout << "Нет";
    system("PAUSE");
    return 0;
}