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
		int i;
		/* i - mul */

		i =(argv[1] * argv[2]);

		printf("%d\n", i);
	}
	else if (argc > 3)
	{
		return (1);
	}
	return (0);
}
