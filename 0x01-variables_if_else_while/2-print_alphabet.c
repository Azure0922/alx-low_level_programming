#include <stdio.h>

/**
 * main - print lowercase
 *
 * Return: 0, success
 */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
