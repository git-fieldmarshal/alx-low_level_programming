#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
