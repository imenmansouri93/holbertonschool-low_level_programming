#include "main.h"
/**
 * *_strdup - function that returns a ptr to a newly allocated space in memory
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
char *src;
if (str == NULL)
{
return (NULL);
}
else
src = (char *)malloc(strlen(str) + 1 * sizeof(char));
{
if (src == NULL)
{
return (NULL);
}
else
{
strcpy(src, str);
}
}
return (src);
}
