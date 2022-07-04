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
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
