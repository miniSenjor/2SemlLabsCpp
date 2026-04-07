//ИПБ-25 Скворцов С.А. 3.6 2
/*Запросить имя файла, считать из него числа, вычисляя их сумму, и вывести на экран выражение вида:
36+28+42+...=...*/

#include <iostream>
#include <fstream>
//#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    string fileName;
    cout << "Введите название файла ";
    cin >> fileName;
    ifstream file;
    file.open(fileName);
    int x, sum;
    if (file.is_open())
    {
        file >> x;
        cout << x;
        sum = x;
        while (file >> x)
        {
            cout << "+" << x;
            sum += x;
        }
        cout << "=" << sum;
        file.close();
    }
    else
        cout << "Не удалось открыть файл";
    system("PAUSE");
    return 0;
}