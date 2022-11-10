#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 *
 * @nmemb: int
 * @size: uint
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *b;
	/* b  - int */

	b = (int *)malloc(size * sizeof(int));

	if (b == NULL)
	{
		return (NULL);
	}
	else if ((nmemb = 0) || (size == 0))
	{
		return (NULL);
	}
	return (0);
}
