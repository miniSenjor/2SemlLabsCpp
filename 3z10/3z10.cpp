//ИПБ-25 Скворцов С.А. 3.3 10
/*С клавиатуры построчно вводится матрица порядка mxn. Вывести на экран n чисел, равных количеству отрицательных элементов столбцов.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> m;
    cin >> n;
    vector<vector<int>> a(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int countNeg;
    for (int i = 0; i < n; i++)
    {
        countNeg = 0;
        for (int j = 0; j < m; j++)
            if (a[j][i] < 0)
                countNeg++;
        cout << countNeg<< " ";
    }

    system("PAUSE");
    return 0;
}