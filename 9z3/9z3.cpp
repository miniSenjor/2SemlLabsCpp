//ИПБ-25 Скворцов С.А. 3.9 3
/*Реализовать функцию, перемещающую  k  первых элементов линейного двунаправленного  списка в конец списка.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

void push_back(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    if (!head)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void moveFirstToLast(Node*& head, Node*& tail, int k, int n)
{
    if (k <= 0 || n == 0) return;
    k = k % n;
    if (k == 0) return;

    Node* newHead = head;
    for (int i = 0; i < k; ++i)
        newHead = newHead->next;
    Node* newTail = newHead->prev;

    tail->next = head;
    head->prev = tail;
    newTail->next = nullptr;
    newHead->prev = nullptr;
    head = newHead;
    tail = newTail;
}

void printList(Node* head)
{
    Node* cur = head;
    while (cur)
    {
        cout << cur->data;
        if (cur->next) cout << ' ';
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    //setRusLocale();
    int n;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        push_back(head, tail, x);
    }
    int k;
    cin >> k;

    moveFirstToLast(head, tail, k, n);
    printList(head);

    system("PAUSE");
    return 0;
}