//ИПБ-25 Скворцов С.А. 3.9 5
/*С клавиатуры вводится последовательность латинских букв, оканчивающаяся точкой. Среди символов есть специальный символ «*», появление которого требует удаления предыдущей буквы. При этом  k  знаков «*» подряд удаляют  k  предыдущих букв, если такие есть. Вывести на экран исправленную последовательность.*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    char data;
    Node* prev;
    Node* next;
    Node(char ch = '\0') : data(ch), prev(nullptr), next(nullptr) {}
};

void push_back(Node* head, char ch)
{
    Node* cur = head;
    while (cur->next) cur = cur->next;
    Node* newNode = new Node(ch);
    cur->next = newNode;
    newNode->prev = cur;
}

void pop_back(Node* head)
{
    if (!head->next) return;
    Node* last = head->next;
    while (last->next) last = last->next;
    last->prev->next = nullptr;
    delete last;
}

void printList(Node* head)
{
    Node* cur = head->next;
    while (cur)
    {
        cout << cur->data;
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    //setRusLocale();
    Node* head = new Node();
    char c;
    while (cin.get(c) && c != '.')
    {
        if (c == '*')
            pop_back(head);
        else
            push_back(head, c);
    }
    printList(head);

    system("PAUSE");
    return 0;
}