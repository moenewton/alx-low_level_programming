#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array
 * @size: arrray size
 * @c: char 
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
        unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	i = 0;
	for (; i < size; i++)
		str[i] = c;
	return (str);
}
