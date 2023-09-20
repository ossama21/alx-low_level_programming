#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to.
 * @src: The source string to append from.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
        dest_len++;

    // Append characters from src to dest
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        i++;
        dest_len++;
    }

    // Add a null terminator at the end
    dest[dest_len] = '\0';

    return (dest);
}
