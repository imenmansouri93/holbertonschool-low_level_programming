#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned number
 * @size: size of array
 * Return:  pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
arr = malloc(nmemb * size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < (size * nmemb); i++)
{
arr[i] = 0;
}
return (arr);
}
