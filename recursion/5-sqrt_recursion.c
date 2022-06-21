#include "main.h"
#include <stdio.h>

/**
 * isqrt_rec-function that calculate a square number
 * @k: int
 * @n: int
 * Return: sqrt (n)
 */
int isqrt_rec(int k, int n)
{
int next_k = (k + n / k) / 2;
if (k * k <= n && (k + 1) * (k + 1) > n)
return (k);
else
return (isqrt_rec(next_k, n));
}
/**
* _sqrt_recursion-function that returns the natural square root of a number
* @n:  int
* Return: -1 if n does not have a natural square root else sqrt (n)
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (isqrt_rec(1, n));
}
