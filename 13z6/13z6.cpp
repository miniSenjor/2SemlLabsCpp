//ИПБ-25 Скворцов С.А. 3.13 6
/*Задана строка, содержащая предложение. Вывести на экран символ (символы), который встречается в предложении чаще всего и количество повторов.*/

#include <iostream>
#include <map>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    string s;
    cout << "Введите предложение ";
    getline(cin, s);
    map<char, int> map;
    for (char c : s)
        map[c] += 1;
    int maxCount = 0;
    char ch;
    for (auto v : map)
    {
        if (maxCount < v.second)
        {
            maxCount = v.second;
            ch = v.first;
        }
    }
    if (ch == ' ')
        cout << "ПРОБЕЛ " << maxCount;
    else
        cout << ch << " " << maxCount;
    system("PAUSE");
    return 0;
}