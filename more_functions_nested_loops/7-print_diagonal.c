#include "main.h"

/**
 *  print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number > 0
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
while (i < n)
{
for (j = 1; j < i; j++)
if (j != 1)
{
_putchar(' ');
}
if (j == i)
{
_putchar('\\');
_putchar('\n');
}
i++;
}
else
_putchar('\n');
}
