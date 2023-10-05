#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees the memory allocate for the grid
* @grid: grid to free.
* @height: height of the grid
*/

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
