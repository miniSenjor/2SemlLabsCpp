//ИПБ-25 Скворцов С.А. 3.6 4
/*С помощью текстового редактора подготовить файл с заданным именем, в котором содержится последовательность целых чисел. Написать программу, которая находит максимальное и минимальное числа в данном файле.*/

#include <iostream>
#include <fstream>
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
    int x, max, min;
    file.open(fileName);
    if (file.is_open())
    {
        file >> max;
        min = max;
        while (file >> x)
        {
            if (max < x)
                max = x;
            else if (min > x)
                min = x;
        }
        file.close();
        cout << "Max = " << max << "\n";
        cout << "Min = " << min << "\n";
    }
    else
        cout << "Не удалось открыть файл";
    system("PAUSE");
    return 0;
}