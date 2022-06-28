#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: array of integer
 */
int *array_range(int min, int max)
{
int i = 0;
int *arr;
if (min > max)
return (NULL);
arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (arr == NULL)
return (NULL);
while (min <= max)
{
arr[i] = min;
i++;
min++;
}
return (arr);
}
