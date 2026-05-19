//ИПБ-25 Скворцов С.А. 3.8 6
/*Реализовать функцию удаления из списка L всех элементов, имеющих четные значения.*/

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
void deleteAll(Node* &p)
{
    while (p != nullptr)
    {
        Node* tmp = p;
        p = p->next;
        delete tmp;
    }
}
void deleteEven(Node* l)
{
    while (l->next)
    {
        if (!(l->next->val % 2))
        {
            Node* tmp = l->next;
            l->next = tmp->next;
            delete tmp;
        }
        else
            l = l->next;
    }
}
int main()
{
    //setRusLocale();
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    cout << "Вводите числа\n";
    Node* l = new Node;
    l->next = nullptr;
    Node* cur = l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        add(cur, x);
        cur = cur->next;
    }

    deleteEven(l);
    cur = l;
    while (cur->next)
    {
        cur = cur->next;
        cout << cur->val << " ";
    }

    deleteAll(l);
    system("PAUSE");
    return 0;
}