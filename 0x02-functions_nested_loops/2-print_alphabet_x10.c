# include "main.h"
/**
* print_alphabet_10x - p alpahbet
* Return: void
*/
int print_alphabet_10x(void)
{
	char alpha;
	
	int x;
	
	x=0;
	
	while(x < 10)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
}
	putchar('/n');
	x++;
}
}
