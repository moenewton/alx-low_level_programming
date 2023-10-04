#include <unistd.h>

/**
 * _putchar - writes char
 * @c: The character 
 * Return:  1
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
