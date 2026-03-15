//ИПБ-25 Скворцов С.А. 3.5 3
/*Анкета студента содержит следующие сведения: фамилия, пол, год рождения, курс, рост и оценки по математике, физике, информатике, химии, экономике. Написать программу, которая выполняет следующие действия:
вводит заданное количество анкет студентов и выводит средний рост студентов мужского пола, а также фамилию и рост самого высокого и самого низкого из этих студентов;*/

#include <iostream>
#include <windows.h>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Student
{
    string sName;
    string gender;
    int birthYear;
    int kyrs;
    int height;
    int math;
    int phys;
    int inf;
    int chem;
    int econ;
};

int main()
{
    //setRusLocale();

    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    int n;
    cout << "Введите кол-во ";
    cin >> n;
    Student students[50];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите фамилию, пол, год рождения, курс, рост и оценки по математике, физике, информатике, химии, экономике\n";
        Student s;
        cin >> s.sName >> s.gender >> s.birthYear >> s.kyrs >> s.height >> s.math >> s.phys >> s.inf >> s.chem >> s.econ;
        students[i] = s;
    }
    string nameMax;
    int heightMax = 0;
    string nameMin;
    int heightMin = -1;
    int countMan = 0;
    int sumHeight = 0;
    for (int i = 0; i < n; i++)
    {
        Student s = students[i];
        if (s.gender == "м")
        {
            countMan++;
            sumHeight += s.height;
            if (heightMax < s.height)
            {
                heightMax = s.height;
                nameMax = s.sName;
            }
            if (heightMin > s.height || heightMin==-1)
            {
                heightMin = s.height;
                nameMin = s.sName;
            }
        }
    }
    if (countMan)
    {
        cout << sumHeight / (double)countMan << "\n";
        cout << nameMax << " " << heightMax << "\n";
        cout << nameMin << " " << heightMin << "\n";
    }
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}

