#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - function
 *
 * @n: integer
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;
	/**
	 * n - integer
	 * i - list
	 */
	
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		}
	}
	return (0);
}
