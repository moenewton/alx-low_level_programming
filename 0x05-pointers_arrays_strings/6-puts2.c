#include "main.h"
/**
 * puts2 - prints 
 * @str: string to print charc
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; i < i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
