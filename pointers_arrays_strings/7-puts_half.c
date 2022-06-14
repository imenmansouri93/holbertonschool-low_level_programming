#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: half of a string
 */
void puts_half(char *str)
{
int  n, i;
int l = 0;
l = strlen(str);
if (l % 2 != 0)
{
n = ((l - 1) / 2);
n++;
}
else
{
n = l / 2;
}
for (i = n; i < l; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
