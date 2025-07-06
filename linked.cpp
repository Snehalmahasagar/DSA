#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
void insert(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void end(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        /* code */
        temp = temp->next;
    }
    temp->next = newnode;
}
void postion(Node *&head, int val, int pos)
{
    Node *newnode = new Node(val);
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (temp != nullptr && cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp == nullptr)
    {
        cout << "position is out of bound";
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
int main()
{
    Node *head = new Node(1);
    Node *temp = head;
    int n = 5;

    for (int i = 2; i <= n; i++)
    {
        temp->next = new Node(i);
        temp = temp->next;
    }
    insert(head, 0);
    end(head, 6);
    postion(head, 5, 10);

    temp = head;
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}