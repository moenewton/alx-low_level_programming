#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fn conc string
 * @grid: grid range
 * @height: height range
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
