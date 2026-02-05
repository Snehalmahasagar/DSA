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
int searcch(Node *&head, int val)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        /* code */
        if (temp->data == val)
        {
            cout << "the element is present: " << val << endl;
            return 1;
        }
        temp = temp->next;
    }
    cout << val << " " << "this val is absent";
    return 0;
}

int main()
{
    Node *head = new Node(1);
    int n = 5;
    Node *temp = head;
    for (int i = 2; i <= n; i++)
    {
        temp->next = new Node(i);
        temp = temp->next;
    }
    searcch(head, 3);
    temp = head;
    int cnt = 0;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    cout << endl;
    cout << cnt;
}