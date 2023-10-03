#include "main.h"

/**
 * _isalpha - alphabet character check
 * @c: check character
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
