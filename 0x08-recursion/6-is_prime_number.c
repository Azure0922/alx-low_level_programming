#include <stdio.h>
#include<string.h>
#include <unistd.h>

/**
 * is_prime_number - function
 *
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if ((n == 0 || n == 1))
	{
		return (0);
	}
	else
	{
		int i, j;
		/**
		 * i - int
		 * j - int 2
		 */

		j = n / 2;

		i = 2;

		while (i <= j)
		{
			if (n % i != 0)
			{
				return (1);
			}
			else if (n % i == 0)
			{
				return (0);
			}
			++i;
		}
	}
	return (0);
}
