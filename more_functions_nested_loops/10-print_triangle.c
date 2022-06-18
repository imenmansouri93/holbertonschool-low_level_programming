#include "main.h"

/**
 *  print_triangle - function function that prints a triangle.
 * @size: number > 0
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (j = 0; j <= size; j++)
{
for (i = size - j; i > 0; i--)
_putchar(' ');
for (i = 0; i < j; i++)
_putchar('#');
if (j == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
