#include "main.h"
/**
 * **alloc_grid-function that returns a pointer to a 2 dim arr of int.
 * @width: int
 * @height: int
 * Return: pointer to 2- D array
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **arr;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = (int **)malloc(height * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
return (NULL);
}
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
arr[j][k]  = 0;
}
return (arr);
}
