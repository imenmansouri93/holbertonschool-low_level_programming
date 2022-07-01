#ifndef PRINT_NAME_C
#define PRINT_NAME_C
#include "function_pointers.h"
/**
 * print_name -  function that prints a name.
 * @name: char
 * @f: print a name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
#endif
