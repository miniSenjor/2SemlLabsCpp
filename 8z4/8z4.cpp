//ИПБ-25 Скворцов С.А. 3.8 4
/*Реализовать функцию создания по линейному однонаправленному списку L двух новых списков L1 и L2. В L1 записать элементы списка L, которые не меньше среднего арифметического, а в L2 – элементы списка L, которые меньше среднего арифметического элементов L.*/

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
void deleteNext(Node* p)
{
    Node* q = p->next;
    p->next = q->next;
    delete q;
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
void createTwoList(double average, Node *l, Node *l1, Node *l2)
{
    while (l->next)
    {
        l = l->next;
        if (l->val < average)
        {
            add(l2, l->val);
            l2 = l2->next;
        }
        else
        {
            add(l1, l->val);
            l1 = l1->next;
        }
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
    double average = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        average += x;
        add(cur, x);
        cur = cur->next;
    }
    average /= n;

    cur = l;
    Node* l1 = new Node, *l2 = new Node;
    l1->next = nullptr;
    l2->next = nullptr;
    createTwoList(average, l, l1, l2);
    cur = l1;
    while (cur->next)
    {
        cur = cur->next;
        cout << cur->val << " ";
    }
    cur = l2;
    while (cur->next)
    {
        cur = cur->next;
        cout << cur->val << " ";
    }

    deleteAll(l);
    deleteAll(l1);
    deleteAll(l2);
    system("PAUSE");
    return 0;
}