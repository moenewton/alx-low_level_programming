#include "main.h"
/**
 * _abs - absolute value calc
 * Return: Absolute value
 */
int _abs(int x)
{
	if (x < 0)
	{
		int val;
		val = x * -1;
		return (val);
	}
	return (x);
}
