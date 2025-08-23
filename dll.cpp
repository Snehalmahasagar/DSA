#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void intersectEn(Node *head)
{
    Node *temp = head;
    while (temp)
    {

        temp = temp->next;
    }
}

void insertEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (!head)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next)
    {

        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
int main()
{
    Node *head = nullptr;
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);
    printList(head);
    return 0;
}