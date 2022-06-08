#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'q' && ch != 'e')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    return (0);
}
