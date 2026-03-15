//ИПБ-25 Скворцов С.А. 3.1 3
/*Дана последовательность символов, оканчивающаяся точкой. Найти:
максимальную длину подпоследовательности одинаковых литер в этой последовательности*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    char curChar, prevChar;
    cout << "Вводите символы\n";
    int maxCount = 1, count = 1;
    prevChar = cin.get();
    curChar = cin.get();
    while (curChar != '.')
    {
        if (curChar == prevChar)
            count++;
        else
        {
            if (count > maxCount)
                maxCount = count;
            count = 1;
        }
        prevChar = curChar;
        curChar = cin.get();
    }
    if (count > maxCount)
        maxCount = count;

    cout << "Макс длина повторов = " << maxCount;
    system("PAUSE");
    return 0;
}
