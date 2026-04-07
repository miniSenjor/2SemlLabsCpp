//ИПБ-25 Скворцов С.А. 3.6 8
/*С помощью текстового редактора подготовить файл с заданным именем, в котором содержатся строки разной длины. Переписать строки в файл result.txt, дополнив их символом '*' до до длины самой длинной строки.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    //setRusLocale();
    int maxLen = 0;
    cout << "Введите название файла ";
    string fileName;
    cin >> fileName;
    ifstream fileIn(fileName);
    string s;
    if (fileIn.is_open())
    {
        while (getline(fileIn, s))
        {
            if (maxLen < s.size())
                maxLen = s.size();
        }
        fileIn.close();
    }
    else
        cout << "Не удалось открыть файл";

    ofstream fileOut("result.txt");
    fileIn.open(fileName);
    if (fileOut.is_open() && fileIn.is_open())
    {
        while (getline(fileIn, s))
        {
            fileOut << s;
            int dif = maxLen - s.size();
            while (dif)
            {
                dif--;
                fileOut << '*';
            }
            fileOut << "\n";
        }
        fileIn.close();
        fileOut.close();
    }
    else
        cout << "Не удалось открыть файл";

    system("PAUSE");
    return 0;
}