#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *alloc_grid - return pointer to 2d array of ints
* @width: the width
* @height: the...
* Return: grid
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (h = 0; h < height; h++)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
