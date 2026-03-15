//ИПБ-25 Скворцов С.А. 3.3 7
/*Дана матрица В. Поменять местами строки, с четными и нечетными номерами: 1-у со 2-й, 
3-ю с 4-й, ... Если в матрице  нечетное количество строк, последнюю строку оставить на месте.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> b(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    vector<int> t;
    for (int i = 0; i < n; i++)
        if (i + 1 < n)
        {
            t = b[i + 1];
            b[i + 1] = b[i];
            b[i] = t;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j]<<" ";
        cout << "\r\n";
    }

    system("PAUSE");
    return 0;
}