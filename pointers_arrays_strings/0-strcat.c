#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int l = 0;
l = strlen(dest);
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
