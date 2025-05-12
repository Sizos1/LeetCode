#include "ListNode.cpp"

// T O(n) & M O(1) (creo que es así jasjaj)

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// ahora la solución recursiva que la verdad tuve que buscar porque no se me ocurrió jajaja

ListNode *reverseList(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}