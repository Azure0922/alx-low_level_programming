#include <unistd.h>
#include <stdio.h>

/**
 * print_sign - function
 *
 * @n: integer
 * Return: 0
 */
int print_sign(int n)
{
	/* n -integer */
	if (n > '0')
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n = '0')
	{
		printf("0");
		return (0);
	}
	else if (n < '0')
	{
		write(1, "-", 1);
		return (-1);
	}
	return (0);
}
