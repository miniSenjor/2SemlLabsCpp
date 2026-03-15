//ИПБ-25 Скворцов С.А. 3.4 4
/*С клавиатуры вводится 2 строки, состоящие из слов русского алфавита. Вывести более длинную из этих строк, указав количество символов в ней.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string f, s;
    cout << "Введите строку ";
    getline(cin, f);
    cout << "Введите строку ";
    getline(cin, s);
    if (f.length() > s.length())
    {
        cout << f.length() << "\n";
        cout << f;
    }
    else 
    {
        cout << s.length() << "\n";
        cout << s;
    }
    system("PAUSE");
    return 0;
}