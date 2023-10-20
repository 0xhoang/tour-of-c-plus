#include "iostream"
using namespace std;

struct Node
{
    int data;
    Node *pNext;
};

Node *createNode(int value);
void addLast(Node * &pHead, Node *p);
void addFirst(Node * &pHead, Node *p);

int main()
{
    Node *pHead = NULL;
    for (int i =1; i <= 10 ; i++) {
        cout << i;
        Node *p = createNode(i);
        addLast(pHead, p);
    }

    Node *p = pHead;
    do {
        printf("%d \n", p->data);
        p = p->pNext;
    } while(p != NULL);

    return 1;
}

Node *createNode(int value)
{
    Node *p = new Node;
    p->data = value;
    p->pNext = NULL;
    return p;
}

void addLast(Node * &pHead, Node *p)
{
    if (pHead == NULL) {
        pHead = p;
    } else {
        addLast(pHead->pNext, p);
    }
}

void addFirst(Node * &pHead, Node *p)
{
    if (pHead == NULL) {
        pHead = p;
    } else {
        p->pNext = pHead;
        pHead = p;
    }
}
