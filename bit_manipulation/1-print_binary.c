#include "main.h"
/**
 * print_binary
 * @n
 * Return:
 */
void print_binary(unsigned long int n)
{
    int i;
    unsigned long int k;
    int print = 0;
    for (i = 65; i >= 0; i--)
    {
        k = n >> i;
        if (k & 1)
        {
            putchar('1');
            print = 1;
        }
        else if (print == 1)
            putchar('0');
    }
}
