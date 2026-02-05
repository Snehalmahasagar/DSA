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
Node *reverse(Node *&head)
{
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr)
    {
        /* code */
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    Node *head = new Node(2);
    Node *temp = head;
    for (int i = 2; i < 6; i++)
    {
        /* code */
        temp->next = new Node(i);
        temp = temp->next;
    }
    temp = head;
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = reverse(head);
    cout << "reversed linked list: " << endl;

    temp = head;

    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}