//ИПБ-25 Скворцов С.А. 3.2 6
/*Преобразовать массив a по следующему правилу: элементы массива расположить в обратном порядке (транспонировать).*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int n;
    cin >> n;
    array<int, 1000> ar;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int x;
    for (int i = 0; i < n / 2; i++)
    {
        x = ar[i];
        ar[i] = ar[n - i - 1];
        ar[n - i - 1] = x;
    }
    for (int i = 0; i < n; i++)
        cout << ar[i]<<" ";

    system("PAUSE");
    return 0;
}