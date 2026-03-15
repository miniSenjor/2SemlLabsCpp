//ИПБ-25 Скворцов С.А. 3.3 4
/*Дано: x, y – одномерные массивы (векторы) размерности n и А, В, С – двумерные массивы (матрицы) размерности nxn. Выполнить вычисления: y=A*x*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{


    int n;
    cin >> n;
    //int* a = new int[n, n];
    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    int* x = new int[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    int y;
    for (int i = 0; i < n; i++)
    {
        y = 0;
        for (int j = 0; j < n; j++)
            y += a[i][j] * x[j];
        cout << y<<' ';
    }

    system("PAUSE");
    return 0;
}
