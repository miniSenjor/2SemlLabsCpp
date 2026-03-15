//ИПБ-25 Скворцов С.А. 3.3 1
/*С клавиатуры вводится целочисленная квадратная матрица порядка n. Найти сумму элементов главной и побочной диагонали.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* ar =  new int[n*n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ar[i*n+j];
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i * n + i != i * n + n - i - 1)
            sum += ar[i*n+ i];
        sum += ar[i*n+ n - i - 1];
    }
    cout << sum;
    delete[] ar;
    system("PAUSE");
    return 0;
}