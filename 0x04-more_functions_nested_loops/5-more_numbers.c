#include "main.h"
/**
 * more_numbers - prints 
 */
void more_numbers(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
