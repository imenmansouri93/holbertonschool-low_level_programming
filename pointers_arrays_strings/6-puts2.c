#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: string
 *  Return: print str
 */
void puts2(char *str)
{
int i, l;
l = strlen(str);
for (i = 0; i < l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
