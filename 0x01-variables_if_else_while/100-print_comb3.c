#include <stdio.h>
/**
 * main - Prints all combos init
 *
 * Return: 0.
 */
int main(void)
{
	int num1;
	
	int num 2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = digit1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
			{
				continue;
		}
			putchar(',');
			putchar(' ');
		}
	}
