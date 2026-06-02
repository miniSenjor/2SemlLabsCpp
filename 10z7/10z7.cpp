//ИПБ-25 Скворцов С.А. 3.10 7
/*Описать шаблон функции compare(), с двумя параметрами val1 и val2, возвращающей целое число (int), равное:
 -1, если val1 < val2, 
0, если val1 == val2,
1, если val1 > val2.
Функции должны работать для следующих комбинаций типов: (int, int), (double, double), (string, string).*/

#include <iostream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

template <typename T>
int compare(const T& val1, const T& val2)
{
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int main()
{
    //setRusLocale();
    int A, B;
    cin >> A >> B;

    double C, D;
    cin >> C >> D;

    cin.ignore();
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);

    cout << compare(A, B) << " "
        << compare(C, D) << " "
        << compare(S1, S2);

    system("PAUSE");
    return 0;
}