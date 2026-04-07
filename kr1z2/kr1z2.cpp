//ИПБ-25 Скворцов С.А. кр 2
/*Дана строка. Проверить скобочную последовательность с одним типом скобок*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string input;
    cout << "Введите название скобочную последовательность ";
    cin >> input;
    int open = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(')
            open++;
        else
            open--;
        if (open < 0)
            break;
    }
    if (open)
        cout << "Не правильная скобочная последовательность1";
    else
        cout << "Правильная скобочная последовательнсоть2";
    system("PAUSE");
    return 0;
}

