//ИПБ-25 Скворцов С.А. 3.8 1
/*1. Написать программу формирования списка L1 из вводимых с клавиатуры целых чисел, а затем формирует список L2, в который помещает только положительные элементы из L1 и выводит список L2 на экран.*/

#include <iostream>
//#include <forward_list>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    Node* next;
    int val;
};
int main()
{
    //setRusLocale();
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    cout << "Вводите числа\n";
    Node *l1 = new Node, *l2 = new Node;
    Node *cur = l1;
    for (int i = 0; i < n; i++)
    {
        cur->next = new Node;
        cur = cur->next;
        cin >> cur->val;
    }
    cur = l2;
    Node *curl1 = l1;
    do {
        curl1 = curl1->next;
        if (curl1->val > 0)
        {
            cur->next = new Node;
            cur = cur->next;
            cur->val = curl1->val;
        }
    } while (curl1->next);
    cur = l2;
    do{
        cur = cur->next;
        cout << cur->val << " ";
    } while (cur->next);
    system("PAUSE");
    return 0;
}