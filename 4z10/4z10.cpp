//ИПБ-25 Скворцов С.А. 3.4 10
/*С клавиатуры вводится строка. Заменить все буквы английского алфавита на соответствующие байтовые коды.*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    string s, output = "";
    cout << "Введите строку ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            output += to_string(static_cast<int>(s[i]));
        else
            output += s[i];
    }
    cout << output;
    system("PAUSE");
    return 0;
}