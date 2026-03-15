//ИПБ-25 Скворцов С.А. 3.3 6
/*Дана матрица В. Найти разность максимальных элементов  главной и побочной диагоналей*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, maxMain, maxDop;
    cin >> n;
    vector<vector<int>> b(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    maxMain = b[0][0];
    maxDop = b[0][n - 1];
    for (int i = 1; i < n; i++)
    {
        if (maxMain < b[i][i])
            maxMain = b[i][i];
        if (maxDop < b[i][n - i - 1])
            maxDop = b[i][n - i - 1];
    }

    cout << maxMain-maxDop;

    system("PAUSE");
    return 0;
}