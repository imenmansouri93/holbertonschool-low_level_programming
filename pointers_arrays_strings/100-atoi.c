#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s:  string
 * Return: integer
 */
int _atoi(char *s)
{
int res = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
res = res + s[i] - '0';
}
return (res);
}
