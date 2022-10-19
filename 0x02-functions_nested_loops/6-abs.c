#include <unistd.h>

/**
 * _abs - absolute value
 * n - integer
 *
 * Return: 0, success
 */
int _abs(int n)
{
	/* n - integer */
	if (n >= '0')
	{
		putchar(n);
	}
	else if (n < 0)
	{
		int k, l;
		k = '-1';
		l = n * k;
		/**
		 * k - abs
		 * l - product
		 */

		putchar(l);
		
		return (0);
	}
}	

