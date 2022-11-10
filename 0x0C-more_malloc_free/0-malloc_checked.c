#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 *
 * @b: uint
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *c = (int *)malloc(sizeof(b));
	/* c - int */

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
