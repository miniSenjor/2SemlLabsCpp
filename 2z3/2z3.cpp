//ИПБ-25 Скворцов С.А. 3.2 3
/*В последовательности из n (n<100) целых чисел найти числа, которые меньше, чем среднее арифметическое всех чисел последовательности.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *nums{ new int[n] };
    double av = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        av += nums[i];
    }
    bool wasNumLessAv = false;
    av /= n;
    for (int i = 0; i < n; i++)
        if (nums[i] < av)
        {
            wasNumLessAv = true;
            cout << nums[i] << ' ';
        }
    if (!wasNumLessAv)
        cout << "Таких нет";

    system("PAUSE");
    return 0;
}