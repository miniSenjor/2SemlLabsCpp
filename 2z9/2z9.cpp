//ИПБ-25 Скворцов С.А. 3.2 9
/*В последовательности символов, оканчивающихся точкой, удалить все пробелы, стоящие перед гласными буквами.*/

#include <iostream>
#include <windows.h>
using namespace std;

char vowels[20] = { 'а', 'А', 'е', 'Е', 'ё', 'Ё', 'и', 'И', 'о', 'О', 'у', 'У', 'э', 'Э', 'ы', 'Ы', 'ю', 'Ю', 'я', 'Я' };
bool isVowel(char c)
{
    for (int i = 0; i < 20; i++)
        if (c == vowels[i])
            return true;
    return false;
}

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    char chars[100];
    char cur = cin.get();
    int i = 0;
    while (cur != '.')
    {
        chars[i] = cur;
        i++;
        cur = cin.get();
    }
    int iNew = 0;
    int iOld = 0;
    while(iOld<i)
    {
        //скипает только 1 пробел
        /*if (chars[iOld]==' ' && iOld+1<i && isVowel(chars[iOld+1]))
            chars[iNew] = chars[iOld];*/

        //скипает все пробелы перед гласными
        if (chars[iOld]==' ')
        //if (chars[iOld] == ' ' && (iOld==0 || (iOld>0 && !(chars[iOld-1]==',' || chars[iOld-1]==' '))))
        {
            int j = iOld+1;
            while (chars[j] == ' ' && j<i-1)
                j++;

            if (isVowel(chars[j]))
                iOld = j;
            else
                while(iOld<j)
                {
                    chars[iNew] = ' ';
                    iOld++;
                    iNew++;
                }
        }
        chars[iNew] = chars[iOld];

        iOld++;
        iNew++;
    }
    for (int j = 0; j < iNew; j++)
        cout << chars[j];
    system("PAUSE");
    return 0;
}
/*
// Смирнов А., ИПБ-25, раздел 3.2, задача 9
//В последовательности символов, оканчивающихся точкой, удалить все пробелы, стоящие перед гласными буквами.

#include <iostream>
#include <windows.h>
#include <array>

using namespace std;

bool isRusLit(char inputCh);

bool isRusLit(char inputCh) {
    array<char, 20> lit = { 'у', 'У', 'е', 'Е', 'ы', 'Ы', 'а', 'А', 'о', 'О', 'э', 'Э', 'я', 'Я', 'и', 'И', 'ю', 'Ю', 'ё', 'Ё' };
    for (char c : lit) {
        if (inputCh == c) {
            return true;
        }
    }
    return false;
}
int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    array<char, 100> arr;
    int n{ 0 };
    cout << "Введите последовательность\n";
    char curCh;
    curCh = cin.get();
    while (curCh != '.') {
        arr[n] = curCh;
        n++;
        curCh = cin.get();
    }
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == ' ' && (isRusLit(arr[i + 1]))) {
            for (int j = i; j < n - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    }
    cout << "Без пробелов\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }    system("PAUSE");
    return 0;
}

*/