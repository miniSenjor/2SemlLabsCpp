//ИПБ-25 Скворцов С.А. 3.9 7
/*Дан кольцевой список, содержащий целые числа. Реализовать функцию определения количества различных элементов кольцевого двунаправленного  списка.*/

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

int countDistinct(Node* head)
{
    if (!head) return 0;

    int* unique = new int[100000];
    int count = 0;

    Node* cur = head;
    do
    {
        bool found = false;
        for (int i = 0; i < count; ++i)
        {
            if (unique[i] == cur->data)
            {
                found = true;
                break;
            }
        }
        if (!found)
            unique[count++] = cur->data;
        cur = cur->next;
    } while (cur != head);

    delete[] unique;
    return count;
}

int main()
{
    //setRusLocale();
    int n;
    cin >> n;
    Node* head = createRing(n);
    cout << countDistinct(head);

    system("PAUSE");
    return 0;
}