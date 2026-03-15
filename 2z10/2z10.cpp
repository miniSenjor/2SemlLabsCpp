//ИПБ-25 Скворцов С.А. 3.2 10
/*В последовательности символов, оканчивающихся точкой, удалить все вхождения заданного символа, стоящего перед пробелом.*/

#include <iostream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    char search;
    cin >> search;
    char chars[100];
    char cur = cin.get();
    int i = 0;
    while (cur != '.')
    {
        chars[i] = cur;
        i++;
        cur = cin.get();
    }
    int iNew = 0;
    int iOld = 0;
    while (iOld < i)
    {
        if (chars[iOld] == search && iOld + 1 < i && chars[iOld + 1] == ' ')
            iOld++;
        chars[iNew] = chars[iOld];
        iOld++;
        iNew++;
    }

    
    for (int j = 0; j < iNew; j++)
        cout << chars[j];
    system("PAUSE");
    return 0;
}