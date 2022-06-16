#include "main.h"
/**
* _strchr - function that locates a character in a string.
* @s: char
* @c: char
* Return: s
*/
char *_strchr(char *s, char c)
{
while (*s != (char) c)
if (!*s++)
{
return (NULL);
}
return ((char *)s);
}
