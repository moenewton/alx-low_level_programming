#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: character
 *
 * Return: 1 if true, -1 if no
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
