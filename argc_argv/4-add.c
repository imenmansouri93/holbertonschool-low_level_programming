#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, j, l;
int sum = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
l = strlen(argv[i]);
for (j = 0; j < l; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
