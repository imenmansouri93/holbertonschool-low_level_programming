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
unsigned int s1_length;
char *s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_length = strlen(s1);
s = malloc(sizeof(char) * (s1_length + 1));
if (s == NULL)
return (NULL);
s1_length = 0;
for (i = 0; s1[i]; i++)
s[s1_length + i] = s1[i];
for (i = 0; s2[i] && i < n; i++)
s[s1_length + i] = s2[i];
return (s);
}
