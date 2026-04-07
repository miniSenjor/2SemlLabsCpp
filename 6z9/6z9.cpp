//ИПБ-25 Скворцов С.А. 3.6 9
/*С помощью текстового редактора подготовить файл с заданным именем, в котором содержатся строки. Вывести на экран все строки, содержащие более 30 символов.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    //setRusLocale();
    string fileName;
    cin >> fileName;
    ifstream fileIn(fileName);
    string s;
    if (fileIn.is_open())
    {
        while (getline(fileIn, s))
            if (s.size()>30)
                cout << s <<"\n";
        fileIn.close();
    }
    else
        cout << "Не удалось открыть файл";

    system("PAUSE");
    return 0;
}