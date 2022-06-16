#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: unsigned integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
char  *p = s;
while (n--)
{
*p++ = (unsigned char) b;
}
return (s);
}
