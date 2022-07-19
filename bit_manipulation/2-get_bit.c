#include "main.h"
/**
 * @brief Get the bit object
 * 
 * @param n 
 * @param index 
 * @return int 
 */
int get_bit(unsigned long int n, unsigned int index)
{
int k;
if (index > 32)
return (-1);
k = n>> index;
if (k & 1)
return(1);
return(0);
}