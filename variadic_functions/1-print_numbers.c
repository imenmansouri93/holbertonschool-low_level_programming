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
int A = 0;
va_start(al, n);
for (i  = 0; i<n; i++)
if (separator != NULL)
{
A = va_arg(al, int);
printf("%d %s", A, separator);
}
va_end(al);
 printf ("\n");
}
#endif