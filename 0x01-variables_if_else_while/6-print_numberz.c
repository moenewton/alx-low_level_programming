#include <stdio.h>
/**
 * main - code 5
 * Return: 0
 */
int main(void)
{
	int number;
	
	for (number = 0; number < 10; number ++)
	{
		putchar((number % 10) + '0')
	}
	putchar('\n');
}
