#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height);

/**
 * free_grid - function
 *
 * @grid: int
 * @height: int
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	void **a = grid;
	/* a - void */

	int i;
	/* i - int */

	for (i = 0; i < height; i++)
	{
		if (a[i])
		{
			free(a[i]);
		}
	}
	free(a);
	return (0);
}
