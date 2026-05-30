//ИПБ-25 Скворцов С.А. 3.13 8
/*Однажды Вася решил посмотреть результаты финала чемпионата Барзиндии по футболу 1920 года. К сожалению, он не нашел итоговый счет матча, зато нашел подробное текстовое описание хода всей игры. Всего в этом описании оказалось n строк, в каждой из которых указано название команды, забившей очередной гол. 
Помогите Васе — узнайте название команды, победившей в финале, и итоговый счет. Известно, что голы забивали обе команды и по регламенту соревнований матч не мог закончиться вничью.

Примечание: задача сформулирована по мотивам CODEFORCES*/

#include <iostream>
#include <map>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    cout << "Введите n ";
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> map;
    string team;
    for (int i = 0; i < n; i++)
    {
        getline(cin, team);
        map[team] += 1;
    }
    int score1=0, score2;
    for (auto x : map)
    {
        if (x.second > score1)
        {
            team = x.first;
            score2 = score1;
            score1 = x.second;
        }
        else
            score2 = x.second;
    }
    cout << team << " " << score1 << ":" << score2;
    system("PAUSE");
    return 0;
}