#include <unistd.h>

/**
 * print_last_digit - check the code
 * n - integer
 *
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
		write(1, &n, 1);
	}
	else if (n > '9')
	{
		int v;
		v = n % 10;
		/* v - remainder */

		write(1, &v, 1);
	}		
	else if (n < '0')
	{
		int j, k;
		j = '-1';
		k = n * j;
		/**
		 * j - neg 
		 * k - abs
		 */

		write(1, &k, 1);
	}
	return (v);
}
