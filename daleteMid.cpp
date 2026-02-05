#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = nullptr;
    }
};
ListNode *deleteMiddle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *temp = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    delete slow;
    while (temp != nullptr && temp->next != nullptr)
    {
        return temp->val;
        temp = temp->next;
    }
}
int main()
{
}