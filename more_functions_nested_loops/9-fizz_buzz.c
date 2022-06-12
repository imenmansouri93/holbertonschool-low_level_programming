#include "main.h"
/**
 *main - function print multiple of the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i < 100; i++)
if (i %  3 == 0)
{
printf("%d", i);
printf(" Fizz ");
}
else if (i % 5 == 0)
{
printf("%d", i);
printf(" Buzz  ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("%d", i);
printf(" FizzBuzz  ");
}
printf("\n");
return (0);
}
