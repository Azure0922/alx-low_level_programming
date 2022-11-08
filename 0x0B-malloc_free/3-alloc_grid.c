#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 *
 * @width: int
 * @height: int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	width = 0;
	height = 0;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	else
	{
		int **grid = malloc(sizeof(int) * width * height);

		return (grid);
	}
	return (0);
}
