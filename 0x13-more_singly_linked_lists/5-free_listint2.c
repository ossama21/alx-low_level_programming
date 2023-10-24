#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: the list 
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

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
