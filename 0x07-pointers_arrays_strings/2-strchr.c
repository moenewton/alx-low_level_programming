#include "main.h"
#include <stdio.h>

/**
 * *_strchr - char
 * @s: string 
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
