#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Returns the number of elements freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int diff;
	listint_t *current;

	if (*h == NULL || h == NULL)
		return (0);

	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
