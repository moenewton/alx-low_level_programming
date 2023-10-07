#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c 
 * @c:Ther character 
 *Return: 1 and -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
