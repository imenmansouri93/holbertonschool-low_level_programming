#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: char
 * @accept: char
 * Return: the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, pos, flag = 0;
for (i = 0; s[i] != '\0'; i++)
;
pos = i;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 1; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
if (j <= pos)
{
pos = j;
flag = 1;
}
}
}
}
if (flag == 1)
{
return (&s[pos]);
}
else
{
return (NULL);
}
}
