//ИПБ-25 Скворцов С.А. задача 3.1 6
/*Дано предложение, оканчивающееся точкой. Найти 

количество слов в предложении*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    char curChar, prevChar;
    cout << "Вводите символы\n";
    int count = 1;
    cin >> prevChar;
    curChar = cin.get();
    while (curChar != '.')
    {
        if (curChar == ' ' && (prevChar==34 || prevChar==44 || (prevChar > 65 && prevChar <90) || (prevChar > 97 && prevChar<122) || (prevChar>-64 && prevChar<-1)))
            count++;
        prevChar = curChar;
        curChar = cin.get();
    }
    if (prevChar == ' ' || prevChar == '"')
        count--;
    cout << count;
    system("PAUSE");
    return 0;
}