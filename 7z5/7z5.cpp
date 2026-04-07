//ИПБ-25 Скворцов С.А. 3.7 5
/*Заголовок файла, содержащего иконку (*.ico) состоит из трех двоичных полей, каждое из которых имеет размер 2 байта. Первое поле  reserved (зарезервировано), и должно всегда содержать 0. Второе поле type (тип) содержит 1 для значков (ico) и 2 для курсоров (cur). Третье поле count содержит количество изображений в файле.
Определите структуру, описывающую заголовок ico-файла, заполните ее и сформируйте фиктивную иконку, содержащую 0 изображений, в виде двоичного файла.*/

#include <iostream>
#include <fstream>
#include <string>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

#pragma pack(push, 1)
struct IcoTitle
{
    uint16_t reserved;
    uint16_t type;
    uint16_t count;
};

int main()
{
    IcoTitle t;
    t.reserved = 0;
    t.type = 1;
    t.count = 0;
    //setRusLocale();
    cout << "Введите название файла ";
    string fName;
    cin >> fName;
    fstream file(fName, ios::in | ios::out | ios::trunc | ios::binary);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл";
        return 0;
    }
    file.write(reinterpret_cast<const char*>(&t), sizeof(t));
    file.close();

    system("PAUSE");
    return 0;
}