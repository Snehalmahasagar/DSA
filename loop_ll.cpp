#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *netx;
    Node(int val)
    {
        data = val;
        netx = nullptr;
    }
};
void createloop(Node *head, int pos)
{

    if (pos == 0)
        return;

    Node *loopStart = head;

    for (int i = 1; i < pos; i++)
    {
        loopStart = loopStart->netx;
    }
    Node *temp = head;
    while (temp->netx != nullptr)
    {
        temp = temp->netx;
    }
    temp->netx = loopStart;
}
int main()
{
    Node *head = new Node(1);
    Node *temp = head;
    int count = 6;
    for (int i = 2; i < count; i++)
    {
        /* code */
        temp->netx = new Node(i);
        temp = temp->netx;
    }
    createloop(head, 4);
    temp = head;
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->netx;
    }
}