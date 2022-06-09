#include "main.h"
/*
 *main -prints the alphabet, in lowercase
 *
 *Return: Alaways 0
 */

void print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    putchar('\n');
    return (0);
}
