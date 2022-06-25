#include "main.h"
/**
 * **alloc_grid-function that returns a pointer to a 2 dim arr of int.
 * @width: int
 * @height: int
 * Return: pointer to 2- D array
 */
int **alloc_grid(int width, int height)
{
int i;
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
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
return (NULL);
}
}
return (arr);
}
