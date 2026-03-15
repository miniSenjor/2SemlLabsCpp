//ИПБ-25 Скворцов С.А. 3.4 2
/*С клавиатуры вводится предложение, заканчивающееся точкой. Найти количество вхождений заданного символа в это предложение.*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    char serchChar;
    cout << "Введите символ ";
    cin >> serchChar;
    cin.get();
    int count = 0;
    cout << "Введите предложение ";
    string s;
    getline(cin, s);
    for(char c : s)
        if (c == serchChar)
            count++;
    cout << "Символ встречается " << count << " раз";
    system("PAUSE");
    return 0;
}