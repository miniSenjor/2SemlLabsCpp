//ИПБ-25 Скворцов С.А. 3.8 2
/*Включить в  список упорядоченных по возрастанию целых чисел   произвольное  новое  число  без  нарушения  упорядоченности и  исключите  другое  указанное  число (если такое число имеется в списке)*/

#include <iostream>
//#include "rus_io.h"
//#include "conio2.h"
using namespace std;

struct Node
{
    Node* next;
    int val;
};

void add(Node* p, int a)
{
    Node* q = new Node;
    q->val = a;
    q->next = p->next;
    p->next = q;
}
void deleteNext(Node* p)
{
    Node* q = p->next;
    if (q)
    {
        p->next = q->next;
        delete q;
    }
}
void printList(Node* head)
{
    Node* cur = head->next;
    while (cur)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}
int main()
{
    //setRusLocale();
    cout << "Введите кол-во чисел ";
    int n;
    cin >> n;
    cout << "Вводите числа\n";
    Node* l1 = new Node;
    l1->next = nullptr;
    Node* cur = l1;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        add(cur, x);
        cur = cur->next;
    }
    cout << "Введите число для добавления и удаления\n";
    int addNum, delNum;
    cin >> addNum >> delNum;
    bool isAdd = false;
    cur = l1;
    while (cur->next)
    {
        if (cur->next->val > addNum && !isAdd)
        {
            add(cur, addNum);
            isAdd = true;
            break;
        }
        cur = cur->next;
    }
    if (!isAdd)
    {
        add(cur, addNum);
    }
    cur = l1;
    while (cur->next)
    {
        if (cur->next->val == delNum)
        {
            deleteNext(cur);
            break;
        }
        cur = cur->next;
    }
    printList(l1);
    system("PAUSE");
    return 0;
}