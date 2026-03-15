//ИПБ-25 Скворцов С.А. 3.2 1
/*Задана последовательность из n целых чисел. Определить, сколько среди них отличаются от последнего числа.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *nums{ new int[n] };
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != nums[n - 1])
            count++;
    }
    cout << count;
    system("PAUSE");
    return 0;
}