#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - func
 *
 * @array: char
 * @size: int
 * @action: pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(array);

	int i;
	/* i - count */

	for (i = 0; i < size; i++)
	{
		printf("%d\n", atoi(array[i]));
	}
}
