#include "3-calc.h"
/**
 * op_add - function that addition to integer
 * @a: integer
 * @b: integer
 * Return: sum of integer
 */
int op_add(int a, int b)
{
return (a  + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: int
 * @b: int
 * Return: sub of int
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: int
 * @b: int
 * Return:  mul of int
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: int
 * @b: int
 * Return: div of int
 */
int op_div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
printf("Error\n");
exit(100);
}
/**
* op_mod - returns the remainder of the division of a by b
* @a: int
* @b: int
* Return: remainder of the division
*/
int op_mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
