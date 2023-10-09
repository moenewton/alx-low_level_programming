#include <stdlib.h>
#include "main.h"
/**
 * *array_range - another array int
 * @min: minimum
 * @max: maximum 
 * Return: pointer 
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		s[i] = min + i;
	}
	return (s);
}
