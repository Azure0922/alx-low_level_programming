#include <stdio.h>

/**
 * main - print alphabets
 *
 * Return: 0, success
 */
int main(void)
{
	{
		char y = 'a';

		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
	}
	{
		char y = 'A';

		for (y = 'A'; y <= 'Z'; y++)
		{
			putchar(y);
		}
	}
	putchar('\n');

	return (0);
}
