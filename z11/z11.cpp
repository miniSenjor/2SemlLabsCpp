//ИПБ-25 Скворцов С.А. 3.1 11
/*Проверить, совпадает ли в заданной последовательности символов количество открывающихся и закрывающихся круглых скобок*/


#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    int countOpen = 0, countClose = 0;
    char curChar;
    curChar = cin.get();
    while (curChar != '.')
    {
        if (curChar == '(')
            countOpen++;
        else if  (curChar == ')')
            countClose++;
        curChar = cin.get();
    }
    if (countClose == countOpen)
        cout << "Совпадает";
    else
        cout << "Не совпадает";
    system("PAUSE");
    return 0;
}