//ИПБ-25 Скворцов С.А. 3.3 8
/*Даны матрицы А и В одинакового размера. Матрицу С сформировать из столбцов матриц А и В с большей суммой элементов.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int a[100][100]{};
    //int b[100][100]{};
    //int c[100][100]{};
    vector<vector<int>> a(n, vector<int>(n, 0));
    vector<vector<int>> b(n, vector<int>(n, 0));
    vector<vector<int>> c(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    int sumA, sumB;
    for (int i = 0; i < n; i++)
    {
        sumA = 0;
        sumB = 0;
        for (int j = 0; j < n; j++)
        {
            sumA += a[j][i];
            sumB += b[j][i];
        }
        if (sumA > sumB)
            for (int j = 0; j < n; j++)
                c[j][i] = a[j][i];
        else
            for (int j = 0; j < n; j++)
                c[j][i] = b[j][i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << "\r\n";
    }

    system("PAUSE");
    return 0;
}