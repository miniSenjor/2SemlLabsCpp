//ИПБ-25 Скворцов С.А. 3.4 3
/*С клавиатуры вводится 2 строки, состоящие из слов русского алфавита. Вывести строку, последняя буква которой стоит в алфавите раньше.*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    string f, s;
    cout << "Введите строку ";
    getline(cin, f);
    cout << "Введите строку ";
    getline(cin, s);
    char charF = f[f.size() - 1];
    char charS = s[s.size() - 1];
    if (charF != -88 && charS != - 88)
    {
        if (charF > charS)
            cout << s << "\n";
        else
            cout << f<< "\n";
    }
    else 
    {
        if (charF == -88 && charS > -58 || charS == -88 && charF < -58)
            cout << f;
        else
            cout << s;
    }
    system("PAUSE");
    return 0;
}