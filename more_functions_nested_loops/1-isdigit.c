#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: check digit
 * Return: 1 if c is a digit els 0
 */

int _isdigit(int c)
{
for (c = 32; c < 126; c++)
if (isdigit(c) == 0)
{
return (1);
}
return (0);
}
