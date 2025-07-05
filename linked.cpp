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

    temp = head;
    while (temp != nullptr)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}