#include "main.h"
/**
 * print_binary 
 * @n
 * Return:
 */
void print_binary(unsigned long int n)
{
unsigned bit_mask = 0x8000;
while (bit_mask > 0)
{
if ((n & bit_mask) == 0)
printf("0");
else
printf("1");
bit_mask >>= 1;
}

}
