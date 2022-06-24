#include "main.h"
/**
 * free_grid - frees a two dimensional grid
 * @grid: is a two dimensional grid
 * @height: is a height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
