#include "search_algos.h"
/**
 *  linear_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search
 * Return: value
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value && array != NULL)
return (i);
}
return (-1);
}
