//ИПБ-25 Скворцов С.А. 3.6 6
/*С помощью текстового редактора подготовить файл с заданным именем, в котором содержится последовательность целых чисел. Написать программу, которая формирует 2 файла pos.txt и neg.txt, помещая в них соответственно положительные и отрицательные числа из исходного файла.*/

#include <iostream>
#include <fstream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    string fileName;
    cout << "Введите имя файла ";
    cin >> fileName;

    ifstream fileIn(fileName);
    ofstream fileOutPos("pos.txt");
    ofstream fileOutNeg("neg.txt");
    int x;
    if (fileIn.is_open() && fileOutPos.is_open() && fileOutNeg.is_open())
    {
        while (fileIn >> x)
        {
            if (x > 0)
                fileOutPos << x << " ";
            else if (x < 0)
                fileOutNeg << x << " ";
        }
        fileIn.close();
        fileOutPos.close();
        fileOutNeg.close();
    }
    else
        cout << "Не удалось открыть файл";

    system("PAUSE");
    return 0;
}