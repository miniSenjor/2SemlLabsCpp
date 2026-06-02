//ИПБ-25 Скворцов С.А. 3.10 2
/*Описать три перегруженные функции Print, которые выводят на консоль только строку, только вещественное значение или строку и вещественное значение. Функцию Print использовать в программе для вывода расстояния между двумя точками на плоскости, координаты которых вводятся с клавиатуры по запросу программы. результат вывести в двух видах: только число, равное вычисленному расстоянию, и в виде "расстояние=число".*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

void Print(string s)
{
    cout << s;
}

void Print(double d)
{
    cout << d;
}

void Print(string s, double d)
{
    cout << s << d;
}

int main()
{
    //setRusLocale();
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    Print(dist);
    cout << endl;
    Print("расстояние=", dist);

    system("PAUSE");
    return 0;
}