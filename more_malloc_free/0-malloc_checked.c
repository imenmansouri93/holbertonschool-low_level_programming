#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned integer
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
unsigned int  p = (unsigned int *)malloc(b * sizeof(unsigned int));
if (p == NULL)
{
exit(98);
}
return (0);
}
