#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid array
 * @grid: input pointer
 * @height: height of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
