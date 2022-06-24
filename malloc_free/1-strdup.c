#include "main.h"
/**
 * *_strdup - function that returns newly allocated
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
return (NULL);
else
strcpy(src, str);
}
return (src);
}
