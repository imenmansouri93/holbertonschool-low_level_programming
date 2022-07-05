#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * File - variadic_function.h
 * header file containing the functions_nested
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of int
 * Return: sum of int
 */
typedef struct typeformat
{
    char *type;
    void (*f)(va_list args);
}format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
#endif
