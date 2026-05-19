//ИПБ-25 Скворцов С.А. 3.15 7
/*Вычислить заданную степень целого и вещественного чисел, использовав шаблон рекурсивной функции возведения числа в целую степень.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

double pow(double x, int s)
{
    if (s)
        return x * pow(x, s - 1);
    else
        return 1;
}
int main()
{
    //setRusLocale();
    double a, b;
    cout << "Введите число ";
    cin >> a;
    cout << "Введите число ";
    cin >> b;
    cout << "Введите степень ";
    int s;
    cin >> s;
    cout<<pow(a, s)<<" ";
    cout<<pow(b, s);
    system("PAUSE");
    return 0;
}