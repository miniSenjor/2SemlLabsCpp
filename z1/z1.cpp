//ИПБ-25 Скворцов С.А. 3.1 1
/*Дана последовательность символов, оканчивающаяся точкой. Найти:
сколько раз заданная литера входит в эту последовательность*/

#include <iostream>
#include <windows.h>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    cout << "Вводите искомый символ\n";
    char curChar, serchChar;
    cin >> serchChar;
    cout << "Вводите символы\n";
    int count = 0;
    cin >> curChar;
    while (curChar!='.')
    {
        if (curChar == serchChar)
            count++;
        cin >> curChar;
    }
    cout << "Кол-во символов " << serchChar <<"=" << count;
    system("PAUSE");
    return 0;
}