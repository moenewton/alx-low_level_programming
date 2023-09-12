# include "main.h"
/**
* print_alphabet_x10 - p alpahbet
* Return: void
*/
void print_alphabet_x10(void)
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
	_putchar('\n');
	x++;
}
}
