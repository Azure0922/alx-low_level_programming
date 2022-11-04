#include <ctype.h>
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
	if (argc = 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
			int i, j = 0;
			/**
			 * i - int
			 * j - sum
			 */

		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				j += atoi(argv[i]);
				printf("%d", j);
			}
			else
			{
				printf("ERROR");

				return (1);
			}
		}
	}
	return (0);
}
