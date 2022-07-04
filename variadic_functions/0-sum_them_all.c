#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of int
 * Return: sum of int
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int s;
va_start(ap, n);
s = 0;
for (i = 0; i < n; i++)
{
s += va_arg(ap, int);
}
va_end(ap);
return (s);
}
