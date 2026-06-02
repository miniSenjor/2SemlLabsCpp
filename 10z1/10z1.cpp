//ИПБ-25 Скворцов С.А. 3.10 1
/*Написать программу нахождения вещественных корней линейного ax+b=0 и квадратного ax2+bx+c=0 уравнений, оформив алгоритм решения уравнения в виде перегруженной функции Equation.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

bool Equation(double a, double b, double &x, bool &inf)
{
    if (a == 0)
    {
        if (b == 0)
        {
            inf = true;
            return true;
        }
        else
        {
            inf = false;
            return false;
        }
    }
    inf = false;
    x = -b / a;
    return true;
}

bool Equation(double a, double b, double c, double& x1, double& x2)
{
    double d = b * b - 4 * a * c;
    if (d < 0)
        return false;
    x1 = (-b + sqrt(d)) / 2 / a;
    x2 = (-b - sqrt(d)) / 2 / a;
    return true;
}

int main()
{
    //setRusLocale();
    double a, b, c, x1, x2;
    bool answer, inf = false;
    cin >> a >> b >> c;
    if (a)
        answer = Equation(a, b, c, x1, x2);
    else
    {
        answer = Equation(b, c, x1, inf);
        x2 = x1;
    }
    if (answer && inf)
        cout << "Любое число";
    else if (answer == 0)
        cout << "Нет корней";
    else if (x1 == x2)
        cout << x1;
    else
        cout << min(x1, x2) << " " << max(x1, x2);
    system("PAUSE");
    return 0;
}