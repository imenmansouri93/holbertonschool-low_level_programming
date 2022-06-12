#include "main.h"

/**
 *  print_line - function that draws a straight line in the terminal.
 * @n: number > 0
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int i = 0;
int j = 0;
for (i = 0; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}