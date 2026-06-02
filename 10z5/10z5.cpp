//ИПБ-25 Скворцов С.А. 3.10 5
/*Описать шаблон функции, которая возвращает количество kol элементов массива, расположенных между первым элементом с  минимальным значением и последним элементом с максимальным значением. Используя шаблон, вычислить величину kol для массива целых чисел и массива вещественных чисел.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

template <typename T>
int countBetween(const T* arr, int size)
{
    if (size <= 2) return 0;

    int firstMin = 0, lastMax = 0;
    T minVal = arr[0], maxVal = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            firstMin = i;
        }
        if (arr[i] >= maxVal)
        {
            maxVal = arr[i];
            lastMax = i;
        }
    }

    int left = min(firstMin, lastMax);
    int right = max(firstMin, lastMax);
    int between = right - left - 1;
    return between > 0 ? between : 0;
}

int main()
{
    //setRusLocale();
    int n;
    cin >> n;
    int* intArr{ new int[n] };
    for (int i = 0; i < n; ++i) cin >> intArr[i];
    int kolInt = countBetween(intArr, n);
    delete[] intArr;

    int m;
    cin >> m;
    double* doubleArr{ new double[m] };
    for (int i = 0; i < m; ++i) cin >> doubleArr[i];
    int kolDouble = countBetween(doubleArr, m);
    delete[] doubleArr;

    cout << kolInt << " " << kolDouble;

    system("PAUSE");
    return 0;
}