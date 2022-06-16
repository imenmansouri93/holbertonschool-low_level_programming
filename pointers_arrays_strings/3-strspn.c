#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: the number of bytes s which consist only of bytes from accep
 */
unsigned int _strspn(char *s, char *accept)
{
size_t n;
char *p;
for (n = 0; *s; s++, n++)
{
for (p = accept; *p && *p != *s; p++)
;
if (!*p)
break;
}
return (n);
}
