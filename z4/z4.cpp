//ИПБ-25 Скворцов С.А. 3.1 4
/*Дана последовательность символов, оканчивающаяся точкой. Определить:
входит ли в эту последовательность цепочка литер "фл"*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
	setRusLocale();
    char curChar, prevChar;
    cout << "Вводите символы\n";
    bool isContainsFL = false;
    prevChar = cin.get();
    curChar = cin.get();
    while (curChar != '.')
    {
        if (curChar == 'л' && prevChar == 'ф')
            isContainsFL = true;
        prevChar = curChar;
        curChar = cin.get();
    }
    if (isContainsFL)
        cout << "Да";
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}