#include "main.h"
/**
 * *_strdup - function that returns a ptr to a newly allocated space in memory
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
int len;
char *src;
len = strlen(str) + 1;
src = (char *)malloc(len *sizeof(char));
if (str == NULL)
{
return (NULL);
}
else
{
if (src ==  NULL)
return (1);
else
strcpy(src, str);
}
return (src);
}
