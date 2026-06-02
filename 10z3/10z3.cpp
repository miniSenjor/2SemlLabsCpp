//ИПБ-25 Скворцов С.А. 3.10 3
/*Описать шаблон функции, которая возвращает наибольшее из трех значений одинакового типа. Используя шаблон, вычислить наибольшее из трех вводимых с клавиатуры целых чисел, вещественных чисел и строк.*/

#include <iostream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

template <typename T>
T maxOfThree(T a, T b, T c)
{
    return max(max(a, b), c);
}

int main()
{
    //setRusLocale();
    int x, y, z;
    cin >> x >> y >> z;
    cout << maxOfThree(x, y, z) << endl;

    double a, b, c;
    cin >> a >> b >> c;
    cout << maxOfThree(a, b, c) << endl;

    string s1, s2, s3;
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    cout << maxOfThree(s1, s2, s3);

    system("PAUSE");
    return 0;
}