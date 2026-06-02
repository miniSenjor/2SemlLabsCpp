//ИПБ-25 Скворцов С.А. 3.13 1
/*Определить, сколько гласных букв встречается в заданной русскоязычной строке.*/

#include <iostream>
#include <set>
//#include "rus_io.h"
//#include "conio2.h"
#include <string>
#include <windows.h>
using namespace std;


int main()
{
    //setRusLocale();
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    string s;
    cout << "Введите предложение ";
    getline(cin, s);
    set<char> set { 'а', 'А', 'е', 'Е', 'ё', 'Ё', 'и', 'И', 'о', 'О', 'у', 'У', 'э', 'Э', 'ю', 'Ю', 'я', 'Я', 'ы', 'Ы' };
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