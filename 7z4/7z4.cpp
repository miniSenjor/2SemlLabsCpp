//ИПБ-25 Скворцов С.А. 3.7 4
/*Вводимую с клавиатуры последовательность целых чисел, после которой следует число 0, записать без пробелов в двоичный файл.
Затем прочитать из файла и вывести на экран заданное количество чисел, начиная с заданного числа.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    cout << "Введите название файла ";
    string fName;
    cin >> fName;
    fstream file(fName, ios::in | ios::out | ios::trunc | ios::binary);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }

    cout << "Вводите числа\n";
    int x, size = 0;
    cin >> x;
    while (x)
    {
        size++;
        file.write(reinterpret_cast<char*>(&x), sizeof(x));
        cin >> x;
    }

    int len, start;
    cout << "Откуда вывести ";
    cin >> start;
    file.seekp(sizeof(int)*start);
    
    cout << "Сколько вывести ";
    cin >> len;
    len = min(size-start, len);
    for (int i = 0; i < len; i++)
    {
        file.read(reinterpret_cast<char*>(&x), sizeof(x));
        cout << x << " ";
    }
    cout << "\n";
    file.close();

    system("PAUSE");
    return 0;
}