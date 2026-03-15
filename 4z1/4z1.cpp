//ИПБ-25 Скворцов С.А. 3.4 1
/*С клавиатуры вводится строка, в которой ровно 2 раза встречается буква "ф". Вывести подстроку символов, размещенную между этими буквами.*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    string input;
    getline(cin, input);
    bool isF = false;
    cout << "Подстрока:";
    for (char c : input)
    {
        if (c == 'ф' && isF) break;
        if (isF) cout << c;
        isF = isF || c == 'ф';
    }
    cout << '.';
    system("PAUSE");
    return 0;
}