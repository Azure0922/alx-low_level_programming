#include <unistd.h>
#include <stdio.h>

/**
 * print_array - function
 *
 * @a: array
 * @n: int
 * Return: nil
 */
void print_array(int *a, int n)
{
	int i = 0;
	/* i - ount */

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
