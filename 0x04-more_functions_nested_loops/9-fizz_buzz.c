#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	int c = 1;
	/* c - integer */

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((c % 5 == 0) && !(c % 3 == 0))
		{
			printf("Buzz ");
		}
		else if (c % 3 == 0 && !(c % 5 == 0))
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
	putchar('\n');
	return (0);
}
