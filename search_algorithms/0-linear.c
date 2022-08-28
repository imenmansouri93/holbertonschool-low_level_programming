#include "search_algos.h"
/**
 * @brief
 * 
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if(array[i] == value && array != NULL)
return (i);
}
return (-1);
}