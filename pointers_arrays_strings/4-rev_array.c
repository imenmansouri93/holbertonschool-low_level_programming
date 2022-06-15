#include "main.h"
/**
 * reverse_array - function reverses the content of an array of integers
 * @a: element of the array
 * @n: number of element of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int *first = a;
int *last = a + n - 1;
while ((first < last))
{
int tmp = *first;
*first = *last;
*last  = tmp;
first++;
last--;
}
}
