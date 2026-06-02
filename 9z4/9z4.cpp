//ИПБ-25 Скворцов С.А. 3.9 4
/*Реализовать функцию, осуществляющую циклический сдвиг элементов линейного двунаправленного списка на  k  позиций вправо.*/

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

void rotateRight(Node* head, int k, int n)
{
    if (n <= 1 || k % n == 0) return;
    k = k % n;
    Node* cur = head->next;
    for (int i = 1; i < n - k; ++i)
        cur = cur->next;
    Node* newLast = cur;
    Node* newFirst = cur->next;
    Node* oldLast = head;
    while (oldLast->next) 
        oldLast = oldLast->next;

    oldLast->next = head->next;
    head->next->prev = oldLast;
    head->next = newFirst;
    newFirst->prev = head;
    newLast->next = nullptr;
}

void printList(Node* head)
{
    Node* cur = head->next;
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
    rotateRight(head, k, n);
    printList(head);

    system("PAUSE");
    return 0;
}