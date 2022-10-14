#include <stdio.h>

/**
 * main - reverse
 *
 * Return: 0, success
 */
int main(void)
{
	char y = 'z';

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
