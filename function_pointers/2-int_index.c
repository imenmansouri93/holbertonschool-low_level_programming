#ifndef INIT_INDEX_C
#define INIT_INDEX_C
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: compare to integer
 * Return:  returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
while (size > 0)
{
for (i = 0; i < size; i++)
if ((*cmp)(array[i]))
return (i);
}
return (-1);
}
#endif
