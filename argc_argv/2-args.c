#include <stdio.h>
/**
 * main - function print all arguments
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])    /* command line Arguments */
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);        /* Printing the string */
}
return (0);
}
