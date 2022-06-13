#include "main.h"
/**
 * swap_int -  function that swaps the values
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int t;
	*a = 98;
	*b = 42;
	t = *a;
	*a = *b;
	*b = t;
}
