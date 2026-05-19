//ИПБ-25 Скворцов С.А. 3.13 2
/*Задана строка, состоящая из латинских букв. Вывести на экран
все буквы, которые встречаются в строке в обратном алфавитному порядке.*/

#include <iostream>
#include <set>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;


int main()
{
    //setRusLocale();
    string s;
    cout << "Введите предложение ";
    getline(cin, s);
    set<char> set;
    for (char c : s)
        set.insert(c);
    for (auto c = set.rbegin(); c != set.rend(); c++)
        cout << *c;
    system("PAUSE");
    return 0;
}