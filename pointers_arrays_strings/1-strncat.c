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
l = strlen(dest);
for (i = 0; src[i] && i < n && i < n; i++)
dest[l++] = src[i];

return (dest);
}
