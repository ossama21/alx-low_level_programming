#include "lists.h"

void print_message(void) __attribute__((constructor));

/**
 * print_message - Print specified message before main
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
