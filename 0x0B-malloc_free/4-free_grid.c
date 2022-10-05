#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: The 2 dim array to free
 * @heiht: The height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
