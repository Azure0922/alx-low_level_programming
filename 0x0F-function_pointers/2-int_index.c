#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - func
 *
 * @array: char
 * @size: int
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	cmp(array);

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		int i;
		/* i - count */

		for (i = 0; i < size; i++)
		{
			if (isdigit(array[i]))
			{
				printf("%d\n", atoi(array[i]));
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}
