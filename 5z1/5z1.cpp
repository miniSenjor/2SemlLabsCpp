//ИПБ-25 Скворцов С.А. 3.5 1
/*Описать структуру для хранения информации о декартовых и полярных координатах. Написать программу, которая переводит декартовы координаты точки в полярные.*/

#include <iostream>
#include <cmath>
using namespace std;

struct Dec
{
    double x;
    double y;
};
struct Pol
{
    double p;
    double o;
};

Pol сonvert(Dec d)
{
    Pol p;
    p.p = sqrt(d.x * d.x + d.y * d.y);
    p.o = atan2(d.y, d.x);
    return p;
}

int main()
{
    Dec pointD;
    cin >> pointD.x;
    cin >> pointD.y;
    Pol pointP = сonvert(pointD);
    cout << pointP.p << " " << pointP.o;
    system("PAUSE");
    return 0;
}

