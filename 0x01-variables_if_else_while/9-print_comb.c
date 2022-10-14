#include <stdio.h>

/**
 * main - print comb
 *
 * Return: 0, success
 */
int main(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
