#include <unistd.h>

/**
 * print_sign - function
 * n - integer
 */
int print_sign(int n)
{
	int n;
	/* n - integer */

	if (n > '0')
	{
		write("+");
		return (1);
	}
	else if (n == '0')
	{
		write("0");
		return (0);
	}
	else if
	{
		write("-");
		return (-1);
	}
}
