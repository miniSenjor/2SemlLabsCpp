//ИПБ-25 Скворцов С.А. 3.10 4
/*Описать шаблон функции, которая возвращает наибольшее из средних арифметических значений элементов двух числовых массивов. Используя шаблон, вычислить наибольшее из средних арифметических значений элементов массива целых чисел и массива вещественных чисел.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

double maxAverage(int arr1[], int size1, double arr2[], int size2)
{
    double sum1 = 0.0;
    for (int i = 0; i < size1; ++i)
        sum1 += arr1[i];
    if (size1)
        sum1 /= size1;

    double sum2 = 0.0;
    for (int i = 0; i < size2; ++i)
        sum2 += arr2[i];
    if (size2)
        sum2 /= size2;
    return max(sum1, sum2);
}

int main()
{
    //setRusLocale();
    int n, m;

    cin >> n;
    int intArr[100];
    for (int i = 0; i < n; ++i)
        cin >> intArr[i];

    cin >> m;
    double doubleArr[100];
    for (int i = 0; i < m; ++i)
        cin >> doubleArr[i];

    cout << maxAverage(intArr, n, doubleArr, m);

    system("PAUSE");
    return 0;
}