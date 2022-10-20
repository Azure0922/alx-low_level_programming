#include <unistd.h>

/**
 * print_square - square
 *
 * @size: number
 * Return: sq
 */
void print_square(int size)
{
	if (size <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
		int y = 1, x;
		/* y - line */

		while (y <= size)
		{
			x = 1;

			while (x <= size)
			{
				write(1, "#", 1);
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
	}
}
