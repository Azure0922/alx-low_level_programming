#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0, success
 */
int main(void)
{
	char d = '0';

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
