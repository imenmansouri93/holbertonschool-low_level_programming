#include "main.h"
/**
 * **alloc_grid-function that returns a pointer to a 2 dim arr of int.
 * @width: int
 * @height: int
 * Return: pointer to 2- D array
 */
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **arr;
if (width <= 0 || height <= 0)
return (NULL);
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (l = i; l >= 0; l--)
{
free(arr[l]);
}
free(arr);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
arr[j][k]  = 0;
}
return (arr);
}
