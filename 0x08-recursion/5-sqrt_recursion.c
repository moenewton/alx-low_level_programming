#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - square root of a number
 * @n: number to be used
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

