#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit
 *
 * Return: o, success
 */
int main(void)
{
	int n, l;
	/**
	 * n - variable
	 * l - last number
	 */

	srand(time(0));

		n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

	l = n % 10;
	/**
	 * l - last number
	 */
	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", +
				n, l);
	}
	return (0);
}
