//ИПБ-25 Скворцов С.А. кр 1
/*Дана непустая последовательность ненулевых целых чисел, за которой следует ноль (признак конца последовательности). Определить длину последней монотонно возрастающей подпоследовательности чисел этой последовательности*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    cout << "Введите последовательность ";
    int cur, prev, curLen = 1, lastLen = 1;
    cin >> prev;
    cin >> cur;
    while (cur)
    {
        if (cur > prev)
            curLen++;
        else
        {
            if(curLen>1)
                lastLen = curLen;
            curLen = 1;
        }
        prev = cur;
        cin >> cur;
    }
    if (curLen>1)
        lastLen = curLen;
    cout << "Длинна последней возрастающей последовательности = " << lastLen;

    
    system("PAUSE");
    return 0;
}

