#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: check string
 * @s2: check string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;
s1++;
s2++;
}
return (*s1 - *s2);
}
