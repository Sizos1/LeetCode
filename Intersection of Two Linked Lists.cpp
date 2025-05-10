#include <iostream>
#include "ListNode.cpp"

using namespace std;

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        a = a ? a->next : headB;
        b = b ? b->next : headA;
    }

    return a;
}

// No hay mucho que explicar aquí, es un algoritmo que usa dos punteros. Me tocó buscarlo
// La idea es que cuando acabe una lista, el puntero se mueve a la otra lista.
// Al final ambos punteros estarán en el mismo nodo o en nullptr si no hay intersección.