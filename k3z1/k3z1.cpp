//ИПБ-25 Скворцов С.А. кр 3
/*С клавиатуры вводится последовательность целых чисел, за которой следует число ноль, не входящее в последовательность. Разрезать ее на 2 части (начальную и конечную), чтобы разность между суммами элементов в частях была минимальной. Использовать векторы.*/

#include <iostream>
#include <windows.h>
#include <vector>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    //setRusLocale();
    cout << "Вводите последовательность\n";
    int x, sum = 0;
    cin >> x;
    vector<int> v;
    while (x)
    {
        sum += x;
        v.push_back(x);
        cin >> x;
    }

    vector<int> v1;
    int curSum = 0, i=0;
    for (;i < v.size(); i++)
    {
        if (abs(curSum + v[i]) > abs(sum-curSum))
            break;
        else
        {
            curSum += v[i];
            v1.push_back(v[i]);
            cout << v[i] << ' ';
        }
    }
    cout << endl;
    vector<int>v2;
    for (; i < v.size(); i++)
    {
        v2.push_back(v[i]);
        cout << v[i] << ' ';
    }
    
    system("PAUSE");
    return 0;
}

