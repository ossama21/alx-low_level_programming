#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers,separated by a specified string,& a new line
 * @separator:The string to be printed between numbers(or NULL if no separator)
 * @n: The number of integers to print.
 * @...: Variable number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
