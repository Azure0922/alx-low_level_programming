#include <unistd.h>

/**
 * print_line - lines
 *
 * @n: num
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
		int i = 1;
		/* i - number */

		for (i = 1; i <= n; i++)
		{
			write(1, "_", 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
