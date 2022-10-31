#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * print_diagsums - function
 *
 * @a: int
 * @size: int
 * Return: nil
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	/**
	 * b - int
	 * c -int
	 */

	for (b = 0; b < 2; b++)
	{
		for (c =0; c < 2; c++)
		{
			printf("%d", (a[b][c] + a[c][b]));
		}
	}
}
