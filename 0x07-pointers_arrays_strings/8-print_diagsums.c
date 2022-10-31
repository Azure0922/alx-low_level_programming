#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * print_diagsums - function
 *
 * @a: char
 * @size: char
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
		c = 0;
		
		while (c < 2)
		{
			while (b != c)
			{
				int r;
				/* r - sum */

				r = b + c;
			}
			c++;
		}
	}
}

