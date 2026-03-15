//ИПБ-25 Скворцов С.А. 3.2 2
/*Задана последовательность из n вещественных чисел. Вывести сначала все отрицательные числа, а затем все остальные.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //double nums[1000]{};
    double* nums{ new double[n] };
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    for (int i = 0; i < n; i++)
        if (nums[i]<0)
            cout << nums[i] << ' ';
    for (int i = 0; i < n; i++)
        if (nums[i] >= 0)
            cout << nums[i]<<' ';

    system("PAUSE");
    return 0;
}