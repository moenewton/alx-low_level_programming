#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument
 * @argc: array number
 * @argv: argument array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
