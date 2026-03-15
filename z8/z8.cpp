//ИПБ-25 Скворцов С.А. 3.1 8
/*Дано предложение, оканчивающееся точкой. Найти 

первое слово, начинающееся с заданной буквы*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    char curChar, prevChar, searchChar;
    cout << "Вводите искомую букву\n";
    cin >> searchChar;
    cout << "Вводите символы\n";
    bool isWordEnd = false;
    bool isWordStart = false;
    cin >> prevChar;
    if (prevChar == searchChar)
    {
        isWordStart = true;
        cout << prevChar;
    }
    curChar = cin.get();
    while (curChar != '.')
    {
        if (!isWordEnd)
            if ((prevChar== ' ' || prevChar==34) && curChar == searchChar)
            {
                isWordStart = true;
                cout << curChar;
            }
            else if (isWordStart)
                if (curChar == ' ' || curChar == ',' || curChar == 34)
                {
                    isWordEnd = true;
                    isWordStart = false;
                }
                else
                    cout << curChar;

        prevChar = curChar;
        curChar = cin.get();
    }
    system("PAUSE");
    return 0;
}