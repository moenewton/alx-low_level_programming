#include <stdio.h>
/**
 * main - Prints all combos init
 *
 * Return: 0.
 */
int main(void)
{
	int num 1;
	
	int num 2;

	for (num 1 = 0; num 1 < 9; num 1++)
	{
		for (num 2 = num 1 + 1; num 2 < 10; num 2 ++)
		{
			putchar((num 1 % 10) + '0');
			putchar((num 2 % 10) + '0');

			if (num 1 == 8 && num 2 == 9)
			{
				continue;
		}
			putchar(',');
			putchar(' ');
		}
	}
