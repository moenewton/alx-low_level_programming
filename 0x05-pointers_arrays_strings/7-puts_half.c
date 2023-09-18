#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int x, a, i;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (i = x / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (x % 2)
	{
		for (a = (x - 1) / 2; a < x - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
