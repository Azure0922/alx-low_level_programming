#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _sqrt_recursion - function
 *
 * @n: int
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		int i;
		/* i - int */

		i = 1;

		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			else
			{
				return (-1);
			}
			i++;
		}
	}
	else
	{
		return (-1);
	}
	return (0);
}
