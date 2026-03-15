//ИПБ-25 Скворцов С.А. 3.4 9
/*С клавиатуры вводится строка. Найти количество знаков препинания в этой строке.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string s, sub;
    int count = 0;
    cout << "Введите строку ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i]=='.' || s[i]==',' || s[i] == '!' || s[i] == '?' || s[i] == ':' || s[i] == ';')
            count++;
    cout << "Кол-во знаков " << count;
    system("PAUSE");
    return 0;
}