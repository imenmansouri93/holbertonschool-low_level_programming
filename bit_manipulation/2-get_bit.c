#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: ...
 * @index: ...
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
int k;
if (index > 32)
return (-1);
k = n >> index;
if (k & 1)
return (1);
return (0);
}
