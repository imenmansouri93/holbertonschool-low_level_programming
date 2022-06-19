#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-function that prints the sum of the two dgnls of matrix.
 * @a: matrice
 * @size: size
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum1, sum2  = 0;
for (i = 0; i < size; i++)
for(j = 0; j < size; j++)
{
if (i == j)
sum1 += a[(size + 1) * i];
if ((i + j) == (size - 1))
sum2 += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
