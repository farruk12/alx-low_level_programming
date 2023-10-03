#include <stdlib.h>
#include "main.h"

/**
 * free_grid - entry point
 * @grid: integer
 * @height: integer
 * Return: always (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		return;
	}

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
