#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  function frees a 2 dimsl grid created by your alloc_grid.
 * @grid: arr
 * @height: int
 * Return: ..
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
