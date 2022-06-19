#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: the chessboard to be printed
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
int i, j;
while (a[i][8])
{
for (j = 0; j < 8; j++)
_putchar (a[i][j]);
_putchar('\n');
i++;
}
}
