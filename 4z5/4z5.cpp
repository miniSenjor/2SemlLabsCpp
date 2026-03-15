//ИПБ-25 Скворцов С.А. 3.4 5
/*С клавиатуры вводится  строка. Удалить из нее все символы, стоящие в исходной строке на нечетных позициях.*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string s;
    cout << "Введите строку ";
    getline(cin, s);
    for (int i = 1; i < s.length(); i++)
        s.erase(i, 1);
    cout << s;
    system("PAUSE");
    return 0;
}