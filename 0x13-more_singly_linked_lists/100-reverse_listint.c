#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list.
 * @head: linked list
 * Return: a pointer to first node of rreversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
