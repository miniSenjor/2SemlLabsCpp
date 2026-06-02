//ИПБ-25 Скворцов С.А. 3.8 7
/*Составить программу, которая вставляет в кольцевой список за каждым вхождением элемента S новый элемент, равный D*/

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

void insertAfter(Node* cur, int D)
{
    Node* newNode = new Node(D);
    newNode->next = cur->next;
    cur->next = newNode;
}

void insertAfter(Node*& head, int S, int D)
{
    if (!head) return;
    Node* cur = head;
    do
    {
        if (cur->data == S)
        {
            insertAfter(cur, D);
            cur = cur->next->next;
        }
        else
            cur = cur->next;
    } while (cur != head);
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
    int S, D;
    cout << "Введите S и D\n";
    cin >> S >> D;
    insertAfter(head, S, D);
    printList(head);
    system("PAUSE");
    return 0;
}