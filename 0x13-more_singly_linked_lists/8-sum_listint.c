#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: the sum of data of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
