//ИПБ-25 Скворцов С.А. 3.2 5
/*Задана последовательность a из n вещественных чисел. Вычислить y и z по формулам:
y=a[0]-a[1]+a[2]-…a[n-2]+a[n-1];
z=a[0] a[n-1]+ a[1] a[n-2]+…+ a[n-1] a[0].*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double y=0, z=0;
    double* nums{ new double[n] };
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int neg = 1;
    for (int i = 0; i < n; i++)
    {
        y += neg*nums[i];
        neg *= -1;
        z += nums[i] * nums[n - i - 1];
    }
    cout << y << " " << z;
    system("PAUSE");
    return 0;
}