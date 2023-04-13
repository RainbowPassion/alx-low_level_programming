#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* alloc_grid -  returns a pointer to a 2 dimensional array of integers.
* @width: array (columns)
* @height: array (rows)
* Return: grid
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width *  sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

return (grid);
}
