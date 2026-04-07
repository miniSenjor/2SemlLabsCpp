//ИПБ-25 Скворцов С.А. 3.6 3
/*С помощью текстового редактора подготовить файл с заданным именем, в котором содержится последовательность целых чисел. Написать программу, которая:
добавляет в файл k чисел и выводит весь файл на экран.*/

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
    ofstream fileOut(fileName, ios::app);
    int k, x;
    cout << "Введите k ";
    cin >> k;
    cout << "Введите числа ";
    if (fileOut.is_open())
    {
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            fileOut << x << " ";
        }
        fileOut.close();
    }
    else
        cout << "Не удалось открыть файл";
    ifstream fileIn;
    fileIn.open(fileName);
    if (fileIn.is_open())
    {
        while (fileIn >> x)
            cout << x << " ";
    }
    else
        cout << "Не удалось открыть файл";
    system("PAUSE");
    return 0;
}