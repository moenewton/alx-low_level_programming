#include "main.h"
/**
 * puts2 - prints one char 
 * @str: string to print the chars f
 */
void puts2(char *str)
{
	int x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
