//ИПБ-25 Скворцов С.А. 3.3 3
/*Дано: x, y – одномерные массивы (векторы) размерности n и А, В, С – двумерные массивы (матрицы) размерности nxn. Выполнить вычисления: 
С=A+B*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n*n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i*n+j];
    int x;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a[i*n+j] += x;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i*n+j] << ' ';
        cout << "\n";
    }

    system("PAUSE");
    return 0;
}