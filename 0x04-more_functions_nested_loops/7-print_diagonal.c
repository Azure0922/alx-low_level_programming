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
		int i = 1;
		/* i - line */

		for (i = 1; i <= n; i++)
		{
			write(1, "\\\n", 2);
		}
	}
	retutn (0);
}
