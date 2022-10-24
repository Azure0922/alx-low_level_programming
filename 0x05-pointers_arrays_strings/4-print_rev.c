#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function
 *
 * @s: char
 * Return: 0
 */
void print_rev(char *s)
{
	int i, k;
	/**
	 * i - count
	 * k - temp
	 */

	k = strlen(s) - 1;

	for (i = k; i >= 0; i--)
	{
		printf("%c", i);
	}
	putchar('\n');
}
