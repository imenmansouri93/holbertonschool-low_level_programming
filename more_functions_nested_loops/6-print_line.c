#include "main.h"

/**
 *  print_line - function that draws a straight line in the terminal.
 * @n: number > 0
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
