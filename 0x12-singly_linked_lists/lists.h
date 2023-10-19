#ifndef __HEADER__
#define __HEARDER__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;
}list_t;

/* Function prototypes */
int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
