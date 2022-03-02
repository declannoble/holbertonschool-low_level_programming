#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- return a pointer to a 2d array of integers
 * @height: row of integers
 * @width: column of integers
  * Return: null if width or height is 0 or negative
 * null if null byte in array
 * array if success
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	row = 0;
	while (row < height)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			row = 0;
			while (row < height)
			{
				free(grid[row]);
				row = row + 1;
			}
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col = col + 1;
		}
		row = row + 1;
	}

	return (grid);
}
