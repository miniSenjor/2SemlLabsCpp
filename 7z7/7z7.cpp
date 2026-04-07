//ИПБ-25 Скворцов С.А. 3.7 7
/*При сохранении текстовых строк в двоичном файле перед содержимым строки в файл помещается  специальный заголовок длиной 8 байт. Первые два байта используются как идентификатор (ID) строки и содержат шестнадцатеричное число  0x5453 (21587 - в десятичной системе).  Далее в заголовке следует номер кодовой страницы (CP) в виде двухбайтового беззнакового целого (для русского языка оно равно 1251) и 4-х байтовое знаковое целое (SIZE) — количество символов в строке. После заголовка в файле размещается сама строка в виде последовательности символов.
Опишите структуру заголовка строки, и запишите в двоичный файл строку введенную с клавиатуры. Используйте кодовую страницу 1251.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

#pragma pack(push, 1)
struct BinTitle
{
    uint16_t id = 21587;
    uint16_t cp = 1251;
    uint32_t size;
};
#pragma pack(pop)

int main()
{
    //setRusLocale();
    cout << "Введите название файла ";
    string fName;
    getline(cin, fName);
    fstream file(fName, ios::in | ios::out | ios::trunc | ios::binary);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }
    cout << "Введите строку ";
    string s;
    getline(cin, s);
    BinTitle t;
    t.size = s.size();
    file.write(reinterpret_cast<char*>(&t), sizeof(t));
    file.write(s.c_str(), t.size);

    file.close();

    system("PAUSE");
    return 0;
}