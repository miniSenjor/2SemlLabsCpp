//ИПБ-25 Скворцов С.А. 3.14 9
/*Используя стек, выполнить проверку последовательности символов на корректность расстановки трех типов скобок: «( )», «{ }», «[ ]».*/

#include <iostream>
#include <stack>
//#include "rus_io.h"
//#include "conio2.h"
#include <windows.h>
#include <string>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    //setRusLocale();
    string st;
    cout << "Введите последовательность ";
    getline(cin, st);
    char x;
    stack<char> s;
    bool isPSP = true;
    for (int i = 0; i < st.size(); i++)
    {
        x = st[i];
        if(x=='(' || x=='{' || x=='[')
            s.push(x);
        else if (x == ')' || x == '}' || x == ']')
        {
            if (s.empty())
            {
                isPSP = false;
                continue;
            }
            if (x == ')' && s.top() == '(' || x == '}' && s.top() == '{' || x == ']' && s.top() == '[')
                s.pop();
            else
                isPSP = false;
        }
    }
    if (s.empty() && isPSP)
        cout << "Да";
    else
        cout << "Нет";
    system("PAUSE");
    return 0;
}