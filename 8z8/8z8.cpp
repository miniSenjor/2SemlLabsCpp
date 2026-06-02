//ИПБ-25 Скворцов С.А. 3.8 8
/*Реализовать программу, которая в кольцевом списке  R  из каждой группы подряд идущих одинаковых элементов оставляет только одного представителя.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* createList(int n)
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
            head->next = head;
        }
        else
        {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    return head;
}

void removeDuplicates(Node*& head)
{
    if (!head || head->next == head) return;

    Node* cur = head;
    while (cur->next != head)
    {
        if (cur->data == cur->next->data)
        {
            Node* toDelete = cur->next;
            cur->next = toDelete->next;
            delete toDelete;
        }
        else
            cur = cur->next;
    }
    if (cur != head && cur->data == head->data)
    {
        Node* prev = head;
        while (prev->next != cur)
            prev = prev->next;
        prev->next = head;
        delete cur;
    }
}

void printList(Node* head)
{
    if (!head)
    {
        cout << endl;
        return;
    }
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
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    Node* head = createList(n);
    removeDuplicates(head);
    printList(head);
    system("PAUSE");
    return 0;
}