#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - reallocate space memory.
 *@grid: grid of integer to reallocate
 *@height: size of grid
 *
 */



void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		free(grid);
	}
}
