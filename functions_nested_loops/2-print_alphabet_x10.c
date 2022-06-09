#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)

{

int icount;
char ch;
for (icount = 0; icount < 10; icount++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
