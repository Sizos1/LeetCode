#include "ListNode.cpp"

ListNode *removeElements(ListNode *head, int val)
{
    if (!head)
    {
        return nullptr;
    }

    if (head->val == val)
    {
        ListNode *newHead = removeElements(head->next, val);
        return newHead;
    }
    head->next = removeElements(head->next, val);
    return head;
}

int main()
{
    return 0;
}