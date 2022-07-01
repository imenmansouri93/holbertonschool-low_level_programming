#ifndef ARRAY_ITERATOR_C
#define ARRAY_ITERATOR_C
#include "function_pointers.h"
/**
 * array_iterator - that executes functiongiven as a parameter elmnt of an arr.
 * @array: integer array
 * @size: size of array
 * @action: return element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
#endif
