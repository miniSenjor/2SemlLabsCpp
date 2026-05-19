//ИПБ-25 Скворцов С.А. 3.13 7
/*Задана строка, состоящая из латинских букв, пробелов и знаков препинания. Вывести на экран строчные латинские буквы, которые встречаются в тексте только один раз.*/

#include <iostream>
#include <map>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    cout << "Введите предложение ";
    string s;
    getline(cin, s);
    map<char, int> map;
    for (char c : s)
        if(c>96 && c<123)
            map[c] += 1;
    
    bool hasFirstChar = false;
    for (auto v : map)
    {
        if (v.second == 1)
        {
            cout << v.first;
            hasFirstChar = true;
        }
    }
    if (!hasFirstChar)
        cout << "Таких нет";
    system("PAUSE");
    return 0;
}