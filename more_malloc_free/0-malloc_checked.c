#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned integer
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
int *p;
p = (int *)malloc(b * sizeof(unsigned int));
if (p == NULL && b  > 0)
{
exit(98);
}
free(p);
return (p);
}
