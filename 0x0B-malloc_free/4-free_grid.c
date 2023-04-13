#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* free_grid - frees 2dimensional grid previously created by alloc_grid function
* @grid: ponter
* @height: array (rows)
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
