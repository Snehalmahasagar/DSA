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
Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        /* code */
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    Node *head = new Node(1);
    Node *temp = head;
    for (int i = 2; i <= 6; i++)
    {
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

    Node *mid = middle(head);
    cout << "middle of linked list: " << mid->data;
}