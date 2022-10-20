#include <unistd.h>

/**
 * print_diagonal - diagonal
 *
 * @n: integer
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		write(1, "\n", 1);
	}
	else
	{
		int i = 0;
		/* i - line */

		while  (i <= n)
		{
			write(1, " "
			write(1, "\\\n", 2);
		}
		i++;
	}
}
