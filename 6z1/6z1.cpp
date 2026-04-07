//ИПБ-25 Скворцов С.А. 3.6 1
/*Ввести последовательность из n целых чисел и записать их в текстовый файл, имя которого запросить.*/

#include <iostream>
#include <fstream>
#include "rus_io.h"
#include "conio2.h"
using namespace std;

int main()
{
    setRusLocale();
    cout << "Введите n ";
    int n;
    cin >> n;
    string fileName;
    cout << "Введите название файла ";
    cin >> fileName;
    ofstream outFile(fileName);
    int x;
    if (outFile.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            outFile << x<<" ";
        }
        outFile.close();
    }
    else
        cout << "Не удалось открыть файл";
    system("PAUSE");
    return 0;
}