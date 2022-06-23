#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char  *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
