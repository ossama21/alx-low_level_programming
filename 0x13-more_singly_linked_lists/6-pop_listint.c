#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: A pointer to a pointer to the head of the list.
 * Return: The data (n) of the deleted head node,
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next_node;

	return (data);
}
