#include "main.h"
/**
 *  * _strlen_recursion - gives the length of a string
 * @s: string
 * Return: length 
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l += _strlen_recursion(s + 1);
                l++
	}
	return (l);
}