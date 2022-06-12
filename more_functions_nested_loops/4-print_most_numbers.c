#include "main.h"

/**
 * print_most_numbers -function that prints the numbers not print 2 & 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
putchar('\n');
}
