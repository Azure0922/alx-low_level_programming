#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[1])
	{
		printf("ERROR\n");

		return (1);
	}
	else
	{
		int i, j = 0;
		/**
		 * i - mul
		 * j - argv 1
		 * k - argv 2
		 */

		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
