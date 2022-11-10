#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 *
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	if ((argc < 3) || (argc > 3))
	{
		printf("ERROR\n");
		printf("98");
		exit(1);
	}
	else if (argc == 3)
	{
		if ((isdigit(argv[1])) && (isdigit(argv[2])))
		{
			int i;
			/* i - int */

			for (i = 2; i <= argc; i++)
			{
				unsigned long long int j;
				/* j - int */

				j *= atoi(argv[1]);
			}
			printf("%llu", j);
		}
		else
		{
			printf("ERROR\n");
			printf("98");
			exit(1);
		}
	}
	return (0);
}
