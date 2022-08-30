#include "search_algos.h"
/**
 * @brief
 * 
 */
void print_array(int *array, size_t low, size_t high)
{
size_t i;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
if (i != low)
printf(", %i", array[i]);
else
printf("%i", array[i]);
}
printf ("\n");
}

int binary_search(int *array, size_t size, int value)
{
size_t  begin = 0, md, end = size -  1;
if (array == NULL)
{
return (-1);
}
while (begin <= end)
{
md = (begin + end)/2;
print_array(array, begin, end);
if (array[md] < value)
begin = md + 1;
else if (array[md] > value)
end = md - 1;
else 
return (md);
}
return (1);
}
