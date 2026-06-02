//ИПБ-25 Скворцов С.А. 3.8 9
/*Дан кольцевой список вещественных чисел. Реализовать следующую функцию: перенос в начало последнего элемента списка.*/

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

void moveLastToFront(Node*& head)
{
    if (!head || head->next == head) return;
    Node* prev = head;
    while (prev->next->next != head)
        prev = prev->next;

    Node* last = prev->next;
    Node* oldHead = head;
    prev->next = last;
    last->next = oldHead;
    head = last;
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
    moveLastToFront(head);
    printList(head);

    system("PAUSE");
    return 0;
}