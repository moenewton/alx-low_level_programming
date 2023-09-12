#include <stdio.h>>
/**
* _putchar - my program
* Return: 1
* @a: character printed
*/
int _putchar(char a)
{
	return (write(1, &a, 1));
}
