//ИПБ-25 Скворцов С.А. 3.9 2
/*Реализовать функцию, удаляющую k последних элементов линейного двунаправленного списка.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int val = 0) : data(val), prev(nullptr), next(nullptr) {}
};

void push_back(Node*& head, int val)
{
    Node* cur = head;
    while (cur->next) cur = cur->next;
    Node* newNode = new Node(val);
    cur->next = newNode;
    newNode->prev = cur;
}

void removeLastK(Node*& head, int k)
{
    if (k <= 0) return;
    Node* tail = head;
    while (tail->next) tail = tail->next;
    Node* cur = tail;
    for (int i = 0; i < k && cur != head; ++i)
        cur = cur->prev;
    if (cur == head)
    {
        Node* toDelete = head->next;
        while (toDelete)
        {
            Node* tmp = toDelete;
            toDelete = toDelete->next;
            delete tmp;
        }
        head->next = nullptr;
    }
    else
    {
        Node* toDelete = cur->next;
        cur->next = nullptr;
        while (toDelete)
        {
            Node* tmp = toDelete;
            toDelete = toDelete->next;
            delete tmp;
        }
    }
}

void printList(Node* head)
{
    if (!head->next)
    {
        cout << "Список L пуст";
        return;
    }
    Node* cur = head->next;
    while (cur)
    {
        cout << cur->data;
        if (cur->next) cout << ' ';
        cur = cur->next;
    }
}

int main()
{
    //setRusLocale();
    int n, k;
    cin >> n;
    Node* head = new Node();
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        push_back(head, x);
    }
    cin >> k;

    removeLastK(head, k);
    printList(head);

    system("PAUSE");
    return 0;
}