#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned integer
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
int *p;
p = (int *)malloc(b * sizeof(int));
if (p == NULL)
{
exit(98);
}
return (p);
}
