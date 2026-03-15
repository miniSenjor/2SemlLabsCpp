//ИПБ-25 Скворцов С.А. 3.2 8
/*Элементы массива данных типа int расположить в обратном порядке.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* nums{ new int[n] };
    for (int i = 0; i < n; i++)
        cin >> nums[n - i - 1];
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    system("PAUSE");
    return 0;
}