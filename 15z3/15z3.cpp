//ИПБ-25 Скворцов С.А. 3.15 3
/*С помощью рекурсивной функции найти произведение элементов одномерного массива*/

#include <iostream>
#include <vector>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

long multiply(int i, vector<int>&a)
{
    if (i < a.size())
        return a[i] * multiply(i + 1, a);
    else
        return 1;
}
int main()
{
    //setRusLocale();
    cout << "Введите n ";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << multiply(0, a);
    system("PAUSE");
    return 0;
}