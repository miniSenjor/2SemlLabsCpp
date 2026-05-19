//ИПБ-25 Скворцов С.А. кр 2
/*Сформировать текстовый файл, содержащий данные медицинского осмотра (описание структуры: ФИО, пол, рост). Описать функцию, которая возвращает ФИО самого высокого мужчины группы.*/

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct MedRecord
{
    string FIO;
    string sex;
    int height;
};

string maxHeight(string filename)
{
    string rec;
    ifstream file(filename);
    string maxHeightFIO;
    int maxHeight = -1;
    while (getline(file, rec))
    {
        int lastSpace = rec.rfind(' ');
        int h = stoi(rec.substr(lastSpace + 1));
        int prev = rec.rfind(' ', lastSpace - 1);
        string sex = rec.substr(prev + 1, lastSpace - prev - 1);
        if ((sex=="М"|| sex=="мужчина") && h > maxHeight)
        {
            maxHeight = h;
            int posSpace=0;
            for (int i = 0; i < 3; i++)
                posSpace = rec.find(' ', posSpace + 1);
            maxHeightFIO = rec.substr(0, posSpace);
        }
    }
    file.close();
    if (maxHeight == -1)
        return "Нет мужчин";
    else
        return maxHeightFIO;
}

int main()
{

    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    //setRusLocale();
    cout << "Введите кол-во осмотров ";
    int n;
    cin >> n;

    string fileName = "MedRecords.txt";
    ofstream file(fileName);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        MedRecord r;
        cout << "Введите ФИО ";
        cin.ignore();
        getline(cin, r.FIO);
        cout << "Введите пол ";
        cin >> r.sex;
        cout << "Введите рост ";
        cin >> r.height;
        file << r.FIO << " " << r.sex << " " << r.height<<endl;
    }
    file.close();
    cout << "Человек с самым высоким ростом " << maxHeight(fileName);

    system("PAUSE");
    return 0;
}

