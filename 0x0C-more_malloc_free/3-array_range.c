#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 *
 * @min: int
 * @max: int
 * Return: 0
 */
int *array_range(int min, int max)
{
	int n, *k[n];
	/** 
	 * n - int
	 * k - int
	 */

	n = max - min + 2;
	k = (int *)malloc(sizeof(*k));

	if ((k == NULL) || (min > max))
	{
		return (NULL);
	}
	else
	{
		int i;
		/* i - int */

		for (i = min; i <= max; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	free(k);
	return (0);
}
