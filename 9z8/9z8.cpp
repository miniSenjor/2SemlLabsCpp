//ИПБ-25 Скворцов С.А. 3.9 8
/*Реализовать функцию, которая из всех стоящих рядом одинаковых значений кольцевого двунаправленного списка оставляет только первый.*/

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

Node* createRing(int n)
{
    if (n == 0) return nullptr;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        Node* newNode = new Node(x);
        if (!head)
        {
            head = tail = newNode;
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

void removeDuplicates(Node*& head)
{
    if (!head) return;
    Node* cur = head;
    do
    {
        while (cur->next != head && cur->next->data == cur->data)
        {
            Node* dup = cur->next;
            cur->next = dup->next;
            dup->next->prev = cur;
            delete dup;
        }
        cur = cur->next;
    } while (cur != head);
}

void printRing(Node* head)
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
    Node* head = createRing(n);
    removeDuplicates(head);
    printRing(head);

    system("PAUSE");
    return 0;
}