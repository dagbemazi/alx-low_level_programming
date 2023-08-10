#include <stdlib.h>

/**
  * free_grid - frees a 2D grid of integers.
  * @grid: pointer to grid to be freed
  * @height: height of grid
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
		free(grid[i]);

	free(grid);
}
