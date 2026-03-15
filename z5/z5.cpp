//ИПБ-25 Скворцов С.А. 3-1 задача 5
/*Дана последовательность символов, оканчивающаяся точкой. Определить:
сколько раз в эту последовательность входит цепочка литер "ил"*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    char curChar, prevChar;
    cout << "Вводите символы\n";
    int count = 0;
    cin >> prevChar;
    cin >> curChar;
    while (curChar != '.')
    {
        if (curChar == 'л' && prevChar == 'ф')
            count++;
        prevChar = curChar;
        cin >> curChar;
    }
    cout << "Кол-во ил = " << count;
    system("PAUSE");
    return 0;
}