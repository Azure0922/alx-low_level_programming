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
	if (n == '0')
	{
		write(1, "0", 1);
		return (0);
	}
	else if (n >= '1' && n <= '9')
	{
		printf("%d", n);
		return (n);
	}
	else if (n > '9')
	{
		int v;

		v = n % 10;
		/* v - remainder */

		printf("%d", v);
		return (v);
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

		printf("%d", k);
		return (k);
	}
	return (0);
}
