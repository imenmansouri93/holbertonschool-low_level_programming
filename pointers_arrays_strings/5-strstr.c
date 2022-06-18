#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: chaine de character
 * @needle: chaine de character
 * Return: pointer to  the located substring, or NULL if is not found
 */
char *_strstr(char *haystack, char *needle)
{
int b, i = 0, j = 0;
while (*(haystack + i) != '\0')
{
if (*(needle + j) == '\0')
break;
else if (*(haystack + i) == *(needle + j))
{
i++;
j++;
b = 1;
}
else
{
i++;
b = 0;
j = 0;
}
}
{
if (b == 0)
return ((char *)NULL);
else if (b == 1)
return (haystack + i - j);
}
return ('\0');
}
