#include <iostream>
#include "ListNode"

using namespace std;

bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

// aquí tocó usar un algoritmo llamado Floyd's Cycle Detection Algorithm
//  resumidamente usa dos punteros. Uno avanza una posición y el otro dos posiciones.
//  Si hay un ciclo, el puntero rápido alcanzará al puntero lento.