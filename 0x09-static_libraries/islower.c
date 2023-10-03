#include "main.h"

/**
 * _islower - check lowercase
 * @c: charac
 * Return: 1 , 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
