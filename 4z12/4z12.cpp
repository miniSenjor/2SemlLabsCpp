//ИПБ-25 Скворцов С.А. 3.4 12
/*С клавиатуры вводится строка символов. Заменить в строке каждую точку троеточием.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string s;
    cout << "Введите строку ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            s.insert(i, "..");
            i += 2;
        }
    }
    cout << s;
    system("PAUSE");
    return 0;
}