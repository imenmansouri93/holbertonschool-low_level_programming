#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: check digit
 * Return: 1 if c is a digit els 0
 */

int _isdigit(int c)
{
for (c = 0; c < 9; c++)
if (isdigit(c))
{
return (1);
}
return (0);
}
