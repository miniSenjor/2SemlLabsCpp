//ИПБ-25 Скворцов С.А. 3.9 1
/*Реализовать функцию, которая формирует линейный двунаправленный список L, включив в него по одному разу элементы, которые входят в один из списков L1 и L2, но в то же время не входят в другой*/

#include <iostream>
#include <string>
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
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
}

bool inArray(int* arr, int size, int val)
{
    for (int i = 0; i < size; ++i)
        if (arr[i] == val) return true;
    return false;
}

bool inList(Node* head, int val)
{
    Node* cur = head;
    while (cur)
    {
        if (cur->data == val) return true;
        cur = cur->next;
    }
    return false;
}

void printList(Node* head)
{
    if (!head)
    {
        cout << "Список L пуст";
        return;
    }
    Node* cur = head;
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
    int n, m;
    cin >> n;
    int* arr1 = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];
    cin >> m;
    int* arr2 = new int[m];
    for (int i = 0; i < m; ++i)
        cin >> arr2[i];

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i)
    {
        int val = arr1[i];
        if (!inArray(arr2, m, val) && !inList(head, val))
            push_back(head, tail, val);
    }
    for (int i = 0; i < m; ++i)
    {
        int val = arr2[i];
        if (!inArray(arr1, n, val) && !inList(head, val))
            push_back(head, tail, val);
    }

    printList(head);

    system("PAUSE");
    return 0;
}