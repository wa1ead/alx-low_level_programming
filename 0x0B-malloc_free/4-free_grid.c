#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height dimension
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
