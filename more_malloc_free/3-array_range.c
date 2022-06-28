#include "main.h"
/**
 * 
 * 
 */
int *array_range(int min, int max)
{  
    int i;
    int *arr;
    if (min > max)
    {
        return (NULL);
    }
arr = malloc (sizeof(int) * (max - min) + sizeof(int));
    if (arr == NULL)
    {
        return (NULL);
    }
for ( i = 0; i <= max; i++)
{
    arr[i] = min;
    min ++;
}
return (arr);
}
