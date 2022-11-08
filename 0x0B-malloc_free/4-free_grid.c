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
	int *a = **alloc_grid(int width, int height);
	/* a - free */

	free(a);
	return (0);
}
