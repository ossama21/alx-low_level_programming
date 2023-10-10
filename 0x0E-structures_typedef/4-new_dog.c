#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog.
 * @name: naming
 * @age: age number
 * @owner: ownership
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;
dog_t *d;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
d->name = malloc(i *sizeof(d->name));
if (d->name == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (k = 0; k <= i; k++)
d->name[k] = name[k];
d->age = age;
d->owner = malloc(j *sizeof(d->owner));
if (d->owner == NULL)
{
free(d->owner);
free(d->name);
free(d);
return (NULL);
}
for (k = 0; k <= j; k++)
d->owner[k] = owner[k];
return (d);
}
