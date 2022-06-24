#include "main.h"
/**
 * *str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{

int p, q = 0;
char *rtn;
rtn = (char *)malloc(strlen(s1) + strlen(s2) + 1 * sizeof(char));
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p)
++q;
for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p)
++q;
rtn[q] = '\0';
return (rtn);
}
