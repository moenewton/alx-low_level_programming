#include "main.h"
/**
 * _strpbrk - function init
 * @s: string
 * @accept: string 2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
