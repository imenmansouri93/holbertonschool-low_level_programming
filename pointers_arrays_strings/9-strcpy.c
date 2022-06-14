#include "main.h"
/**
* _strcpy - function that copies the string pointed to by source
* @dest:  destribution value
* @src: source value
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
