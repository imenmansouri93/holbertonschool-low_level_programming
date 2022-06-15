#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0;
int i = 0;
l = strlen(src);
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for ( i = l; i < n; i++)
dest[i] = '\0';
return (dest);
}
