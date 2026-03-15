//ИПБ-25 Скворцов С.А. 3.1 7
/*Дано предложение, оканчивающееся точкой. Найти количество слов, начинающихся с заданной буквы*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    char curChar, prevChar, searchChar;
    cout << "Вводите искомую букву\n";
    searchChar = cin.get();
    cout << "Вводите символы\n";
    int count = 0;
    cin >> prevChar;
    if (prevChar == searchChar)
        count++;
    curChar = cin.get();
    while (curChar != '.')
    {
        if ((prevChar < 65 || prevChar >90) && (prevChar < 97 || prevChar>122) && (prevChar<-64 || prevChar>-1) && curChar == searchChar)
            count++;
        prevChar = curChar;
        curChar = cin.get();
    }
    cout << count;
    system("PAUSE");
    return 0;
}