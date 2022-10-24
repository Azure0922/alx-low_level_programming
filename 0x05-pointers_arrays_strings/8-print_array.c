#include <unistd.h>

/**
 * print_array - function
 *
 * @a: array
 * @n: int
 * Return: nil
 */
void print_array(int *a, int n)
{
	int i = 0;
	/* i - ount */

	for (i = 0; i <= n; i++)
	{
		write(1, *(str + i), sizeof(*(str + i)));
		write(1, "\n", 1);
	}
}
