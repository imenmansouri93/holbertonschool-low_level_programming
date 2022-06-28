#include "main.h"
/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int s1_length = strlen(s1);
char *s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s = malloc(sizeof(char) * (s1_length + 1));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i <= s1_length; i++)
s[i] = s1[i];
for (i = 0; s2[i] && (unsigned int)i < n; i++)
s[s1_length + i] = s2[i];
return (s);
}
