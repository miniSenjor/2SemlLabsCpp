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
    cin.ignore();
    fstream file("inout.txt", ios::in | ios::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }

    cout << "Введите строку ";
    string str;
    cin >> str;
    file << str;
    int sizeFile = file.tellg();
    
    file.seekp(0);
    do
    {
        if(sizeFile>0)
            file << "*";
        sizeFile-=2;
    }
    while (file.get());

    file.seekg(0);
    file >> str;
    cout << str;
    file.close();

    system("PAUSE");
    return 0;
}