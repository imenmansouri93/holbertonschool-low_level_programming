#include "main.h"
/**
 * **alloc_grid-function that returns a pointer to a 2 dim arr of int.
 * @width: int
 * @height: int;
 * Return: array
 */
int **alloc_grid(int width, int height)
{
int i;
int **arr;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
arr = (int **)malloc(sizeof(int) * height);
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
}
return (arr);
}
