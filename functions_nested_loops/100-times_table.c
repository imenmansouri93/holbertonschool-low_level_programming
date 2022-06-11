#include "main.h"
#include <stdio.h>

/**
 *print_times_table - function that prints the n times table
 *@n:natural number
 *
 */
void print_times_table(int n)
{
int i;
int j;
for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
if (j != n)
{
printf("%d,  ",  i * j);
}
else
{
printf("%d", i * j);
}
}
printf("\n");
}
}
