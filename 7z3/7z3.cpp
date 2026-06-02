//ИПБ-25 Скворцов С.А. 3.7 3
/*Создать файл inout.txt, в который поместить строку, вводимую с клавиатуры. Каждый второй символ, начиная с первого, заменить в файле символом '*'. Результат вывести на консоль.
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
    string str;
    getline(cin, str);
    file << str;
    
    file.seekp(0);
    for (int i = 0; i < str.length(); i += 2)
    {
        file.seekp(i);
        file.put('*');
    }

    file.seekg(0);
    getline(file, str);
    cout << str;
    file.close();

    system("PAUSE");
    return 0;
}