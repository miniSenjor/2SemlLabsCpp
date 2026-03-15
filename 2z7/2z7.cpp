//ИПБ-25 Скворцов С.А. 3.2 7
/*Преобразовать массив a по следующему правилу: элементы массива циклически сдвинуть на 2 позиции влево.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* nums{ new int[n] };
    for (int i = 0; i < n; i++)
        cin >> nums[(i-2+n)%n];
    for (int i = 0; i < n; i++)
        cout << nums[i] << ' ';

    system("PAUSE");
    return 0;
}