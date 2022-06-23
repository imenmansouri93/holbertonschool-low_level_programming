#include "main.h"
/**
 * 
 * 
 */
char *create_array(unsigned int size, char c)
{
	
char *arr;
arr = (char*)malloc(sizeof(char) * size);
if ( size == 0)
{
return(0);
}else
{
unsigned int i = 0;
for (i = 0; i <= size; i++)
{
    arr[i] = c;
}
}
 return (arr);
} 
