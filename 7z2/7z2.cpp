//ИПБ-25 Скворцов С.А. 3.7 2
/*Создать файл inout.txt, в который поместить строку, вводимую с клавиатуры. Заменить в этом файле символы, начиная с третьего на заданную подстроку тоже вводимую с клавиатуры. Результат вывести на консоль.
Использовать двунаправленный поток.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    fstream file("inout.txt", ios::in | ios::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }

    cout << "Введите строку ";
    string str, subStr;
    getline(cin, str);
    cout << "Введите подстроку ";
    getline(cin, subStr);
    file << str;

    file.seekp(2);
    file << subStr;

    file.seekg(0);
    getline(file, str);
    cout << str;
    file.close();

    system("PAUSE");
    return 0;
}