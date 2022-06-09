#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
