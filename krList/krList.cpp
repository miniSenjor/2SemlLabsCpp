#include <iostream>
using namespace std;

struct Node//Однонаправленный и кольцевой список
{
    Node* next;   // указатель на следующий элемент
    int dat;        // данные
};
void insListLineNext(Node* p, int a)
{
    Node* q = new Node;
    q->dat = a;
    q->next = p->next;
    p->next = q;
}
void delListLineNext(Node* p)
{
    Node* q = p->next;      // удаляемый
    p->next = q->next;
    delete q;
}
void delListLineCur(Node* p) {
    Node* q = p->next;
    p->dat = q->dat;
    p->next = q->next;
    delete q;
}
// Не работает для последнего элемента!

struct NodeTwo//Двунаправленный и колцевой двунаправленный список
{
    NodeTwo *right;  // указатель на следующий (справа)
    NodeTwo* left;   // указатель на предыдущий (слева)
    int dat;
};
void insTwoListLineR(NodeTwo* p, int a) {
    NodeTwo* q = new NodeTwo;
    q->dat = a;
    q->right = p->right;
    q->left = p;
    p->right = q;
    if (q->right)               // если не последний
        q->right->left = q;
}
void delTwoListLineC(NodeTwo*& p) {
    p->left->right = p->right;
    if (p->right)               // если не последний
        p->right->left = p->left;
    delete p;
}
void insTwoListRingR(NodeTwo* p, int a) {
    NodeTwo *q = new NodeTwo;
    q->dat = a;
    q->right = p->right;
    q->left = p;
    p->right = q;
    q->right->left = q;   // всегда существует
}
void delTwoListRingC(NodeTwo*& p) {
    p->left->right = p->right;
    p->right->left = p->left;
    delete p;
}

const int capacityStack = 100;   // максимальный размер

struct LIFO {
    int top;                // индекс вершины (-1 – стек пуст)
    int dat[capacityStack]; // массив данных
};
void initStack(LIFO& stack)
{ 
    stack.top = -1; 
}
bool isEmptyStack(LIFO stack) 
{ 
    return stack.top == -1; 
}
bool isFullStack(LIFO stack)
{ 
    return stack.top == capacityStack - 1;
}
void pushStack(LIFO& stack, int last) 
{ 
    ++stack.top; 
    stack.dat[stack.top] = last; 
}
void popStack(LIFO& stack, int& first) 
{ 
    first = stack.dat[stack.top]; 
    --stack.top; 
}
//Динамический стек на однонаправленном списке
void initStack(Node*& top)
{ 
    top = nullptr; 
}
bool isEmptyStack(Node* top)
{ 
    return !top; 
}
void pushStack(Node*& top, int last)
{ 
    Node* q = new Node;
    q->dat = last; 
    q->next = top; 
    top = q; 
}
void popStack(Node*& top, int& first)
{ 
    Node* q = top;
    first = top->dat; 
    top = top->next; 
    delete q; 
}
struct FIFO {
    Node* in;   // указывает на последний элемент (хвост)
    Node* out;  // указывает на заглавный элемент (перед первым полезным)
};
void initOrd(FIFO& queue)
{ 
    queue.in = new Node;
    queue.in->next = nullptr; 
    queue.out = queue.in; 
}
bool isEmptyOrd(FIFO queue) 
{ 
    return queue.in == queue.out; 
}
void pushOrd(FIFO& queue, int last) 
{ 
    Node* q = new Node; 
    q->dat = last; 
    q->next = nullptr; 
    queue.in->next = q; 
    queue.in = q; 
}
void popOrd(FIFO& queue, int& first) 
{ 
    Node* q = queue.out->next; 
    first = q->dat; 
    queue.out->next = q->next; 
    delete q; 
    if (!queue.out->next) 
        queue.in = queue.out; 
}
int main()
{
    
    return 0;
}