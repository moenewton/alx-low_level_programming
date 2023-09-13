# include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 10)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
