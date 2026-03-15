//ИПБ-25 Скворцов С.А. 3.3 2
/*С клавиатуры построчно вводится квадратная матрица порядка n. Распечатать ее по столбцам.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //int ar[100][100];
    vector<vector<int>> ar = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ar[i][j];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << ar[i][j] << ' ';
        cout << "\n";
    }

    system("PAUSE");
    return 0;
}