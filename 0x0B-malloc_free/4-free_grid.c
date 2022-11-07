#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free two dimensional array
 * @grid: array to free
 * @height: ksksksk
 * Return: ksksksk
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(arr);
}
