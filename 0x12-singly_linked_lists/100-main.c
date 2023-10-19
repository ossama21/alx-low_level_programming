#include <stdio.h>

/**
 * print_mess - Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 */
void print_mess(void) __attribute__((constructor));

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
