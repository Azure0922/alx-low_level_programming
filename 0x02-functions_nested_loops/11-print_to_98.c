#include <unistd.h>

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
	
	for (i = n; i <= 98; i++)
	{
		write(1, &i, sizeof(i));
	}

	for (i = n; i >= 98; i--)
	{
		write(1, &i, sizeof(i));
	}
	return (0);
}