#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements
 * @a: array 
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
		printf("\n");
}
