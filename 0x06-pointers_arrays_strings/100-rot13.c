#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int o;
	int h;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (o = 0; s[o] != '\0'; o++)
	{
		for (h = 0; h < 52; h++)
		{
			if (s[o] == data1[h])
			{
				s[o] = datarot[h];
				break;
			}
		}
	}
	return (s);
}
