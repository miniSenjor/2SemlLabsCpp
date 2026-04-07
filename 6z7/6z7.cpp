//ИПБ-25 Скворцов С.А. 3.6 7
/*Записать в текстовый файл f.txt заданное количество строк, а затем вывести на экран самую длинную строку.*/

#include <iostream>
#include <fstream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    cout << "Введите кол-во строк файла ";
    int n;
    cin >> n;
    string s, maxStr;
    ofstream fileOut("f.txt");
    int maxLen = 0;
    cout << "Введите строки\n";
    if (fileOut.is_open())
    {
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            fileOut << s << "\n";
            if (s.size() > maxLen)
            {
                maxStr = s;
                maxLen = s.size();
            }
        }
        cout << maxStr;
        fileOut.close();
    }
    else
        cout << "Не удалось открыть файл";

    system("PAUSE");
    return 0;
}