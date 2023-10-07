#include <stdio.h>
#include "main.h"

/**
 * main - print numbers
 * @argc: arguments
 * @argv: array 
 *Return: 0
 */
int main(int argc, char const **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
