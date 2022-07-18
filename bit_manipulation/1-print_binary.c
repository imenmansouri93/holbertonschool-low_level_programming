#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: unsigned int
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
int i, k;
int print = 0;
for (i = 63; i >= 0; i--)
{
k = n >> i;
if (k & 1)
{
print = 1;
putchar('1');
}
else if (print == 1)
putchar('0');
}
}
