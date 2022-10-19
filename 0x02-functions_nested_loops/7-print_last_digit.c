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
		return (0);
		write(1, "0", 1);
	}
	else if (n >= '1' && n <= '9')
	{
		return (n);
		write(1, &n, sizeof(n));
	}
	else if (n > '9')
	{
		int v;

		v = n % 10;
		/* v - remainder */

		return (v);
		write(1, &v, sizeof(v));
	}
	else if (n < '0')
	{
		return (n * -1);
		write(1, &j, sizeof(j));
}
