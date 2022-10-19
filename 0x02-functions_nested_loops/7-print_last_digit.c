#include <unistd.h>

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
	}
	else if (n >= '1' && n <= '9')
	{
		write(1, &n, sizeof(n));
	}
	else if (n > '9')
	{
		int v;
		v = n % 10;
		/* v - remainder */

		write(1, &v, sizeof(v));
	}		
	else if (n < '0')
	{
		int j = n*-1;
		/* j - negate */

		write(1, &j, sizeof(j));
	}
	return (0);
}
