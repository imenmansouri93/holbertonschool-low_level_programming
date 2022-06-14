#include "main.h"
/**
* print_array - function that prints n elements of an array of integers
* @a : element of an array
* @n : number of elements of the array
* Return : element of an array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if  (a[i] == a[n])
break;
printf("%d, ", a[i]);
if (a[i] == a[n - 1])
{
printf("%d", a[i]);
}
}
printf("\n");
}
