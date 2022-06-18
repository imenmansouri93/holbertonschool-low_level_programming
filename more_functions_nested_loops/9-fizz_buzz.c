#include "main.h"
/**
 *main - function print multiple of the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i %  15) == 0)
{
printf("%d", i);
printf(" FizzBuzz ");
}
else if (i % 3 == 0)
{
printf(" Fuzz ");
}
else if (i % 5 == 0 )
{
printf(" Buzz ");
}else
{
	printf("%d ", i);
} 
}
printf("\n");
return (0);
}
