#include "main.h"
/**
 * free_grid - frees a 2d grid previously cretad
 * @grid: free prvious grid
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
