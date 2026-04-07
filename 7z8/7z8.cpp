//ИПБ-25 Скворцов С.А. 3.7 8
/*При сохранении текстовых строк в двоичном файле перед содержимым строки в файл помещается  специальный заголовок длиной 8 байт. Первые два байта используются как идентификатор (ID) строки и содержат шестнадцатеричное число  0x5453 (21587 - в десятичной системе).  Далее в заголовке следует номер кодовой страницы (CP) в виде двухбайтового беззнакового целого (для русского языка оно равно 1251) и 4-х байтовое знаковое целое (SIZE) — количество символов в строке. После заголовка в файле размещается сама строка в виде последовательности символов.
Откройте двоичный файл, убедитесь, что там записана именно строка в нужной кодировке (проверьте поля ID и CP); если формат не совпадает выведите сообщение об ошибке.  Считайте из файла строку и выведите на экран.*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

#pragma pack(push, 1)
struct BinTitle
{
    uint16_t id;
    uint16_t cp;
    uint32_t size;
};
#pragma pack(pop)

int main()
{
    //setRusLocale();
    cout << "Введите название файла ";
    string fName;
    getline(cin, fName);
    fstream file(fName, ios::in | ios::out | ios::binary);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }
    BinTitle t;
    file.read(reinterpret_cast<char*>(&t), sizeof(t));
    if (t.id != 21587 || t.cp != 1251)
    {
        cout << "Format error";
        return 0;
    }

    vector<char> buffer(t.size);
    file.read(buffer.data(), t.size);
    cout.write(buffer.data(), buffer.size());

    file.close();

    system("PAUSE");
    return 0;
}