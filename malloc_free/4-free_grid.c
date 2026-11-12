#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the grid (array of row addresses)
 * @height: number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
		return;
	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
