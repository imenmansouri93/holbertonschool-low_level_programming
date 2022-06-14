#include "main.h"
/**
 * _strlen - Return the length of a string.
 * @s: string to count
 * Return: int
 **/

int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
