#include "main.h"
/**
 * isPrime - check prime number
 * @a: int
 * @i: int
 * Return: 0 if n not prime else 1
 */
int isPrime(int a, int i)
{
if (i == 1)
{
return (1);
}
else
{
if (a % i == 0)
return (0);
else
return (isPrime(a, i - 1));
}
}
/**
 * is_prime_number- return the input int is a prime num, else return 0.
 * @n: int
 * Return: 1 if the input is a prime number else 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (isPrime(n, 2));
}
