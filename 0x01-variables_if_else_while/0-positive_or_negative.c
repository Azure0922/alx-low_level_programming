#include <stdio.h>

/**
 * main - positive or negative
 *
 * Return: 0, success
 */
int main(void)
{
	int n = 0;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
