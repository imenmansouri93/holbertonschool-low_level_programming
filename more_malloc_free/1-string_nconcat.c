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
int i;
int s1_length = strlen(s1);
int s2_length = strlen(s2);
char *s;
int size = s1_length + s2_length + 1;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s = malloc(sizeof(size + 1));
if (s == NULL)
{
return (NULL);
}
if (n >= (unsigned int)s2_length)
{
s[s1_length] = *s2;
}
for (i = 0; i <= s1_length; i++)
s[i] = s1[i];
for (i = 0; s2[i] && (unsigned int)i < n; i++)
s[s1_length + i] = s2[i];
return (s);
}
