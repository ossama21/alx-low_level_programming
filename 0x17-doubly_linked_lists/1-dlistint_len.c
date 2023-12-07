#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes = 0;
    dlistint_t *current = h;

    while (current != NULL)
    {
        nodes++;
        current = current->next;
    }

    return nodes;
}
