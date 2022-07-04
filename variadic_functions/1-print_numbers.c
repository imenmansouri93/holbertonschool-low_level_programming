#ifndef PRINT_NUMBERS_C
#define PRINT_NUMBERS_C
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * 
 * 
 * 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list al;
unsigned int i;
va_start(al, n);
for (i  = 0; i<n; i++)
{
printf("%d", va_arg(al, int));
if (i != (n-1) && separator != NULL)
printf("%s", separator);
}
 printf ("\n");
va_end(al);
}
#endif