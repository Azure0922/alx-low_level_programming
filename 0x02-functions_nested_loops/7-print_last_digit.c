#include <unistd.h>
#include <stdio.h>

/**
 * print_last_digit - check the code
 *
 * @n: integer
 * Return: value
 */
int print_last_digit(int n)
{
	if (n = '0')
	{
		printf("%d%d", n, n);
	}
	else if (n >= '1' && n <= '9')
	{
		printf("%d%d", n, n);
	}
	else if (n > '9')
	{
		int v;

		v = n % 10;
		/* v - remainder */

		printf("%d%d", v, v);
	}
	else if (n < '0')
	{
		int j, k;
		/**
		 *  j - int
		 *  k - rem
		 */

		j = n * -1;

		k = j % 10;

		printf("%d%d", k, k);
	}
	return (0);
}
