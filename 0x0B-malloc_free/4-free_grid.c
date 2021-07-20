#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Clear 2D grid
 * @grid: Grid pointer
 * @height: height of the grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
