#include <unistd.h>

/**
 * print_sign - function
 * n - integer
 */
int print_sign(int n)
{
	if (n > '0')
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == '0')
	{
		write(1, "0", 1);
		return (0);
	}
	else if
	{
		write(1, "-", 1);
		return (-1);
	}
}
