#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - func
 *
 * @n: const
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	/* a - va */

	int r;
	unsigned int i;
	/**
	 * i - count
	 * r - sum
	 */

	r = 0;

	va_start(a, n);
	
	for (i = 0; i < n; i++)
	{
		r += va_arg(a, int);
	}
	va_end(a);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (r);
	}
	return (0);
}
