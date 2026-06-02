//ИПБ-25 Скворцов С.А. 3.10 6
/*Описать семейство перегруженных функций compare(), с двумя параметрами val1 и val2, возвращающих целое число (int), равное:
 -1, если val1 < val2, 
0, если val1 == val2,
1, если val1 > val2.
Функции должны работать для следующих комбинаций типов: (int, int) (float, float) (float, int) (int, float), (string, string).*/

#include <iostream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int compare(int val1, int val2)
{
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int compare(float val1, float val2)
{
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

int compare(float val1, int val2)
{
    return compare(val1, (float)val2);
}

int compare(int val1, float val2)
{
    return compare((float)val1, val2);
}

int compare(string val1, string val2)
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
    float C, D;
    cin >> C >> D;
    cin.ignore();
    string S1, S2;
    getline(cin, S1);
    getline(cin, S2);

    cout << compare(A, B) << " "
        << compare(A, C) << " "
        << compare(A, D) << " "
        << compare(B, C) << " "
        << compare(B, D) << " "
        << compare(C, D) << " "
        << compare(S1, S2);

    system("PAUSE");
    return 0;
}