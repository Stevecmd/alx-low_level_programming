#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: input for grid,
 * @height: input for height,
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int a
		;
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
