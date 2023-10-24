#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *next, *h;

	if (head == NULL)
		return;
	h = *head;
	while (h != NULL)
	{
		next = (h)->next;
		free(h);
		h = next;
	}
}
