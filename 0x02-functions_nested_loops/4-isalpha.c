# include "main.h"
/**
* _isalpha - check for alphabet
* Return: 1
*/
int _isalpha(int x)
{
	if (x >=65  && x <= 97) || (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
