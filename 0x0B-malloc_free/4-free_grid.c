#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated by alloc_grid.
 * @grid: Pointer to the 2D array of integers.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
{
return;
}

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
