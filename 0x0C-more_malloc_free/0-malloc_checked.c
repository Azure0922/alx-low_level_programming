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
	b = malloc(sizeof(b));

	if (b == NULL)
	{
		printf("98\n");
		exit(1);
	}
}
