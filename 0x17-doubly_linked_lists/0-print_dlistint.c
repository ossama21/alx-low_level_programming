#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *current = h;

	while (current != NULL)
	{
		printf("-> %d", current->n);
		nodes++;
		current = current->next;
	}

	return (nodesi);
}
