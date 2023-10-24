#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
