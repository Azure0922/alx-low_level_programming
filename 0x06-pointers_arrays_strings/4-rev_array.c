#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * reverse_array - function
 *
 * @a: int
 * @n: int
 * Return: nil
 */
void reverse_array(int *a, int n)
{
	int x = 0, y, z;
	/**
	 * x - count
	 * y - count
	 * z - store
	 */

	{
		for (x = 0, y = n - 1; x < y; x++, y--)
		{
			z = a[x];
			a[x] = a[y];
			a[y] = z;
		}
	}
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", a[x]);
		}
	}
}	
