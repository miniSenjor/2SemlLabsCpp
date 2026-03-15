//ИПБ-25 Скворцов С.А. 3.3 5
/*Дано: x, y – одномерные массивы (векторы) размерности n и А, В, С – двумерные массивы (матрицы) размерности nxn. Выполнить вычисления: 
С=A*B*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int a[100][100]{};
    //int b[100][100]{};
    vector<vector<int>> a(n, vector<int>(n, 0));
    vector<vector<int>> b(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    int x;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            x = 0;
            for (int j = 0; j < n; j++)
                x += a[k][j] * b[j][i];
            cout << x << ' ';
        }
        cout << "\r\n";
    }

    system("PAUSE");
    return 0;
}