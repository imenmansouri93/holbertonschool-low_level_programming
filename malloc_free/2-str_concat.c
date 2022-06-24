#include "main.h"
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
char *rtn = malloc(strlen(s1) + strlen(s2) + 1);
int p, q = 0;
if (*s1 == '\0' || *s2 == '\0')
{
return (NULL);
}
else
{
for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p)
++q;
for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p)
++q;
}
return (rtn);
free(rtn);
}
