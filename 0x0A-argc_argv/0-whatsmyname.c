#include "main.h"
#include <stdio.h>
/**
 * main - program prints name + new line
 * @argc: arg inp count
 * @argv: argument stores string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
