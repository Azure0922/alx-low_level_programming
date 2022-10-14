#include <stdio.h>

/**
 * main - base sixteen
 *
 * Return: 0, success
 */
int main(void)
{
	{
		char x = '0';

		for (x = '0'; x <= '9'; x++)
		{
			putchar(x);
		}
	}
	{
		char x = 'a';

		for (x = 'a'; x <= 'f'; x++)
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
