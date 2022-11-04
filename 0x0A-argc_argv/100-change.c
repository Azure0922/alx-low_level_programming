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
	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		int i, r;
		/**
		 * i - atoi
		 * r - rem
		 */

		i = atoi(argv[1]);
		r = i % 25;

		if (r == 0)
		{
			printf("%d\n", i / 25);
		}
		else
		{
			int j;
			/* j - rem 2 */

			j = r % 10;

			if (j == 0)
			{
				printf("%d\n", (i / 25) + (r / 10));
			}
			else
			{
				int k;
				/* k - rem 3 */

				k = j % 5;

				if (k == 0)
				{
					printf("%d\n", (i / 25) + (r / 10) + (j / 5));
				}
				else
				{
					int l;
					/* l - rem */

					l = k % 2;

					printf("%d\n", l);
				}
			}
		}
	}
	return (0);	
}
