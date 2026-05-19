//ИПБ-25 Скворцов С.А. 3.13 1
/*Определить, сколько гласных букв встречается в заданной русскоязычной строке.*/

#include <iostream>
#include <set>
//#include "rus_io.h"
//#include "conio2.h"
#include <string>
using namespace std;


int main()
{
    //setRusLocale();
    string s;
    cout << "Введите предложение ";
    getline(cin, s);
    set<char> set { 'а', 'е', 'ё', 'и', 'о', 'у', 'э', 'ю', 'я', 'ы' };
    int count = 0;
    for (char c : s)
    {
        c = tolower(c);
        if (set.count(c))
            count++;
    }
    cout << count;
    system("PAUSE");
    return 0;
}