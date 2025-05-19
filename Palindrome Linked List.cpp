#include "ListNode.cpp"

bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = nullptr;
    ListNode *next = nullptr;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    while (slow->next)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }
    slow->next = prev;
    fast = head;
    while (slow && fast)
    {
        if (slow->val != fast->val)
            return false;
        slow = slow->next;
        fast = fast->next;
    }
    return true;
}

// muy fácil zzz y cumplí con el reto hp que decían de espacio constante y tiempo lineal.