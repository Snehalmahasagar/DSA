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

void printLength(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        /* code */
        temp = temp->next;
        cnt++;
    }

    cout << "the length of Linked list: " << cnt << endl;
}
int main()
{

    Node *head = new Node(2);
    Node *temp = head;

    for (int i = 1; i < 5; i++)
    {
        /* code */
        temp->next = new Node(i);
        temp = temp->next;
    }
    temp = head;
    printLength(head);
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
}
