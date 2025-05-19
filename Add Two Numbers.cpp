#include "ListNode.cpp"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int carry = 0;
    int val1 = 0;
    int val2 = 0;
    int sum;
    ListNode *result = new ListNode(0);
    ListNode *head = result;
    while (l1 || l2)
    {
        val1 = l1 ? l1->val : 0;
        val2 = l2 ? l2->val : 0;
        sum = val1 + val2 + carry;
        carry = 0;
        if (sum >= 10)
        {
            carry++;
            sum -= 10;
        }
        result->next = new ListNode(sum);
        result = result->next;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    if (carry)
        result->next = new ListNode(1);
    return head->next;
}

// mi primer problema nivel medio!!! es más largo que los fáciles pero igual de fácil jaja