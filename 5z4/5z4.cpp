//ИПБ-25 Скворцов С.А. 3.5 4
/*Анкета студента содержит следующие сведения: фамилия, пол, год рождения, курс, рост и оценки по математике, физике, информатике, химии, экономике. Написать программу, которая выполняет следующие действия:
вводит заданное количество анкет студентов и выводит средний балл всех студенток, а также фамилии студенток, средний балл которых выше, чем общий средний балл всех студентов, независимо от пола;*/

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
    double avW = 0;
    double av = 0;
    int countWoman = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите фамилию, пол, год рождения, курс, рост и оценки по математике, физике, информатике, химии, экономике\n";
        Student s;
        cin >> s.sName >> s.gender >> s.birthYear >> s.kyrs >> s.height >> s.math >> s.phys >> s.inf >> s.chem >> s.econ;
        students[i] = s;
        av += (s.chem + s.econ + s.inf + s.math + s.phys) / 5.0;
        if (s.gender == "ж")
        {
            avW += (s.chem + s.econ + s.inf + s.math + s.phys) / 5.0;
            countWoman++;
        }
    }
    av /= n;
    avW /= countWoman;
    cout << avW << "\n";
    if (countWoman)
        for (int i = 0; i < n; i++)
        {
            Student s = students[i];
            double curAv = (s.chem + s.econ + s.inf + s.math + s.phys) / 5.0;
            if (s.gender == "ж" && curAv >= av)
                cout << s.sName << "\n";
        }
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}