//ИПБ-25 Скворцов С.А. 3.2 5
/*Найти скалярное произведение двух n – мерных векторов (массивы целых чисел).*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int v1[100]{};
    //int v2[100]{};
    int* v1{ new int[n] };
    int* v2{ new int[n] };
    double av = 0;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];

    int scal = 0;
    for (int i = 0; i < n; i++)
        scal += v1[i]*v2[i];
    cout << scal;

    system("PAUSE");
    return 0;
}