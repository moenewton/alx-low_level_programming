#include <unistd.h>

/**
 * _putchar - char c
 * @c: The charac
 * Return: 1 and -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
