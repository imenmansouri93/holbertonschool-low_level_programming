#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: half of a string
 */
void puts_half(char *str)
{
int  n;
int l = 0;
l = strlen(str);
if (l % 2 != 0)
{
_putchar(n = (l - 1) / 2);
n++;
}
else
{
n = l / 2;
}
for (; n < l; n++)
{
	_putchar(str[n]);
}
_putchar('\n');
}
