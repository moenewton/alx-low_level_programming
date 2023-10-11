#include "main.h"
/**
 * *malloc_checked - memory allocation
 * @b: bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}