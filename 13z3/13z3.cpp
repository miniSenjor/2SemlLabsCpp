//ИПБ-25 Скворцов С.А. 3.13 3
/*Определить, сколько цифр и сколько знаков арифметических операций встречается в заданной строке-формуле.*/

#include <iostream>
#include <set>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    string s;
    cout << "Введите предложение ";
    cin >> s;
    set<char> setSign{'+', '-', '*', '/', '=', '^', '%'};
    int countSign = 0, countNum = 0;
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
            countNum++;
        else if (setSign.count(c))
            countSign++;
    }
    cout << countNum << " " << countSign;
    system("PAUSE");
    return 0;
}