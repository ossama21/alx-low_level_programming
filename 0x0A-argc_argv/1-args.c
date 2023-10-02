#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into the main
 * @argc: Number of command arguments
 * @argv: Array name
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
