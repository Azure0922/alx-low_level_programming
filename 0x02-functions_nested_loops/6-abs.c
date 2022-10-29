#include <unistd.h>

/**
 * _abs - absolute value
 *
 * @n: integer
 * Return: 0, success
 */
int _abs(int n)
{
	/* n - integer */
	if (n < '0')
	{
		return (n * -1);
	}
	else if (n == '0' || n > '0')
	{
		return (n);
	}
	return (0);
}
