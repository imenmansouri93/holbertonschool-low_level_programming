#ifndef PRINT_STRINGS_C
#define PRINT_STRINGS_C
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * 
 * 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list als;
unsigned int i;
char  *str;
va_start(als, n);
for (i = 0; i < n; i++)
{
str = va_arg(als, char *);
if (str == NULL)
printf("%s","(nil)");
else
printf("%s", str);
if (i != n-1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(als);
}
#endif