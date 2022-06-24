#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size  of the array
 * @c: character
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
if (size == 0)
{
return (0);
}
else
arr = (char *)malloc(sizeof(char) * size);
{
unsigned int i = 0;
for (i = 0; i <= size; i++)
{
arr[i] = c;
}
}
return (arr);
}
