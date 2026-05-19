//ИПБ-25 Скворцов С.А. 3.8 3
/*Составить программу, которая удаляет из списка L все отрицательные элементы.*/

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
    cur = l1;
    while (cur->next)
    {
        if (cur->next->val < 0)
            deleteNext(cur);
        cur = cur->next;
    }
    cur = l1->next;
    while (cur)
    {
        cout << cur->val<<" ";
        cur = cur->next;
    }
    cur = l1;
    while (cur != nullptr) {
        Node* tmp = cur;
        cur = cur->next;
        delete tmp;
    }
    system("PAUSE");
    return 0;
}