#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array of integers, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid = (int **)malloc(height * sizeof(int *));
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}

