#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim, NULL on fail
 */
int **alloc_grid(int width, int height)
{
	int **mm;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mm = malloc(sizeof(int *) * height);

	if (mm == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mm[x] = malloc(sizeof(int) * width);

		if (mm[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mm[x]);

			free(mm);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mm[x][y] = 0;
	}

	return (mm);
}
