//ИПБ-25 Скворцов С.А. 3.8 5
/*Реализовать функцию, которая добавляет в конец списка L1 все элементы L2.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    Node* next;
    int val;
};

void add(Node* p, int a)
{
    Node* q = new Node;
    q->val = a;
    q->next = p->next;
    p->next = q;
}
void deleteAll(Node* p)
{
    while (p != nullptr)
    {
        Node* tmp = p;
        p = p->next;
        delete tmp;
    }
}
void addToEnd(Node* l1, Node* l2)
{
    while (l1->next)
        l1 = l1->next;
    while (l2->next)
    {
        l2 = l2->next;
        add(l1, l2->val);
        l1 = l1->next;
    }
}
int main()
{
    //setRusLocale();
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    cout << "Вводите числа\n";
    Node* l1 = new Node;
    l1->next = nullptr;
    Node* cur = l1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        add(cur, x);
        cur = cur->next;
    }

    cout << "Введите кол-во чисел ";
    cin >> n;
    cout << "Вводите числа\n";
    Node* l2 = new Node;
    l2->next = nullptr;
    cur = l2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        add(cur, x);
        cur = cur->next;
    }

    addToEnd(l1, l2);
    cur = l1;
    while (cur->next)
    {
        cur = cur->next;
        cout << cur->val << " ";
    }

    deleteAll(l1);
    deleteAll(l2);
    system("PAUSE");
    return 0;
}