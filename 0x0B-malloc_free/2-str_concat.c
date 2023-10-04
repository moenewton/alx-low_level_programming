#include "main.h"
#include <stdlib.h>
/**
 * str_concat - strng conc
 * @s1: str 1
 * @s2: str 2
 * Return: conc s1,s2
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	char *copy;
	int size1 = 0;
	int size2 = 0;

	while (s1 != NULL && s1[size1])
	{
		size1++;
	}
	while (s2 != NULL && s2[size2])
	{
		size2++;
	}
	copy = malloc(size1 + size2 + 1);
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			copy[i] = s1[i];
		}
		else
		{
			copy[i] = s2[i - size1];
		}
	}
	return (copy);
}

