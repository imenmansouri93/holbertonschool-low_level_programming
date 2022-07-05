#ifndef PRINT_ALL_C
#define PRINT_ALL_C
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * 
 * 
 * 
 */

/**
 * 
 * 
 */
void print_all(const char * const format, ...)
{
va_list args;
format_t typeformat[] = {
{"c", print_char},
{"i", print_int},
{"d", print_float},
{"s", print_string},
{NULL, NULL},
};
unsigned  int i = 0;
unsigned int j = 0;
char *separator = "";
va_start(args, format);
while (format != NULL && format[i])
{
j = 0;
while (j < 5)
{
if (format[i] == *typeformat[j].type)
{
    printf("%s", separator);
typeformat[j].f(args);
separator = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}

void print_char(va_list arg)
{
va_arg(arg, int);
printf("%c", va_arg(arg, int));
}
/**
 * 
 * 
 */
void print_int(va_list arg)
{
    va_arg(arg, int);
    printf("%i",va_arg(arg, int));
}
/**
 * 
 * 
 */
void print_float(va_list arg)
{
    va_arg(arg, double);
    printf("%f", va_arg(arg, double));
}
/**
 * 
 * 
 */
void print_string(va_list arg)
{
char *str;
str = va_arg(arg, char *);
if (str == NULL)
printf("%s", "(nil)");
else
printf("%s", str);
}
/**
 * 
 * 
 */

#endif