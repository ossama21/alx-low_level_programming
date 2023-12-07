#include "lists.h"

/**
 * dlistint_len - count the num of nodes in linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *head = h;

	if (h == NULL)
		return (0);

	while (head != NULL)
	{
		len++;
		head = head->next;
	}

	return (len);
}
