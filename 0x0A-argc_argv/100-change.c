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
		int i, j, k, l, m, n, o, p, q, r;
		/**
		 * i - atoi
		 * j - rem
		 * k - div
		 * l - rem
		 * m - div
		 * n - rem
		 * o - div
		 * p - rem
		 * q - div
		 * r - rem
		 */


		i = atoi(argv[1]);
		j = i % 25;
		k = i / 25;
		l = j % 10;
		m = j / 10;
		n = l % 5;
		o = l / 5;
		p = n % 2;
		q = n / 2;
		r = m + o + q;

		if (j == 0)
		{
			printf("%d\n", k);
		}
		else
		{
			if (l == 0)
			{
				printf("%d\n", k + m);
			}
			else
			{
				if (n == 0)
				{
					printf("%d\n", k + m + o);
				}
				else
				{
					if (p == 0)
					{
						printf("%d\n", k + m + o + q);
					}
					else
					{
						printf("%d\n", k + r + 1);
					}
				}
			}
		}
	}
	return (0);	
}
