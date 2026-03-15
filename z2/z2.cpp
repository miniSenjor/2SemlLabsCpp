//ИПБ-25 Скворцов С.А. 3.1 2
/*Дана последовательность символов, оканчивающаяся точкой. Найти:
максимальную длину подпоследовательности из повторяющейся заданной литеры в этой последовательности*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    cout << "Вводите искомый символ\n";
    char curChar, searchChar;
    cin >> searchChar;
    cout << "Вводите символы\n";
    int maxCount = 0, count = 0;
    cin >> curChar;
    while (curChar != '.')
    {
        if (curChar == searchChar)
            count++;
        else  if(count > maxCount)
        {
            maxCount = count;
            count = 0;
        }
        cin >> curChar;
    }
    if (count>maxCount)
        maxCount = count;

    cout << "Макс длина =" << maxCount;
    system("PAUSE");
    return 0;
}