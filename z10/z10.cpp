//ИПБ-25 Скворцов С.А. 3.1 10
/*Дана последовательность символов, после которой идет знак "*" – признак конца последовательности.
Определить, является ли эта последовательность символов правильной записью целого числа (возможно со знаком)*/

#include <iostream>
#include <windows.h>

using namespace std;

bool IsNumber(char c)
{
    for (int i = 48; i < 58; i++)
        if (c == i)
            return true;
    
    return false;
}

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    char curChar, prevChar;
    bool isNum = true;
    curChar = cin.get();
    isNum = isNum && (curChar == 43 || curChar == 45 || IsNumber(curChar));
    //if (curChar != 43 && curChar != 45 && !IsNumber(curChar))
    //    isNum = false;
    prevChar = curChar;
    curChar = cin.get();
    while (curChar != '*')
    {
        isNum = isNum && IsNumber(curChar);
        prevChar = curChar;
        curChar = cin.get();
    }
    if (isNum && prevChar!='+' && prevChar!='-')
        cout << "Число";
    else
        cout << "Не число";
    system("PAUSE");
    return 0;
}