#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - positive or negative
 *
 * Return: 0, success
 */
int main(void)
{
	int n;
	/**
	 * n - variable any number will be assigned to
	 */

	srand(time(0));
	/**
	 * srand - command
	 *
	 * time - source code time
	 */

		n = rand() - RAND_MAX / 2;
		/**
		 * rand - sc command
		 *
		 * RAND_MAX - another command
		 */

	scanf("%i", &n);

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
