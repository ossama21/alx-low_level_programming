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
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
