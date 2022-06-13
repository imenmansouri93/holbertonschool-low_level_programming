#include "main.h"
/**
 * _strlen - function return the length of a string.
 * @s: string
 * Return- C
 *
 */

int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
