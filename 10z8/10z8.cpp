//ИПБ-25 Скворцов С.А. 3.10 8
/*Напишите набор перегруженных функций sameText(), которые принимают на вход две строки, и возвращают true, если строки совпадают без учета регистра букв, и false  в противном случае. Функции должны уметь сравнивать строки (string, string), (string, C-строка), (C-строка, C-строка), (C-строка, string).*/

#include <iostream>
#include <string>
#include <windows.h>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

string toLower(const string& s)
{
    string res = s;
    for (char& c : res)
        c = tolower(c);
    return res;
}

bool sameText(const string& a, const string& b)
{
    return toLower(a) == toLower(b);
}

bool sameText(const string& a, const char* b)
{
    return sameText(a, string(b));
}

bool sameText(const char* a, const char* b)
{
    return sameText(string(a), string(b));
}

bool sameText(const char* a, const string& b)
{
    return sameText(string(a), b);
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    //setRusLocale();
    string s1, s2;
    char s3[100], s4[100];
    getline(cin, s1);
    getline(cin, s2);
    cin >> s3;
    cin >> s4;

    cout << sameText(s1, s2) << " "
        << sameText(s1, s3) << " "
        << sameText(s3, s4) << " "
        << sameText(s3, s1) << endl;

    system("PAUSE");
    return 0;
}