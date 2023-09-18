#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: pointer two
 * @b: pointer one
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
