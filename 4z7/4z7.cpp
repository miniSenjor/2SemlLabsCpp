//ИПБ-25 Скворцов С.А. 3.4 7
/*С клавиатуры вводится строка. Заменить все вхождения подстроки «я» на подстроку «ты».*/

#include <iostream>
#include <string>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'я')
            cout << "ты";
        else
            cout << s[i];
    system("PAUSE");
    return 0;
}