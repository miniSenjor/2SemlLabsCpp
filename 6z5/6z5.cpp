//ИПБ-25 Скворцов С.А. 3.6 5
/*В текстовом файле f.txt записаны целые числа, разделенные пробелом. Переписать все положительные числа из файла f.txt в файл f1.txt и вывести содержимое файла f1.txt на экран.*/

#include <iostream>
#include <fstream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();

    ifstream fileIn("f.txt");
    ofstream fileOut("f1.txt");
    int x;
    if (fileIn.is_open() && fileOut.is_open())
    {
        while (fileIn >> x)
        {
            if (x > 0)
                fileOut << x << " ";
        }
        fileIn.close();
        fileOut.close();
    }
    else
        cout << "Не удалось открыть файл";
    fileIn.open("f1.txt");
    if (fileIn.is_open())
    {
        while (fileIn >> x)
            cout << x << " ";
        fileIn.close();
    }
    else
        cout << "Не удалось открыть файл";

    system("PAUSE");
    return 0;
}