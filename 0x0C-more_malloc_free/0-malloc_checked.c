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
		printf("98\n");
		exit(1);
	}
	return (0);
}
