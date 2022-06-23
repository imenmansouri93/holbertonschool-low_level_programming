#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - function print all arguments
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x1 = 0, x2 = 0;
if (argc == 3)
{
x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
printf(" %d\n", x1 *x2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
