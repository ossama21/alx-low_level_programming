#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list - singgly lenked list
 * @str: string
 * @len: length of the string
 * @next: Points to the next node
 *
 * Description: Structure
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;


int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
