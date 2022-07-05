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
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char *const format, ...);
void print_char(va_list arg)
{
    char letter;
    letter = va_arg(arg, int);
    printf("%c", letter);
}
/**
 *
 *
 */
void print_int(va_list arg)
{
    int num;
    num = va_arg(arg, int);
    printf("%i", num);
}
/**
 *
 *
 */
void print_float(va_list arg)
{
    float num;
    num = va_arg(arg, double);
    printf("%f", num);
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
    {
        printf("(nil)");
    }
    printf("%s", str);
}
/**
 *
 *
 */
void print_all(const char *const format, ...)
{
    va_list args;
    unsigned int i = 0;
    unsigned int j = 0;
    char *separator = "";
    format_t typeformat[] = {
        {"c", print_char},
        {"i", print_int},
        {"d", print_float},
        {"s", print_string},
    };
    va_start(args, format);
    while (format && (*(format +i )))
    {
        j = 0;
        while (j < 4 && (*(format + i) != *(typeformat[j].type)))
            j++;
        if (j < 4)
        {
            printf("%s", separator);
            typeformat[j].f(args);
            separator = ", ";
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
#endif