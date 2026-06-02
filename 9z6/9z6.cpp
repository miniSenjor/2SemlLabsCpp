//ИПБ-25 Скворцов С.А. 3.9 6
/*Реализовать функцию, которая вставляет в кольцевой двунаправленный список L  новый элемент  F  перед каждым вхождением элемента  Е.*/

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

Node* createList(int n)
{
    if (n == 0) return nullptr;
    Node* head = new Node();
    Node* tail = head;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        Node* newNode = new Node(x);
        if (i == 0)
        {
            head = newNode;
            tail = head;
            head->prev = head;
            head->next = head;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
            tail = newNode;
        }
    }
    return head;
}

void insertBefore(Node*& head, int F, int E)
{
    if (!head) return;
    Node* cur = head;
    do
    {
        if (cur->data == E)
        {
            Node* newNode = new Node(F);
            newNode->prev = cur->prev;
            newNode->next = cur;
            cur->prev->next = newNode;
            cur->prev = newNode;
            if (cur == head)
                head = newNode;
        }
        cur = cur->next;
    } while (cur != head);
}

void printList(Node* head)
{
    if (!head) return;
    Node* cur = head;
    do
    {
        cout << cur->data;
        cur = cur->next;
        if (cur != head) cout << ' ';
    } while (cur != head);
    cout << endl;
}

int main()
{
    //setRusLocale();
    int n;
    cin >> n;
    Node* head = createList(n);
    int F, E;
    cin >> F >> E;
    insertBefore(head, F, E);
    printList(head);

    system("PAUSE");
    return 0;
}