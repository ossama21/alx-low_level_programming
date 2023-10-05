#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* **alloc_grid - Creates a two dimensional array of ints
*
* @width: Width of the ma_tr_ix
*
* @height: Height of the ma_tr_ix
*
* Return: Pointer to the created ma_tr_ix (Success)
* or NULL (Error)
*/

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (height <= 0 || width <= 0)
return (NULL);

arr = (int **) malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= i; j++)
free(arr[j]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
